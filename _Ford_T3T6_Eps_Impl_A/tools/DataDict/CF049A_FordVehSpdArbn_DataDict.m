%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Dec-2017 11:00:33       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF049A = DataDict.FDD;
CF049A.Version = '1.0.X';
CF049A.LongName = 'Ford Vehicle Speed Arbitration';
CF049A.ShoName  = 'FordVehSpdArbn';
CF049A.DesignASIL = 'D';
CF049A.Description = [...
  'This function determines vehicle speed to an ASIL Dlevel.The function ' ...
  'contains calculation of vehiclespeed from tire circumference and wheel' ...
  ' speed, as well as arbitration of vehicle speeds. The output FordVehic' ...
  'le Speed will feed SF33A'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordVehSpdArbnInit1 = DataDict.Runnable;
FordVehSpdArbnInit1.Context = 'Rte';
FordVehSpdArbnInit1.TimeStep = 0;
FordVehSpdArbnInit1.Description = 'Initialization Runnable';

FordVehSpdArbnPer1 = DataDict.Runnable;
FordVehSpdArbnPer1.Context = 'Rte';
FordVehSpdArbnPer1.TimeStep = 0.002;
FordVehSpdArbnPer1.Description = 'Periodic Runnable at 2 millisecs ';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FordVehTireCircum_GetErrorStatus = DataDict.Client;
FordVehTireCircum_GetErrorStatus.CallLocation = {'FordVehSpdArbnInit1'};
FordVehTireCircum_GetErrorStatus.Description = 'None';
FordVehTireCircum_GetErrorStatus.Return = DataDict.CSReturn;
FordVehTireCircum_GetErrorStatus.Return.Type = 'Standard';
FordVehTireCircum_GetErrorStatus.Return.Min = 0;
FordVehTireCircum_GetErrorStatus.Return.Max = 1;
FordVehTireCircum_GetErrorStatus.Return.TestTolerance = 0;
FordVehTireCircum_GetErrorStatus.Return.Description = 'None';
FordVehTireCircum_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
FordVehTireCircum_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
FordVehTireCircum_GetErrorStatus.Arguments(1).EngDT = dt.u08;
FordVehTireCircum_GetErrorStatus.Arguments(1).EngMin = 0;
FordVehTireCircum_GetErrorStatus.Arguments(1).EngMax = 8;
FordVehTireCircum_GetErrorStatus.Arguments(1).TestTolerance = 0;
FordVehTireCircum_GetErrorStatus.Arguments(1).Units = 'Cnt';
FordVehTireCircum_GetErrorStatus.Arguments(1).Direction = 'Out';
FordVehTireCircum_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
FordVehTireCircum_GetErrorStatus.Arguments(1).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
FordAbsModlPrsnt = DataDict.IpSignal;
FordAbsModlPrsnt.LongName = 'Ford ABS Module Present';
FordAbsModlPrsnt.Description = [...
  'This signal is used to decide arbitration feature is active or not'];
FordAbsModlPrsnt.DocUnits = 'Cnt';
FordAbsModlPrsnt.EngDT = dt.lgc;
FordAbsModlPrsnt.EngInit = 0;
FordAbsModlPrsnt.EngMin = 0;
FordAbsModlPrsnt.EngMax = 1;
FordAbsModlPrsnt.ReadIn = {'FordVehSpdArbnPer1'};
FordAbsModlPrsnt.ReadType = 'Rte';


FordEscModlPrsnt = DataDict.IpSignal;
FordEscModlPrsnt.LongName = 'Ford ESC Module Present';
FordEscModlPrsnt.Description = [...
  'This signal is used to decide arbitration feature is active or not'];
FordEscModlPrsnt.DocUnits = 'Cnt';
FordEscModlPrsnt.EngDT = dt.lgc;
FordEscModlPrsnt.EngInit = 0;
FordEscModlPrsnt.EngMin = 0;
FordEscModlPrsnt.EngMax = 1;
FordEscModlPrsnt.ReadIn = {'FordVehSpdArbnPer1'};
FordEscModlPrsnt.ReadType = 'Rte';


FordVehFrntLeWhlSpd = DataDict.IpSignal;
FordVehFrntLeWhlSpd.LongName = 'Ford Vehicle Front Left Wheel Speed';
FordVehFrntLeWhlSpd.Description = [...
  'This signal indicates Ford Vehicle Front Left Wheel Speed in rad/sec w' ...
  'hich is used to calculate the ford vehicle speed in kph'];
FordVehFrntLeWhlSpd.DocUnits = 'RadPerSec';
FordVehFrntLeWhlSpd.EngDT = dt.float32;
FordVehFrntLeWhlSpd.EngInit = 0;
FordVehFrntLeWhlSpd.EngMin = 0;
FordVehFrntLeWhlSpd.EngMax = 327.67;
FordVehFrntLeWhlSpd.ReadIn = {'FordVehSpdArbnPer1'};
FordVehFrntLeWhlSpd.ReadType = 'Rte';


FordVehFrntLeWhlSpdVld = DataDict.IpSignal;
FordVehFrntLeWhlSpdVld.LongName = 'Ford Vehicle Front Left Wheel Speed Valid';
FordVehFrntLeWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Front Left Wheel Speed' ...
  ''];
FordVehFrntLeWhlSpdVld.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdVld.EngDT = dt.lgc;
FordVehFrntLeWhlSpdVld.EngInit = 0;
FordVehFrntLeWhlSpdVld.EngMin = 0;
FordVehFrntLeWhlSpdVld.EngMax = 1;
FordVehFrntLeWhlSpdVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehFrntLeWhlSpdVld.ReadType = 'Rte';


FordVehFrntRiWhlSpd = DataDict.IpSignal;
FordVehFrntRiWhlSpd.LongName = 'Ford Vehicle Front Right Wheel Speed';
FordVehFrntRiWhlSpd.Description = [...
  'This signal indicates Ford Vehicle Front Right Wheel Speed in rad/sec ' ...
  'which is used to calculate the ford vehicle speed in kph'];
FordVehFrntRiWhlSpd.DocUnits = 'RadPerSec';
FordVehFrntRiWhlSpd.EngDT = dt.float32;
FordVehFrntRiWhlSpd.EngInit = 0;
FordVehFrntRiWhlSpd.EngMin = 0;
FordVehFrntRiWhlSpd.EngMax = 327.67;
FordVehFrntRiWhlSpd.ReadIn = {'FordVehSpdArbnPer1'};
FordVehFrntRiWhlSpd.ReadType = 'Rte';


FordVehFrntRiWhlSpdVld = DataDict.IpSignal;
FordVehFrntRiWhlSpdVld.LongName = 'Ford Vehicle Front Right Wheel Speed Valid';
FordVehFrntRiWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Front Right Wheel Spee' ...
  'd'];
FordVehFrntRiWhlSpdVld.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdVld.EngDT = dt.lgc;
FordVehFrntRiWhlSpdVld.EngInit = 0;
FordVehFrntRiWhlSpdVld.EngMin = 0;
FordVehFrntRiWhlSpdVld.EngMax = 1;
FordVehFrntRiWhlSpdVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehFrntRiWhlSpdVld.ReadType = 'Rte';


FordVehReLeWhlSpd = DataDict.IpSignal;
FordVehReLeWhlSpd.LongName = 'Ford Vehicle Rear Left Wheel Speed';
FordVehReLeWhlSpd.Description = [...
  'This signal indicates Ford Vehicle Rear Left Wheel Speed in rad/sec wh' ...
  'ich is used to calculate the ford vehicle speed in kph'];
FordVehReLeWhlSpd.DocUnits = 'RadPerSec';
FordVehReLeWhlSpd.EngDT = dt.float32;
FordVehReLeWhlSpd.EngInit = 0;
FordVehReLeWhlSpd.EngMin = 0;
FordVehReLeWhlSpd.EngMax = 327.67;
FordVehReLeWhlSpd.ReadIn = {'FordVehSpdArbnPer1'};
FordVehReLeWhlSpd.ReadType = 'Rte';


FordVehReLeWhlSpdVld = DataDict.IpSignal;
FordVehReLeWhlSpdVld.LongName = 'Ford Vehicle Rear Left Wheel Speed Valid';
FordVehReLeWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Rear Left Wheel Speed'];
FordVehReLeWhlSpdVld.DocUnits = 'Cnt';
FordVehReLeWhlSpdVld.EngDT = dt.lgc;
FordVehReLeWhlSpdVld.EngInit = 0;
FordVehReLeWhlSpdVld.EngMin = 0;
FordVehReLeWhlSpdVld.EngMax = 1;
FordVehReLeWhlSpdVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehReLeWhlSpdVld.ReadType = 'Rte';


FordVehReRiWhlSpd = DataDict.IpSignal;
FordVehReRiWhlSpd.LongName = 'Ford Vehicle Rear Right Wheel Speed';
FordVehReRiWhlSpd.Description = [...
  'This signal indicates Ford Vehicle Rear Right Wheel Speed in rad/sec w' ...
  'hich is used to calculate the ford vehicle speed in kph'];
FordVehReRiWhlSpd.DocUnits = 'RadPerSec';
FordVehReRiWhlSpd.EngDT = dt.float32;
FordVehReRiWhlSpd.EngInit = 0;
FordVehReRiWhlSpd.EngMin = 0;
FordVehReRiWhlSpd.EngMax = 327.67;
FordVehReRiWhlSpd.ReadIn = {'FordVehSpdArbnPer1'};
FordVehReRiWhlSpd.ReadType = 'Rte';


FordVehReRiWhlSpdVld = DataDict.IpSignal;
FordVehReRiWhlSpdVld.LongName = 'Ford Vehicle Rear Right Wheel Speed Valid';
FordVehReRiWhlSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Rear Right Wheel Speed' ...
  ''];
FordVehReRiWhlSpdVld.DocUnits = 'Cnt';
FordVehReRiWhlSpdVld.EngDT = dt.lgc;
FordVehReRiWhlSpdVld.EngInit = 0;
FordVehReRiWhlSpdVld.EngMin = 0;
FordVehReRiWhlSpdVld.EngMax = 1;
FordVehReRiWhlSpdVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehReRiWhlSpdVld.ReadType = 'Rte';


FordVehSpdBrkModl = DataDict.IpSignal;
FordVehSpdBrkModl.LongName = 'Ford Vehicle Speed Brake Module';
FordVehSpdBrkModl.Description = [...
  'This signal indicates Ford Vehicle Speed Brake Module in kph which is ' ...
  'used to calculate the ford vehicle speed'];
FordVehSpdBrkModl.DocUnits = 'Kph';
FordVehSpdBrkModl.EngDT = dt.float32;
FordVehSpdBrkModl.EngInit = 0;
FordVehSpdBrkModl.EngMin = 0;
FordVehSpdBrkModl.EngMax = 655.35;
FordVehSpdBrkModl.ReadIn = {'FordVehSpdArbnPer1'};
FordVehSpdBrkModl.ReadType = 'Rte';


FordVehSpdBrkModlLoQlyVld = DataDict.IpSignal;
FordVehSpdBrkModlLoQlyVld.LongName = 'Ford Vehicle Speed Brake Module Low Quality Valid';
FordVehSpdBrkModlLoQlyVld.Description = [...
  'This signal checks the validity of Ford Vehicle Speed Brake Module Low' ...
  ' Quality'];
FordVehSpdBrkModlLoQlyVld.DocUnits = 'Cnt';
FordVehSpdBrkModlLoQlyVld.EngDT = dt.lgc;
FordVehSpdBrkModlLoQlyVld.EngInit = 0;
FordVehSpdBrkModlLoQlyVld.EngMin = 0;
FordVehSpdBrkModlLoQlyVld.EngMax = 1;
FordVehSpdBrkModlLoQlyVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehSpdBrkModlLoQlyVld.ReadType = 'Rte';


FordVehSpdBrkModlVld = DataDict.IpSignal;
FordVehSpdBrkModlVld.LongName = 'Ford Vehicle Speed Brake Module Valid';
FordVehSpdBrkModlVld.Description = [...
  'This signal checks the validity of Ford Vehicle Speed Brake Module'];
FordVehSpdBrkModlVld.DocUnits = 'Cnt';
FordVehSpdBrkModlVld.EngDT = dt.lgc;
FordVehSpdBrkModlVld.EngInit = 0;
FordVehSpdBrkModlVld.EngMin = 0;
FordVehSpdBrkModlVld.EngMax = 1;
FordVehSpdBrkModlVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehSpdBrkModlVld.ReadType = 'Rte';


FordVehSpdEngModl = DataDict.IpSignal;
FordVehSpdEngModl.LongName = 'Ford Vehicle Speed Engine Module';
FordVehSpdEngModl.Description = [...
  'This signal indicates Ford Vehicle Speed Engine Module in kph which is' ...
  ' used to calculate the ford vehicle speed'];
FordVehSpdEngModl.DocUnits = 'Kph';
FordVehSpdEngModl.EngDT = dt.float32;
FordVehSpdEngModl.EngInit = 0;
FordVehSpdEngModl.EngMin = 0;
FordVehSpdEngModl.EngMax = 655.35;
FordVehSpdEngModl.ReadIn = {'FordVehSpdArbnPer1'};
FordVehSpdEngModl.ReadType = 'Rte';


FordVehSpdEngModlLoQlyVld = DataDict.IpSignal;
FordVehSpdEngModlLoQlyVld.LongName = 'Ford Vehicle Speed Engine Module Low Quality Valid';
FordVehSpdEngModlLoQlyVld.Description = [...
  'This signal checks the validity of Ford Vehicle Speed Engine Module Lo' ...
  'w Quality'];
FordVehSpdEngModlLoQlyVld.DocUnits = 'Cnt';
FordVehSpdEngModlLoQlyVld.EngDT = dt.lgc;
FordVehSpdEngModlLoQlyVld.EngInit = 0;
FordVehSpdEngModlLoQlyVld.EngMin = 0;
FordVehSpdEngModlLoQlyVld.EngMax = 1;
FordVehSpdEngModlLoQlyVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehSpdEngModlLoQlyVld.ReadType = 'Rte';


FordVehSpdEngModlVld = DataDict.IpSignal;
FordVehSpdEngModlVld.LongName = 'Ford Vehicle Speed Engine Module Valid';
FordVehSpdEngModlVld.Description = [...
  'This signal checks the validity of Ford Vehicle Speed Engine Module'];
FordVehSpdEngModlVld.DocUnits = 'Cnt';
FordVehSpdEngModlVld.EngDT = dt.lgc;
FordVehSpdEngModlVld.EngInit = 0;
FordVehSpdEngModlVld.EngMin = 0;
FordVehSpdEngModlVld.EngMax = 1;
FordVehSpdEngModlVld.ReadIn = {'FordVehSpdArbnPer1'};
FordVehSpdEngModlVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehSpd = DataDict.OpSignal;
FordVehSpd.LongName = 'Ford Vehicle Speed';
FordVehSpd.Description = [...
  'Processed value of Ford Vehicle Speed'];
FordVehSpd.DocUnits = 'Kph';
FordVehSpd.SwcShoName = 'FordVehSpdArbn';
FordVehSpd.EngDT = dt.float32;
FordVehSpd.EngInit = 0;
FordVehSpd.EngMin = 0;
FordVehSpd.EngMax = 1023.9;
FordVehSpd.TestTolerance = 0;
FordVehSpd.WrittenIn = {'FordVehSpdArbnPer1'};
FordVehSpd.WriteType = 'Rte';


FordVehSpdLoQly = DataDict.OpSignal;
FordVehSpdLoQly.LongName = 'Ford Vehicle Speed Low Quality';
FordVehSpdLoQly.Description = [...
  'Processed value of Ford Vehicle Speed Low Quality'];
FordVehSpdLoQly.DocUnits = 'Kph';
FordVehSpdLoQly.SwcShoName = 'FordVehSpdArbn';
FordVehSpdLoQly.EngDT = dt.float32;
FordVehSpdLoQly.EngInit = 0;
FordVehSpdLoQly.EngMin = 0;
FordVehSpdLoQly.EngMax = 1023.9;
FordVehSpdLoQly.TestTolerance = 0;
FordVehSpdLoQly.WrittenIn = {'FordVehSpdArbnPer1'};
FordVehSpdLoQly.WriteType = 'Rte';


FordVehSpdLoQlyVld = DataDict.OpSignal;
FordVehSpdLoQlyVld.LongName = 'Ford Vehicle Speed Low Quality Valid';
FordVehSpdLoQlyVld.Description = [...
  'This signal checks the validity of Ford Vehicle Speed Low Quality'];
FordVehSpdLoQlyVld.DocUnits = 'Cnt';
FordVehSpdLoQlyVld.SwcShoName = 'FordVehSpdArbn';
FordVehSpdLoQlyVld.EngDT = dt.lgc;
FordVehSpdLoQlyVld.EngInit = 0;
FordVehSpdLoQlyVld.EngMin = 0;
FordVehSpdLoQlyVld.EngMax = 1;
FordVehSpdLoQlyVld.TestTolerance = 0;
FordVehSpdLoQlyVld.WrittenIn = {'FordVehSpdArbnPer1'};
FordVehSpdLoQlyVld.WriteType = 'Rte';


FordVehSpdVld = DataDict.OpSignal;
FordVehSpdVld.LongName = 'Ford Vehicle Speed Valid';
FordVehSpdVld.Description = [...
  'This signal checks the validity of Ford Vehicle Speed'];
FordVehSpdVld.DocUnits = 'Cnt';
FordVehSpdVld.SwcShoName = 'FordVehSpdArbn';
FordVehSpdVld.EngDT = dt.lgc;
FordVehSpdVld.EngInit = 0;
FordVehSpdVld.EngMin = 0;
FordVehSpdVld.EngMax = 1;
FordVehSpdVld.TestTolerance = 0;
FordVehSpdVld.WrittenIn = {'FordVehSpdArbnPer1'};
FordVehSpdVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FordVehArbnTireCircum = DataDict.IRV;
FordVehArbnTireCircum.LongName = 'Ford Vehicle Arbitration Tire Circumference';
FordVehArbnTireCircum.Description = [...
  'Signal to carry NVM value after limitting if NVM is ok else take value' ...
  ' 65534'];
FordVehArbnTireCircum.DocUnits = 'MilliMtr';
FordVehArbnTireCircum.EngDT = dt.u16;
FordVehArbnTireCircum.EngInit = 65534;
FordVehArbnTireCircum.EngMin = 0;
FordVehArbnTireCircum.EngMax = 65535;
FordVehArbnTireCircum.ReadIn = {'FordVehSpdArbnPer1'};
FordVehArbnTireCircum.WrittenIn = {'FordVehSpdArbnInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordVehSpdArbnDrvnWhl = DataDict.Calibration;
FordVehSpdArbnDrvnWhl.LongName = 'Ford Vehicle Speed Arbitration Driven Wheel';
FordVehSpdArbnDrvnWhl.Description = [...
  'This determines which signals are used to calculate Ford Vehicle Speed' ...
  ''];
FordVehSpdArbnDrvnWhl.DocUnits = 'Cnt';
FordVehSpdArbnDrvnWhl.EngDT = dt.lgc;
FordVehSpdArbnDrvnWhl.EngVal = 0;
FordVehSpdArbnDrvnWhl.EngMin = 0;
FordVehSpdArbnDrvnWhl.EngMax = 1;
FordVehSpdArbnDrvnWhl.Cardinality = 'Cmn';
FordVehSpdArbnDrvnWhl.CustomerVisible = false;
FordVehSpdArbnDrvnWhl.Online = false;
FordVehSpdArbnDrvnWhl.Impact = 'M';
FordVehSpdArbnDrvnWhl.TuningOwner = 'CSE';
FordVehSpdArbnDrvnWhl.GraphLink = {''};
FordVehSpdArbnDrvnWhl.Monotony = 'None';
FordVehSpdArbnDrvnWhl.MaxGrad = Inf;
FordVehSpdArbnDrvnWhl.PortName = 'FordVehSpdArbnDrvnWhl';


FordVehSpdArbnTireCircumMax = DataDict.Calibration;
FordVehSpdArbnTireCircumMax.LongName = 'Ford Vehicle Speed Arbitration Tire Circumference Maximum';
FordVehSpdArbnTireCircumMax.Description = [...
  'This is used in calculating Ford Vehicle Speed'];
FordVehSpdArbnTireCircumMax.DocUnits = 'MilliMtr';
FordVehSpdArbnTireCircumMax.EngDT = dt.u16;
FordVehSpdArbnTireCircumMax.EngVal = 2500;
FordVehSpdArbnTireCircumMax.EngMin = 1000;
FordVehSpdArbnTireCircumMax.EngMax = 7500;
FordVehSpdArbnTireCircumMax.Cardinality = 'Cmn';
FordVehSpdArbnTireCircumMax.CustomerVisible = false;
FordVehSpdArbnTireCircumMax.Online = false;
FordVehSpdArbnTireCircumMax.Impact = 'M';
FordVehSpdArbnTireCircumMax.TuningOwner = 'CSE';
FordVehSpdArbnTireCircumMax.GraphLink = {''};
FordVehSpdArbnTireCircumMax.Monotony = 'None';
FordVehSpdArbnTireCircumMax.MaxGrad = Inf;
FordVehSpdArbnTireCircumMax.PortName = 'FordVehSpdArbnTireCircumMax';


FordVehSpdArbnTireCircumMin = DataDict.Calibration;
FordVehSpdArbnTireCircumMin.LongName = 'Ford Vehicle Speed Arbitration Tire Circumference Minimum';
FordVehSpdArbnTireCircumMin.Description = [...
  'This is used in calculating Ford Vehicle Speed'];
FordVehSpdArbnTireCircumMin.DocUnits = 'MilliMtr';
FordVehSpdArbnTireCircumMin.EngDT = dt.u16;
FordVehSpdArbnTireCircumMin.EngVal = 1500;
FordVehSpdArbnTireCircumMin.EngMin = 0;
FordVehSpdArbnTireCircumMin.EngMax = 6500;
FordVehSpdArbnTireCircumMin.Cardinality = 'Cmn';
FordVehSpdArbnTireCircumMin.CustomerVisible = false;
FordVehSpdArbnTireCircumMin.Online = false;
FordVehSpdArbnTireCircumMin.Impact = 'M';
FordVehSpdArbnTireCircumMin.TuningOwner = 'CSE';
FordVehSpdArbnTireCircumMin.GraphLink = {''};
FordVehSpdArbnTireCircumMin.Monotony = 'None';
FordVehSpdArbnTireCircumMin.MaxGrad = Inf;
FordVehSpdArbnTireCircumMin.PortName = 'FordVehSpdArbnTireCircumMin';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
FordVehTireCircum = DataDict.NVM;
FordVehTireCircum.LongName = 'Ford Vehicle Tire Circumference';
FordVehTireCircum.Description = [...
  'This signal indicates the circumference of Ford Vehicle Tire which isu' ...
  'sed to calculate ford vehicle speed'];
FordVehTireCircum.DocUnits = 'MilliMtr';
FordVehTireCircum.EngDT = dt.u16;
FordVehTireCircum.EngInit = [];
FordVehTireCircum.EngMin = 0;
FordVehTireCircum.EngMax = 65535;
FordVehTireCircum.CustomerVisible = false;
FordVehTireCircum.Impact = 'H';
FordVehTireCircum.TuningOwner = 'FDD';
FordVehTireCircum.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

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


DRVNVEHSPDMAX_KPH_F32 = DataDict.Constant;
DRVNVEHSPDMAX_KPH_F32.LongName = 'Driven Vehicle Speed Maximum';
DRVNVEHSPDMAX_KPH_F32.Description = [...
  'Maximum value of Least Driven Vehicle Speed'];
DRVNVEHSPDMAX_KPH_F32.DocUnits = 'Kph';
DRVNVEHSPDMAX_KPH_F32.EngDT = dt.float32;
DRVNVEHSPDMAX_KPH_F32.EngVal = 65535;
DRVNVEHSPDMAX_KPH_F32.Define = 'Local';


FORDTIERCIRCUMMAX_MILLIMTR_U16 = DataDict.Constant;
FORDTIERCIRCUMMAX_MILLIMTR_U16.LongName = 'Ford Tire Circumference Maximum';
FORDTIERCIRCUMMAX_MILLIMTR_U16.Description = [...
  'Maximum value of Ford Tier Circumference'];
FORDTIERCIRCUMMAX_MILLIMTR_U16.DocUnits = 'MilliMtr';
FORDTIERCIRCUMMAX_MILLIMTR_U16.EngDT = dt.u16;
FORDTIERCIRCUMMAX_MILLIMTR_U16.EngVal = 65534;
FORDTIERCIRCUMMAX_MILLIMTR_U16.Define = 'Local';


FORDVEHSPDLOQLYMAX_KPH_F32 = DataDict.Constant;
FORDVEHSPDLOQLYMAX_KPH_F32.LongName = 'Ford Vehicle Speed Low Quality Maximum';
FORDVEHSPDLOQLYMAX_KPH_F32.Description = [...
  'Maximum value of Ford Vehicle Speed Low Quality'];
FORDVEHSPDLOQLYMAX_KPH_F32.DocUnits = 'Kph';
FORDVEHSPDLOQLYMAX_KPH_F32.EngDT = dt.float32;
FORDVEHSPDLOQLYMAX_KPH_F32.EngVal = 1023.9;
FORDVEHSPDLOQLYMAX_KPH_F32.Define = 'Local';


FORDVEHSPDLOQLYMIN_KPH_F32 = DataDict.Constant;
FORDVEHSPDLOQLYMIN_KPH_F32.LongName = 'Ford Vehicle Speed Low Quality Minimum';
FORDVEHSPDLOQLYMIN_KPH_F32.Description = [...
  'Minimum value of Ford Vehicle Speed Low Quality'];
FORDVEHSPDLOQLYMIN_KPH_F32.DocUnits = 'Kph';
FORDVEHSPDLOQLYMIN_KPH_F32.EngDT = dt.float32;
FORDVEHSPDLOQLYMIN_KPH_F32.EngVal = 0;
FORDVEHSPDLOQLYMIN_KPH_F32.Define = 'Local';


FORDVEHSPDMAX_KPH_F32 = DataDict.Constant;
FORDVEHSPDMAX_KPH_F32.LongName = 'Ford Vehicle Speed Maximum';
FORDVEHSPDMAX_KPH_F32.Description = [...
  'Maximum value of Ford Vehicle Speed'];
FORDVEHSPDMAX_KPH_F32.DocUnits = 'Kph';
FORDVEHSPDMAX_KPH_F32.EngDT = dt.float32;
FORDVEHSPDMAX_KPH_F32.EngVal = 1023.9;
FORDVEHSPDMAX_KPH_F32.Define = 'Local';


FORDVEHSPDMIN_KPH_F32 = DataDict.Constant;
FORDVEHSPDMIN_KPH_F32.LongName = 'Ford Vehicle Speed Minimum';
FORDVEHSPDMIN_KPH_F32.Description = [...
  'Minimum value of Ford Vehicle Speed'];
FORDVEHSPDMIN_KPH_F32.DocUnits = 'Kph';
FORDVEHSPDMIN_KPH_F32.EngDT = dt.float32;
FORDVEHSPDMIN_KPH_F32.EngVal = 0;
FORDVEHSPDMIN_KPH_F32.Define = 'Local';


MILLIMTRTOKILOMTR_ULS_F32 = DataDict.Constant;
MILLIMTRTOKILOMTR_ULS_F32.LongName = 'Millimeter to Kilometer';
MILLIMTRTOKILOMTR_ULS_F32.Description = [...
  'Used to convert Millimeter to Kilometer'];
MILLIMTRTOKILOMTR_ULS_F32.DocUnits = 'Uls';
MILLIMTRTOKILOMTR_ULS_F32.EngDT = dt.float32;
MILLIMTRTOKILOMTR_ULS_F32.EngVal = 1e-06;
MILLIMTRTOKILOMTR_ULS_F32.Define = 'Local';


RADTOREV_ULS_F32 = DataDict.Constant;
RADTOREV_ULS_F32.LongName = 'Radian to Revolution';
RADTOREV_ULS_F32.Description = [...
  'Used to convert radian to revolution'];
RADTOREV_ULS_F32.DocUnits = 'Uls';
RADTOREV_ULS_F32.EngDT = dt.float32;
RADTOREV_ULS_F32.EngVal = 0.159154943;
RADTOREV_ULS_F32.Define = 'Local';


SECTOHR_ULS_F32 = DataDict.Constant;
SECTOHR_ULS_F32.LongName = 'Sec to hour';
SECTOHR_ULS_F32.Description = 'Used to convert sec to hour';
SECTOHR_ULS_F32.DocUnits = 'Uls';
SECTOHR_ULS_F32.EngDT = dt.float32;
SECTOHR_ULS_F32.EngVal = 1800;
SECTOHR_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
