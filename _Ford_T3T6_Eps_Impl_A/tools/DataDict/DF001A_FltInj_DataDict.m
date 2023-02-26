%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 14-Jun-2016 06:43:38       %
%                                  Created with tool release: 2.41.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

DF001A = DataDict.FDD;
DF001A.Version = '2.2.X';
DF001A.LongName = 'Fault Injection';
DF001A.ShoName  = 'FltInj';
DF001A.DesignASIL = 'QM';
DF001A.Description = [...
  'This function injects custom values into a desired signal path.  The v' ...
  'alues to be injected are obtained via CANape interface and can take th' ...
  'e form of a sinusoid, boolean value, integer value, or gain & offset a' ...
  'pplied to a floating point signal.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FltInjPer1 = DataDict.Runnable;
FltInjPer1.Context = 'Rte';
FltInjPer1.TimeStep = 0.002;
FltInjPer1.Description = [...
  'It can generate a static offset, relative offset, or a change in path ' ...
  'gain depending on configuration of parameters provided via CANape inte' ...
  'rface.'];

FltInj_f32 = DataDict.SrvRunnable;
FltInj_f32.Context = 'Rte';
FltInj_f32.Description = [...
  'FltInj_f32 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.(The SigPah_Arg signal of the FltInj_f32 server runnable has a specia' ...
  'l unit test consideration (MIL, SIL, PIL) that the range called out in' ...
  ' the data dictionary should only be used for defining "input" vectors,' ...
  ' and the range check that is normally done on the "output" is skipped ' ...
  'in this special instance.)'];
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
FltInj_f32.Arguments(1).TestTolerance = 63;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_f32 runnable is trigger' ...
  'ed.'];
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = [...
  'It determines whether FltInj_f32 runnable is triggered.'];

FltInj_logl = DataDict.SrvRunnable;
FltInj_logl.Context = 'Rte';
FltInj_logl.Description = [...
  'FltInj_logl runnable determines whether overwriting the SigPah signal.' ...
  ''];
FltInj_logl.Return = DataDict.CSReturn;
FltInj_logl.Return.Type = 'None';
FltInj_logl.Return.Min = [];
FltInj_logl.Return.Max = [];
FltInj_logl.Return.TestTolerance = [];
FltInj_logl.Arguments(1) = DataDict.CSArguments;
FltInj_logl.Arguments(1).Name = 'SigPah';
FltInj_logl.Arguments(1).EngDT = dt.lgc;
FltInj_logl.Arguments(1).EngMin = 0;
FltInj_logl.Arguments(1).EngMax = 1;
FltInj_logl.Arguments(1).TestTolerance = 0;
FltInj_logl.Arguments(1).Units = 'Cnt';
FltInj_logl.Arguments(1).Direction = 'InOut';
FltInj_logl.Arguments(1).InitRowCol = [1  1];
FltInj_logl.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_logl runnable is trigge' ...
  'red.'];
FltInj_logl.Arguments(2) = DataDict.CSArguments;
FltInj_logl.Arguments(2).Name = 'LocnKey';
FltInj_logl.Arguments(2).EngDT = dt.u16;
FltInj_logl.Arguments(2).EngMin = 0;
FltInj_logl.Arguments(2).EngMax = 65535;
FltInj_logl.Arguments(2).Units = 'Cnt';
FltInj_logl.Arguments(2).Direction = 'In';
FltInj_logl.Arguments(2).InitRowCol = [1  1];
FltInj_logl.Arguments(2).Description = [...
  'It determines whether FltInj_logl runnable is triggered.'];

FltInj_u08 = DataDict.SrvRunnable;
FltInj_u08.Context = 'Rte';
FltInj_u08.Description = [...
  'FltInj_u08 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.'];
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).TestTolerance = 0;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_u08 runnable is trigger' ...
  'ed.'];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = [...
  'It determines whether FltInj_u08 runnable is triggered.'];

FltInj_u0p16 = DataDict.SrvRunnable;
FltInj_u0p16.Context = 'Rte';
FltInj_u0p16.Description = [...
  'FltInj_u0p16 runnable determines whether to overwrite the SigPah signa' ...
  'l with a new value calculated from path gain and path offset calculati' ...
  'on.'];
FltInj_u0p16.Return = DataDict.CSReturn;
FltInj_u0p16.Return.Type = 'None';
FltInj_u0p16.Return.Min = [];
FltInj_u0p16.Return.Max = [];
FltInj_u0p16.Return.TestTolerance = [];
FltInj_u0p16.Arguments(1) = DataDict.CSArguments;
FltInj_u0p16.Arguments(1).Name = 'SigPah';
FltInj_u0p16.Arguments(1).EngDT = dt.u0p16;
FltInj_u0p16.Arguments(1).EngMin = 0;
FltInj_u0p16.Arguments(1).EngMax = 0.9999847412;
FltInj_u0p16.Arguments(1).TestTolerance = 0;
FltInj_u0p16.Arguments(1).Units = 'Uls';
FltInj_u0p16.Arguments(1).Direction = 'InOut';
FltInj_u0p16.Arguments(1).InitRowCol = [1  1];
FltInj_u0p16.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_u0p16 runnable is trigg' ...
  'ered.'];
FltInj_u0p16.Arguments(2) = DataDict.CSArguments;
FltInj_u0p16.Arguments(2).Name = 'LocnKey';
FltInj_u0p16.Arguments(2).EngDT = dt.u16;
FltInj_u0p16.Arguments(2).EngMin = 0;
FltInj_u0p16.Arguments(2).EngMax = 65535;
FltInj_u0p16.Arguments(2).Units = 'Cnt';
FltInj_u0p16.Arguments(2).Direction = 'In';
FltInj_u0p16.Arguments(2).InitRowCol = [1  1];
FltInj_u0p16.Arguments(2).Description = [...
  'It determines whether FltInj_u0p16 runnable is triggered.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FltInjPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time from the SimnTi Value at root layer of mod' ...
  'el.'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = [...
  'It shows the reference time in count( 1 count = 100 uSec).'];


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FltInjPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It captures simulation time from SimnTi value, handles counter wrappin' ...
  'g, and subtractc RefTmr to get the time span.'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = [...
  'It shows the reference time in count( 1 count = 100 uSec).'];
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = [...
  'It shows the time span in count( 1 count = 100 uSec).'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = [...
  'It is used to triger velocity based fault injection.'];
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'FltInjPer1'};
HwVel.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
FltInjPahGain = DataDict.IRV;
FltInjPahGain.LongName = 'Path Gain';
FltInjPahGain.Description = [...
  'Scale factor applied to signal being modified.  Modeled as IRV, but co' ...
  'ded as static modul-level variable.'];
FltInjPahGain.DocUnits = 'Uls';
FltInjPahGain.EngDT = dt.float32;
FltInjPahGain.EngInit = 1;
FltInjPahGain.EngMin = -1000;
FltInjPahGain.EngMax = 1000;
FltInjPahGain.ReadIn = {'FltInj_f32'};
FltInjPahGain.WrittenIn = {'FltInjPer1'};


FltInjPahOffs = DataDict.IRV;
FltInjPahOffs.LongName = 'Path Offset';
FltInjPahOffs.Description = [...
  'Offset applied to signal being modified, as in newval = oldval * Gain ' ...
  '+ Offset.  Offset value is an instantaneous value calculated from User' ...
  ' Parameters (offs = user constant + user-defined sine wave). Modeled a' ...
  's IRV, but coded as static modul-level variable.'];
FltInjPahOffs.DocUnits = 'Uls';
FltInjPahOffs.EngDT = dt.float32;
FltInjPahOffs.EngInit = 1;
FltInjPahOffs.EngMin = -1000;
FltInjPahOffs.EngMax = 1000;
FltInjPahOffs.ReadIn = {'FltInj_f32'};
FltInjPahOffs.WrittenIn = {'FltInjPer1'};



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
dFltInjHwVel = DataDict.Display;
dFltInjHwVel.LongName = 'Fault Injection Handwheel Velocity';
dFltInjHwVel.Description = [...
  'After conversion from rad/sec to deg/sec.  Min/Max = 42 * 180/pi.'];
dFltInjHwVel.DocUnits = 'HwDegPerSec';
dFltInjHwVel.EngDT = dt.float32;
dFltInjHwVel.EngMin = -2407;
dFltInjHwVel.EngMax = 2407;
dFltInjHwVel.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
FltInjFltEna = DataDict.PIM;
FltInjFltEna.LongName = 'Fault Enable';
FltInjFltEna.Description = [...
  'The function needs to watch for rising-edge fault arming.  This is a s' ...
  'tate variable used when comparing the current boolean value to this pr' ...
  'evious boolean value.'];
FltInjFltEna.DocUnits = 'Cnt';
FltInjFltEna.EngDT = dt.lgc;
FltInjFltEna.EngMin = 0;
FltInjFltEna.EngMax = 1;
FltInjFltEna.InitRowCol = [1  1];


FltInjRefTmr = DataDict.PIM;
FltInjRefTmr.LongName = 'Reference Timer';
FltInjRefTmr.Description = [...
  'When fault is triggered, the function takes a snapshot of system time ' ...
  'and then later uses it to determine elapsed time.'];
FltInjRefTmr.DocUnits = 'Cnt';
FltInjRefTmr.EngDT = dt.u32;
FltInjRefTmr.EngMin = 0;
FltInjRefTmr.EngMax = 4294967295;
FltInjRefTmr.InitRowCol = [1  1];


FltInjUsrPrm = DataDict.PIM;
FltInjUsrPrm.LongName = 'User Parameters';
FltInjUsrPrm.Description = [...
  'Structure of control parameters from Canape user.  In EA3 code, this w' ...
  'as named CanapeParameters_M_Str.'];
FltInjUsrPrm.DocUnits = 'Cnt';
FltInjUsrPrm.EngDT = struct.FltInjUsrPrmRec1;
FltInjUsrPrm.EngMin = [struct('FltGain',-1000,'FltOffs',-1000,'SinFrq',0,'SinAmp',0,'HwVelThd',0,'FltDurn',0,'FltLocn',0,'LoglFlt',0,'FltInjEna',0)];
FltInjUsrPrm.EngMax = [struct('FltGain',1000,'FltOffs',1000,'SinFrq',250,'SinAmp',1000,'HwVelThd',800,'FltDurn',10000,'FltLocn',65535,'LoglFlt',1,'FltInjEna',1)];
FltInjUsrPrm.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_180OVERPI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_180OVERPI_ULS_F32.LongName = '180 Degrees Over Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.Description = '180 divided by Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_180OVERPI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_180OVERPI_ULS_F32.EngVal = 57.29578;
ARCHGLBPRM_180OVERPI_ULS_F32.Define = 'Global';


ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = 'Two Times Pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times the value of Pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


FLOATTOU0P16MULT_ULS_F32 = DataDict.Constant;
FLOATTOU0P16MULT_ULS_F32.LongName = 'Float to U0P16 Multiplier';
FLOATTOU0P16MULT_ULS_F32.Description = 'float32 value of 2^16';
FLOATTOU0P16MULT_ULS_F32.DocUnits = 'Uls';
FLOATTOU0P16MULT_ULS_F32.EngDT = dt.float32;
FLOATTOU0P16MULT_ULS_F32.EngVal = 65536;
FLOATTOU0P16MULT_ULS_F32.Define = 'Local';


FLTINJENA = DataDict.ConfigParam;
FLTINJENA.LongName = 'Fault Injection Enable';
FLTINJENA.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with fault injection active.'];
FLTINJENA.IsBuildPrm = false;
FLTINJENA.DocUnits = 'Cnt';
FLTINJENA.EngDT = dt.lgc;
FLTINJENA.EngVal = 0;
FLTINJENA.EngMin = 0;
FLTINJENA.EngMax = 1;
FLTINJENA.Define = 'Global';


FLTINJ_ASSI_ASSICMDBAS = DataDict.Constant;
FLTINJ_ASSI_ASSICMDBAS.LongName = 'Fault Injection Assist Command Base';
FLTINJ_ASSI_ASSICMDBAS.Description = 'Output signal of Assist function.';
FLTINJ_ASSI_ASSICMDBAS.DocUnits = 'Cnt';
FLTINJ_ASSI_ASSICMDBAS.EngDT = dt.u16;
FLTINJ_ASSI_ASSICMDBAS.EngVal = 1;
FLTINJ_ASSI_ASSICMDBAS.Define = 'Global';


FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG = DataDict.Constant;
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.LongName = 'Fault Injection Current Measure Correlation Current Measure Independent Signal';
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.Description = [...
  'Output signal of Current Measure Correlation function.'];
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.DocUnits = 'Cnt';
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.EngDT = dt.u16;
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.EngVal = 42;
FLTINJ_CURRMEASCORRLN_CURRMEASIDPTSIG.Define = 'Global';


FLTINJ_CURRMEAS_MOTCURRCORRDA = DataDict.Constant;
FLTINJ_CURRMEAS_MOTCURRCORRDA.LongName = 'Fault Injection Current Measure Motor Current A Corrected';
FLTINJ_CURRMEAS_MOTCURRCORRDA.Description = [...
  'Output signal of Current Measurement function.'];
FLTINJ_CURRMEAS_MOTCURRCORRDA.DocUnits = 'Cnt';
FLTINJ_CURRMEAS_MOTCURRCORRDA.EngDT = dt.u16;
FLTINJ_CURRMEAS_MOTCURRCORRDA.EngVal = 29;
FLTINJ_CURRMEAS_MOTCURRCORRDA.Define = 'Global';


FLTINJ_CURRMEAS_MOTCURRCORRDD = DataDict.Constant;
FLTINJ_CURRMEAS_MOTCURRCORRDD.LongName = 'Fault Injection Current Measure Motor Current D Corrected';
FLTINJ_CURRMEAS_MOTCURRCORRDD.Description = [...
  'Output signal of Current Measurement function.'];
FLTINJ_CURRMEAS_MOTCURRCORRDD.DocUnits = 'Cnt';
FLTINJ_CURRMEAS_MOTCURRCORRDD.EngDT = dt.u16;
FLTINJ_CURRMEAS_MOTCURRCORRDD.EngVal = 36;
FLTINJ_CURRMEAS_MOTCURRCORRDD.Define = 'Global';


FLTINJ_CURRMEAS_TESTOK = DataDict.Constant;
FLTINJ_CURRMEAS_TESTOK.LongName = 'Fault Injection Current Measure Test OK';
FLTINJ_CURRMEAS_TESTOK.Description = [...
  'Internal decision-making location of Current Measurement function.  In' ...
  'jecting True represents protocol fault.'];
FLTINJ_CURRMEAS_TESTOK.DocUnits = 'Cnt';
FLTINJ_CURRMEAS_TESTOK.EngDT = dt.u16;
FLTINJ_CURRMEAS_TESTOK.EngVal = 30;
FLTINJ_CURRMEAS_TESTOK.Define = 'Global';


FLTINJ_DAMPG_DAMPGCMDBAS = DataDict.Constant;
FLTINJ_DAMPG_DAMPGCMDBAS.LongName = 'Fault Injection Damping Command Base';
FLTINJ_DAMPG_DAMPGCMDBAS.Description = 'Output signal of Damping function.';
FLTINJ_DAMPG_DAMPGCMDBAS.DocUnits = 'Cnt';
FLTINJ_DAMPG_DAMPGCMDBAS.EngDT = dt.u16;
FLTINJ_DAMPG_DAMPGCMDBAS.EngVal = 3;
FLTINJ_DAMPG_DAMPGCMDBAS.Define = 'Global';


FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV = DataDict.Constant;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.LongName = 'Fault Injection Diagnostic Manager Diagnostic Status Inverter 1 Inactive';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.Description = [...
  'Output signal of Diagnostics Manager'];
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.DocUnits = 'Cnt';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.EngDT = dt.u16;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.EngVal = 31;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR1INACTV.Define = 'Global';


FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV = DataDict.Constant;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.LongName = 'Fault Injection Diagnostic Manager Diagnostic Status Inverter 2 Inactive';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.Description = [...
  'Output signal of Diagnostics Manager'];
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.DocUnits = 'Cnt';
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.EngDT = dt.u16;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.EngVal = 32;
FLTINJ_DIAGCMGR_DIAGCSTSIVTR2INACTV.Define = 'Global';


FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD = DataDict.Constant;
FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD.LongName = 'End of Travel Damping Firewall End of Travel Damping Command';
FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD.Description = [...
  'Input signal of EOT Damping Firewall function.'];
FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD.DocUnits = 'Cnt';
FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD.EngDT = dt.u16;
FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD.EngVal = 8;
FLTINJ_EOTDAMPGFWL_EOTDAMPGCMD.Define = 'Global';


FLTINJ_HWAG0MEAS_HWAG0 = DataDict.Constant;
FLTINJ_HWAG0MEAS_HWAG0.LongName = 'Fault Injection Handwheel Angle Zero Measured Handwheel Angle Zero';
FLTINJ_HWAG0MEAS_HWAG0.Description = [...
  'Output signal of Handwheel Angle Zero function.'];
FLTINJ_HWAG0MEAS_HWAG0.DocUnits = 'Cnt';
FLTINJ_HWAG0MEAS_HWAG0.EngDT = dt.u16;
FLTINJ_HWAG0MEAS_HWAG0.EngVal = 33;
FLTINJ_HWAG0MEAS_HWAG0.Define = 'Global';


FLTINJ_HWAG0MEAS_TESTOK = DataDict.Constant;
FLTINJ_HWAG0MEAS_TESTOK.LongName = 'Fault Injection Handwheel Angle Zero Test OK';
FLTINJ_HWAG0MEAS_TESTOK.Description = [...
  'Internal decision-making location of Handwheel Angle Zero function.  I' ...
  'njecting True represents protocol fault.'];
FLTINJ_HWAG0MEAS_TESTOK.DocUnits = 'Cnt';
FLTINJ_HWAG0MEAS_TESTOK.EngDT = dt.u16;
FLTINJ_HWAG0MEAS_TESTOK.EngVal = 34;
FLTINJ_HWAG0MEAS_TESTOK.Define = 'Global';


FLTINJ_HWAGCORRLN_HWAGIDPTSIG = DataDict.Constant;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.LongName = 'Handwheel Angle Correlation Handhweel Angle Independent Signals';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Description = [...
  'Output signal of Handwheel Angle Correlation function.'];
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.DocUnits = 'Cnt';
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.EngDT = dt.u16;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.EngVal = 35;
FLTINJ_HWAGCORRLN_HWAGIDPTSIG.Define = 'Global';


FLTINJ_HWAGSYSARBN_HWAG = DataDict.Constant;
FLTINJ_HWAGSYSARBN_HWAG.LongName = 'Fault Injection Handwheel Angle System Arbitration Handwheel Angle';
FLTINJ_HWAGSYSARBN_HWAG.Description = [...
  'Output signal of Handwheel Angle System Arbitration.'];
FLTINJ_HWAGSYSARBN_HWAG.DocUnits = 'Cnt';
FLTINJ_HWAGSYSARBN_HWAG.EngDT = dt.u16;
FLTINJ_HWAGSYSARBN_HWAG.EngVal = 23;
FLTINJ_HWAGSYSARBN_HWAG.Define = 'Global';


FLTINJ_HWAGSYSARBN_SERLCOMHWAG = DataDict.Constant;
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.LongName = 'Fault Injection Handwheel Angle Arbitration Serial Communication Handwheel Angle';
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.Description = [...
  'Output signal of Handwheel Angle Arbitration.'];
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.DocUnits = 'Cnt';
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.EngDT = dt.u16;
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.EngVal = 37;
FLTINJ_HWAGSYSARBN_SERLCOMHWAG.Define = 'Global';


FLTINJ_HWTQ0MEAS_HWTQ0 = DataDict.Constant;
FLTINJ_HWTQ0MEAS_HWTQ0.LongName = 'Fault Injection Handwheel Torque 0 Measure Handwheel Torque 0';
FLTINJ_HWTQ0MEAS_HWTQ0.Description = [...
  'Output signal of Handwheel Torque Zero function.'];
FLTINJ_HWTQ0MEAS_HWTQ0.DocUnits = 'Cnt';
FLTINJ_HWTQ0MEAS_HWTQ0.EngDT = dt.u16;
FLTINJ_HWTQ0MEAS_HWTQ0.EngVal = 24;
FLTINJ_HWTQ0MEAS_HWTQ0.Define = 'Global';


FLTINJ_HWTQ0MEAS_TESTOK0 = DataDict.Constant;
FLTINJ_HWTQ0MEAS_TESTOK0.LongName = 'Fault Injection Handwheel Torque 0 Measure Test OK 0';
FLTINJ_HWTQ0MEAS_TESTOK0.Description = [...
  'Internal decision-making location of Handwheel Torque Zero function.  ' ...
  'Injecting True represents protocol fault.'];
FLTINJ_HWTQ0MEAS_TESTOK0.DocUnits = 'Cnt';
FLTINJ_HWTQ0MEAS_TESTOK0.EngDT = dt.u16;
FLTINJ_HWTQ0MEAS_TESTOK0.EngVal = 25;
FLTINJ_HWTQ0MEAS_TESTOK0.Define = 'Global';


FLTINJ_HWTQ2MEAS_HWTQ2 = DataDict.Constant;
FLTINJ_HWTQ2MEAS_HWTQ2.LongName = 'Fault Injection Handwheel Torque 2 Measure Handwheel Torque 2';
FLTINJ_HWTQ2MEAS_HWTQ2.Description = [...
  'Output signal of Handwheel Torque Two Measure function.'];
FLTINJ_HWTQ2MEAS_HWTQ2.DocUnits = 'Cnt';
FLTINJ_HWTQ2MEAS_HWTQ2.EngDT = dt.u16;
FLTINJ_HWTQ2MEAS_HWTQ2.EngVal = 26;
FLTINJ_HWTQ2MEAS_HWTQ2.Define = 'Global';


FLTINJ_HWTQCORRLN_HWTQIDPTSIG = DataDict.Constant;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.LongName = 'Fault Injection Handwheel Torque Correlation Handwheel Torque Independent Signal';
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.Description = [...
  'Output signal of Handwheel Torque Correlation function.'];
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.DocUnits = 'Cnt';
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.EngDT = dt.u16;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.EngVal = 27;
FLTINJ_HWTQCORRLN_HWTQIDPTSIG.Define = 'Global';


FLTINJ_HYSCMP_HYSCMPCMD = DataDict.Constant;
FLTINJ_HYSCMP_HYSCMPCMD.LongName = 'Fault Injection Hysteresis Compensation Hysteresis Compensation';
FLTINJ_HYSCMP_HYSCMPCMD.Description = [...
  'Output signal of Hysteresis Compensation function.'];
FLTINJ_HYSCMP_HYSCMPCMD.DocUnits = 'Cnt';
FLTINJ_HYSCMP_HYSCMPCMD.EngDT = dt.u16;
FLTINJ_HYSCMP_HYSCMPCMD.EngVal = 5;
FLTINJ_HYSCMP_HYSCMPCMD.Define = 'Global';


FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD = DataDict.Constant;
FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD.LongName = 'Fault Injection Inertia Compensation Torque Assist High Frequency Command';
FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD.Description = [...
  'Output signal of Inertia Compensation - Torque function.'];
FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD.DocUnits = 'Cnt';
FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD.EngDT = dt.u16;
FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD.EngVal = 9;
FLTINJ_INERTIACMPTQ_ASSIHIFRQCMD.Define = 'Global';


FLTINJ_INERTIACMPVEL_INERTIACMPCMD = DataDict.Constant;
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.LongName = 'Fault Injection Inertia Compensation Velocity Inertia Compensation Command';
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.Description = [...
  'Output signal of Inertia Compensation - Velocity function'];
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.DocUnits = 'Cnt';
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.EngDT = dt.u16;
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.EngVal = 6;
FLTINJ_INERTIACMPVEL_INERTIACMPCMD.Define = 'Global';


FLTINJ_LIMRCDNG_EOTGAIN = DataDict.Constant;
FLTINJ_LIMRCDNG_EOTGAIN.LongName = 'Fault Injection Limit Resistance Conditioning End of Travel Gain';
FLTINJ_LIMRCDNG_EOTGAIN.Description = [...
  'Input signal of Limiter Conditioning function.'];
FLTINJ_LIMRCDNG_EOTGAIN.DocUnits = 'Cnt';
FLTINJ_LIMRCDNG_EOTGAIN.EngDT = dt.u16;
FLTINJ_LIMRCDNG_EOTGAIN.EngVal = 20;
FLTINJ_LIMRCDNG_EOTGAIN.Define = 'Global';


FLTINJ_LIMRCDNG_EOTLIM = DataDict.Constant;
FLTINJ_LIMRCDNG_EOTLIM.LongName = 'Fault Injection Limit Resistance Conditioning End of Travel Limit';
FLTINJ_LIMRCDNG_EOTLIM.Description = [...
  'Input signal of Limiter Conditioning function.'];
FLTINJ_LIMRCDNG_EOTLIM.DocUnits = 'Cnt';
FLTINJ_LIMRCDNG_EOTLIM.EngDT = dt.u16;
FLTINJ_LIMRCDNG_EOTLIM.EngVal = 21;
FLTINJ_LIMRCDNG_EOTLIM.Define = 'Global';


FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA = DataDict.Constant;
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.LongName = 'Fault Injection Limit Resistance Conditioning System Motor Torque Command Scale';
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.Description = [...
  'Input signal of Limiter Conditioning function.'];
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.DocUnits = 'Cnt';
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.EngDT = dt.u16;
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.EngVal = 19;
FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA.Define = 'Global';


FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL = DataDict.Constant;
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.LongName = 'Mechanical Motor Angle 0';
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.Description = [...
  'Output signal from MotAg0Meas, digital motor position'];
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.DocUnits = 'Cnt';
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.EngDT = dt.u16;
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.EngVal = 38;
FLTINJ_MOTAG0MEAS_MOTCTRLMOTAG0MECL.Define = 'Global';


FLTINJ_MOTAG0MEAS_TESTOK = DataDict.Constant;
FLTINJ_MOTAG0MEAS_TESTOK.LongName = 'Test OK';
FLTINJ_MOTAG0MEAS_TESTOK.Description = [...
  'Boolean decision point that decides whether to set NTC to PreFaild'];
FLTINJ_MOTAG0MEAS_TESTOK.DocUnits = 'Cnt';
FLTINJ_MOTAG0MEAS_TESTOK.EngDT = dt.u16;
FLTINJ_MOTAG0MEAS_TESTOK.EngVal = 39;
FLTINJ_MOTAG0MEAS_TESTOK.Define = 'Global';


FLTINJ_MOTAG2MEAS_MOTAG2MECL = DataDict.Constant;
FLTINJ_MOTAG2MEAS_MOTAG2MECL.LongName = 'Mechanical Motor Angle 2';
FLTINJ_MOTAG2MEAS_MOTAG2MECL.Description = [...
  'Output signal from MotAg2Meas, analog motor position'];
FLTINJ_MOTAG2MEAS_MOTAG2MECL.DocUnits = 'Cnt';
FLTINJ_MOTAG2MEAS_MOTAG2MECL.EngDT = dt.u16;
FLTINJ_MOTAG2MEAS_MOTAG2MECL.EngVal = 40;
FLTINJ_MOTAG2MEAS_MOTAG2MECL.Define = 'Global';


FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG = DataDict.Constant;
FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG.LongName = 'Fault Injection Motor Angle Correlation Motor Angle Independent Signal';
FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG.Description = [...
  'Output signal of Motor Angle Correlation function.'];
FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG.DocUnits = 'Cnt';
FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG.EngDT = dt.u16;
FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG.EngVal = 28;
FLTINJ_MOTAGCORRLN_MOTAGIDPTSIG.Define = 'Global';


FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD = DataDict.Constant;
FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD.LongName = 'Fault Injection Motor Torque EOL Scaling Motor Torque Command MRF Scaled';
FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD.Description = [...
  'Output signal of EOL Scaling function.'];
FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD.DocUnits = 'Cnt';
FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD.EngDT = dt.u16;
FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD.EngVal = 22;
FLTINJ_MOTTQEOLSCAG_MOTTQCMDMRFSCAD.Define = 'Global';


FLTINJ_RTN_RTNCMD = DataDict.Constant;
FLTINJ_RTN_RTNCMD.LongName = 'Fault Injection Return Command';
FLTINJ_RTN_RTNCMD.Description = 'Output signal of Return function.';
FLTINJ_RTN_RTNCMD.DocUnits = 'Cnt';
FLTINJ_RTN_RTNCMD.EngDT = dt.u16;
FLTINJ_RTN_RTNCMD.EngVal = 2;
FLTINJ_RTN_RTNCMD.Define = 'Global';


FLTINJ_STABYCMP_ASSICMD = DataDict.Constant;
FLTINJ_STABYCMP_ASSICMD.LongName = 'Fault Injection Stability Compensation Assist Command';
FLTINJ_STABYCMP_ASSICMD.Description = [...
  'Output signal of Stability Compensation function.'];
FLTINJ_STABYCMP_ASSICMD.DocUnits = 'Cnt';
FLTINJ_STABYCMP_ASSICMD.EngDT = dt.u16;
FLTINJ_STABYCMP_ASSICMD.EngVal = 7;
FLTINJ_STABYCMP_ASSICMD.Define = 'Global';


FLTINJ_SYSFRICLRNG_SYSFRICOFFS = DataDict.Constant;
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.LongName = 'Fault Injection System Friction Learning System Friction Offset';
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.Description = [...
  'Internal signal of Average Friction Learning function.  Located prior ' ...
  'to signal saturation and defeat.'];
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.DocUnits = 'Cnt';
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.EngDT = dt.u16;
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.EngVal = 4;
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.Define = 'Global';


FLTINJ_TQOSCN_PREFINALCMD = DataDict.Constant;
FLTINJ_TQOSCN_PREFINALCMD.LongName = 'Fault Injection Torque Oscillation Pre Final Command';
FLTINJ_TQOSCN_PREFINALCMD.Description = [...
  'Internal temp signal of Torque Oscillation function.'];
FLTINJ_TQOSCN_PREFINALCMD.DocUnits = 'Cnt';
FLTINJ_TQOSCN_PREFINALCMD.EngDT = dt.u16;
FLTINJ_TQOSCN_PREFINALCMD.EngVal = 41;
FLTINJ_TQOSCN_PREFINALCMD.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Latitude Acceleration';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.Description = [...
  'Input signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.EngVal = 14;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLATA.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Logitude Acceleration';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.Description = [...
  'Input signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.EngVal = 13;
FLTINJ_VEHSIGCDNG_SERLCOMVEHLGTA.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Speed';
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.Description = [...
  'Input signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.EngVal = 12;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPD.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD.LongName = 'Fault Injection Vehicle Signal Conditioning Serial Communication Vehical Speed Valid';
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD.Description = [...
  'Input signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD.EngVal = 11;
FLTINJ_VEHSIGCDNG_SERLCOMVEHSPDVLD.Define = 'Global';


FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE = DataDict.Constant;
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.LongName = 'Fault Injection Damping Command Base Constant';
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.Description = [...
  'Input signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.EngVal = 10;
FLTINJ_VEHSIGCDNG_SERLCOMVEHYAWRATE.Define = 'Global';


FLTINJ_VEHSIGCDNG_VEHLATA = DataDict.Constant;
FLTINJ_VEHSIGCDNG_VEHLATA.LongName = 'Fault Injection Vehicle Signal Conditioning Vehical Latitude Acceleration';
FLTINJ_VEHSIGCDNG_VEHLATA.Description = [...
  'Output signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_VEHLATA.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_VEHLATA.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_VEHLATA.EngVal = 18;
FLTINJ_VEHSIGCDNG_VEHLATA.Define = 'Global';


FLTINJ_VEHSIGCDNG_VEHLGTA = DataDict.Constant;
FLTINJ_VEHSIGCDNG_VEHLGTA.LongName = 'Fault Injection Vehicle Signal Conditioning Vehical Logitude Acceleration';
FLTINJ_VEHSIGCDNG_VEHLGTA.Description = [...
  'Output signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_VEHLGTA.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_VEHLGTA.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_VEHLGTA.EngVal = 17;
FLTINJ_VEHSIGCDNG_VEHLGTA.Define = 'Global';


FLTINJ_VEHSIGCDNG_VEHSPD = DataDict.Constant;
FLTINJ_VEHSIGCDNG_VEHSPD.LongName = 'Fault Injection Vehicle Signal Conditioning Vehicle Speed';
FLTINJ_VEHSIGCDNG_VEHSPD.Description = [...
  'Output signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_VEHSPD.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_VEHSPD.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_VEHSPD.EngVal = 16;
FLTINJ_VEHSIGCDNG_VEHSPD.Define = 'Global';


FLTINJ_VEHSIGCDNG_VEHYAWRATE = DataDict.Constant;
FLTINJ_VEHSIGCDNG_VEHYAWRATE.LongName = 'Fault Injection Vehicle Signal Conditioning Vehicle Yaw Rate';
FLTINJ_VEHSIGCDNG_VEHYAWRATE.Description = [...
  'Output signal of Vehicle Signal Conditioning function.'];
FLTINJ_VEHSIGCDNG_VEHYAWRATE.DocUnits = 'Cnt';
FLTINJ_VEHSIGCDNG_VEHYAWRATE.EngDT = dt.u16;
FLTINJ_VEHSIGCDNG_VEHYAWRATE.EngVal = 15;
FLTINJ_VEHSIGCDNG_VEHYAWRATE.Define = 'Global';


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = [...
  'AUTOSAR value representing something that is On.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.u08;
STD_ON.EngVal = 1;
STD_ON.Define = 'Global';


TICNVN_MILLISECPERCNT_F32 = DataDict.Constant;
TICNVN_MILLISECPERCNT_F32.LongName = 'Time Conversion';
TICNVN_MILLISECPERCNT_F32.Description = [...
  'System Time services are in units of Counts.  1 count = 100 microsec.'];
TICNVN_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
TICNVN_MILLISECPERCNT_F32.EngDT = dt.float32;
TICNVN_MILLISECPERCNT_F32.EngVal = 0.1;
TICNVN_MILLISECPERCNT_F32.Define = 'Local';


UINT16MAX_ULS_F32 = DataDict.Constant;
UINT16MAX_ULS_F32.LongName = 'Uint16 Maximum';
UINT16MAX_ULS_F32.Description = 'float32 value of 2^16 - 1';
UINT16MAX_ULS_F32.DocUnits = 'Uls';
UINT16MAX_ULS_F32.EngDT = dt.float32;
UINT16MAX_ULS_F32.EngVal = 65535;
UINT16MAX_ULS_F32.Define = 'Local';


UINT8MAX_ULS_F32 = DataDict.Constant;
UINT8MAX_ULS_F32.LongName = 'Uint8 Maximum';
UINT8MAX_ULS_F32.Description = 'float32 value of 2^8 - 1';
UINT8MAX_ULS_F32.DocUnits = 'Uls';
UINT8MAX_ULS_F32.EngDT = dt.float32;
UINT8MAX_ULS_F32.EngVal = 255;
UINT8MAX_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
