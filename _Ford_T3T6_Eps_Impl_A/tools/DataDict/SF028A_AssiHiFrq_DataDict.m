%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Jun-2016 10:29:17       %
%                                  Created with tool release: 2.40.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF028A = DataDict.FDD;
SF028A.Version = '1.1.X';
SF028A.LongName = 'High Frequency Assist';
SF028A.ShoName  = 'AssiHiFrq';
SF028A.DesignASIL = 'D';
SF028A.Description = [...
  'This function provides a means of compensating for system inertia and ' ...
  'road feedback. It is tunable over both vehicle speed and handwheel tor' ...
  'que to obtain the desired level of disturbance rejection under various' ...
  ' operating conditions. It passes handwheel torque through a high-pass ' ...
  'filter and multiplies the resulting signal by a tunable gain factor. T' ...
  'he output is known as high-frequency assist and is simply added to the' ...
  ' usual assist calculated elsewhere'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
AssiHiFrqInit1 = DataDict.Runnable;
AssiHiFrqInit1.Context = 'Rte';
AssiHiFrqInit1.TimeStep = 0;
AssiHiFrqInit1.Description = [...
  'Assist High Frequency Initialization Runnable'];

AssiHiFrqPer1 = DataDict.Runnable;
AssiHiFrqPer1.Context = 'Rte';
AssiHiFrqPer1.TimeStep = 0.002;
AssiHiFrqPer1.Description = [...
  'Assist High Frequency Periodic Runnable'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'AssiHiFrqPer1'};
HwTq.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'AssiHiFrqPer1'};
VehSpd.ReadType = 'Rte';


WhlImbRejctnAmp = DataDict.IpSignal;
WhlImbRejctnAmp.LongName = 'Wheel Imbalance Rejection Amplitude';
WhlImbRejctnAmp.Description = [...
  'Wheel Imbalance Rejection Amplitude'];
WhlImbRejctnAmp.DocUnits = 'MotNwtMtr';
WhlImbRejctnAmp.EngDT = dt.float32;
WhlImbRejctnAmp.EngInit = 0;
WhlImbRejctnAmp.EngMin = 0;
WhlImbRejctnAmp.EngMax = 8.8;
WhlImbRejctnAmp.ReadIn = {'AssiHiFrqPer1'};
WhlImbRejctnAmp.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiHiFrqCmd = DataDict.OpSignal;
AssiHiFrqCmd.LongName = 'High Frequency Assist Command';
AssiHiFrqCmd.Description = 'High frequency assist component';
AssiHiFrqCmd.DocUnits = 'MotNwtMtr';
AssiHiFrqCmd.SwcShoName = 'AssiHiFrq';
AssiHiFrqCmd.EngDT = dt.float32;
AssiHiFrqCmd.EngInit = 0;
AssiHiFrqCmd.EngMin = -8.8;
AssiHiFrqCmd.EngMax = 8.8;
AssiHiFrqCmd.TestTolerance = 0.000488281;
AssiHiFrqCmd.WrittenIn = {'AssiHiFrqPer1'};
AssiHiFrqCmd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
AssiHiFrqGainY = DataDict.Calibration;
AssiHiFrqGainY.LongName = 'Gain Y';
AssiHiFrqGainY.Description = [...
  'Normal tuning high frequency gain table y-variable'];
AssiHiFrqGainY.DocUnits = 'MotNwtMtrPerHwNwtMtr';
AssiHiFrqGainY.EngDT = dt.u3p13;
AssiHiFrqGainY.EngVal =  ...
   [0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2
    0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13
    0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08
    0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04
    0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0];
AssiHiFrqGainY.EngMin = 0;
AssiHiFrqGainY.EngMax = 5;
AssiHiFrqGainY.Cardinality = 'Rt';
AssiHiFrqGainY.CustomerVisible = true;
AssiHiFrqGainY.Online = true;
AssiHiFrqGainY.Impact = 'H';
AssiHiFrqGainY.TuningOwner = 'CSE';
AssiHiFrqGainY.GraphLink = {'AssiHiFrqTqX',' SysGlbPrmVehSpdBilnrSeln'};
AssiHiFrqGainY.Monotony = 'None';
AssiHiFrqGainY.MaxGrad = 998;
AssiHiFrqGainY.PortName = 'AssiHiFrqGainY';


AssiHiFrqHpFilFrq = DataDict.Calibration;
AssiHiFrqHpFilFrq.LongName = 'Torque High-pass Filter Frequency';
AssiHiFrqHpFilFrq.Description = [...
  'High-Pass Filter Corner Frequency of high-frequency Torque calculation' ...
  ''];
AssiHiFrqHpFilFrq.DocUnits = 'Hz';
AssiHiFrqHpFilFrq.EngDT = dt.float32;
AssiHiFrqHpFilFrq.EngVal = 15;
AssiHiFrqHpFilFrq.EngMin = 0.01;
AssiHiFrqHpFilFrq.EngMax = 500;
AssiHiFrqHpFilFrq.Cardinality = 'Inin';
AssiHiFrqHpFilFrq.CustomerVisible = false;
AssiHiFrqHpFilFrq.Online = false;
AssiHiFrqHpFilFrq.Impact = 'L';
AssiHiFrqHpFilFrq.TuningOwner = 'CSE';
AssiHiFrqHpFilFrq.GraphLink = {''};
AssiHiFrqHpFilFrq.Monotony = 'None';
AssiHiFrqHpFilFrq.MaxGrad = 0;
AssiHiFrqHpFilFrq.PortName = 'AssiHiFrqHpFilFrq';


AssiHiFrqHpFilFrqY = DataDict.Calibration;
AssiHiFrqHpFilFrqY.LongName = 'High Pass Filter Frequency Y';
AssiHiFrqHpFilFrqY.Description = [...
  'Table of filter cutoff frequencies, dependent on vehicle speed.'];
AssiHiFrqHpFilFrqY.DocUnits = 'Hz';
AssiHiFrqHpFilFrqY.EngDT = dt.u7p9;
AssiHiFrqHpFilFrqY.EngVal =  ...
   [8                8                8                8                8                8                8                8                8                8                8                8];
AssiHiFrqHpFilFrqY.EngMin = 5;
AssiHiFrqHpFilFrqY.EngMax = 100;
AssiHiFrqHpFilFrqY.Cardinality = 'Rt';
AssiHiFrqHpFilFrqY.CustomerVisible = false;
AssiHiFrqHpFilFrqY.Online = false;
AssiHiFrqHpFilFrqY.Impact = 'H';
AssiHiFrqHpFilFrqY.TuningOwner = 'CSE';
AssiHiFrqHpFilFrqY.GraphLink = {'SysGlbPrmVehSpdBilnrSeln'};
AssiHiFrqHpFilFrqY.Monotony = 'None';
AssiHiFrqHpFilFrqY.MaxGrad = 998;
AssiHiFrqHpFilFrqY.PortName = 'AssiHiFrqHpFilFrqY';


AssiHiFrqTqWhlImbRejctnTqX = DataDict.Calibration;
AssiHiFrqTqWhlImbRejctnTqX.LongName = 'Wheel Imbalance Rejection Torque X';
AssiHiFrqTqWhlImbRejctnTqX.Description = [...
  'WIR Active tuning high frequency gain table x-variable'];
AssiHiFrqTqWhlImbRejctnTqX.DocUnits = 'HwNwtMtr';
AssiHiFrqTqWhlImbRejctnTqX.EngDT = dt.u5p11;
AssiHiFrqTqWhlImbRejctnTqX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75
    1                1                1                1                1                1                1                1                1                1                1                1
    1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25
    1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5
    2                2                2                2                2                2                2                2                2                2                2                2
    4                4                4                4                4                4                4                4                4                4                4                4
    6                6                6                6                6                6                6                6                6                6                6                6
    7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5
    7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75
    8                8                8                8                8                8                8                8                8                8                8                8];
AssiHiFrqTqWhlImbRejctnTqX.EngMin = 0;
AssiHiFrqTqWhlImbRejctnTqX.EngMax = 10;
AssiHiFrqTqWhlImbRejctnTqX.Cardinality = 'Rt';
AssiHiFrqTqWhlImbRejctnTqX.CustomerVisible = false;
AssiHiFrqTqWhlImbRejctnTqX.Online = true;
AssiHiFrqTqWhlImbRejctnTqX.Impact = 'H';
AssiHiFrqTqWhlImbRejctnTqX.TuningOwner = 'CSE';
AssiHiFrqTqWhlImbRejctnTqX.GraphLink = {''};
AssiHiFrqTqWhlImbRejctnTqX.Monotony = 'Strictly_Increasing';
AssiHiFrqTqWhlImbRejctnTqX.MaxGrad = 998;
AssiHiFrqTqWhlImbRejctnTqX.PortName = 'AssiHiFrqTqWhlImbRejctnTqX';


AssiHiFrqTqX = DataDict.Calibration;
AssiHiFrqTqX.LongName = 'Torque X';
AssiHiFrqTqX.Description = [...
  'Normal tuning high frequency gain table x-variable'];
AssiHiFrqTqX.DocUnits = 'HwNwtMtr';
AssiHiFrqTqX.EngDT = dt.u5p11;
AssiHiFrqTqX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75
    1                1                1                1                1                1                1                1                1                1                1                1
    1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25             1.25
    1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5              1.5
    2                2                2                2                2                2                2                2                2                2                2                2
    4                4                4                4                4                4                4                4                4                4                4                4
    6                6                6                6                6                6                6                6                6                6                6                6
    7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5              7.5
    7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75             7.75
    8                8                8                8                8                8                8                8                8                8                8                8];
AssiHiFrqTqX.EngMin = 0;
AssiHiFrqTqX.EngMax = 10;
AssiHiFrqTqX.Cardinality = 'Rt';
AssiHiFrqTqX.CustomerVisible = true;
AssiHiFrqTqX.Online = true;
AssiHiFrqTqX.Impact = 'H';
AssiHiFrqTqX.TuningOwner = 'CSE';
AssiHiFrqTqX.GraphLink = {''};
AssiHiFrqTqX.Monotony = 'Strictly_Increasing';
AssiHiFrqTqX.MaxGrad = 998;
AssiHiFrqTqX.PortName = 'AssiHiFrqTqX';


AssiHiFrqWhlImbRejctnBlndX = DataDict.Calibration;
AssiHiFrqWhlImbRejctnBlndX.LongName = 'Wheel Imbalance Rejection Blend X';
AssiHiFrqWhlImbRejctnBlndX.Description = 'WIR Blend table x-variable';
AssiHiFrqWhlImbRejctnBlndX.DocUnits = 'MotNwtMtr';
AssiHiFrqWhlImbRejctnBlndX.EngDT = dt.u4p12;
AssiHiFrqWhlImbRejctnBlndX.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5              0.5
    0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75             0.75
    1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1              1.1];
AssiHiFrqWhlImbRejctnBlndX.EngMin = 0;
AssiHiFrqWhlImbRejctnBlndX.EngMax = 8;
AssiHiFrqWhlImbRejctnBlndX.Cardinality = 'Rt';
AssiHiFrqWhlImbRejctnBlndX.CustomerVisible = false;
AssiHiFrqWhlImbRejctnBlndX.Online = true;
AssiHiFrqWhlImbRejctnBlndX.Impact = 'H';
AssiHiFrqWhlImbRejctnBlndX.TuningOwner = 'CSE';
AssiHiFrqWhlImbRejctnBlndX.GraphLink = {''};
AssiHiFrqWhlImbRejctnBlndX.Monotony = 'Strictly_Increasing';
AssiHiFrqWhlImbRejctnBlndX.MaxGrad = 998;
AssiHiFrqWhlImbRejctnBlndX.PortName = 'AssiHiFrqWhlImbRejctnBlndX';


AssiHiFrqWhlImbRejctnBlndY = DataDict.Calibration;
AssiHiFrqWhlImbRejctnBlndY.LongName = 'Wheel Imbalance Rejection Blend Y';
AssiHiFrqWhlImbRejctnBlndY.Description = 'WIR Blend table y-variable';
AssiHiFrqWhlImbRejctnBlndY.DocUnits = 'Uls';
AssiHiFrqWhlImbRejctnBlndY.EngDT = dt.u1p15;
AssiHiFrqWhlImbRejctnBlndY.EngVal =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0];
AssiHiFrqWhlImbRejctnBlndY.EngMin = 0;
AssiHiFrqWhlImbRejctnBlndY.EngMax = 1;
AssiHiFrqWhlImbRejctnBlndY.Cardinality = 'Rt';
AssiHiFrqWhlImbRejctnBlndY.CustomerVisible = false;
AssiHiFrqWhlImbRejctnBlndY.Online = true;
AssiHiFrqWhlImbRejctnBlndY.Impact = 'H';
AssiHiFrqWhlImbRejctnBlndY.TuningOwner = 'CSE';
AssiHiFrqWhlImbRejctnBlndY.GraphLink = {'AssiHiFrqWhlImbRejctnBlndX',' SysGlbPrmVehSpdBilnrSeln'};
AssiHiFrqWhlImbRejctnBlndY.Monotony = 'None';
AssiHiFrqWhlImbRejctnBlndY.MaxGrad = 998;
AssiHiFrqWhlImbRejctnBlndY.PortName = 'AssiHiFrqWhlImbRejctnBlndY';


AssiHiFrqWhlImbRejctnGainY = DataDict.Calibration;
AssiHiFrqWhlImbRejctnGainY.LongName = 'Wheel Imbalance Rejection Gain Y';
AssiHiFrqWhlImbRejctnGainY.Description = [...
  'WIR Active tuning high frequency gain table y-variable'];
AssiHiFrqWhlImbRejctnGainY.DocUnits = 'MotNwtMtrPerHwNwtMtr';
AssiHiFrqWhlImbRejctnGainY.EngDT = dt.u3p13;
AssiHiFrqWhlImbRejctnGainY.EngVal =  ...
   [0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25             0.25
    0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2              0.2
    0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13             0.13
    0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08             0.08
    0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04             0.04
    0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01             0.01
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0
    0                0                0                0                0                0                0                0                0                0                0                0];
AssiHiFrqWhlImbRejctnGainY.EngMin = 0;
AssiHiFrqWhlImbRejctnGainY.EngMax = 5;
AssiHiFrqWhlImbRejctnGainY.Cardinality = 'Rt';
AssiHiFrqWhlImbRejctnGainY.CustomerVisible = false;
AssiHiFrqWhlImbRejctnGainY.Online = true;
AssiHiFrqWhlImbRejctnGainY.Impact = 'H';
AssiHiFrqWhlImbRejctnGainY.TuningOwner = 'CSE';
AssiHiFrqWhlImbRejctnGainY.GraphLink = {'AssiHiFrqTqWhlImbRejctnTqX',' SysGlbPrmVehSpdBilnrSeln'};
AssiHiFrqWhlImbRejctnGainY.Monotony = 'None';
AssiHiFrqWhlImbRejctnGainY.MaxGrad = 998;
AssiHiFrqWhlImbRejctnGainY.PortName = 'AssiHiFrqWhlImbRejctnGainY';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmVehSpdBilnrSeln = DataDict.ImprtdCal;
SysGlbPrmVehSpdBilnrSeln.DocUnits = 'Kph';
SysGlbPrmVehSpdBilnrSeln.EngDT = dt.u9p7;
SysGlbPrmVehSpdBilnrSeln.EngVal =  ...
   [0                5               15               30               60               80              100              120              150              180              200              220];
SysGlbPrmVehSpdBilnrSeln.EngMin = 0;
SysGlbPrmVehSpdBilnrSeln.EngMax = 511;
SysGlbPrmVehSpdBilnrSeln.PortName = 'SysGlbPrmVehSpdBilnrSeln';
SysGlbPrmVehSpdBilnrSeln.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dAssiHiFrqGain = DataDict.Display;
dAssiHiFrqGain.LongName = 'Gain';
dAssiHiFrqGain.Description = [...
  'Final gain value applied to high-frequency component of assist.'];
dAssiHiFrqGain.DocUnits = 'MotNwtMtrPerHwNwtMtr';
dAssiHiFrqGain.EngDT = dt.float32;
dAssiHiFrqGain.EngMin = 0;
dAssiHiFrqGain.EngMax = 5;
dAssiHiFrqGain.InitRowCol = [1  1];


dAssiHiFrqGainBlnd = DataDict.Display;
dAssiHiFrqGainBlnd.LongName = 'Gain Blend';
dAssiHiFrqGainBlnd.Description = [...
  'Zero-to-one fraction.  Zero means use entirely WIR-off tuning.  One me' ...
  'ans use entirely WIR-on tuning.'];
dAssiHiFrqGainBlnd.DocUnits = 'Uls';
dAssiHiFrqGainBlnd.EngDT = dt.float32;
dAssiHiFrqGainBlnd.EngMin = 0;
dAssiHiFrqGainBlnd.EngMax = 1;
dAssiHiFrqGainBlnd.InitRowCol = [1  1];


dAssiHiFrqGainWhlImbRejctnZero = DataDict.Display;
dAssiHiFrqGainWhlImbRejctnZero.LongName = 'Gain Wheel Imbalance Rejection Zero';
dAssiHiFrqGainWhlImbRejctnZero.Description = [...
  'Gain value that is applied to high-frequency component of assist whene' ...
  'ver WIR amplitude is zero.'];
dAssiHiFrqGainWhlImbRejctnZero.DocUnits = 'MotNwtMtrPerHwNwtMtr';
dAssiHiFrqGainWhlImbRejctnZero.EngDT = dt.float32;
dAssiHiFrqGainWhlImbRejctnZero.EngMin = 0;
dAssiHiFrqGainWhlImbRejctnZero.EngMax = 5;
dAssiHiFrqGainWhlImbRejctnZero.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
HwTqHpFil = DataDict.PIM;
HwTqHpFil.LongName = 'Handwheel Torque High Pass Filter';
HwTqHpFil.Description = [...
  'Structure for a high pass filter on handhweel torque containing state ' ...
  'variables.'];
HwTqHpFil.DocUnits = 'HwNwtMtr';
HwTqHpFil.EngDT = struct.FilHpRec1;
HwTqHpFil.EngMin = [struct('FilLpRec',[struct('FilSt',-3.402823466e+38,'FilGain',0)],'CorrnFac',0)];
HwTqHpFil.EngMax = [struct('FilLpRec',[struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)],'CorrnFac',3.402823466e+38)];
HwTqHpFil.InitRowCol = [1  1];



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


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
