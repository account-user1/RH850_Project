%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 04-Oct-2017 12:53:30       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF105A = DataDict.FDD;
SF105A.Version = '3.0.X';
SF105A.LongName = 'Motor Current Regulator & Voltage Limiter';
SF105A.ShoName  = 'MotCurrRegVltgLimr';
SF105A.DesignASIL = 'D';
SF105A.Description = [...
  'The Current Regulator and Voltage Limiting function generates the foll' ...
  'owing: Modulation Index, Phase Advance, Final Motor Current Reference ' ...
  'Q-axis, Voltage Command D-axis and Voltage Command Q-axis.The Current ' ...
  'Regulator portion calculates error signals representing the difference' ...
  ' between Motor Reference Currents and Motor Measured Currents, sums in' ...
  ' the requested motor current command from the Cogging and Ripple Comma' ...
  'nd Generation function, and uses these corrected error signals modifie' ...
  'd by proportional and integral gains to generate a portion of the volt' ...
  'age command to the motor.  The Current Regulator also applies separate' ...
  ' gains to the measured motor currents to generate an additional portio' ...
  'n of the voltage command.  The Feedforward Voltages from the Motor Ref' ...
  'erence model are added to the other two portions to generate the total' ...
  ' requested motor voltage command.The Voltage Limiting portion of the f' ...
  'unction compares the total requested motor voltage command to the tota' ...
  'l voltage available at the inverter, and implements a limiting and ref' ...
  'erence command correcting function in order to prevent windup of Curre' ...
  'nt Regulator states and improve reference command tracking.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotCurrRegVltgLimrInit1 = DataDict.Runnable;
MotCurrRegVltgLimrInit1.Context = 'Rte';
MotCurrRegVltgLimrInit1.TimeStep = 0;
MotCurrRegVltgLimrInit1.Description = [...
  'Initialization periodic for CUrrent Regulator And Voltage Limiter.'];

MotCurrRegVltgLimrPer1 = DataDict.Runnable;
MotCurrRegVltgLimrPer1.Context = 'NonRte';
MotCurrRegVltgLimrPer1.TimeStep = 'MotorControlx2';
MotCurrRegVltgLimrPer1.Description = [...
  'Twice of Motor Control ISR Periodic for CUrrent Regulator And Voltage ' ...
  'Limiter.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlBrdgVltg = DataDict.IpSignal;
MotCtrlBrdgVltg.LongName = 'Motor Control Bridge Voltage';
MotCtrlBrdgVltg.Description = 'Motor Control Bridge Voltage';
MotCtrlBrdgVltg.DocUnits = 'Volt';
MotCtrlBrdgVltg.EngDT = dt.float32;
MotCtrlBrdgVltg.EngInit = 6;
MotCtrlBrdgVltg.EngMin = 6;
MotCtrlBrdgVltg.EngMax = 26.5;
MotCtrlBrdgVltg.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlBrdgVltg.ReadType = 'NonRte';


MotCtrlDualEcuMotCtrlMtgtnEna = DataDict.IpSignal;
MotCtrlDualEcuMotCtrlMtgtnEna.LongName = 'Motor Control Dual Ecu Mitigation Enable';
MotCtrlDualEcuMotCtrlMtgtnEna.Description = [...
  'Motor Control Dual Ecu Mitigation Enable'];
MotCtrlDualEcuMotCtrlMtgtnEna.DocUnits = 'Cnt';
MotCtrlDualEcuMotCtrlMtgtnEna.EngDT = dt.lgc;
MotCtrlDualEcuMotCtrlMtgtnEna.EngInit = 0;
MotCtrlDualEcuMotCtrlMtgtnEna.EngMin = 0;
MotCtrlDualEcuMotCtrlMtgtnEna.EngMax = 1;
MotCtrlDualEcuMotCtrlMtgtnEna.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlDualEcuMotCtrlMtgtnEna.ReadType = 'NonRte';


MotCtrlMotAgElecDly = DataDict.IpSignal;
MotCtrlMotAgElecDly.LongName = 'Motor Control Electrical Motor Angle Delay';
MotCtrlMotAgElecDly.Description = [...
  'Motor Control Electrical Motor Angle Delay'];
MotCtrlMotAgElecDly.DocUnits = 'MotRad';
MotCtrlMotAgElecDly.EngDT = dt.float32;
MotCtrlMotAgElecDly.EngInit = 0;
MotCtrlMotAgElecDly.EngMin = -1.5;
MotCtrlMotAgElecDly.EngMax = 1.5;
MotCtrlMotAgElecDly.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotAgElecDly.ReadType = 'NonRte';


MotCtrlMotAndThermProtnLoaMod = DataDict.IpSignal;
MotCtrlMotAndThermProtnLoaMod.LongName = 'Motor And Thermal Protection Loss of Assist Mode';
MotCtrlMotAndThermProtnLoaMod.Description = [...
  'Motor And Thermal Protection Loss of Assist Mode signal is being gener' ...
  'ated by Loss of Assist Manager function.'];
MotCtrlMotAndThermProtnLoaMod.DocUnits = 'Cnt';
MotCtrlMotAndThermProtnLoaMod.EngDT = dt.u08;
MotCtrlMotAndThermProtnLoaMod.EngInit = 0;
MotCtrlMotAndThermProtnLoaMod.EngMin = 0;
MotCtrlMotAndThermProtnLoaMod.EngMax = 255;
MotCtrlMotAndThermProtnLoaMod.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotAndThermProtnLoaMod.ReadType = 'Rte';


MotCtrlMotBackEmfVltg = DataDict.IpSignal;
MotCtrlMotBackEmfVltg.LongName = 'Motor Control Motor Back Emf Voltage';
MotCtrlMotBackEmfVltg.Description = [...
  'Motor Control Motor Back Emf Voltage'];
MotCtrlMotBackEmfVltg.DocUnits = 'Volt';
MotCtrlMotBackEmfVltg.EngDT = dt.float32;
MotCtrlMotBackEmfVltg.EngInit = 0;
MotCtrlMotBackEmfVltg.EngMin = -101.25;
MotCtrlMotBackEmfVltg.EngMax = 101.25;
MotCtrlMotBackEmfVltg.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotBackEmfVltg.ReadType = 'NonRte';


MotCtrlMotCurrDax = DataDict.IpSignal;
MotCtrlMotCurrDax.LongName = 'Motor Control Motor Current Dax';
MotCtrlMotCurrDax.Description = 'Motor Control Motor Current Dax';
MotCtrlMotCurrDax.DocUnits = 'Ampr';
MotCtrlMotCurrDax.EngDT = dt.float32;
MotCtrlMotCurrDax.EngInit = 0;
MotCtrlMotCurrDax.EngMin = -200;
MotCtrlMotCurrDax.EngMax = 200;
MotCtrlMotCurrDax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrDax.ReadType = 'NonRte';


MotCtrlMotCurrDaxCmd = DataDict.IpSignal;
MotCtrlMotCurrDaxCmd.LongName = 'Motor Control Motor Current Dax Command';
MotCtrlMotCurrDaxCmd.Description = [...
  'Motor Control Motor Current Dax Command'];
MotCtrlMotCurrDaxCmd.DocUnits = 'Ampr';
MotCtrlMotCurrDaxCmd.EngDT = dt.float32;
MotCtrlMotCurrDaxCmd.EngInit = 0;
MotCtrlMotCurrDaxCmd.EngMin = 0;
MotCtrlMotCurrDaxCmd.EngMax = 200;
MotCtrlMotCurrDaxCmd.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrDaxCmd.ReadType = 'NonRte';


MotCtrlMotCurrDaxMax = DataDict.IpSignal;
MotCtrlMotCurrDaxMax.LongName = 'Motor Control Maximum Motor Current Dax';
MotCtrlMotCurrDaxMax.Description = [...
  'Motor Control Maximum Motor Current Dax'];
MotCtrlMotCurrDaxMax.DocUnits = 'Ampr';
MotCtrlMotCurrDaxMax.EngDT = dt.float32;
MotCtrlMotCurrDaxMax.EngInit = 0;
MotCtrlMotCurrDaxMax.EngMin = 0;
MotCtrlMotCurrDaxMax.EngMax = 200;
MotCtrlMotCurrDaxMax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrDaxMax.ReadType = 'NonRte';


MotCtrlMotCurrQax = DataDict.IpSignal;
MotCtrlMotCurrQax.LongName = 'Motor Control Motor Current Qax';
MotCtrlMotCurrQax.Description = 'Motor Control Motor Current Qax';
MotCtrlMotCurrQax.DocUnits = 'Ampr';
MotCtrlMotCurrQax.EngDT = dt.float32;
MotCtrlMotCurrQax.EngInit = 0;
MotCtrlMotCurrQax.EngMin = -200;
MotCtrlMotCurrQax.EngMax = 200;
MotCtrlMotCurrQax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrQax.ReadType = 'NonRte';


MotCtrlMotCurrQaxCmd = DataDict.IpSignal;
MotCtrlMotCurrQaxCmd.LongName = 'Motor Control Motor Current Qax Command';
MotCtrlMotCurrQaxCmd.Description = [...
  'Motor Control Motor Current Qax Command'];
MotCtrlMotCurrQaxCmd.DocUnits = 'Ampr';
MotCtrlMotCurrQaxCmd.EngDT = dt.float32;
MotCtrlMotCurrQaxCmd.EngInit = 0;
MotCtrlMotCurrQaxCmd.EngMin = -200;
MotCtrlMotCurrQaxCmd.EngMax = 200;
MotCtrlMotCurrQaxCmd.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrQaxCmd.ReadType = 'NonRte';


MotCtrlMotCurrQaxCoggCmd = DataDict.IpSignal;
MotCtrlMotCurrQaxCoggCmd.LongName = 'Motor Control Motor Current Cogging Command Qax';
MotCtrlMotCurrQaxCoggCmd.Description = [...
  'Motor Control Motor Current Cogging Command Qax'];
MotCtrlMotCurrQaxCoggCmd.DocUnits = 'Ampr';
MotCtrlMotCurrQaxCoggCmd.EngDT = dt.float32;
MotCtrlMotCurrQaxCoggCmd.EngInit = 0;
MotCtrlMotCurrQaxCoggCmd.EngMin = -6;
MotCtrlMotCurrQaxCoggCmd.EngMax = 6;
MotCtrlMotCurrQaxCoggCmd.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrQaxCoggCmd.ReadType = 'NonRte';


MotCtrlMotCurrQaxRplCmd = DataDict.IpSignal;
MotCtrlMotCurrQaxRplCmd.LongName = 'Motor Control Motor Current Ripple Command Qax';
MotCtrlMotCurrQaxRplCmd.Description = [...
  'Motor Control Motor Current Ripple Command Qax'];
MotCtrlMotCurrQaxRplCmd.DocUnits = 'Ampr';
MotCtrlMotCurrQaxRplCmd.EngDT = dt.float32;
MotCtrlMotCurrQaxRplCmd.EngInit = 0;
MotCtrlMotCurrQaxRplCmd.EngMin = -29;
MotCtrlMotCurrQaxRplCmd.EngMax = 29;
MotCtrlMotCurrQaxRplCmd.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrQaxRplCmd.ReadType = 'NonRte';


MotCtrlMotDampgDax = DataDict.IpSignal;
MotCtrlMotDampgDax.LongName = 'Motor Control Motor Damping Dax';
MotCtrlMotDampgDax.Description = 'Motor Control Motor Damping Dax';
MotCtrlMotDampgDax.DocUnits = 'Ohm';
MotCtrlMotDampgDax.EngDT = dt.float32;
MotCtrlMotDampgDax.EngInit = 0;
MotCtrlMotDampgDax.EngMin = -0.11;
MotCtrlMotDampgDax.EngMax = 5.5;
MotCtrlMotDampgDax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotDampgDax.ReadType = 'NonRte';


MotCtrlMotDampgQax = DataDict.IpSignal;
MotCtrlMotDampgQax.LongName = 'Motor Control Motor Damping Qax';
MotCtrlMotDampgQax.Description = 'Motor Control Motor Damping Qax';
MotCtrlMotDampgQax.DocUnits = 'Ohm';
MotCtrlMotDampgQax.EngDT = dt.float32;
MotCtrlMotDampgQax.EngInit = 0;
MotCtrlMotDampgQax.EngMin = -0.11;
MotCtrlMotDampgQax.EngMax = 5.5;
MotCtrlMotDampgQax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotDampgQax.ReadType = 'NonRte';


MotCtrlMotInduDaxEstimdIvs = DataDict.IpSignal;
MotCtrlMotInduDaxEstimdIvs.LongName = 'Motor Control Motor Inductance D-Axis Esimated Inverse';
MotCtrlMotInduDaxEstimdIvs.Description = [...
  'Motor Control Motor Inductance D-Axis Esimated Inverse'];
MotCtrlMotInduDaxEstimdIvs.DocUnits = 'IvsHenry';
MotCtrlMotInduDaxEstimdIvs.EngDT = dt.float32;
MotCtrlMotInduDaxEstimdIvs.EngInit = 8411;
MotCtrlMotInduDaxEstimdIvs.EngMin = 2440;
MotCtrlMotInduDaxEstimdIvs.EngMax = 33334;
MotCtrlMotInduDaxEstimdIvs.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotInduDaxEstimdIvs.ReadType = 'Rte';


MotCtrlMotInduQaxEstimdIvs = DataDict.IpSignal;
MotCtrlMotInduQaxEstimdIvs.LongName = 'Motor Control Motor Inductance Q-Axis Esimated Inverse';
MotCtrlMotInduQaxEstimdIvs.Description = [...
  'Motor Control Motor Inductance Q-Axis Esimated Inverse'];
MotCtrlMotInduQaxEstimdIvs.DocUnits = 'IvsHenry';
MotCtrlMotInduQaxEstimdIvs.EngDT = dt.float32;
MotCtrlMotInduQaxEstimdIvs.EngInit = 8411;
MotCtrlMotInduQaxEstimdIvs.EngMin = 2440;
MotCtrlMotInduQaxEstimdIvs.EngMax = 33334;
MotCtrlMotInduQaxEstimdIvs.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotInduQaxEstimdIvs.ReadType = 'Rte';


MotCtrlMotIntglGainDax = DataDict.IpSignal;
MotCtrlMotIntglGainDax.LongName = 'Motor Control Motor Integral Gain Dax';
MotCtrlMotIntglGainDax.Description = [...
  'Motor Control Motor Integral Gain Dax'];
MotCtrlMotIntglGainDax.DocUnits = 'Ohm';
MotCtrlMotIntglGainDax.EngDT = dt.float32;
MotCtrlMotIntglGainDax.EngInit = 0;
MotCtrlMotIntglGainDax.EngMin = 0;
MotCtrlMotIntglGainDax.EngMax = 0.6;
MotCtrlMotIntglGainDax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotIntglGainDax.ReadType = 'NonRte';


MotCtrlMotIntglGainQax = DataDict.IpSignal;
MotCtrlMotIntglGainQax.LongName = 'Motor Control Motor Integral Gain Qax';
MotCtrlMotIntglGainQax.Description = [...
  'Motor Control Motor Integral Gain Qax'];
MotCtrlMotIntglGainQax.DocUnits = 'Ohm';
MotCtrlMotIntglGainQax.EngDT = dt.float32;
MotCtrlMotIntglGainQax.EngInit = 0;
MotCtrlMotIntglGainQax.EngMin = 0;
MotCtrlMotIntglGainQax.EngMax = 0.6;
MotCtrlMotIntglGainQax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotIntglGainQax.ReadType = 'NonRte';


MotCtrlMotPropGainDax = DataDict.IpSignal;
MotCtrlMotPropGainDax.LongName = 'Motor Control Motor Proportional Gain Dax';
MotCtrlMotPropGainDax.Description = [...
  'Motor Control Motor Proportional Gain Dax'];
MotCtrlMotPropGainDax.DocUnits = 'Ohm';
MotCtrlMotPropGainDax.EngDT = dt.float32;
MotCtrlMotPropGainDax.EngInit = 0;
MotCtrlMotPropGainDax.EngMin = 0;
MotCtrlMotPropGainDax.EngMax = 2.25;
MotCtrlMotPropGainDax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotPropGainDax.ReadType = 'NonRte';


MotCtrlMotPropGainQax = DataDict.IpSignal;
MotCtrlMotPropGainQax.LongName = 'Motor Control Motor Proportional Gain Qax';
MotCtrlMotPropGainQax.Description = [...
  'Motor Control Motor Proportional Gain Qax'];
MotCtrlMotPropGainQax.DocUnits = 'Ohm';
MotCtrlMotPropGainQax.EngDT = dt.float32;
MotCtrlMotPropGainQax.EngInit = 0;
MotCtrlMotPropGainQax.EngMin = 0;
MotCtrlMotPropGainQax.EngMax = 2.25;
MotCtrlMotPropGainQax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotPropGainQax.ReadType = 'NonRte';


MotCtrlMotREstimd = DataDict.IpSignal;
MotCtrlMotREstimd.LongName = 'Motor Control Motor Resistance Estimated';
MotCtrlMotREstimd.Description = [...
  'Motor Control Motor Resistance Estimated'];
MotCtrlMotREstimd.DocUnits = 'Ohm';
MotCtrlMotREstimd.EngDT = dt.float32;
MotCtrlMotREstimd.EngInit = 0.005;
MotCtrlMotREstimd.EngMin = 0.005;
MotCtrlMotREstimd.EngMax = 0.12565;
MotCtrlMotREstimd.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotREstimd.ReadType = 'Rte';


MotCtrlMotReacncDax = DataDict.IpSignal;
MotCtrlMotReacncDax.LongName = 'Motor Control Motor Reactance Dax';
MotCtrlMotReacncDax.Description = 'Motor Control Motor Reactance Dax';
MotCtrlMotReacncDax.DocUnits = 'Ohm';
MotCtrlMotReacncDax.EngDT = dt.float32;
MotCtrlMotReacncDax.EngInit = 0;
MotCtrlMotReacncDax.EngMin = -0.5;
MotCtrlMotReacncDax.EngMax = 0.5;
MotCtrlMotReacncDax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotReacncDax.ReadType = 'NonRte';


MotCtrlMotReacncQax = DataDict.IpSignal;
MotCtrlMotReacncQax.LongName = 'Motor Control Motor Reactance Qax';
MotCtrlMotReacncQax.Description = 'Motor Control Motor Reactance Qax';
MotCtrlMotReacncQax.DocUnits = 'Ohm';
MotCtrlMotReacncQax.EngDT = dt.float32;
MotCtrlMotReacncQax.EngInit = 0;
MotCtrlMotReacncQax.EngMin = -0.5;
MotCtrlMotReacncQax.EngMax = 0.5;
MotCtrlMotReacncQax.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotReacncQax.ReadType = 'NonRte';


MotCtrlMotVltgDaxFf = DataDict.IpSignal;
MotCtrlMotVltgDaxFf.LongName = 'Motor Control Feedforward Motor Voltage Dax';
MotCtrlMotVltgDaxFf.Description = [...
  'Motor Control Feedforward Motor Voltage Dax'];
MotCtrlMotVltgDaxFf.DocUnits = 'Volt';
MotCtrlMotVltgDaxFf.EngDT = dt.float32;
MotCtrlMotVltgDaxFf.EngInit = 0;
MotCtrlMotVltgDaxFf.EngMin = -26.5;
MotCtrlMotVltgDaxFf.EngMax = 26.5;
MotCtrlMotVltgDaxFf.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotVltgDaxFf.ReadType = 'NonRte';


MotCtrlMotVltgQaxFf = DataDict.IpSignal;
MotCtrlMotVltgQaxFf.LongName = 'Motor Control Feedforward Motor Voltage Qax';
MotCtrlMotVltgQaxFf.Description = [...
  'Motor Control Feedforward Motor Voltage Qax'];
MotCtrlMotVltgQaxFf.DocUnits = 'Volt';
MotCtrlMotVltgQaxFf.EngDT = dt.float32;
MotCtrlMotVltgQaxFf.EngInit = 0;
MotCtrlMotVltgQaxFf.EngMin = -26.5;
MotCtrlMotVltgQaxFf.EngMax = 26.5;
MotCtrlMotVltgQaxFf.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotVltgQaxFf.ReadType = 'NonRte';


MotCtrlSysSt = DataDict.IpSignal;
MotCtrlSysSt.LongName = 'Motor Control System State';
MotCtrlSysSt.Description = 'Motor Control System State';
MotCtrlSysSt.DocUnits = 'Cnt';
MotCtrlSysSt.EngDT = enum.SysSt1;
MotCtrlSysSt.EngInit = SysSt1.SYSST_OFF;
MotCtrlSysSt.EngMin = SysSt1.SYSST_DI;
MotCtrlSysSt.EngMax = SysSt1.SYSST_WRMININ;
MotCtrlSysSt.ReadIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlSysSt.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotCtrlMotCurrQaxCmdFinal = DataDict.OpSignal;
MotCtrlMotCurrQaxCmdFinal.LongName = 'Motor Control Motor Current Final Reference Q Axis';
MotCtrlMotCurrQaxCmdFinal.Description = 'Final Q Axis Motor Current Command';
MotCtrlMotCurrQaxCmdFinal.DocUnits = 'Ampr';
MotCtrlMotCurrQaxCmdFinal.SwcShoName = 'MotCurrRegVltgLimr';
MotCtrlMotCurrQaxCmdFinal.EngDT = dt.float32;
MotCtrlMotCurrQaxCmdFinal.EngInit = 0;
MotCtrlMotCurrQaxCmdFinal.EngMin = -200;
MotCtrlMotCurrQaxCmdFinal.EngMax = 200;
MotCtrlMotCurrQaxCmdFinal.TestTolerance = 0.0078125;
MotCtrlMotCurrQaxCmdFinal.WrittenIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotCurrQaxCmdFinal.WriteType = 'NonRte';


MotCtrlMotModlnIdx = DataDict.OpSignal;
MotCtrlMotModlnIdx.LongName = 'Motor Control Motor Modulation Index';
MotCtrlMotModlnIdx.Description = 'Motor Modulation Index';
MotCtrlMotModlnIdx.DocUnits = 'Uls';
MotCtrlMotModlnIdx.SwcShoName = 'MotCurrRegVltgLimr';
MotCtrlMotModlnIdx.EngDT = dt.float32;
MotCtrlMotModlnIdx.EngInit = 0;
MotCtrlMotModlnIdx.EngMin = 0;
MotCtrlMotModlnIdx.EngMax = 1;
MotCtrlMotModlnIdx.TestTolerance = 3.051757813e-05;
MotCtrlMotModlnIdx.WrittenIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotModlnIdx.WriteType = 'NonRte';


MotCtrlMotPhaAdv = DataDict.OpSignal;
MotCtrlMotPhaAdv.LongName = 'Motor Control Motor Phase Advance';
MotCtrlMotPhaAdv.Description = 'Motor Phase Advance';
MotCtrlMotPhaAdv.DocUnits = 'MotRev';
MotCtrlMotPhaAdv.SwcShoName = 'MotCurrRegVltgLimr';
MotCtrlMotPhaAdv.EngDT = dt.u0p16;
MotCtrlMotPhaAdv.EngInit = 0;
MotCtrlMotPhaAdv.EngMin = 0;
MotCtrlMotPhaAdv.EngMax = 0.9999847412;
MotCtrlMotPhaAdv.TestTolerance = 0.001022654;
MotCtrlMotPhaAdv.WrittenIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotPhaAdv.WriteType = 'NonRte';


MotCtrlMotVltgDax = DataDict.OpSignal;
MotCtrlMotVltgDax.LongName = 'Motor Control Motor Voltage Dax';
MotCtrlMotVltgDax.Description = 'D Axis Motor Voltage';
MotCtrlMotVltgDax.DocUnits = 'Volt';
MotCtrlMotVltgDax.SwcShoName = 'MotCurrRegVltgLimr';
MotCtrlMotVltgDax.EngDT = dt.float32;
MotCtrlMotVltgDax.EngInit = 0;
MotCtrlMotVltgDax.EngMin = -26.5;
MotCtrlMotVltgDax.EngMax = 26.5;
MotCtrlMotVltgDax.TestTolerance = 0.000878;
MotCtrlMotVltgDax.WrittenIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotVltgDax.WriteType = 'NonRte';


MotCtrlMotVltgQax = DataDict.OpSignal;
MotCtrlMotVltgQax.LongName = 'Motor Control Motor Voltage Qax';
MotCtrlMotVltgQax.Description = 'Q Axis Motor Voltage';
MotCtrlMotVltgQax.DocUnits = 'Volt';
MotCtrlMotVltgQax.SwcShoName = 'MotCurrRegVltgLimr';
MotCtrlMotVltgQax.EngDT = dt.float32;
MotCtrlMotVltgQax.EngInit = 0;
MotCtrlMotVltgQax.EngMin = -26.5;
MotCtrlMotVltgQax.EngMax = 26.5;
MotCtrlMotVltgQax.TestTolerance = 0.000878;
MotCtrlMotVltgQax.WrittenIn = {'MotCurrRegVltgLimrPer1'};
MotCtrlMotVltgQax.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotCurrRegVltgLimrCurrLoaScarSlewRate = DataDict.Calibration;
MotCurrRegVltgLimrCurrLoaScarSlewRate.LongName = 'Current Loss of Assist Scale Factor Slew Rate';
MotCurrRegVltgLimrCurrLoaScarSlewRate.Description = [...
  'Slew rate for ramping down feedback voltage in CLOA mode'];
MotCurrRegVltgLimrCurrLoaScarSlewRate.DocUnits = 'UlsPerSec';
MotCurrRegVltgLimrCurrLoaScarSlewRate.EngDT = dt.float32;
MotCurrRegVltgLimrCurrLoaScarSlewRate.EngVal = 100;
MotCurrRegVltgLimrCurrLoaScarSlewRate.EngMin = 10;
MotCurrRegVltgLimrCurrLoaScarSlewRate.EngMax = 8000;
MotCurrRegVltgLimrCurrLoaScarSlewRate.Cardinality = 'Cmn';
MotCurrRegVltgLimrCurrLoaScarSlewRate.CustomerVisible = false;
MotCurrRegVltgLimrCurrLoaScarSlewRate.Online = false;
MotCurrRegVltgLimrCurrLoaScarSlewRate.Impact = 'H';
MotCurrRegVltgLimrCurrLoaScarSlewRate.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrCurrLoaScarSlewRate.GraphLink = {''};
MotCurrRegVltgLimrCurrLoaScarSlewRate.Monotony = 'None';
MotCurrRegVltgLimrCurrLoaScarSlewRate.MaxGrad = 0;
MotCurrRegVltgLimrCurrLoaScarSlewRate.PortName = 'MotCurrRegVltgLimrCurrLoaScarSlewRate';


MotCurrRegVltgLimrDaxAntiWdupCoeff = DataDict.Calibration;
MotCurrRegVltgLimrDaxAntiWdupCoeff.LongName = 'Motor Current D Axis Anti Windup Scaling Coeff';
MotCurrRegVltgLimrDaxAntiWdupCoeff.Description = [...
  'Coeffcient of a 2nd order polnomial equation that scales motor current' ...
  ' in the D axis.'];
MotCurrRegVltgLimrDaxAntiWdupCoeff.DocUnits = 'Uls';
MotCurrRegVltgLimrDaxAntiWdupCoeff.EngDT = dt.float32;
MotCurrRegVltgLimrDaxAntiWdupCoeff.EngVal = 0;
MotCurrRegVltgLimrDaxAntiWdupCoeff.EngMin = -1;
MotCurrRegVltgLimrDaxAntiWdupCoeff.EngMax = 1;
MotCurrRegVltgLimrDaxAntiWdupCoeff.Cardinality = 'Cmn';
MotCurrRegVltgLimrDaxAntiWdupCoeff.CustomerVisible = false;
MotCurrRegVltgLimrDaxAntiWdupCoeff.Online = false;
MotCurrRegVltgLimrDaxAntiWdupCoeff.Impact = 'H';
MotCurrRegVltgLimrDaxAntiWdupCoeff.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrDaxAntiWdupCoeff.GraphLink = {''};
MotCurrRegVltgLimrDaxAntiWdupCoeff.Monotony = 'None';
MotCurrRegVltgLimrDaxAntiWdupCoeff.MaxGrad = 0;
MotCurrRegVltgLimrDaxAntiWdupCoeff.PortName = 'MotCurrRegVltgLimrDaxAntiWdupCoeff';


MotCurrRegVltgLimrDualEcuLoaScarSlewRate = DataDict.Calibration;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.LongName = 'Dual Ecu Loss of Assist Scaler Slew Rate';
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.Description = [...
  'Slew rate for ramping down feedback voltage in Dual Ecu LOA mode'];
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.DocUnits = 'UlsPerSec';
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.EngDT = dt.float32;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.EngVal = 100;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.EngMin = 10;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.EngMax = 8000;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.Cardinality = 'Cmn';
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.CustomerVisible = false;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.Online = false;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.Impact = 'H';
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.GraphLink = {''};
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.Monotony = 'None';
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.MaxGrad = 0;
MotCurrRegVltgLimrDualEcuLoaScarSlewRate.PortName = 'MotCurrRegVltgLimrDualEcuLoaScarSlewRate';


MotCurrRegVltgLimrFETLoaScarSlewRate = DataDict.Calibration;
MotCurrRegVltgLimrFETLoaScarSlewRate.LongName = 'FET Loss of Assist Scaler Slew Rate';
MotCurrRegVltgLimrFETLoaScarSlewRate.Description = [...
  'Slew rate for ramping down feedback voltage in FETLOA mode'];
MotCurrRegVltgLimrFETLoaScarSlewRate.DocUnits = 'UlsPerSec';
MotCurrRegVltgLimrFETLoaScarSlewRate.EngDT = dt.float32;
MotCurrRegVltgLimrFETLoaScarSlewRate.EngVal = 100;
MotCurrRegVltgLimrFETLoaScarSlewRate.EngMin = 10;
MotCurrRegVltgLimrFETLoaScarSlewRate.EngMax = 8000;
MotCurrRegVltgLimrFETLoaScarSlewRate.Cardinality = 'Cmn';
MotCurrRegVltgLimrFETLoaScarSlewRate.CustomerVisible = false;
MotCurrRegVltgLimrFETLoaScarSlewRate.Online = false;
MotCurrRegVltgLimrFETLoaScarSlewRate.Impact = 'H';
MotCurrRegVltgLimrFETLoaScarSlewRate.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrFETLoaScarSlewRate.GraphLink = {''};
MotCurrRegVltgLimrFETLoaScarSlewRate.Monotony = 'None';
MotCurrRegVltgLimrFETLoaScarSlewRate.MaxGrad = 0;
MotCurrRegVltgLimrFETLoaScarSlewRate.PortName = 'MotCurrRegVltgLimrFETLoaScarSlewRate';


MotCurrRegVltgLimrIvtrLoaScarSlewRate = DataDict.Calibration;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.LongName = 'Inverter Loss of Assist Scaler Slew Rate';
MotCurrRegVltgLimrIvtrLoaScarSlewRate.Description = [...
  'Slew rate for ramping down feedback voltage in ILOA mode'];
MotCurrRegVltgLimrIvtrLoaScarSlewRate.DocUnits = 'UlsPerSec';
MotCurrRegVltgLimrIvtrLoaScarSlewRate.EngDT = dt.float32;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.EngVal = 100;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.EngMin = 10;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.EngMax = 8000;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.Cardinality = 'Cmn';
MotCurrRegVltgLimrIvtrLoaScarSlewRate.CustomerVisible = false;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.Online = false;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.Impact = 'H';
MotCurrRegVltgLimrIvtrLoaScarSlewRate.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrIvtrLoaScarSlewRate.GraphLink = {''};
MotCurrRegVltgLimrIvtrLoaScarSlewRate.Monotony = 'None';
MotCurrRegVltgLimrIvtrLoaScarSlewRate.MaxGrad = 0;
MotCurrRegVltgLimrIvtrLoaScarSlewRate.PortName = 'MotCurrRegVltgLimrIvtrLoaScarSlewRate';


MotCurrRegVltgLimrMotCurrPredEna = DataDict.Calibration;
MotCurrRegVltgLimrMotCurrPredEna.LongName = 'Motor Current Prediction Enable';
MotCurrRegVltgLimrMotCurrPredEna.Description = [...
  'Calibration to enable or disable motor current prediction'];
MotCurrRegVltgLimrMotCurrPredEna.DocUnits = 'Cnt';
MotCurrRegVltgLimrMotCurrPredEna.EngDT = dt.lgc;
MotCurrRegVltgLimrMotCurrPredEna.EngVal = 0;
MotCurrRegVltgLimrMotCurrPredEna.EngMin = 0;
MotCurrRegVltgLimrMotCurrPredEna.EngMax = 1;
MotCurrRegVltgLimrMotCurrPredEna.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotCurrPredEna.CustomerVisible = false;
MotCurrRegVltgLimrMotCurrPredEna.Online = false;
MotCurrRegVltgLimrMotCurrPredEna.Impact = 'H';
MotCurrRegVltgLimrMotCurrPredEna.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotCurrPredEna.GraphLink = {''};
MotCurrRegVltgLimrMotCurrPredEna.Monotony = 'None';
MotCurrRegVltgLimrMotCurrPredEna.MaxGrad = Inf;
MotCurrRegVltgLimrMotCurrPredEna.PortName = 'MotCurrRegVltgLimrMotCurrPredEna';


MotCurrRegVltgLimrMotCurrPredTi = DataDict.Calibration;
MotCurrRegVltgLimrMotCurrPredTi.LongName = 'Motor Current Prediction Time';
MotCurrRegVltgLimrMotCurrPredTi.Description = 'Motor Current Prediction Time';
MotCurrRegVltgLimrMotCurrPredTi.DocUnits = 'NanoSec';
MotCurrRegVltgLimrMotCurrPredTi.EngDT = dt.float32;
MotCurrRegVltgLimrMotCurrPredTi.EngVal = 0;
MotCurrRegVltgLimrMotCurrPredTi.EngMin = 0;
MotCurrRegVltgLimrMotCurrPredTi.EngMax = 125000;
MotCurrRegVltgLimrMotCurrPredTi.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotCurrPredTi.CustomerVisible = false;
MotCurrRegVltgLimrMotCurrPredTi.Online = false;
MotCurrRegVltgLimrMotCurrPredTi.Impact = 'H';
MotCurrRegVltgLimrMotCurrPredTi.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotCurrPredTi.GraphLink = {''};
MotCurrRegVltgLimrMotCurrPredTi.Monotony = 'None';
MotCurrRegVltgLimrMotCurrPredTi.MaxGrad = Inf;
MotCurrRegVltgLimrMotCurrPredTi.PortName = 'MotCurrRegVltgLimrMotCurrPredTi';


MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna = DataDict.Calibration;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.LongName = 'Motor Current Qax Reference Modification Ripple Enable';
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.Description = [...
  'Calibration to enable reference modification duiring voltage saturatio' ...
  'n.'];
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.DocUnits = 'Cnt';
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.EngDT = dt.lgc;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.EngVal = 0;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.EngMin = 0;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.EngMax = 1;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.CustomerVisible = false;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.Online = false;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.Impact = 'H';
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.GraphLink = {''};
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.Monotony = 'None';
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.MaxGrad = Inf;
MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna.PortName = 'MotCurrRegVltgLimrMotCurrQaxRefMdfnRplEna';


MotCurrRegVltgLimrMotVltgBrdgFilEna = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgBrdgFilEna.LongName = 'Motor Voltage Bridge Filter Enable';
MotCurrRegVltgLimrMotVltgBrdgFilEna.Description = [...
  'Calibration to enable DC link voltage filter'];
MotCurrRegVltgLimrMotVltgBrdgFilEna.DocUnits = 'Cnt';
MotCurrRegVltgLimrMotVltgBrdgFilEna.EngDT = dt.lgc;
MotCurrRegVltgLimrMotVltgBrdgFilEna.EngVal = 1;
MotCurrRegVltgLimrMotVltgBrdgFilEna.EngMin = 0;
MotCurrRegVltgLimrMotVltgBrdgFilEna.EngMax = 1;
MotCurrRegVltgLimrMotVltgBrdgFilEna.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgBrdgFilEna.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgBrdgFilEna.Online = false;
MotCurrRegVltgLimrMotVltgBrdgFilEna.Impact = 'H';
MotCurrRegVltgLimrMotVltgBrdgFilEna.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgBrdgFilEna.GraphLink = {''};
MotCurrRegVltgLimrMotVltgBrdgFilEna.Monotony = 'None';
MotCurrRegVltgLimrMotVltgBrdgFilEna.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgBrdgFilEna.PortName = 'MotCurrRegVltgLimrMotVltgBrdgFilEna';


MotCurrRegVltgLimrMotVltgBrdgLpFilFrq = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.LongName = 'Motor Voltage Bridge Lowpass Filter Frequency';
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.Description = [...
  'Cutoff Frequency for DC link voltage filter.'];
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.DocUnits = 'Hz';
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.EngDT = dt.float32;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.EngVal = 200;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.EngMin = 1;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.EngMax = 1000;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.Online = false;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.Impact = 'H';
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.GraphLink = {''};
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.Monotony = 'None';
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgBrdgLpFilFrq.PortName = 'MotCurrRegVltgLimrMotVltgBrdgLpFilFrq';


MotCurrRegVltgLimrMotVltgDaxIntglHiLim = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.LongName = 'Motor Voltage Dax Integral High Limit';
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.Description = [...
  'Upper voltage limit for Dax integrator.'];
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.DocUnits = 'Volt';
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.EngDT = dt.float32;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.EngVal = 9;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.EngMin = 0;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.EngMax = 31;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.Online = false;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.Impact = 'H';
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.GraphLink = {''};
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.Monotony = 'None';
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgDaxIntglHiLim.PortName = 'MotCurrRegVltgLimrMotVltgDaxIntglHiLim';


MotCurrRegVltgLimrMotVltgDaxIntglLoLim = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.LongName = 'Motor Voltage Dax Integral Low Limit';
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.Description = [...
  'Low voltage limit for Dax integrator.'];
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.DocUnits = 'Volt';
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.EngDT = dt.float32;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.EngVal = -4.5;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.EngMin = -31;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.EngMax = 0;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.Online = false;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.Impact = 'H';
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.GraphLink = {''};
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.Monotony = 'None';
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgDaxIntglLoLim.PortName = 'MotCurrRegVltgLimrMotVltgDaxIntglLoLim';


MotCurrRegVltgLimrMotVltgQaxFfFilEna = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.LongName = 'Motor Voltage Qax Feedforward Filter Enable';
MotCurrRegVltgLimrMotVltgQaxFfFilEna.Description = [...
  'Calibration to enable Qax feedforward voltage filter.'];
MotCurrRegVltgLimrMotVltgQaxFfFilEna.DocUnits = 'Cnt';
MotCurrRegVltgLimrMotVltgQaxFfFilEna.EngDT = dt.lgc;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.EngVal = 1;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.EngMin = 0;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.EngMax = 1;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgQaxFfFilEna.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.Online = false;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.Impact = 'H';
MotCurrRegVltgLimrMotVltgQaxFfFilEna.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgQaxFfFilEna.GraphLink = {''};
MotCurrRegVltgLimrMotVltgQaxFfFilEna.Monotony = 'None';
MotCurrRegVltgLimrMotVltgQaxFfFilEna.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgQaxFfFilEna.PortName = 'MotCurrRegVltgLimrMotVltgQaxFfFilEna';


MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.LongName = 'Motor Voltage Qax FeedForward Lowpass Filter Frequency';
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.Description = [...
  'Cutoff frequency for Qax feedforward voltage filter.'];
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.DocUnits = 'Hz';
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.EngDT = dt.float32;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.EngVal = 500;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.EngMin = 1;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.EngMax = 1000;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.Online = false;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.Impact = 'H';
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.GraphLink = {''};
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.Monotony = 'None';
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq.PortName = 'MotCurrRegVltgLimrMotVltgQaxFfLpFilFrq';


MotCurrRegVltgLimrMotVltgQaxIntglHiLim = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.LongName = 'Motor Voltage Qax Integral High Limit';
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.Description = [...
  'Upper voltage limit for Qax integrator.'];
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.DocUnits = 'Volt';
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.EngDT = dt.float32;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.EngVal = 14.5;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.EngMin = 0;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.EngMax = 31;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.Online = false;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.Impact = 'H';
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.GraphLink = {''};
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.Monotony = 'None';
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgQaxIntglHiLim.PortName = 'MotCurrRegVltgLimrMotVltgQaxIntglHiLim';


MotCurrRegVltgLimrMotVltgQaxIntglLoLim = DataDict.Calibration;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.LongName = 'Motor Voltage Qax Integral Low Limit';
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.Description = [...
  'Low voltage limit for Qax integrator.'];
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.DocUnits = 'Volt';
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.EngDT = dt.float32;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.EngVal = -14.5;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.EngMin = -31;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.EngMax = 0;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.Cardinality = 'Cmn';
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.CustomerVisible = false;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.Online = false;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.Impact = 'H';
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.GraphLink = {''};
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.Monotony = 'None';
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.MaxGrad = Inf;
MotCurrRegVltgLimrMotVltgQaxIntglLoLim.PortName = 'MotCurrRegVltgLimrMotVltgQaxIntglLoLim';


MotCurrRegVltgLimrQaxAntiWdupCoeff = DataDict.Calibration;
MotCurrRegVltgLimrQaxAntiWdupCoeff.LongName = 'Motor Current Q Axis Anti Windup Scaling Coeff';
MotCurrRegVltgLimrQaxAntiWdupCoeff.Description = [...
  'Coeffcient of a 2nd order polnomial equation that scales motor current' ...
  ' in the D axis.'];
MotCurrRegVltgLimrQaxAntiWdupCoeff.DocUnits = 'Uls';
MotCurrRegVltgLimrQaxAntiWdupCoeff.EngDT = dt.float32;
MotCurrRegVltgLimrQaxAntiWdupCoeff.EngVal = 0;
MotCurrRegVltgLimrQaxAntiWdupCoeff.EngMin = -1;
MotCurrRegVltgLimrQaxAntiWdupCoeff.EngMax = 1;
MotCurrRegVltgLimrQaxAntiWdupCoeff.Cardinality = 'Cmn';
MotCurrRegVltgLimrQaxAntiWdupCoeff.CustomerVisible = false;
MotCurrRegVltgLimrQaxAntiWdupCoeff.Online = false;
MotCurrRegVltgLimrQaxAntiWdupCoeff.Impact = 'H';
MotCurrRegVltgLimrQaxAntiWdupCoeff.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrQaxAntiWdupCoeff.GraphLink = {''};
MotCurrRegVltgLimrQaxAntiWdupCoeff.Monotony = 'None';
MotCurrRegVltgLimrQaxAntiWdupCoeff.MaxGrad = 0;
MotCurrRegVltgLimrQaxAntiWdupCoeff.PortName = 'MotCurrRegVltgLimrQaxAntiWdupCoeff';


MotCurrRegVltgLimrQaxAntiWdupScagDi = DataDict.Calibration;
MotCurrRegVltgLimrQaxAntiWdupScagDi.LongName = 'Motor Current Q Axis Command Scaling Disable';
MotCurrRegVltgLimrQaxAntiWdupScagDi.Description = [...
  'Disable reference modification for q-axis current'];
MotCurrRegVltgLimrQaxAntiWdupScagDi.DocUnits = 'Cnt';
MotCurrRegVltgLimrQaxAntiWdupScagDi.EngDT = dt.lgc;
MotCurrRegVltgLimrQaxAntiWdupScagDi.EngVal = 0;
MotCurrRegVltgLimrQaxAntiWdupScagDi.EngMin = 0;
MotCurrRegVltgLimrQaxAntiWdupScagDi.EngMax = 1;
MotCurrRegVltgLimrQaxAntiWdupScagDi.Cardinality = 'Cmn';
MotCurrRegVltgLimrQaxAntiWdupScagDi.CustomerVisible = false;
MotCurrRegVltgLimrQaxAntiWdupScagDi.Online = false;
MotCurrRegVltgLimrQaxAntiWdupScagDi.Impact = 'H';
MotCurrRegVltgLimrQaxAntiWdupScagDi.TuningOwner = 'TqCtrl';
MotCurrRegVltgLimrQaxAntiWdupScagDi.GraphLink = {''};
MotCurrRegVltgLimrQaxAntiWdupScagDi.Monotony = 'None';
MotCurrRegVltgLimrQaxAntiWdupScagDi.MaxGrad = 0;
MotCurrRegVltgLimrQaxAntiWdupScagDi.PortName = 'MotCurrRegVltgLimrQaxAntiWdupScagDi';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
MotCurrRegCfgCurrLoopSecOrderTrfFctEna = DataDict.ImprtdCal;
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.DocUnits = 'Cnt';
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.EngDT = dt.lgc;
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.EngVal = 1;
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.EngMin = 0;
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.EngMax = 1;
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.PortName = 'MotCurrRegCfgCurrLoopSecOrderTrfFctEna';
MotCurrRegCfgCurrLoopSecOrderTrfFctEna.Description = '';


MotCurrRegCfgMotRVirtDax = DataDict.ImprtdCal;
MotCurrRegCfgMotRVirtDax.DocUnits = 'Ohm';
MotCurrRegCfgMotRVirtDax.EngDT = dt.float32;
MotCurrRegCfgMotRVirtDax.EngVal = 0;
MotCurrRegCfgMotRVirtDax.EngMin = 0;
MotCurrRegCfgMotRVirtDax.EngMax = 0.2;
MotCurrRegCfgMotRVirtDax.PortName = 'MotCurrRegCfgMotRVirtDax';
MotCurrRegCfgMotRVirtDax.Description = '';


MotCurrRegCfgMotRVirtQax = DataDict.ImprtdCal;
MotCurrRegCfgMotRVirtQax.DocUnits = 'Ohm';
MotCurrRegCfgMotRVirtQax.EngDT = dt.float32;
MotCurrRegCfgMotRVirtQax.EngVal = 0;
MotCurrRegCfgMotRVirtQax.EngMin = 0;
MotCurrRegCfgMotRVirtQax.EngMax = 0.2;
MotCurrRegCfgMotRVirtQax.PortName = 'MotCurrRegCfgMotRVirtQax';
MotCurrRegCfgMotRVirtQax.Description = '';


MotRefMdlFbCtrlDi = DataDict.ImprtdCal;
MotRefMdlFbCtrlDi.DocUnits = 'Cnt';
MotRefMdlFbCtrlDi.EngDT = dt.lgc;
MotRefMdlFbCtrlDi.EngVal = 0;
MotRefMdlFbCtrlDi.EngMin = 0;
MotRefMdlFbCtrlDi.EngMax = 1;
MotRefMdlFbCtrlDi.PortName = 'MotRefMdlFbCtrlDi';
MotRefMdlFbCtrlDi.Description = '';


MotRefMdlIvtrDeadTiBrdgVltgSca = DataDict.ImprtdCal;
MotRefMdlIvtrDeadTiBrdgVltgSca.DocUnits = 'Uls';
MotRefMdlIvtrDeadTiBrdgVltgSca.EngDT = dt.float32;
MotRefMdlIvtrDeadTiBrdgVltgSca.EngVal = 1;
MotRefMdlIvtrDeadTiBrdgVltgSca.EngMin = 0.98;
MotRefMdlIvtrDeadTiBrdgVltgSca.EngMax = 1;
MotRefMdlIvtrDeadTiBrdgVltgSca.PortName = 'MotRefMdlIvtrDeadTiBrdgVltgSca';
MotRefMdlIvtrDeadTiBrdgVltgSca.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotCurrRegVltgLimrAntiWdupCmdScaDax = DataDict.Display;
dMotCurrRegVltgLimrAntiWdupCmdScaDax.LongName = 'Dax Anti Windup Command Scale Factor';
dMotCurrRegVltgLimrAntiWdupCmdScaDax.Description = [...
  'Dax Anti Windup Command Scale Factor'];
dMotCurrRegVltgLimrAntiWdupCmdScaDax.DocUnits = 'Uls';
dMotCurrRegVltgLimrAntiWdupCmdScaDax.EngDT = dt.float32;
dMotCurrRegVltgLimrAntiWdupCmdScaDax.EngMin = 0;
dMotCurrRegVltgLimrAntiWdupCmdScaDax.EngMax = 1;
dMotCurrRegVltgLimrAntiWdupCmdScaDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrAntiWdupCmdScaQax = DataDict.Display;
dMotCurrRegVltgLimrAntiWdupCmdScaQax.LongName = 'Qax Anti Windup Command Scale Factor';
dMotCurrRegVltgLimrAntiWdupCmdScaQax.Description = [...
  'Qax Anti Windup Command Scale Factor'];
dMotCurrRegVltgLimrAntiWdupCmdScaQax.DocUnits = 'Uls';
dMotCurrRegVltgLimrAntiWdupCmdScaQax.EngDT = dt.float32;
dMotCurrRegVltgLimrAntiWdupCmdScaQax.EngMin = 0;
dMotCurrRegVltgLimrAntiWdupCmdScaQax.EngMax = 1;
dMotCurrRegVltgLimrAntiWdupCmdScaQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotCurrCmdErr = DataDict.Display;
dMotCurrRegVltgLimrMotCurrCmdErr.LongName = 'Motor Current Command Error';
dMotCurrRegVltgLimrMotCurrCmdErr.Description = 'Motor Current Command Error';
dMotCurrRegVltgLimrMotCurrCmdErr.DocUnits = 'Ampr';
dMotCurrRegVltgLimrMotCurrCmdErr.EngDT = dt.float32;
dMotCurrRegVltgLimrMotCurrCmdErr.EngMin = -450;
dMotCurrRegVltgLimrMotCurrCmdErr.EngMax = 450;
dMotCurrRegVltgLimrMotCurrCmdErr.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotCurrCmdErrDax = DataDict.Display;
dMotCurrRegVltgLimrMotCurrCmdErrDax.LongName = 'Motor Current Dax Command Error';
dMotCurrRegVltgLimrMotCurrCmdErrDax.Description = 'Motor Current Dax Command Error';
dMotCurrRegVltgLimrMotCurrCmdErrDax.DocUnits = 'Ampr';
dMotCurrRegVltgLimrMotCurrCmdErrDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotCurrCmdErrDax.EngMin = -450;
dMotCurrRegVltgLimrMotCurrCmdErrDax.EngMax = 450;
dMotCurrRegVltgLimrMotCurrCmdErrDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotCurrCmdErrQax = DataDict.Display;
dMotCurrRegVltgLimrMotCurrCmdErrQax.LongName = 'Motor Current Qax Command Error';
dMotCurrRegVltgLimrMotCurrCmdErrQax.Description = 'Motor Current Qax Command Error';
dMotCurrRegVltgLimrMotCurrCmdErrQax.DocUnits = 'Ampr';
dMotCurrRegVltgLimrMotCurrCmdErrQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotCurrCmdErrQax.EngMin = -450;
dMotCurrRegVltgLimrMotCurrCmdErrQax.EngMax = 450;
dMotCurrRegVltgLimrMotCurrCmdErrQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotCurrCmdScaDax = DataDict.Display;
dMotCurrRegVltgLimrMotCurrCmdScaDax.LongName = 'Motor Current Dax Command Scale Factor';
dMotCurrRegVltgLimrMotCurrCmdScaDax.Description = [...
  'Motor Current Dax Command Scale Factor'];
dMotCurrRegVltgLimrMotCurrCmdScaDax.DocUnits = 'Uls';
dMotCurrRegVltgLimrMotCurrCmdScaDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotCurrCmdScaDax.EngMin = -200;
dMotCurrRegVltgLimrMotCurrCmdScaDax.EngMax = 200;
dMotCurrRegVltgLimrMotCurrCmdScaDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotCurrCmdScaQax = DataDict.Display;
dMotCurrRegVltgLimrMotCurrCmdScaQax.LongName = 'Motor Current Qax Command Scale Factor';
dMotCurrRegVltgLimrMotCurrCmdScaQax.Description = [...
  'Motor Current Qax Command Scale Factor'];
dMotCurrRegVltgLimrMotCurrCmdScaQax.DocUnits = 'Uls';
dMotCurrRegVltgLimrMotCurrCmdScaQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotCurrCmdScaQax.EngMin = -200;
dMotCurrRegVltgLimrMotCurrCmdScaQax.EngMax = 200;
dMotCurrRegVltgLimrMotCurrCmdScaQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgBrdgFild = DataDict.Display;
dMotCurrRegVltgLimrMotVltgBrdgFild.LongName = 'Motor Voltage Bridge Filtered';
dMotCurrRegVltgLimrMotVltgBrdgFild.Description = [...
  'It shows the fitlered bridge motor voltage.'];
dMotCurrRegVltgLimrMotVltgBrdgFild.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgBrdgFild.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgBrdgFild.EngMin = 6;
dMotCurrRegVltgLimrMotVltgBrdgFild.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgBrdgFild.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgCmdFinal = DataDict.Display;
dMotCurrRegVltgLimrMotVltgCmdFinal.LongName = 'Motor Voltage Final Command';
dMotCurrRegVltgLimrMotVltgCmdFinal.Description = 'Motor Voltage Final Command';
dMotCurrRegVltgLimrMotVltgCmdFinal.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgCmdFinal.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgCmdFinal.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgCmdFinal.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgCmdFinal.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgCmdPreLim = DataDict.Display;
dMotCurrRegVltgLimrMotVltgCmdPreLim.LongName = 'Motor Voltage Pre-Limit Command';
dMotCurrRegVltgLimrMotVltgCmdPreLim.Description = 'Motor Voltage Pre-Limit Command';
dMotCurrRegVltgLimrMotVltgCmdPreLim.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgCmdPreLim.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgCmdPreLim.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgCmdPreLim.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgCmdPreLim.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDampgDax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDampgDax.LongName = 'Motor Voltage Dax Damping Term';
dMotCurrRegVltgLimrMotVltgDampgDax.Description = 'Motor Voltage Dax Damping Term';
dMotCurrRegVltgLimrMotVltgDampgDax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDampgDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDampgDax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgDampgDax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgDampgDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDampgQax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDampgQax.LongName = 'Motor Voltage Qax Damping Term';
dMotCurrRegVltgLimrMotVltgDampgQax.Description = 'Motor Voltage Qax Damping Term';
dMotCurrRegVltgLimrMotVltgDampgQax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDampgQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDampgQax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgDampgQax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgDampgQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDaxFb = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDaxFb.LongName = 'Motor Voltage Dax Feedback';
dMotCurrRegVltgLimrMotVltgDaxFb.Description = [...
  'It shows the motor voltage Dax feedback.'];
dMotCurrRegVltgLimrMotVltgDaxFb.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDaxFb.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDaxFb.EngMin = -99944.75;
dMotCurrRegVltgLimrMotVltgDaxFb.EngMax = 99944.75;
dMotCurrRegVltgLimrMotVltgDaxFb.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDaxIntglPreLim = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.LongName = 'Dax Integral Motor Voltage Pre-Limit';
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.Description = [...
  'It shows the Dax integral motor voltage before the saturation block.'];
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.EngMin = -2620;
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.EngMax = 2620;
dMotCurrRegVltgLimrMotVltgDaxIntglPreLim.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDecoupldFbDax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.LongName = 'Motor Voltage Dax Decoupled Feedback';
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.Description = [...
  'Motor Voltage Dax Decouple Feedback'];
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgDecoupldFbDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDecoupldFbQax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.LongName = 'Motor Voltage Qax Decoupled Feedback';
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.Description = [...
  'Motor Voltage Qax Decouple Feedback'];
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgDecoupldFbQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDircFbDax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDircFbDax.LongName = 'Motor Voltage Dax Direct Feedback';
dMotCurrRegVltgLimrMotVltgDircFbDax.Description = 'Motor Voltage Dax Direct Feedback';
dMotCurrRegVltgLimrMotVltgDircFbDax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDircFbDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDircFbDax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgDircFbDax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgDircFbDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgDircFbQax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgDircFbQax.LongName = 'Motor Voltage Qax Direct Feedback';
dMotCurrRegVltgLimrMotVltgDircFbQax.Description = 'Motor Voltage Qax Direct Feedback';
dMotCurrRegVltgLimrMotVltgDircFbQax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgDircFbQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgDircFbQax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgDircFbQax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgDircFbQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgPreLimDax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgPreLimDax.LongName = 'Motor Voltage Pre-Limit Dax';
dMotCurrRegVltgLimrMotVltgPreLimDax.Description = 'Motor Voltage Pre-Limit Dax';
dMotCurrRegVltgLimrMotVltgPreLimDax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgPreLimDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgPreLimDax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgPreLimDax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgPreLimDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgPreLimQax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgPreLimQax.LongName = 'Motor Voltage Pre-Limit Qax';
dMotCurrRegVltgLimrMotVltgPreLimQax.Description = 'Motor Voltage Pre-Limit Qax';
dMotCurrRegVltgLimrMotVltgPreLimQax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgPreLimQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgPreLimQax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgPreLimQax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgPreLimQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgPropCmdDax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgPropCmdDax.LongName = 'Motor Voltage Qax Integral Command';
dMotCurrRegVltgLimrMotVltgPropCmdDax.Description = 'Motor Voltage Qax Integral Command';
dMotCurrRegVltgLimrMotVltgPropCmdDax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgPropCmdDax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgPropCmdDax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgPropCmdDax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgPropCmdDax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgPropCmdQax = DataDict.Display;
dMotCurrRegVltgLimrMotVltgPropCmdQax.LongName = 'Motor Voltage Qax Proportional';
dMotCurrRegVltgLimrMotVltgPropCmdQax.Description = 'Motor Voltage Qax Proportional';
dMotCurrRegVltgLimrMotVltgPropCmdQax.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgPropCmdQax.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgPropCmdQax.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgPropCmdQax.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgPropCmdQax.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgQaxFb = DataDict.Display;
dMotCurrRegVltgLimrMotVltgQaxFb.LongName = 'Motor Voltage Qax Feedback';
dMotCurrRegVltgLimrMotVltgQaxFb.Description = [...
  'It shows the motor voltage Qax feedback.'];
dMotCurrRegVltgLimrMotVltgQaxFb.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgQaxFb.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgQaxFb.EngMin = -27904.5;
dMotCurrRegVltgLimrMotVltgQaxFb.EngMax = 27904.5;
dMotCurrRegVltgLimrMotVltgQaxFb.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgQaxFfFild = DataDict.Display;
dMotCurrRegVltgLimrMotVltgQaxFfFild.LongName = 'Motor Voltage Qax Feedforward Filtered';
dMotCurrRegVltgLimrMotVltgQaxFfFild.Description = [...
  'It shows the filtered motor voltage Qax feedforward.'];
dMotCurrRegVltgLimrMotVltgQaxFfFild.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgQaxFfFild.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgQaxFfFild.EngMin = -26.5;
dMotCurrRegVltgLimrMotVltgQaxFfFild.EngMax = 26.5;
dMotCurrRegVltgLimrMotVltgQaxFfFild.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgQaxIntglPreLim = DataDict.Display;
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.LongName = 'Qax Integral Motor Voltage Pre-Limit';
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.Description = [...
  'It shows the Qax integral motor voltage before the saturation block.'];
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.DocUnits = 'Volt';
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.EngMin = -2620;
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.EngMax = 2620;
dMotCurrRegVltgLimrMotVltgQaxIntglPreLim.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgSatnIvsRat = DataDict.Display;
dMotCurrRegVltgLimrMotVltgSatnIvsRat.LongName = 'Motor Voltage Saturation Inverse Ratio';
dMotCurrRegVltgLimrMotVltgSatnIvsRat.Description = [...
  'Motor Voltage Saturation Inverse Ratio'];
dMotCurrRegVltgLimrMotVltgSatnIvsRat.DocUnits = 'Uls';
dMotCurrRegVltgLimrMotVltgSatnIvsRat.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgSatnIvsRat.EngMin = 0;
dMotCurrRegVltgLimrMotVltgSatnIvsRat.EngMax = 1;
dMotCurrRegVltgLimrMotVltgSatnIvsRat.InitRowCol = [1  1];


dMotCurrRegVltgLimrMotVltgSatnRat = DataDict.Display;
dMotCurrRegVltgLimrMotVltgSatnRat.LongName = 'Motor Voltage Saturation Ratio';
dMotCurrRegVltgLimrMotVltgSatnRat.Description = 'Motor Voltage Saturation Ratio';
dMotCurrRegVltgLimrMotVltgSatnRat.DocUnits = 'Uls';
dMotCurrRegVltgLimrMotVltgSatnRat.EngDT = dt.float32;
dMotCurrRegVltgLimrMotVltgSatnRat.EngMin = 0;
dMotCurrRegVltgLimrMotVltgSatnRat.EngMax = 1;
dMotCurrRegVltgLimrMotVltgSatnRat.InitRowCol = [1  1];


dMotCurrRegVltgLimrPhaAdvPreDly = DataDict.Display;
dMotCurrRegVltgLimrPhaAdvPreDly.LongName = 'Phase Advance Pre-Delay';
dMotCurrRegVltgLimrPhaAdvPreDly.Description = 'Phase Advance Pre-Delay';
dMotCurrRegVltgLimrPhaAdvPreDly.DocUnits = 'MotRad';
dMotCurrRegVltgLimrPhaAdvPreDly.EngDT = dt.float32;
dMotCurrRegVltgLimrPhaAdvPreDly.EngMin = 0;
dMotCurrRegVltgLimrPhaAdvPreDly.EngMax = 6.2832;
dMotCurrRegVltgLimrPhaAdvPreDly.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AntiWdupCmdScaDax = DataDict.PIM;
AntiWdupCmdScaDax.LongName = 'Dax Motor Current Anti Windup Command Scale';
AntiWdupCmdScaDax.Description = [...
  'Dax Motor Current Anti Windup Command Scale'];
AntiWdupCmdScaDax.DocUnits = 'Uls';
AntiWdupCmdScaDax.EngDT = dt.float32;
AntiWdupCmdScaDax.EngMin = 0;
AntiWdupCmdScaDax.EngMax = 1;
AntiWdupCmdScaDax.InitRowCol = [1  1];


AntiWdupCmdScaQax = DataDict.PIM;
AntiWdupCmdScaQax.LongName = 'Qax Motor Current Anti Windup Command Scale';
AntiWdupCmdScaQax.Description = [...
  'Qax Motor Current Anti Windup Command Scale'];
AntiWdupCmdScaQax.DocUnits = 'Uls';
AntiWdupCmdScaQax.EngDT = dt.float32;
AntiWdupCmdScaQax.EngMin = 0;
AntiWdupCmdScaQax.EngMax = 1;
AntiWdupCmdScaQax.InitRowCol = [1  1];


CurrLoaScarPrev = DataDict.PIM;
CurrLoaScarPrev.LongName = 'Previous Current LOA Scalar';
CurrLoaScarPrev.Description = 'Previous Current LOA Scalar';
CurrLoaScarPrev.DocUnits = 'Uls';
CurrLoaScarPrev.EngDT = dt.float32;
CurrLoaScarPrev.EngMin = 0;
CurrLoaScarPrev.EngMax = 1;
CurrLoaScarPrev.InitRowCol = [1  1];


DualEcuLoaScarPrev = DataDict.PIM;
DualEcuLoaScarPrev.LongName = 'Previous Dual ECU LOA Scalar';
DualEcuLoaScarPrev.Description = 'Previous Dual ECU LOA Scalar';
DualEcuLoaScarPrev.DocUnits = 'Uls';
DualEcuLoaScarPrev.EngDT = dt.float32;
DualEcuLoaScarPrev.EngMin = 0;
DualEcuLoaScarPrev.EngMax = 1;
DualEcuLoaScarPrev.InitRowCol = [1  1];


FETLoaScarPrev = DataDict.PIM;
FETLoaScarPrev.LongName = 'Previous FET LOA Scalar';
FETLoaScarPrev.Description = 'Previous FET LOA Scalar';
FETLoaScarPrev.DocUnits = 'Uls';
FETLoaScarPrev.EngDT = dt.float32;
FETLoaScarPrev.EngMin = 0;
FETLoaScarPrev.EngMax = 1;
FETLoaScarPrev.InitRowCol = [1  1];


IvtrLoaScarPrev = DataDict.PIM;
IvtrLoaScarPrev.LongName = 'Previous Inverter LOA Scalar';
IvtrLoaScarPrev.Description = 'Previous Inverter LOA Scalar';
IvtrLoaScarPrev.DocUnits = 'Uls';
IvtrLoaScarPrev.EngDT = dt.float32;
IvtrLoaScarPrev.EngMin = 0;
IvtrLoaScarPrev.EngMax = 1;
IvtrLoaScarPrev.InitRowCol = [1  1];


MotCtrlMotVltgDaxPrev = DataDict.PIM;
MotCtrlMotVltgDaxPrev.LongName = 'Motor Control Motor Voltage Q-Axis';
MotCtrlMotVltgDaxPrev.Description = 'Motor Control Motor Voltage Q-Axis';
MotCtrlMotVltgDaxPrev.DocUnits = 'Volt';
MotCtrlMotVltgDaxPrev.EngDT = dt.float32;
MotCtrlMotVltgDaxPrev.EngMin = -26.5;
MotCtrlMotVltgDaxPrev.EngMax = 26.5;
MotCtrlMotVltgDaxPrev.InitRowCol = [1  1];


MotCtrlMotVltgQaxPrev = DataDict.PIM;
MotCtrlMotVltgQaxPrev.LongName = 'Motor Control Motor Voltage Q-Axis';
MotCtrlMotVltgQaxPrev.Description = 'Motor Control Motor Voltage Q-Axis';
MotCtrlMotVltgQaxPrev.DocUnits = 'Volt';
MotCtrlMotVltgQaxPrev.EngDT = dt.float32;
MotCtrlMotVltgQaxPrev.EngMin = -26.5;
MotCtrlMotVltgQaxPrev.EngMax = 26.5;
MotCtrlMotVltgQaxPrev.InitRowCol = [1  1];


MotVltgBrdgLpFil = DataDict.PIM;
MotVltgBrdgLpFil.LongName = ' Motor Voltage Bridge Lowpass Filter';
MotVltgBrdgLpFil.Description = [...
  'State variable used in the lowpaas filter for motor voltage bridge.'];
MotVltgBrdgLpFil.DocUnits = 'Cnt';
MotVltgBrdgLpFil.EngDT = struct.FilLpRec1;
MotVltgBrdgLpFil.EngMin = [struct('FilSt',6,'FilGain',0.00078509)];
MotVltgBrdgLpFil.EngMax = [struct('FilSt',26.6,'FilGain',0.544061872)];
MotVltgBrdgLpFil.InitRowCol = [1  1];


MotVltgIntglCmdDaxPrev = DataDict.PIM;
MotVltgIntglCmdDaxPrev.LongName = 'Previous Motor Voltage Integral Dax Command';
MotVltgIntglCmdDaxPrev.Description = [...
  'Previous Motor Voltage Integral Dax Command'];
MotVltgIntglCmdDaxPrev.DocUnits = 'Ampr';
MotVltgIntglCmdDaxPrev.EngDT = dt.float32;
MotVltgIntglCmdDaxPrev.EngMin = -1000;
MotVltgIntglCmdDaxPrev.EngMax = 1000;
MotVltgIntglCmdDaxPrev.InitRowCol = [1  1];


MotVltgIntglCmdQaxPrev = DataDict.PIM;
MotVltgIntglCmdQaxPrev.LongName = 'Previous Motor Voltage Integral Qax Command';
MotVltgIntglCmdQaxPrev.Description = [...
  'Previous Motor Voltage Integral Qax Command'];
MotVltgIntglCmdQaxPrev.DocUnits = 'Ampr';
MotVltgIntglCmdQaxPrev.EngDT = dt.float32;
MotVltgIntglCmdQaxPrev.EngMin = -1000;
MotVltgIntglCmdQaxPrev.EngMax = 1000;
MotVltgIntglCmdQaxPrev.InitRowCol = [1  1];


MotVltgQaxFfLpFil = DataDict.PIM;
MotVltgQaxFfLpFil.LongName = 'Motor Voltage Qax Feedforward Lowpass Filter';
MotVltgQaxFfLpFil.Description = [...
  'State variable used in the lowpass filter for motor voltage Qax feedfo' ...
  'rward .'];
MotVltgQaxFfLpFil.DocUnits = 'Cnt';
MotVltgQaxFfLpFil.EngDT = struct.FilLpRec1;
MotVltgQaxFfLpFil.EngMin = [struct('FilSt',-26.6,'FilGain',0.00078509)];
MotVltgQaxFfLpFil.EngMax = [struct('FilSt',26.6,'FilGain',0.544061872)];
MotVltgQaxFfLpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2OVERSQRT3_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.LongName = '2 Over Square Root of 3';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.Description = '2 divided by (Square root of 3)';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2OVERSQRT3_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.EngVal = 1.1547005;
ARCHGLBPRM_2OVERSQRT3_ULS_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


BRDGVLTDFT_VOLT_F32 = DataDict.Constant;
BRDGVLTDFT_VOLT_F32.LongName = 'Default Bridge Voltage';
BRDGVLTDFT_VOLT_F32.Description = 'Default value of bridge voltage';
BRDGVLTDFT_VOLT_F32.DocUnits = 'Volt';
BRDGVLTDFT_VOLT_F32.EngDT = dt.float32;
BRDGVLTDFT_VOLT_F32.EngVal = 12;
BRDGVLTDFT_VOLT_F32.Define = 'Local';


BRDGVLTGHILIM_VOLT_F32 = DataDict.Constant;
BRDGVLTGHILIM_VOLT_F32.LongName = 'Bridge Voltage High Limit';
BRDGVLTGHILIM_VOLT_F32.Description = 'Bridge Voltage High Limit';
BRDGVLTGHILIM_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGHILIM_VOLT_F32.EngDT = dt.float32;
BRDGVLTGHILIM_VOLT_F32.EngVal = 26.5;
BRDGVLTGHILIM_VOLT_F32.Define = 'Local';


BRDGVLTGLOLIM_VOLT_F32 = DataDict.Constant;
BRDGVLTGLOLIM_VOLT_F32.LongName = 'Bridge Voltage Low Limit';
BRDGVLTGLOLIM_VOLT_F32.Description = 'Bridge Voltage Low Limit';
BRDGVLTGLOLIM_VOLT_F32.DocUnits = 'Volt';
BRDGVLTGLOLIM_VOLT_F32.EngDT = dt.float32;
BRDGVLTGLOLIM_VOLT_F32.EngVal = 6;
BRDGVLTGLOLIM_VOLT_F32.Define = 'Local';


ELECGLBPRM_PWMPERDNOMX2_SEC_F32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.LongName = 'Motor Control ISR Period Times 2';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Description = [...
  'This constant is 2 times ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9 in second' ...
  's.'];
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.DocUnits = 'Sec';
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngDT = dt.float32;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngVal = 0.000125;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngMin = 9.09090909e-05;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.EngMax = 0.0001428571429;
ELECGLBPRM_PWMPERDNOMX2_SEC_F32.Define = 'Global';


F32TOU16OVR2PI_ULS_F32 = DataDict.Constant;
F32TOU16OVR2PI_ULS_F32.LongName = 'Float32 to Uint16 Over 2 Pi';
F32TOU16OVR2PI_ULS_F32.Description = [...
  'Conversion factor to change a floating point number with units of radi' ...
  'ans to revs with a data type of u0p16'];
F32TOU16OVR2PI_ULS_F32.DocUnits = 'Uls';
F32TOU16OVR2PI_ULS_F32.EngDT = dt.float32;
F32TOU16OVR2PI_ULS_F32.EngVal = 10430.21921;
F32TOU16OVR2PI_ULS_F32.Define = 'Local';


MOTCURRHILIM_AMPR_F32 = DataDict.Constant;
MOTCURRHILIM_AMPR_F32.LongName = 'Motor Current High Limit';
MOTCURRHILIM_AMPR_F32.Description = [...
  'Limit on how big motor current can be'];
MOTCURRHILIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRHILIM_AMPR_F32.EngDT = dt.float32;
MOTCURRHILIM_AMPR_F32.EngVal = 200;
MOTCURRHILIM_AMPR_F32.Define = 'Local';


MOTCURRLOLIM_AMPR_F32 = DataDict.Constant;
MOTCURRLOLIM_AMPR_F32.LongName = 'Motor Current Low Limit';
MOTCURRLOLIM_AMPR_F32.Description = [...
  'Limit on how small motor current can be'];
MOTCURRLOLIM_AMPR_F32.DocUnits = 'Ampr';
MOTCURRLOLIM_AMPR_F32.EngDT = dt.float32;
MOTCURRLOLIM_AMPR_F32.EngVal = -200;
MOTCURRLOLIM_AMPR_F32.Define = 'Local';


MOTCURRPREDHILIM_ULS_F32 = DataDict.Constant;
MOTCURRPREDHILIM_ULS_F32.LongName = 'Motor Current Predetermine High Limit';
MOTCURRPREDHILIM_ULS_F32.Description = [...
  'The output, MotCurrDaxPred, MotCurrQaxPred is limited by this value.'];
MOTCURRPREDHILIM_ULS_F32.DocUnits = 'Uls';
MOTCURRPREDHILIM_ULS_F32.EngDT = dt.float32;
MOTCURRPREDHILIM_ULS_F32.EngVal = 1000000000;
MOTCURRPREDHILIM_ULS_F32.Define = 'Local';


MOTCURRPREDLOLIM_ULS_F32 = DataDict.Constant;
MOTCURRPREDLOLIM_ULS_F32.LongName = 'Motor Current Predetermine High Limit';
MOTCURRPREDLOLIM_ULS_F32.Description = [...
  'The output, MotCurrDaxPred, MotCurrQaxPred is limited by this value.'];
MOTCURRPREDLOLIM_ULS_F32.DocUnits = 'Uls';
MOTCURRPREDLOLIM_ULS_F32.EngDT = dt.float32;
MOTCURRPREDLOLIM_ULS_F32.EngVal = -1000000000;
MOTCURRPREDLOLIM_ULS_F32.Define = 'Local';


MOTMODLNIDXHILIM_ULS_F32 = DataDict.Constant;
MOTMODLNIDXHILIM_ULS_F32.LongName = 'Motor Modulation Index High Limit';
MOTMODLNIDXHILIM_ULS_F32.Description = [...
  'The output, MotCtrlMotModlnIdx, is limited by this value.'];
MOTMODLNIDXHILIM_ULS_F32.DocUnits = 'Uls';
MOTMODLNIDXHILIM_ULS_F32.EngDT = dt.float32;
MOTMODLNIDXHILIM_ULS_F32.EngVal = 1;
MOTMODLNIDXHILIM_ULS_F32.Define = 'Local';


MOTMODLNIDXLOLIM_ULS_F32 = DataDict.Constant;
MOTMODLNIDXLOLIM_ULS_F32.LongName = 'Motor Modulation Index Low Limit';
MOTMODLNIDXLOLIM_ULS_F32.Description = [...
  'The output, MotCtrlMotModlnIdx, is limited by this value.'];
MOTMODLNIDXLOLIM_ULS_F32.DocUnits = 'Uls';
MOTMODLNIDXLOLIM_ULS_F32.EngDT = dt.float32;
MOTMODLNIDXLOLIM_ULS_F32.EngVal = 0;
MOTMODLNIDXLOLIM_ULS_F32.Define = 'Local';


MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32 = DataDict.Constant;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.LongName = 'Inverter Deadtime Bridge Voltage Scale High Limit';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.Description = [...
  'Defensive programming saturation value applied to calibration.'];
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.DocUnits = 'Uls';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.EngDT = dt.float32;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.EngVal = 1;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCAHILIM_ULS_F32.Define = 'Global';


MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32 = DataDict.Constant;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.LongName = 'Inverter Deadtime Bridge Voltage Scale Low Limit';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.Description = [...
  'Defensive programming saturation value applied to calibration.'];
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.DocUnits = 'Uls';
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.EngDT = dt.float32;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.EngVal = 0.98;
MOTREFMDL_INVTERDEADTIBRDGVLTGSCALOLIM_ULS_F32.Define = 'Global';


MOTVLTGDQAXHILIM_VOLT_F32 = DataDict.Constant;
MOTVLTGDQAXHILIM_VOLT_F32.LongName = 'D-Axis & Q-Axis Motor Voltage High Limit';
MOTVLTGDQAXHILIM_VOLT_F32.Description = [...
  'D-Axis & Q-Axis Motor Voltage High Limit'];
MOTVLTGDQAXHILIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGDQAXHILIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGDQAXHILIM_VOLT_F32.EngVal = 26.5;
MOTVLTGDQAXHILIM_VOLT_F32.Define = 'Local';


MOTVLTGDQAXLOLIM_VOLT_F32 = DataDict.Constant;
MOTVLTGDQAXLOLIM_VOLT_F32.LongName = 'D-Axis & Q-Axis Motor Voltage Low Limit';
MOTVLTGDQAXLOLIM_VOLT_F32.Description = [...
  'D-Axis & Q-Axis Motor Voltage Low Limit'];
MOTVLTGDQAXLOLIM_VOLT_F32.DocUnits = 'Volt';
MOTVLTGDQAXLOLIM_VOLT_F32.EngDT = dt.float32;
MOTVLTGDQAXLOLIM_VOLT_F32.EngVal = -26.5;
MOTVLTGDQAXLOLIM_VOLT_F32.Define = 'Local';


PHAADVHILIM_MOTREV_F32 = DataDict.Constant;
PHAADVHILIM_MOTREV_F32.LongName = 'Phase Advance High Limit';
PHAADVHILIM_MOTREV_F32.Description = [...
  'PhaAdv is limited by this value before getting converted into a fixed ' ...
  'point value.'];
PHAADVHILIM_MOTREV_F32.DocUnits = 'MotRev';
PHAADVHILIM_MOTREV_F32.EngDT = dt.float32;
PHAADVHILIM_MOTREV_F32.EngVal = 65535;
PHAADVHILIM_MOTREV_F32.Define = 'Local';


PHAADVLOLIM_MOTREV_F32 = DataDict.Constant;
PHAADVLOLIM_MOTREV_F32.LongName = 'Phase Advance Low Limit';
PHAADVLOLIM_MOTREV_F32.Description = [...
  'PhaAdv is limited by this value before getting converted into a fixed ' ...
  'point value.'];
PHAADVLOLIM_MOTREV_F32.DocUnits = 'MotRev';
PHAADVLOLIM_MOTREV_F32.EngDT = dt.float32;
PHAADVLOLIM_MOTREV_F32.EngVal = 0;
PHAADVLOLIM_MOTREV_F32.Define = 'Local';


ZERO_VOLT_F32 = DataDict.Constant;
ZERO_VOLT_F32.LongName = 'Zero Voltage';
ZERO_VOLT_F32.Description = ' Zero Volts.';
ZERO_VOLT_F32.DocUnits = 'Volt';
ZERO_VOLT_F32.EngDT = dt.float32;
ZERO_VOLT_F32.EngVal = 0;
ZERO_VOLT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
