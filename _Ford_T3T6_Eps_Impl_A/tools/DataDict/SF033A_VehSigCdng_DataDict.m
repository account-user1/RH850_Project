%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-Nov-2016 09:52:14       %
%                                  Created with tool release: 2.49.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF033A = DataDict.FDD;
SF033A.Version = '2.2.X';
SF033A.LongName = 'Vehicle Signal Conditioning';
SF033A.ShoName  = 'VehSigCdng';
SF033A.DesignASIL = 'D';
SF033A.Description = [...
  'Serial communications signals are received and processed via SER. SER ' ...
  'also determines the validity of an incoming signal and may choose to r' ...
  'eplace the serial comm value with a calibrated default value.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
VehSigCdngInit1 = DataDict.Runnable;
VehSigCdngInit1.Context = 'Rte';
VehSigCdngInit1.TimeStep = 0;
VehSigCdngInit1.Description = [...
  'This runnable is used to initialize the components filter.'];

VehSigCdngPer1 = DataDict.Runnable;
VehSigCdngPer1.Context = 'Rte';
VehSigCdngPer1.TimeStep = 0.002;
VehSigCdngPer1.Description = [...
  'This runnable is used condition various system inputs for use later.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'VehSigCdngPer1'};
FltInj_f32.Description = [...
  'Client call to the fault injection component.'];
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



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Measured Handwheel Torque.';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'VehSigCdngPer1'};
HwTq.ReadType = 'Rte';


VehLatASerlCom = DataDict.IpSignal;
VehLatASerlCom.LongName = 'Vehicle Lateral Acceleration Serial Communication';
VehLatASerlCom.Description = [...
  'Lateral acceleration of the vehicle, which comes off the serial commun' ...
  'ication bus.'];
VehLatASerlCom.DocUnits = 'MtrPerSecSqd';
VehLatASerlCom.EngDT = dt.float32;
VehLatASerlCom.EngInit = 0;
VehLatASerlCom.EngMin = -10;
VehLatASerlCom.EngMax = 10;
VehLatASerlCom.ReadIn = {'VehSigCdngPer1'};
VehLatASerlCom.ReadType = 'Rte';


VehLatAVldSerlCom = DataDict.IpSignal;
VehLatAVldSerlCom.LongName = 'Vehicle Lateral Acceleration Validity Serial Communication';
VehLatAVldSerlCom.Description = [...
  'Validity of the Lateral Acceleration signal from the serial communicat' ...
  'ion bus'];
VehLatAVldSerlCom.DocUnits = 'Cnt';
VehLatAVldSerlCom.EngDT = dt.lgc;
VehLatAVldSerlCom.EngInit = 0;
VehLatAVldSerlCom.EngMin = 0;
VehLatAVldSerlCom.EngMax = 1;
VehLatAVldSerlCom.ReadIn = {'VehSigCdngPer1'};
VehLatAVldSerlCom.ReadType = 'Rte';


VehLgtASerlCom = DataDict.IpSignal;
VehLgtASerlCom.LongName = 'Vehicle Longitudinal Acceleration Serial Communication';
VehLgtASerlCom.Description = [...
  'Longitudinal acceleration of the vehicle, which comes off the serial c' ...
  'ommunication bus.'];
VehLgtASerlCom.DocUnits = 'MtrPerSecSqd';
VehLgtASerlCom.EngDT = dt.float32;
VehLgtASerlCom.EngInit = 0;
VehLgtASerlCom.EngMin = -180;
VehLgtASerlCom.EngMax = 180;
VehLgtASerlCom.ReadIn = {'VehSigCdngPer1'};
VehLgtASerlCom.ReadType = 'Rte';


VehLgtAVldSerlCom = DataDict.IpSignal;
VehLgtAVldSerlCom.LongName = 'Vehicle Longitudinal Acceleration Validity Serial Communication';
VehLgtAVldSerlCom.Description = [...
  'Validity of the Longitudinal Acceleration signal from the serial commu' ...
  'nication bus'];
VehLgtAVldSerlCom.DocUnits = 'Cnt';
VehLgtAVldSerlCom.EngDT = dt.lgc;
VehLgtAVldSerlCom.EngInit = 0;
VehLgtAVldSerlCom.EngMin = 0;
VehLgtAVldSerlCom.EngMax = 1;
VehLgtAVldSerlCom.ReadIn = {'VehSigCdngPer1'};
VehLgtAVldSerlCom.ReadType = 'Rte';


VehSpdOvrd = DataDict.IpSignal;
VehSpdOvrd.LongName = 'Vehicle Speed Override';
VehSpdOvrd.Description = [...
  'Vehicle speed value that overrides the normally calculated value.'];
VehSpdOvrd.DocUnits = 'Kph';
VehSpdOvrd.EngDT = dt.float32;
VehSpdOvrd.EngInit = 100;
VehSpdOvrd.EngMin = 0;
VehSpdOvrd.EngMax = 511;
VehSpdOvrd.ReadIn = {'VehSigCdngPer1'};
VehSpdOvrd.ReadType = 'Rte';


VehSpdOvrdEna = DataDict.IpSignal;
VehSpdOvrdEna.LongName = 'Vehicle Speed Override Enable';
VehSpdOvrdEna.Description = [...
  'Signal that enables and disables the use of the vehicle speed override' ...
  '. '];
VehSpdOvrdEna.DocUnits = 'Cnt';
VehSpdOvrdEna.EngDT = dt.lgc;
VehSpdOvrdEna.EngInit = 0;
VehSpdOvrdEna.EngMin = 0;
VehSpdOvrdEna.EngMax = 1;
VehSpdOvrdEna.ReadIn = {'VehSigCdngPer1'};
VehSpdOvrdEna.ReadType = 'Rte';


VehSpdSerlCom = DataDict.IpSignal;
VehSpdSerlCom.LongName = 'Vehicle Speed Serial Communication';
VehSpdSerlCom.Description = [...
  'Vehicle Speed signal, which comes off the serial communication bus.'];
VehSpdSerlCom.DocUnits = 'Kph';
VehSpdSerlCom.EngDT = dt.float32;
VehSpdSerlCom.EngInit = 0;
VehSpdSerlCom.EngMin = 0;
VehSpdSerlCom.EngMax = 511;
VehSpdSerlCom.ReadIn = {'VehSigCdngPer1'};
VehSpdSerlCom.ReadType = 'Rte';


VehSpdVldSerlCom = DataDict.IpSignal;
VehSpdVldSerlCom.LongName = 'Vehicle Speed Validity Serial Communication';
VehSpdVldSerlCom.Description = [...
  'Validity of the Vehicle Speed signal from the serial communication bus' ...
  '.'];
VehSpdVldSerlCom.DocUnits = 'Cnt';
VehSpdVldSerlCom.EngDT = dt.lgc;
VehSpdVldSerlCom.EngInit = 0;
VehSpdVldSerlCom.EngMin = 0;
VehSpdVldSerlCom.EngMax = 1;
VehSpdVldSerlCom.ReadIn = {'VehSigCdngPer1'};
VehSpdVldSerlCom.ReadType = 'Rte';


VehYawRateSerlCom = DataDict.IpSignal;
VehYawRateSerlCom.LongName = 'Vehicle Yaw Rate Serial Communication';
VehYawRateSerlCom.Description = [...
  'Yaw rate of the vehicle, which comes off the serial communication bus.' ...
  ''];
VehYawRateSerlCom.DocUnits = 'VehDegPerSec';
VehYawRateSerlCom.EngDT = dt.float32;
VehYawRateSerlCom.EngInit = 0;
VehYawRateSerlCom.EngMin = -120;
VehYawRateSerlCom.EngMax = 120;
VehYawRateSerlCom.ReadIn = {'VehSigCdngPer1'};
VehYawRateSerlCom.ReadType = 'Rte';


VehYawRateVldSerlCom = DataDict.IpSignal;
VehYawRateVldSerlCom.LongName = 'Vehicle Yaw Rate Validity Serial Communication';
VehYawRateVldSerlCom.Description = [...
  'Validity of the Vehicle Yaw Rate signal from the serial communication ' ...
  'bus.'];
VehYawRateVldSerlCom.DocUnits = 'Cnt';
VehYawRateVldSerlCom.EngDT = dt.lgc;
VehYawRateVldSerlCom.EngInit = 0;
VehYawRateVldSerlCom.EngMin = 0;
VehYawRateVldSerlCom.EngMax = 1;
VehYawRateVldSerlCom.ReadIn = {'VehSigCdngPer1'};
VehYawRateVldSerlCom.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
VehLatA = DataDict.OpSignal;
VehLatA.LongName = 'Vehicle Lateral Acceleration';
VehLatA.Description = [...
  'Conditioned value for system-wide usage.'];
VehLatA.DocUnits = 'MtrPerSecSqd';
VehLatA.SwcShoName = 'VehSigCdng';
VehLatA.EngDT = dt.float32;
VehLatA.EngInit = 0;
VehLatA.EngMin = -10;
VehLatA.EngMax = 10;
VehLatA.TestTolerance = 0.0078125;
VehLatA.WrittenIn = {'VehSigCdngPer1'};
VehLatA.WriteType = 'Rte';


VehLatAEstimd = DataDict.OpSignal;
VehLatAEstimd.LongName = 'Vehicle Lateral Acceleration Estimated';
VehLatAEstimd.Description = [...
  'Estimate of Lateral Acceleration which is calculated from the Vehicle ' ...
  'Speed and Yaw Rate Serial Com signals.'];
VehLatAEstimd.DocUnits = 'MtrPerSecSqd';
VehLatAEstimd.SwcShoName = 'VehSigCdng';
VehLatAEstimd.EngDT = dt.float32;
VehLatAEstimd.EngInit = 0;
VehLatAEstimd.EngMin = -10;
VehLatAEstimd.EngMax = 10;
VehLatAEstimd.TestTolerance = 0.0078125;
VehLatAEstimd.WrittenIn = {'VehSigCdngPer1'};
VehLatAEstimd.WriteType = 'Rte';


VehLatAEstimdVld = DataDict.OpSignal;
VehLatAEstimdVld.LongName = 'Vehicle Lateral Acceleration Estimated Validity';
VehLatAEstimdVld.Description = [...
  'Validity signals for the estimate of Vehicle Lateral Acceleration.'];
VehLatAEstimdVld.DocUnits = 'Cnt';
VehLatAEstimdVld.SwcShoName = 'VehSigCdng';
VehLatAEstimdVld.EngDT = dt.lgc;
VehLatAEstimdVld.EngInit = 0;
VehLatAEstimdVld.EngMin = 0;
VehLatAEstimdVld.EngMax = 1;
VehLatAEstimdVld.TestTolerance = 0;
VehLatAEstimdVld.WrittenIn = {'VehSigCdngPer1'};
VehLatAEstimdVld.WriteType = 'Rte';


VehLatAVld = DataDict.OpSignal;
VehLatAVld.LongName = 'Vehicle Lateral Acceleration Validity';
VehLatAVld.Description = [...
  'True When Lateral Acceleration is Trusted.'];
VehLatAVld.DocUnits = 'Cnt';
VehLatAVld.SwcShoName = 'VehSigCdng';
VehLatAVld.EngDT = dt.lgc;
VehLatAVld.EngInit = 0;
VehLatAVld.EngMin = 0;
VehLatAVld.EngMax = 1;
VehLatAVld.TestTolerance = 0;
VehLatAVld.WrittenIn = {'VehSigCdngPer1'};
VehLatAVld.WriteType = 'Rte';


VehLgtA = DataDict.OpSignal;
VehLgtA.LongName = 'Vehicle Longitudinal Acceleration';
VehLgtA.Description = [...
  'Conditioned value for system-wide usage.'];
VehLgtA.DocUnits = 'KphPerSec';
VehLgtA.SwcShoName = 'VehSigCdng';
VehLgtA.EngDT = dt.float32;
VehLgtA.EngInit = 0;
VehLgtA.EngMin = -50;
VehLgtA.EngMax = 50;
VehLgtA.TestTolerance = 0.0078125;
VehLgtA.WrittenIn = {'VehSigCdngPer1'};
VehLgtA.WriteType = 'Rte';


VehLgtAVld = DataDict.OpSignal;
VehLgtAVld.LongName = 'Vehicle Longitudinal Acceleration Validity';
VehLgtAVld.Description = [...
  'True When Longitudinal Acceleration is Trusted.'];
VehLgtAVld.DocUnits = 'Cnt';
VehLgtAVld.SwcShoName = 'VehSigCdng';
VehLgtAVld.EngDT = dt.lgc;
VehLgtAVld.EngInit = 0;
VehLgtAVld.EngMin = 0;
VehLgtAVld.EngMax = 1;
VehLgtAVld.TestTolerance = 0;
VehLgtAVld.WrittenIn = {'VehSigCdngPer1'};
VehLgtAVld.WriteType = 'Rte';


VehSpd = DataDict.OpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'Conditioned Value For System-Wide Usage.'];
VehSpd.DocUnits = 'Kph';
VehSpd.SwcShoName = 'VehSigCdng';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.TestTolerance = 0.0078125;
VehSpd.WrittenIn = {'VehSigCdngPer1'};
VehSpd.WriteType = 'Rte';


VehSpdVld = DataDict.OpSignal;
VehSpdVld.LongName = 'Vehicle Speed Validity';
VehSpdVld.Description = 'True When Speed Is Trusted.';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.SwcShoName = 'VehSigCdng';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.TestTolerance = 0;
VehSpdVld.WrittenIn = {'VehSigCdngPer1'};
VehSpdVld.WriteType = 'Rte';


VehYawRate = DataDict.OpSignal;
VehYawRate.LongName = 'Vehicle Yaw Rate';
VehYawRate.Description = [...
  'Conditioned Value For System-Wide Usage.'];
VehYawRate.DocUnits = 'VehDegPerSec';
VehYawRate.SwcShoName = 'VehSigCdng';
VehYawRate.EngDT = dt.float32;
VehYawRate.EngInit = 0;
VehYawRate.EngMin = -120;
VehYawRate.EngMax = 120;
VehYawRate.TestTolerance = 0.00390625;
VehYawRate.WrittenIn = {'VehSigCdngPer1'};
VehYawRate.WriteType = 'Rte';


VehYawRateVld = DataDict.OpSignal;
VehYawRateVld.LongName = 'Vehicle Yaw Rate Validity';
VehYawRateVld.Description = 'True When Yaw Rate is Trusted.';
VehYawRateVld.DocUnits = 'Cnt';
VehYawRateVld.SwcShoName = 'VehSigCdng';
VehYawRateVld.EngDT = dt.lgc;
VehYawRateVld.EngInit = 0;
VehYawRateVld.EngMin = 0;
VehYawRateVld.EngMax = 1;
VehYawRateVld.TestTolerance = 0;
VehYawRateVld.WrittenIn = {'VehSigCdngPer1'};
VehYawRateVld.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
VehSigCdngDftLatA = DataDict.Calibration;
VehSigCdngDftLatA.LongName = 'Default Lateral Acceleration';
VehSigCdngDftLatA.Description = [...
  'If serial comm goes bad, system receives this as a value.'];
VehSigCdngDftLatA.DocUnits = 'MtrPerSecSqd';
VehSigCdngDftLatA.EngDT = dt.float32;
VehSigCdngDftLatA.EngVal = 0;
VehSigCdngDftLatA.EngMin = -10;
VehSigCdngDftLatA.EngMax = 10;
VehSigCdngDftLatA.Cardinality = 'Cmn';
VehSigCdngDftLatA.CustomerVisible = false;
VehSigCdngDftLatA.Online = false;
VehSigCdngDftLatA.Impact = 'H';
VehSigCdngDftLatA.TuningOwner = 'CSE';
VehSigCdngDftLatA.GraphLink = {''};
VehSigCdngDftLatA.Monotony = 'None';
VehSigCdngDftLatA.MaxGrad = 20;
VehSigCdngDftLatA.PortName = 'VehSigCdngDftLatA';


VehSigCdngDftLgtA = DataDict.Calibration;
VehSigCdngDftLgtA.LongName = 'Default Longitudinal Acceleration';
VehSigCdngDftLgtA.Description = [...
  'If serial comm goes bad, system receives this as a value.'];
VehSigCdngDftLgtA.DocUnits = 'KphPerSec';
VehSigCdngDftLgtA.EngDT = dt.float32;
VehSigCdngDftLgtA.EngVal = 0;
VehSigCdngDftLgtA.EngMin = -50;
VehSigCdngDftLgtA.EngMax = 50;
VehSigCdngDftLgtA.Cardinality = 'Cmn';
VehSigCdngDftLgtA.CustomerVisible = false;
VehSigCdngDftLgtA.Online = false;
VehSigCdngDftLgtA.Impact = 'H';
VehSigCdngDftLgtA.TuningOwner = 'CSE';
VehSigCdngDftLgtA.GraphLink = {''};
VehSigCdngDftLgtA.Monotony = 'None';
VehSigCdngDftLgtA.MaxGrad = 100;
VehSigCdngDftLgtA.PortName = 'VehSigCdngDftLgtA';


VehSigCdngDftVehSpd = DataDict.Calibration;
VehSigCdngDftVehSpd.LongName = 'Default Vehicle Speed';
VehSigCdngDftVehSpd.Description = [...
  'If serial comm goes bad, system receives this as a value.'];
VehSigCdngDftVehSpd.DocUnits = 'Kph';
VehSigCdngDftVehSpd.EngDT = dt.float32;
VehSigCdngDftVehSpd.EngVal = 100;
VehSigCdngDftVehSpd.EngMin = 0;
VehSigCdngDftVehSpd.EngMax = 511;
VehSigCdngDftVehSpd.Cardinality = 'Cmn';
VehSigCdngDftVehSpd.CustomerVisible = false;
VehSigCdngDftVehSpd.Online = false;
VehSigCdngDftVehSpd.Impact = 'H';
VehSigCdngDftVehSpd.TuningOwner = 'CSE';
VehSigCdngDftVehSpd.GraphLink = {''};
VehSigCdngDftVehSpd.Monotony = 'None';
VehSigCdngDftVehSpd.MaxGrad = 511;
VehSigCdngDftVehSpd.PortName = 'VehSigCdngDftVehSpd';


VehSigCdngDftYawRate = DataDict.Calibration;
VehSigCdngDftYawRate.LongName = 'Default Yaw Rate';
VehSigCdngDftYawRate.Description = [...
  'If serial comm goes bad, system receives this as a value.'];
VehSigCdngDftYawRate.DocUnits = 'VehDegPerSec';
VehSigCdngDftYawRate.EngDT = dt.float32;
VehSigCdngDftYawRate.EngVal = 0;
VehSigCdngDftYawRate.EngMin = -120;
VehSigCdngDftYawRate.EngMax = 120;
VehSigCdngDftYawRate.Cardinality = 'Cmn';
VehSigCdngDftYawRate.CustomerVisible = false;
VehSigCdngDftYawRate.Online = false;
VehSigCdngDftYawRate.Impact = 'H';
VehSigCdngDftYawRate.TuningOwner = 'CSE';
VehSigCdngDftYawRate.GraphLink = {''};
VehSigCdngDftYawRate.Monotony = 'None';
VehSigCdngDftYawRate.MaxGrad = 240;
VehSigCdngDftYawRate.PortName = 'VehSigCdngDftYawRate';


VehSigCdngLatADifThd = DataDict.Calibration;
VehSigCdngLatADifThd.LongName = 'Lateral Acceleration Difference Threshold';
VehSigCdngLatADifThd.Description = [...
  'When serial comm goes invalid, SF033A will not output valid=true until' ...
  ' serial comm is good again and serial comm vs. conditioned values diff' ...
  'er by less than this cal.'];
VehSigCdngLatADifThd.DocUnits = 'MtrPerSecSqd';
VehSigCdngLatADifThd.EngDT = dt.float32;
VehSigCdngLatADifThd.EngVal = 0.2;
VehSigCdngLatADifThd.EngMin = 0.1;
VehSigCdngLatADifThd.EngMax = 10;
VehSigCdngLatADifThd.Cardinality = 'Cmn';
VehSigCdngLatADifThd.CustomerVisible = false;
VehSigCdngLatADifThd.Online = false;
VehSigCdngLatADifThd.Impact = 'H';
VehSigCdngLatADifThd.TuningOwner = 'CSE';
VehSigCdngLatADifThd.GraphLink = {''};
VehSigCdngLatADifThd.Monotony = 'None';
VehSigCdngLatADifThd.MaxGrad = 9.9;
VehSigCdngLatADifThd.PortName = 'VehSigCdngLatADifThd';


VehSigCdngLatAFilFrq = DataDict.Calibration;
VehSigCdngLatAFilFrq.LongName = 'Lateral Acceleration Filter Frequency';
VehSigCdngLatAFilFrq.Description = [...
  'Conditioning of lat accel is by low-pass filter.  This cal is the cuto' ...
  'ff frequency.'];
VehSigCdngLatAFilFrq.DocUnits = 'Hz';
VehSigCdngLatAFilFrq.EngDT = dt.float32;
VehSigCdngLatAFilFrq.EngVal = 100;
VehSigCdngLatAFilFrq.EngMin = 1;
VehSigCdngLatAFilFrq.EngMax = 100;
VehSigCdngLatAFilFrq.Cardinality = 'Cmn';
VehSigCdngLatAFilFrq.CustomerVisible = false;
VehSigCdngLatAFilFrq.Online = false;
VehSigCdngLatAFilFrq.Impact = 'H';
VehSigCdngLatAFilFrq.TuningOwner = 'CSE';
VehSigCdngLatAFilFrq.GraphLink = {''};
VehSigCdngLatAFilFrq.Monotony = 'None';
VehSigCdngLatAFilFrq.MaxGrad = 99;
VehSigCdngLatAFilFrq.PortName = 'VehSigCdngLatAFilFrq';


VehSigCdngLatASlewRate = DataDict.Calibration;
VehSigCdngLatASlewRate.LongName = 'Lateral Acceleration Slew Rate';
VehSigCdngLatASlewRate.Description = [...
  'Governs the rate of change of Lateral Acceleration'];
VehSigCdngLatASlewRate.DocUnits = 'MtrPerSecSqd';
VehSigCdngLatASlewRate.EngDT = dt.float32;
VehSigCdngLatASlewRate.EngVal = 10;
VehSigCdngLatASlewRate.EngMin = 0.1;
VehSigCdngLatASlewRate.EngMax = 400;
VehSigCdngLatASlewRate.Cardinality = 'Inin';
VehSigCdngLatASlewRate.CustomerVisible = false;
VehSigCdngLatASlewRate.Online = false;
VehSigCdngLatASlewRate.Impact = 'H';
VehSigCdngLatASlewRate.TuningOwner = 'CSE';
VehSigCdngLatASlewRate.GraphLink = {''};
VehSigCdngLatASlewRate.Monotony = 'None';
VehSigCdngLatASlewRate.MaxGrad = 399.9;
VehSigCdngLatASlewRate.PortName = 'VehSigCdngLatASlewRate';


VehSigCdngLtgADifThd = DataDict.Calibration;
VehSigCdngLtgADifThd.LongName = 'Longitudinal Acceleration Difference Threshold';
VehSigCdngLtgADifThd.Description = [...
  'When serial comm goes invalid, SF033A will not output valid=true until' ...
  ' serial comm is good again and serial comm vs. conditioned values diff' ...
  'er by less than this cal.'];
VehSigCdngLtgADifThd.DocUnits = 'KphPerSec';
VehSigCdngLtgADifThd.EngDT = dt.float32;
VehSigCdngLtgADifThd.EngVal = 1;
VehSigCdngLtgADifThd.EngMin = 0.1;
VehSigCdngLtgADifThd.EngMax = 10;
VehSigCdngLtgADifThd.Cardinality = 'Cmn';
VehSigCdngLtgADifThd.CustomerVisible = false;
VehSigCdngLtgADifThd.Online = false;
VehSigCdngLtgADifThd.Impact = 'H';
VehSigCdngLtgADifThd.TuningOwner = 'CSE';
VehSigCdngLtgADifThd.GraphLink = {''};
VehSigCdngLtgADifThd.Monotony = 'None';
VehSigCdngLtgADifThd.MaxGrad = 9.9;
VehSigCdngLtgADifThd.PortName = 'VehSigCdngLtgADifThd';


VehSigCdngLtgASlewRate = DataDict.Calibration;
VehSigCdngLtgASlewRate.LongName = 'Longitudinal Acceleration Slew Rate';
VehSigCdngLtgASlewRate.Description = [...
  'Governs the rate of change of longitudinal accel (i.e. "jerk").  Enter' ...
  'ing or exiting a 1 g stop in 1/4sec would produce a jerk of 140 kph/s^' ...
  '2.'];
VehSigCdngLtgASlewRate.DocUnits = 'KphPerSecSqd';
VehSigCdngLtgASlewRate.EngDT = dt.float32;
VehSigCdngLtgASlewRate.EngVal = 50;
VehSigCdngLtgASlewRate.EngMin = 0.1;
VehSigCdngLtgASlewRate.EngMax = 500;
VehSigCdngLtgASlewRate.Cardinality = 'Inin';
VehSigCdngLtgASlewRate.CustomerVisible = false;
VehSigCdngLtgASlewRate.Online = false;
VehSigCdngLtgASlewRate.Impact = 'H';
VehSigCdngLtgASlewRate.TuningOwner = 'CSE';
VehSigCdngLtgASlewRate.GraphLink = {''};
VehSigCdngLtgASlewRate.Monotony = 'None';
VehSigCdngLtgASlewRate.MaxGrad = 499.9;
VehSigCdngLtgASlewRate.PortName = 'VehSigCdngLtgASlewRate';


VehSigCdngVehSpdDifThd = DataDict.Calibration;
VehSigCdngVehSpdDifThd.LongName = 'Vehicle Speed Difference Threshold';
VehSigCdngVehSpdDifThd.Description = [...
  'When serial comm goes invalid, SF033A will not output valid=true until' ...
  ' serial comm is good again and serial comm vs. conditioned values diff' ...
  'er by less than this cal.'];
VehSigCdngVehSpdDifThd.DocUnits = 'Kph';
VehSigCdngVehSpdDifThd.EngDT = dt.float32;
VehSigCdngVehSpdDifThd.EngVal = 5;
VehSigCdngVehSpdDifThd.EngMin = 0.1;
VehSigCdngVehSpdDifThd.EngMax = 511;
VehSigCdngVehSpdDifThd.Cardinality = 'Cmn';
VehSigCdngVehSpdDifThd.CustomerVisible = false;
VehSigCdngVehSpdDifThd.Online = false;
VehSigCdngVehSpdDifThd.Impact = 'H';
VehSigCdngVehSpdDifThd.TuningOwner = 'CSE';
VehSigCdngVehSpdDifThd.GraphLink = {''};
VehSigCdngVehSpdDifThd.Monotony = 'None';
VehSigCdngVehSpdDifThd.MaxGrad = 511;
VehSigCdngVehSpdDifThd.PortName = 'VehSigCdngVehSpdDifThd';


VehSigCdngVehSpdSlewRate = DataDict.Calibration;
VehSigCdngVehSpdSlewRate.LongName = 'Vehicle Speed Slew Rate';
VehSigCdngVehSpdSlewRate.Description = [...
  'Governs the rate of change of veh spd.  i.e. How fast can the vehicle ' ...
  'accelerate and decelerate?  1g acceleration = 35 kph/sec'];
VehSigCdngVehSpdSlewRate.DocUnits = 'KphPerSec';
VehSigCdngVehSpdSlewRate.EngDT = dt.float32;
VehSigCdngVehSpdSlewRate.EngVal = 50;
VehSigCdngVehSpdSlewRate.EngMin = 1;
VehSigCdngVehSpdSlewRate.EngMax = 50;
VehSigCdngVehSpdSlewRate.Cardinality = 'Inin';
VehSigCdngVehSpdSlewRate.CustomerVisible = false;
VehSigCdngVehSpdSlewRate.Online = false;
VehSigCdngVehSpdSlewRate.Impact = 'H';
VehSigCdngVehSpdSlewRate.TuningOwner = 'CSE';
VehSigCdngVehSpdSlewRate.GraphLink = {''};
VehSigCdngVehSpdSlewRate.Monotony = 'None';
VehSigCdngVehSpdSlewRate.MaxGrad = 49;
VehSigCdngVehSpdSlewRate.PortName = 'VehSigCdngVehSpdSlewRate';


VehSigCdngVehYawSlewRate = DataDict.Calibration;
VehSigCdngVehYawSlewRate.LongName = 'Vehicle Yaw Slew Rate';
VehSigCdngVehYawSlewRate.Description = [...
  'Governs the rate of change of Yaw Rate.  i.e. How fast can the vehicle' ...
  ' go from not spinning to spinning? 0 deg/sec to 120 deg/sec in 0.1 sec' ...
  ' = 1200'];
VehSigCdngVehYawSlewRate.DocUnits = 'VehDegPerSecSqd';
VehSigCdngVehYawSlewRate.EngDT = dt.float32;
VehSigCdngVehYawSlewRate.EngVal = 120;
VehSigCdngVehYawSlewRate.EngMin = 1;
VehSigCdngVehYawSlewRate.EngMax = 1200;
VehSigCdngVehYawSlewRate.Cardinality = 'Cmn';
VehSigCdngVehYawSlewRate.CustomerVisible = false;
VehSigCdngVehYawSlewRate.Online = false;
VehSigCdngVehYawSlewRate.Impact = 'H';
VehSigCdngVehYawSlewRate.TuningOwner = 'CSE';
VehSigCdngVehYawSlewRate.GraphLink = {''};
VehSigCdngVehYawSlewRate.Monotony = 'None';
VehSigCdngVehYawSlewRate.MaxGrad = 1199;
VehSigCdngVehYawSlewRate.PortName = 'VehSigCdngVehYawSlewRate';


VehSigCdngYawRateDifThd = DataDict.Calibration;
VehSigCdngYawRateDifThd.LongName = 'Vehicle Yaw Rate Difference Threshold';
VehSigCdngYawRateDifThd.Description = [...
  'When serial comm goes invalid, SF033A will not output valid=true until' ...
  ' serial comm is good again and serial comm vs. conditioned values diff' ...
  'er by less than this cal.'];
VehSigCdngYawRateDifThd.DocUnits = 'VehDegPerSec';
VehSigCdngYawRateDifThd.EngDT = dt.float32;
VehSigCdngYawRateDifThd.EngVal = 20;
VehSigCdngYawRateDifThd.EngMin = 0.1;
VehSigCdngYawRateDifThd.EngMax = 120;
VehSigCdngYawRateDifThd.Cardinality = 'Cmn';
VehSigCdngYawRateDifThd.CustomerVisible = false;
VehSigCdngYawRateDifThd.Online = false;
VehSigCdngYawRateDifThd.Impact = 'H';
VehSigCdngYawRateDifThd.TuningOwner = 'CSE';
VehSigCdngYawRateDifThd.GraphLink = {''};
VehSigCdngYawRateDifThd.Monotony = 'None';
VehSigCdngYawRateDifThd.MaxGrad = 119.9;
VehSigCdngYawRateDifThd.PortName = 'VehSigCdngYawRateDifThd';



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
HwTqFilRec = DataDict.PIM;
HwTqFilRec.LongName = 'Handwheel/Hardware Torque Filter Record';
HwTqFilRec.Description = [...
  'Filter state variable structure for filtering Handwheel Torque'];
HwTqFilRec.DocUnits = 'Cnt';
HwTqFilRec.EngDT = struct.FilLpRec1;
HwTqFilRec.EngMin = [struct('FilSt',-10,'FilGain',0)];
HwTqFilRec.EngMax = [struct('FilSt',10,'FilGain',1)];
HwTqFilRec.InitRowCol = [1  1];


LatAFilRec = DataDict.PIM;
LatAFilRec.LongName = 'Lateral Acceleration Filter Record';
LatAFilRec.Description = [...
  'A Structure of Low Pass Filter Gain and State Variable'];
LatAFilRec.DocUnits = 'Cnt';
LatAFilRec.EngDT = struct.FilLpRec1;
LatAFilRec.EngMin = [struct('FilSt',-10,'FilGain',0.01)];
LatAFilRec.EngMax = [struct('FilSt',10,'FilGain',0.8)];
LatAFilRec.InitRowCol = [1  1];


PrevLatA = DataDict.PIM;
PrevLatA.LongName = 'Previous Lateral Acceleration';
PrevLatA.Description = [...
  'State Variable for Lateral Acceleration'];
PrevLatA.DocUnits = 'MtrPerSecSqd';
PrevLatA.EngDT = dt.float32;
PrevLatA.EngMin = -10;
PrevLatA.EngMax = 10;
PrevLatA.InitRowCol = [1  1];


PrevLatAVld = DataDict.PIM;
PrevLatAVld.LongName = 'Previous Lateral Acceleration Valid';
PrevLatAVld.Description = [...
  'True When the Previous Cycle of Lateral Acceleration is Trusted.'];
PrevLatAVld.DocUnits = 'Cnt';
PrevLatAVld.EngDT = dt.lgc;
PrevLatAVld.EngMin = 0;
PrevLatAVld.EngMax = 1;
PrevLatAVld.InitRowCol = [1  1];


PrevLtgA = DataDict.PIM;
PrevLtgA.LongName = 'Previous Longitudinal Acceleration';
PrevLtgA.Description = [...
  'State Variable for Longitudinal Acceleration'];
PrevLtgA.DocUnits = 'KphPerSec';
PrevLtgA.EngDT = dt.float32;
PrevLtgA.EngMin = -180;
PrevLtgA.EngMax = 180;
PrevLtgA.InitRowCol = [1  1];


PrevLtgAVld = DataDict.PIM;
PrevLtgAVld.LongName = 'Previous Longitudinal Acceleration Valid';
PrevLtgAVld.Description = [...
  'True When the Previous Cycle of Longitudinal Acceleration is Trusted.'];
PrevLtgAVld.DocUnits = 'Cnt';
PrevLtgAVld.EngDT = dt.lgc;
PrevLtgAVld.EngMin = 0;
PrevLtgAVld.EngMax = 1;
PrevLtgAVld.InitRowCol = [1  1];


PrevVehSpd = DataDict.PIM;
PrevVehSpd.LongName = 'Previous Vehicle Speed';
PrevVehSpd.Description = 'State Variable for Vehicle Speed';
PrevVehSpd.DocUnits = 'Kph';
PrevVehSpd.EngDT = dt.float32;
PrevVehSpd.EngMin = 0;
PrevVehSpd.EngMax = 511;
PrevVehSpd.InitRowCol = [1  1];


PrevVehSpdVld = DataDict.PIM;
PrevVehSpdVld.LongName = 'Previous Vehicle Speed Valid';
PrevVehSpdVld.Description = [...
  'True When the Previous Cycle of Vehicle Speed is Trusted.'];
PrevVehSpdVld.DocUnits = 'Cnt';
PrevVehSpdVld.EngDT = dt.lgc;
PrevVehSpdVld.EngMin = 0;
PrevVehSpdVld.EngMax = 1;
PrevVehSpdVld.InitRowCol = [1  1];


PrevYawRate = DataDict.PIM;
PrevYawRate.LongName = 'Previous Yaw Rate';
PrevYawRate.Description = [...
  'State Variable for Yaw Rate Limiting'];
PrevYawRate.DocUnits = 'VehDegPerSec';
PrevYawRate.EngDT = dt.float32;
PrevYawRate.EngMin = -120;
PrevYawRate.EngMax = 120;
PrevYawRate.InitRowCol = [1  1];


PrevYawRateVld = DataDict.PIM;
PrevYawRateVld.LongName = 'Previous Yaw Rate Valid';
PrevYawRateVld.Description = [...
  'True When the Previous Cycle of Yaw Rate is Trusted.'];
PrevYawRateVld.DocUnits = 'Cnt';
PrevYawRateVld.EngDT = dt.lgc;
PrevYawRateVld.EngMin = 0;
PrevYawRateVld.EngMax = 1;
PrevYawRateVld.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_PIOVER180_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_PIOVER180_ULS_F32.LongName = 'Pi Over 180 Degrees';
ARCHGLBPRM_PIOVER180_ULS_F32.Description = 'Pi divided by 180 ';
ARCHGLBPRM_PIOVER180_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_PIOVER180_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_PIOVER180_ULS_F32.EngVal = 0.017453293;
ARCHGLBPRM_PIOVER180_ULS_F32.Define = 'Global';


AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32 = DataDict.Constant;
AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32.LongName = 'Acceleration Unit Conversion';
AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32.Description = [...
  'Multiply by this to convert m/sec^2 into Kph/sec'];
AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32.DocUnits = 'KphPerSecPerMtrPerSecSqd';
AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32.EngDT = dt.float32;
AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32.EngVal = 0.2777779996;
AUNITCNVN_KPHPERSECPERMTRPERSECSQD_F32.Define = 'Local';


FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Latitude Acceleration';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.Description = [...
  'Fault Injection Vehicle Signal Conditioning Serial Communication Vehic' ...
  'al Latitude Acceleration Constant'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.DocUnits = 'Uls';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.EngVal = 14;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Logitude Acceleration';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.Description = [...
  'Fault Injection Vehicle Signal Conditioning Serial Communication Vehic' ...
  'al Logitude Acceleration Constant'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.DocUnits = 'Uls';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.EngVal = 13;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Speed';
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.Description = [...
  'Fault Injection Vehicle Signal Conditioning Serial Communication Vehic' ...
  'al Speed Constant'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.DocUnits = 'Uls';
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.EngVal = 12;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.LongName = 'Fault Injection Damping Command Base Constant';
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.Description = [...
  'Fault Injection Damping Command Base Constant'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.DocUnits = 'Uls';
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.EngVal = 10;
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.Define = 'Global';


KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32 = DataDict.Constant;
KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32.LongName = 'Kph Convert To Meter Per Second';
KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32.Description = [...
  'Constant to convert values with uints of Kph to have units of m/s.'];
KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32.DocUnits = 'MtrPerSecPerKph';
KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32.EngDT = dt.float32;
KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32.EngVal = 0.278;
KPHCONVTOMTRPERSEC_MTRPERSECPERKPH_F32.Define = 'Local';


LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32 = DataDict.Constant;
LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32.LongName = 'Lateral Accleration Estimated Maximum Limit';
LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32.Description = [...
  'Maximum value allowed for the Estimated Lateral Accleration.'];
LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32.EngDT = dt.float32;
LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32.EngVal = 10;
LATACCEESTIMDMAXLIM_MTRPERSECSQD_F32.Define = 'Local';


LATACCEESTIMDMINLIM_MTRPERSECSQD_F32 = DataDict.Constant;
LATACCEESTIMDMINLIM_MTRPERSECSQD_F32.LongName = 'Lateral Accleration Estimated Minimum Limit';
LATACCEESTIMDMINLIM_MTRPERSECSQD_F32.Description = [...
  'Minimum value allowed for the Estimated Lateral Accleration.'];
LATACCEESTIMDMINLIM_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
LATACCEESTIMDMINLIM_MTRPERSECSQD_F32.EngDT = dt.float32;
LATACCEESTIMDMINLIM_MTRPERSECSQD_F32.EngVal = -10;
LATACCEESTIMDMINLIM_MTRPERSECSQD_F32.Define = 'Local';


VEHLATAMAXLIM_MTRPERSECSQD_F32 = DataDict.Constant;
VEHLATAMAXLIM_MTRPERSECSQD_F32.LongName = 'Vehicle Lateral Acceleration Maximum Limit';
VEHLATAMAXLIM_MTRPERSECSQD_F32.Description = [...
  'Vehicle Lateral Acceleration Maximum Limit'];
VEHLATAMAXLIM_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
VEHLATAMAXLIM_MTRPERSECSQD_F32.EngDT = dt.float32;
VEHLATAMAXLIM_MTRPERSECSQD_F32.EngVal = 10;
VEHLATAMAXLIM_MTRPERSECSQD_F32.Define = 'Local';


VEHLATAMINLIM_MTRPERSECSQD_F32 = DataDict.Constant;
VEHLATAMINLIM_MTRPERSECSQD_F32.LongName = 'Vehicle Lateral Acceleration Minimum Limit';
VEHLATAMINLIM_MTRPERSECSQD_F32.Description = [...
  'Vehicle Lateral Acceleration Minimum Limit'];
VEHLATAMINLIM_MTRPERSECSQD_F32.DocUnits = 'MtrPerSecSqd';
VEHLATAMINLIM_MTRPERSECSQD_F32.EngDT = dt.float32;
VEHLATAMINLIM_MTRPERSECSQD_F32.EngVal = -10;
VEHLATAMINLIM_MTRPERSECSQD_F32.Define = 'Local';


VEHLGTAMAXLIM_KPHPERSEC_F32 = DataDict.Constant;
VEHLGTAMAXLIM_KPHPERSEC_F32.LongName = 'Vehicle Longitudinal Acceleration Maximum Limit';
VEHLGTAMAXLIM_KPHPERSEC_F32.Description = [...
  'Vehicle Longitudinal Acceleration Maximum Limit'];
VEHLGTAMAXLIM_KPHPERSEC_F32.DocUnits = 'KphPerSec';
VEHLGTAMAXLIM_KPHPERSEC_F32.EngDT = dt.float32;
VEHLGTAMAXLIM_KPHPERSEC_F32.EngVal = 50;
VEHLGTAMAXLIM_KPHPERSEC_F32.Define = 'Local';


VEHLGTAMINLIM_KPHPERSEC_F32 = DataDict.Constant;
VEHLGTAMINLIM_KPHPERSEC_F32.LongName = 'Vehicle Longitudinal Acceleration Minimum Limit';
VEHLGTAMINLIM_KPHPERSEC_F32.Description = [...
  'Vehicle Longitudinal Acceleration Minimum Limit'];
VEHLGTAMINLIM_KPHPERSEC_F32.DocUnits = 'KphPerSec';
VEHLGTAMINLIM_KPHPERSEC_F32.EngDT = dt.float32;
VEHLGTAMINLIM_KPHPERSEC_F32.EngVal = -50;
VEHLGTAMINLIM_KPHPERSEC_F32.Define = 'Local';


VEHSPDMAXLIM_KPH_F32 = DataDict.Constant;
VEHSPDMAXLIM_KPH_F32.LongName = 'Vehicle Speed Maximum Limit';
VEHSPDMAXLIM_KPH_F32.Description = 'Vehicle Speed Maximum Limit';
VEHSPDMAXLIM_KPH_F32.DocUnits = 'Kph';
VEHSPDMAXLIM_KPH_F32.EngDT = dt.float32;
VEHSPDMAXLIM_KPH_F32.EngVal = 511;
VEHSPDMAXLIM_KPH_F32.Define = 'Local';


VEHSPDMINLIM_KPH_F32 = DataDict.Constant;
VEHSPDMINLIM_KPH_F32.LongName = 'Vehicle Speed Minimum Limit';
VEHSPDMINLIM_KPH_F32.Description = 'Vehicle Speed Minimum Limit';
VEHSPDMINLIM_KPH_F32.DocUnits = 'Kph';
VEHSPDMINLIM_KPH_F32.EngDT = dt.float32;
VEHSPDMINLIM_KPH_F32.EngVal = 0;
VEHSPDMINLIM_KPH_F32.Define = 'Local';


VEHSPDOVRDHWTQTHD_HWNWTMTR_F32 = DataDict.Constant;
VEHSPDOVRDHWTQTHD_HWNWTMTR_F32.LongName = 'Vehicle Speed Override Handwheel Torque Threshold';
VEHSPDOVRDHWTQTHD_HWNWTMTR_F32.Description = [...
  'The magnitude of Handwheel Torque must be less than this value before ' ...
  'an override of vehicle speed is allowed.'];
VEHSPDOVRDHWTQTHD_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
VEHSPDOVRDHWTQTHD_HWNWTMTR_F32.EngDT = dt.float32;
VEHSPDOVRDHWTQTHD_HWNWTMTR_F32.EngVal = 2;
VEHSPDOVRDHWTQTHD_HWNWTMTR_F32.Define = 'Local';


VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32 = DataDict.Constant;
VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32.LongName = 'Vehicle Yaw Rate Maximum Limit';
VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32.Description = 'Vehicle Yaw Rate Maximum Limit';
VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32.DocUnits = 'VehDegPerSec';
VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32.EngDT = dt.float32;
VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32.EngVal = 120;
VEHYAWRATEMAXLIM_VEHDEGPERSEC_F32.Define = 'Local';


VEHYAWRATEMINLIM_VEHDEGPERSEC_F32 = DataDict.Constant;
VEHYAWRATEMINLIM_VEHDEGPERSEC_F32.LongName = 'Vehicle Yaw Rate Minimum Limit';
VEHYAWRATEMINLIM_VEHDEGPERSEC_F32.Description = 'Vehicle Yaw Rate Minimum Limit';
VEHYAWRATEMINLIM_VEHDEGPERSEC_F32.DocUnits = 'VehDegPerSec';
VEHYAWRATEMINLIM_VEHDEGPERSEC_F32.EngDT = dt.float32;
VEHYAWRATEMINLIM_VEHDEGPERSEC_F32.EngVal = -120;
VEHYAWRATEMINLIM_VEHDEGPERSEC_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
