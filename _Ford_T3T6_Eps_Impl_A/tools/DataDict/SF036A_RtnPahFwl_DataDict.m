%%-------------------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Jan-2016 10:55:20               %
%                                  Created with tool release: 2.28.0             %
%                                  Synergy file: 1.0.2                           %
%                                  Date Modified: 25-Feb-2016                    %
%                                  Derived by:Muragesh Asundi (KPIT)             %
%%-------------------------------------------------------------------------------%

SF036A = DataDict.FDD;
SF036A.Version = '1.0.X';
SF036A.LongName = 'Return Path Firewall';
SF036A.ShoName  = 'RtnPahFwl';
SF036A.DesignASIL = 'D';
SF036A.Description = [...
  'This function bounds motor torque commands from SF-02 Active Return, w' ...
  'hose primary input is handwheel position. The incoming motor torque co' ...
  'mmand is saturated to a set of upper and lower boundaries chosen accor' ...
  'ding to handwheel position.'];
SF036A.Dependencies = ...
	{'SysGlbPrm', 'ArchGlbPrm'};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
RtnPahFwlInit1 = DataDict.Runnable;
RtnPahFwlInit1.Context = 'Rte';
RtnPahFwlInit1.TimeStep = 0;

RtnPahFwlPer1 = DataDict.Runnable;
RtnPahFwlPer1.Context = 'Rte';
RtnPahFwlPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'RtnPahFwlInit1','RtnPahFwlPer1'};
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'RtnPahFwlPer1'};
HwAg.ReadType = 'Rte';


MfgEnaSt = DataDict.IpSignal;
MfgEnaSt.LongName = 'Manufacturing Enable State';
MfgEnaSt.DocUnits = 'Cnt';
MfgEnaSt.EngDT = enum.MfgEnaSt1;
MfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MfgEnaSt.ReadIn = {'RtnPahFwlPer1'};
MfgEnaSt.ReadType = 'Rte';


RtnCmd = DataDict.IpSignal;
RtnCmd.LongName = 'Return Command';
RtnCmd.DocUnits = 'MotNwtMtr';
RtnCmd.EngDT = dt.float32;
RtnCmd.EngInit = 0;
RtnCmd.EngMin = -8.8;
RtnCmd.EngMax = 8.8;
RtnCmd.ReadIn = {'RtnPahFwlPer1'};
RtnCmd.ReadType = 'Rte';


RtnCmdDi = DataDict.IpSignal;
RtnCmdDi.LongName = 'Return Command Disable';
RtnCmdDi.DocUnits = 'Cnt';
RtnCmdDi.EngDT = dt.lgc;
RtnCmdDi.EngInit = 0;
RtnCmdDi.EngMin = 0;
RtnCmdDi.EngMax = 1;
RtnCmdDi.ReadIn = {'RtnPahFwlPer1'};
RtnCmdDi.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'RtnPahFwlPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
RtnCmdLimd = DataDict.OpSignal;
RtnCmdLimd.LongName = 'Limited Return Command';
RtnCmdLimd.Description = 'Limited motor torque commands';
RtnCmdLimd.DocUnits = 'MotNwtMtr';
RtnCmdLimd.SwcShoName = 'RtnPahFwl';
RtnCmdLimd.EngDT = dt.float32;
RtnCmdLimd.EngInit = 0;
RtnCmdLimd.EngMin = -8.8;
RtnCmdLimd.EngMax = 8.8;
RtnCmdLimd.TestTolerance = 0.0005;
RtnCmdLimd.WrittenIn = {'RtnPahFwlPer1'};
RtnCmdLimd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
RtnPahFwlUpprBndTblX = DataDict.Calibration;
RtnPahFwlUpprBndTblX.LongName = 'Upper Bound X';
RtnPahFwlUpprBndTblX.Description = [...
  'Upper boundary X-axis.  Vehicle speed dependent.Tuning occurs in quadr' ...
  'ants 1 & 2 of HwPos(X) vs motor torque(Y). Quadrants 3 & 4 tuning are ' ...
  'just run-time calculations from the 1 & 2 cals.'];
RtnPahFwlUpprBndTblX.DocUnits = 'HwDeg';
RtnPahFwlUpprBndTblX.EngDT = dt.s11p4;
RtnPahFwlUpprBndTblX.EngVal =  ...
   [-400             -100                0               50              100              150              200              250              300              350              400];
RtnPahFwlUpprBndTblX.EngMin = -1440;
RtnPahFwlUpprBndTblX.EngMax = 1440;
RtnPahFwlUpprBndTblX.Cardinality = 'Inin';
RtnPahFwlUpprBndTblX.CustomerVisible = false;
RtnPahFwlUpprBndTblX.Online = false;
RtnPahFwlUpprBndTblX.Impact = 'H';
RtnPahFwlUpprBndTblX.TuningOwner = 'Safety';
RtnPahFwlUpprBndTblX.GraphLink = {''};
RtnPahFwlUpprBndTblX.Monotony = 'Strictly_Increasing';
RtnPahFwlUpprBndTblX.MaxGrad = 2880;
RtnPahFwlUpprBndTblX.PortName = 'RtnPahFwlUpprBndTblX';


RtnPahFwlUpprBndTblY = DataDict.Calibration;
RtnPahFwlUpprBndTblY.LongName = 'Upper Bound Y';
RtnPahFwlUpprBndTblY.Description = [...
  'Upper boundary Y-axis.  Vehicle speed dependent.Tuning occurs in quadr' ...
  'ants 1 & 2 of HwPos(X) vs motor torque(Y). Quadrants 3 & 4 tuning are ' ...
  'just run-time calculations from the 1 & 2 cals.'];
RtnPahFwlUpprBndTblY.DocUnits = 'MotNwtMtr';
RtnPahFwlUpprBndTblY.EngDT = dt.s4p11;
RtnPahFwlUpprBndTblY.EngVal =  ...
   [8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8              
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8 
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8
    8.8              8.8              8.8              8.8              8.8              8.8              8.8              8.8 ];
RtnPahFwlUpprBndTblY.EngMin = -8.8;
RtnPahFwlUpprBndTblY.EngMax = 8.8;
RtnPahFwlUpprBndTblY.Cardinality = 'Inin';
RtnPahFwlUpprBndTblY.CustomerVisible = false;
RtnPahFwlUpprBndTblY.Online = false;
RtnPahFwlUpprBndTblY.Impact = 'H';
RtnPahFwlUpprBndTblY.TuningOwner = 'Safety';
RtnPahFwlUpprBndTblY.GraphLink = {'RtnPahFwlUpprBndTblX',' RtnPahFwlVehSpd'};
RtnPahFwlUpprBndTblY.Monotony = 'None';
RtnPahFwlUpprBndTblY.MaxGrad = 17.6;
RtnPahFwlUpprBndTblY.PortName = 'RtnPahFwlUpprBndTblY';


RtnPahFwlVehSpd = DataDict.Calibration;
RtnPahFwlVehSpd.LongName = 'Vehicle Speed';
RtnPahFwlVehSpd.Description = [...
  'Vehicle speed 1D table for boundary lookup.'];
RtnPahFwlVehSpd.DocUnits = 'Kph';
RtnPahFwlVehSpd.EngDT = dt.u9p7;
RtnPahFwlVehSpd.EngVal =  ...
   [0                3               10               20               30               60              100              255];
RtnPahFwlVehSpd.EngMin = 0;
RtnPahFwlVehSpd.EngMax = 511;
RtnPahFwlVehSpd.Cardinality = 'Inin';
RtnPahFwlVehSpd.CustomerVisible = false;
RtnPahFwlVehSpd.Online = false;
RtnPahFwlVehSpd.Impact = 'H';
RtnPahFwlVehSpd.TuningOwner = 'Safety';
RtnPahFwlVehSpd.GraphLink = {''};
RtnPahFwlVehSpd.Monotony = 'Strictly_Increasing';
RtnPahFwlVehSpd.MaxGrad = 511;
RtnPahFwlVehSpd.PortName = 'RtnPahFwlVehSpd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dRtnPahFwlLowrBnd = DataDict.Display;
dRtnPahFwlLowrBnd.LongName = 'Return Path Firewall Lower Bound';
dRtnPahFwlLowrBnd.Description = [...
  'Dynamically chosen lower boundary value.'];
dRtnPahFwlLowrBnd.DocUnits = 'MotNwtMtr';
dRtnPahFwlLowrBnd.EngDT = dt.float32;
dRtnPahFwlLowrBnd.EngMin = -8.8;
dRtnPahFwlLowrBnd.EngMax = 8.8;
dRtnPahFwlLowrBnd.InitRowCol = [1  1];


dRtnPahFwlOverBnd = DataDict.Display;
dRtnPahFwlOverBnd.LongName = 'Return Path Firewall Over Bound';
dRtnPahFwlOverBnd.Description = [...
  'True means that signal value is outside boundaries.'];
dRtnPahFwlOverBnd.DocUnits = 'Cnt';
dRtnPahFwlOverBnd.EngDT = dt.lgc;
dRtnPahFwlOverBnd.EngMin = 0;
dRtnPahFwlOverBnd.EngMax = 1;
dRtnPahFwlOverBnd.InitRowCol = [1  1];


dRtnPahFwlUpprBnd = DataDict.Display;
dRtnPahFwlUpprBnd.LongName = 'Return Path Firewall Upper Bound';
dRtnPahFwlUpprBnd.Description = [...
  'Dynamically chosen upper boundary value.'];
dRtnPahFwlUpprBnd.DocUnits = 'MotNwtMtr';
dRtnPahFwlUpprBnd.EngDT = dt.float32;
dRtnPahFwlUpprBnd.EngMin = -8.8;
dRtnPahFwlUpprBnd.EngMax = 8.8;
dRtnPahFwlUpprBnd.InitRowCol = [1  1];



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
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Header = 'ArchGlbPrm.h';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Header = 'SysGlbPrm.h';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
NtcRtnPahFwlSts = DataDict.NTC;
NtcRtnPahFwlSts.NtcNr = NtcNr1.NTCNR_0X0C7;
NtcRtnPahFwlSts.NtcTyp = 'None';
NtcRtnPahFwlSts.LongName = 'NTC Return Path Firewall Reached Status';
NtcRtnPahFwlSts.Description = 'Update the status of NTC Return Path Firewall Reached in all states while the operating system is available including Warm Init, Operate, and Disable.';
NtcRtnPahFwlSts.NtcStInfo = DataDict.NtcStInfoBitPacked;
NtcRtnPahFwlSts.NtcStInfo.Bit0Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit1Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit2Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit3Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit4Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit5Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit6Descr = 'Unused';
NtcRtnPahFwlSts.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
