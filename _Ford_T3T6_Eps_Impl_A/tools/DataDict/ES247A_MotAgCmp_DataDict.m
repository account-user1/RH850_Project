%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 10-Nov-2016 09:27:14       %
%                                  Created with tool release: 2.47.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES247A = DataDict.FDD;
ES247A.Version = '1.6.x';
ES247A.LongName = 'Motor Angle Compensation';
ES247A.ShoName  = 'MotAgCmp';
ES247A.DesignASIL = 'D';
ES247A.Description = [...
  'Compensates motor angle for Back EMF and computes cumulative position'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAgCmpInit1 = DataDict.Runnable;
MotAgCmpInit1.Context = 'Rte';
MotAgCmpInit1.TimeStep = 0;
MotAgCmpInit1.Description = [...
  'Intial Function for Motor Angle Compensation'];

MotAgCmpPer1 = DataDict.Runnable;
MotAgCmpPer1.Context = 'NonRte';
MotAgCmpPer1.TimeStep = 'MotorControl';
MotAgCmpPer1.Description = [...
  'Motor Angle Compensation periodic 1'];

MotAgCmpPer2 = DataDict.Runnable;
MotAgCmpPer2.Context = 'Rte';
MotAgCmpPer2.TimeStep = 0.002;
MotAgCmpPer2.Description = [...
  'Motor Angle Compensation periodic 2'];

MotAgCmpBackEmfRead = DataDict.SrvRunnable;
MotAgCmpBackEmfRead.Context = 'Rte';
MotAgCmpBackEmfRead.Description = 'Back EMF Read';
MotAgCmpBackEmfRead.Return = DataDict.CSReturn;
MotAgCmpBackEmfRead.Return.Type = 'None';
MotAgCmpBackEmfRead.Return.Min = [];
MotAgCmpBackEmfRead.Return.Max = [];
MotAgCmpBackEmfRead.Return.TestTolerance = [];
MotAgCmpBackEmfRead.Arguments(1) = DataDict.CSArguments;
MotAgCmpBackEmfRead.Arguments(1).Name = 'MotAgBackEmfRead';
MotAgCmpBackEmfRead.Arguments(1).EngDT = dt.u0p16;
MotAgCmpBackEmfRead.Arguments(1).EngMin = 0;
MotAgCmpBackEmfRead.Arguments(1).EngMax = 0.9999847412;
MotAgCmpBackEmfRead.Arguments(1).TestTolerance = 0;
MotAgCmpBackEmfRead.Arguments(1).Units = 'MotRevElec';
MotAgCmpBackEmfRead.Arguments(1).Direction = 'Out';
MotAgCmpBackEmfRead.Arguments(1).InitRowCol = [1  1];
MotAgCmpBackEmfRead.Arguments(1).Description = [...
  'Motor Angle value read from the back EMF'];

MotAgCmpBackEmfWr = DataDict.SrvRunnable;
MotAgCmpBackEmfWr.Context = 'Rte';
MotAgCmpBackEmfWr.Description = 'Back EMF Write';
MotAgCmpBackEmfWr.Return = DataDict.CSReturn;
MotAgCmpBackEmfWr.Return.Type = 'None';
MotAgCmpBackEmfWr.Return.Min = [];
MotAgCmpBackEmfWr.Return.Max = [];
MotAgCmpBackEmfWr.Return.TestTolerance = [];
MotAgCmpBackEmfWr.Arguments(1) = DataDict.CSArguments;
MotAgCmpBackEmfWr.Arguments(1).Name = 'MotAgCmpBackEmfWrData';
MotAgCmpBackEmfWr.Arguments(1).EngDT = dt.u0p16;
MotAgCmpBackEmfWr.Arguments(1).EngMin = 0;
MotAgCmpBackEmfWr.Arguments(1).EngMax = 0.9999847412;
MotAgCmpBackEmfWr.Arguments(1).Units = 'MotRevElec';
MotAgCmpBackEmfWr.Arguments(1).Direction = 'In';
MotAgCmpBackEmfWr.Arguments(1).InitRowCol = [1  1];
MotAgCmpBackEmfWr.Arguments(1).Description = [...
  'Motor Angle value write to the back EMF'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
MotAgCmpMotAgBackEmf_SetRamBlockStatus = DataDict.Client;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.CallLocation = {'MotAgCmpBackEmfWr'};
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Description = 'Client call for Back EMF';
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Return = DataDict.CSReturn;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Return.Type = 'Standard';
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Return.Min = 0;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Return.Max = 1;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Return.TestTolerance = 0;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Return.Description = '';
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).EngMin = 0;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).EngMax = 1;
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).Direction = 'In';
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MotAgCmpMotAgBackEmf_SetRamBlockStatus.Arguments(1).Description = [...
  'Flag used to acivate the client call'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiMechPolarity = DataDict.IpSignal;
AssiMechPolarity.LongName = 'Assist Mechanism Polarity';
AssiMechPolarity.Description = 'Polarity value with refrence frame';
AssiMechPolarity.DocUnits = 'Uls';
AssiMechPolarity.EngDT = dt.s08;
AssiMechPolarity.EngInit = 1;
AssiMechPolarity.EngMin = -1;
AssiMechPolarity.EngMax = 1;
AssiMechPolarity.ReadIn = {'MotAgCmpPer2'};
AssiMechPolarity.ReadType = 'Rte';


MotAgCumvAlgndMrfRev = DataDict.IpSignal;
MotAgCumvAlgndMrfRev.LongName = 'Motor Angle Cumulative Aligned Motor Reference Frame Revolution';
MotAgCumvAlgndMrfRev.Description = 'Motor Angle Corrected for Back EMF';
MotAgCumvAlgndMrfRev.DocUnits = 'MotRev';
MotAgCumvAlgndMrfRev.EngDT = dt.s15p16;
MotAgCumvAlgndMrfRev.EngInit = 0;
MotAgCumvAlgndMrfRev.EngMin = -32768;
MotAgCumvAlgndMrfRev.EngMax = 32767.99998;
MotAgCumvAlgndMrfRev.ReadIn = {'MotAgCmpPer2'};
MotAgCumvAlgndMrfRev.ReadType = 'Rte';


MotAgCumvInid = DataDict.IpSignal;
MotAgCumvInid.LongName = 'Motor Angle Cumulative Initialized';
MotAgCumvInid.Description = [...
  'Signal Indicating acucumulated motor angle is valid or not from MotroC' ...
  'ontrol periodic'];
MotAgCumvInid.DocUnits = 'Cnt';
MotAgCumvInid.EngDT = dt.lgc;
MotAgCumvInid.EngInit = 0;
MotAgCumvInid.EngMin = 0;
MotAgCumvInid.EngMax = 1;
MotAgCumvInid.ReadIn = {'MotAgCmpPer2'};
MotAgCumvInid.ReadType = 'Rte';


MotCtrlMotAgMecl = DataDict.IpSignal;
MotCtrlMotAgMecl.LongName = 'Motor Control Motor Angle Mechanical';
MotCtrlMotAgMecl.Description = [...
  'Arbitrated Motor Angle in mechanical units'];
MotCtrlMotAgMecl.DocUnits = 'MotRev';
MotCtrlMotAgMecl.EngDT = dt.u0p16;
MotCtrlMotAgMecl.EngInit = 0;
MotCtrlMotAgMecl.EngMin = 0;
MotCtrlMotAgMecl.EngMax = 0.9999847412;
MotCtrlMotAgMecl.ReadIn = {'MotAgCmpPer1'};
MotCtrlMotAgMecl.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotAgCumvAlgndCrf = DataDict.OpSignal;
MotAgCumvAlgndCrf.LongName = 'Motor Angle Cumulative Aligned Core Reference Frame';
MotAgCumvAlgndCrf.Description = [...
  'Aligned Motor Angle Mechanical Degrees in CRF'];
MotAgCumvAlgndCrf.DocUnits = 'MotDeg';
MotAgCumvAlgndCrf.SwcShoName = 'MotAgCmp';
MotAgCumvAlgndCrf.EngDT = dt.s18p13;
MotAgCumvAlgndCrf.EngInit = 0;
MotAgCumvAlgndCrf.EngMin = -262144;
MotAgCumvAlgndCrf.EngMax = 262143.9998;
MotAgCumvAlgndCrf.TestTolerance = 1;
MotAgCumvAlgndCrf.WrittenIn = {'MotAgCmpPer2'};
MotAgCumvAlgndCrf.WriteType = 'Rte';


MotAgCumvAlgndMrf = DataDict.OpSignal;
MotAgCumvAlgndMrf.LongName = 'Motor Angle Cumulative Aligned Motor Reference Frame';
MotAgCumvAlgndMrf.Description = [...
  'Aligned Motor Angle Mechanical Degrees in MRF'];
MotAgCumvAlgndMrf.DocUnits = 'MotDeg';
MotAgCumvAlgndMrf.SwcShoName = 'MotAgCmp';
MotAgCumvAlgndMrf.EngDT = dt.s18p13;
MotAgCumvAlgndMrf.EngInit = 0;
MotAgCumvAlgndMrf.EngMin = -262144;
MotAgCumvAlgndMrf.EngMax = 262143.9998;
MotAgCumvAlgndMrf.TestTolerance = 1;
MotAgCumvAlgndMrf.WrittenIn = {'MotAgCmpPer2'};
MotAgCumvAlgndMrf.WriteType = 'Rte';


MotAgCumvAlgndVld = DataDict.OpSignal;
MotAgCumvAlgndVld.LongName = 'Motor Angle Cumulative Aligned Vilidity';
MotAgCumvAlgndVld.Description = [...
  'Signal Indicating acucumulated motor angle is valid or not from 2ms pe' ...
  'riodic'];
MotAgCumvAlgndVld.DocUnits = 'Cnt';
MotAgCumvAlgndVld.SwcShoName = 'MotAgCmp';
MotAgCumvAlgndVld.EngDT = dt.lgc;
MotAgCumvAlgndVld.EngInit = 0;
MotAgCumvAlgndVld.EngMin = 0;
MotAgCumvAlgndVld.EngMax = 1;
MotAgCumvAlgndVld.TestTolerance = 0;
MotAgCumvAlgndVld.WrittenIn = {'MotAgCmpPer2'};
MotAgCumvAlgndVld.WriteType = 'Rte';


MotCtrlMotAgCumvAlgndMrfRev = DataDict.OpSignal;
MotCtrlMotAgCumvAlgndMrfRev.LongName = 'Motor Control Motor Angle Cumulative Aligned Motor Reference Frame Revolution';
MotCtrlMotAgCumvAlgndMrfRev.Description = 'Motor Angle Corrected for Back EMF';
MotCtrlMotAgCumvAlgndMrfRev.DocUnits = 'MotRev';
MotCtrlMotAgCumvAlgndMrfRev.SwcShoName = 'MotAgCmp';
MotCtrlMotAgCumvAlgndMrfRev.EngDT = dt.s15p16;
MotCtrlMotAgCumvAlgndMrfRev.EngInit = 0;
MotCtrlMotAgCumvAlgndMrfRev.EngMin = -32768;
MotCtrlMotAgCumvAlgndMrfRev.EngMax = 32767.99998;
MotCtrlMotAgCumvAlgndMrfRev.TestTolerance = 1;
MotCtrlMotAgCumvAlgndMrfRev.WrittenIn = {'MotAgCmpPer1'};
MotCtrlMotAgCumvAlgndMrfRev.WriteType = 'NonRte';


MotCtrlMotAgCumvInid = DataDict.OpSignal;
MotCtrlMotAgCumvInid.LongName = 'Motor Control Motor Angle Cumulative Initialized';
MotCtrlMotAgCumvInid.Description = [...
  'Signal Indicating acucumulated motor angle is valid or not from MotroC' ...
  'ontrol periodic'];
MotCtrlMotAgCumvInid.DocUnits = 'Cnt';
MotCtrlMotAgCumvInid.SwcShoName = 'MotAgCmp';
MotCtrlMotAgCumvInid.EngDT = dt.lgc;
MotCtrlMotAgCumvInid.EngInit = 0;
MotCtrlMotAgCumvInid.EngMin = 0;
MotCtrlMotAgCumvInid.EngMax = 1;
MotCtrlMotAgCumvInid.TestTolerance = 0;
MotCtrlMotAgCumvInid.WrittenIn = {'MotAgCmpPer1'};
MotCtrlMotAgCumvInid.WriteType = 'NonRte';


MotCtrlMotAgElec = DataDict.OpSignal;
MotCtrlMotAgElec.LongName = 'Motor Control Motor Angle Electrical';
MotCtrlMotAgElec.Description = 'Motor Angle Corrected for Back EMF';
MotCtrlMotAgElec.DocUnits = 'MotRevElec';
MotCtrlMotAgElec.SwcShoName = 'MotAgCmp';
MotCtrlMotAgElec.EngDT = dt.u0p16;
MotCtrlMotAgElec.EngInit = 0;
MotCtrlMotAgElec.EngMin = 0;
MotCtrlMotAgElec.EngMax = 0.9999847412;
MotCtrlMotAgElec.TestTolerance = 1;
MotCtrlMotAgElec.WrittenIn = {'MotAgCmpPer1'};
MotCtrlMotAgElec.WriteType = 'NonRte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmMotPoleCnt = DataDict.ImprtdCal;
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';
SysGlbPrmMotPoleCnt.Description = 'Pole count';


SysGlbPrmSysKineRat = DataDict.ImprtdCal;
SysGlbPrmSysKineRat.DocUnits = 'MotDegPerHwDeg';
SysGlbPrmSysKineRat.EngDT = dt.float32;
SysGlbPrmSysKineRat.EngVal = 22;
SysGlbPrmSysKineRat.EngMin = 10;
SysGlbPrmSysKineRat.EngMax = 40;
SysGlbPrmSysKineRat.PortName = 'SysGlbPrmSysKineRat';
SysGlbPrmSysKineRat.Description = [...
  'Kinematic ratio between handwheel and motor.'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
MotAgCmpMotAgBackEmf = DataDict.NVM;
MotAgCmpMotAgBackEmf.LongName = 'Motor Angle Compensation Motor Angle Back Electro Motive Force';
MotAgCmpMotAgBackEmf.Description = 'Motor Back EMF Calibration';
MotAgCmpMotAgBackEmf.DocUnits = 'MotRevElec';
MotAgCmpMotAgBackEmf.EngDT = dt.u0p16;
MotAgCmpMotAgBackEmf.EngInit = 0;
MotAgCmpMotAgBackEmf.EngMin = 0;
MotAgCmpMotAgBackEmf.EngMax = 0.9999847412;
MotAgCmpMotAgBackEmf.CustomerVisible = false;
MotAgCmpMotAgBackEmf.Impact = 'H';
MotAgCmpMotAgBackEmf.TuningOwner = 'EPDT';
MotAgCmpMotAgBackEmf.CoderInfo.Alias = '';
MotAgCmpMotAgBackEmf.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CmpEnaCntr = DataDict.PIM;
CmpEnaCntr.LongName = 'Compensation Enable Counter';
CmpEnaCntr.Description = [...
  'Used to allow the initialization of the cumulative position to initial' ...
  'ize prior to execution....The value should be =(MOTAGCMPENAMASK_CNT_U0' ...
  '8 + 1) '];
CmpEnaCntr.DocUnits = 'Cnt';
CmpEnaCntr.EngDT = dt.u08;
CmpEnaCntr.EngMin = 0;
CmpEnaCntr.EngMax = 12;
CmpEnaCntr.InitRowCol = [1  1];


DigMotHwPosn = DataDict.PIM;
DigMotHwPosn.LongName = 'Digital  Motor Handwheel Position';
DigMotHwPosn.Description = [...
  'State Variable for Handwheel position from motor angle'];
DigMotHwPosn.DocUnits = 'MotDegPerHwDeg';
DigMotHwPosn.EngDT = dt.float32;
DigMotHwPosn.EngMin = -6553.6;
DigMotHwPosn.EngMax = 26214.39998;
DigMotHwPosn.InitRowCol = [1  1];


MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev = DataDict.PIM;
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.LongName = 'Motor Angle Compensation Motor Control Motor Angle Aligned Motor Reference Frame State Variable Previous';
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.Description = [...
  'State Variable for Cumulative Position from Previous Loop'];
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.DocUnits = 'MotRev';
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.EngDT = dt.s15p16;
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.EngMin = -32768;
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.EngMax = 32767.99998;
MotAgCmpMotCtrlMotAgCumvAlgndMrfRevPrev.InitRowCol = [1  1];


MotAgCmpMotCtrlMotAgMeclPrev = DataDict.PIM;
MotAgCmpMotCtrlMotAgMeclPrev.LongName = 'Motor Angle Compensation Motor Control Motor Angle Mechanical Previous';
MotAgCmpMotCtrlMotAgMeclPrev.Description = [...
  'State Variable for Mechanical Position from Previous Loop'];
MotAgCmpMotCtrlMotAgMeclPrev.DocUnits = 'MotRev';
MotAgCmpMotCtrlMotAgMeclPrev.EngDT = dt.s15p16;
MotAgCmpMotCtrlMotAgMeclPrev.EngMin = -32768;
MotAgCmpMotCtrlMotAgMeclPrev.EngMax = 32767.99998;
MotAgCmpMotCtrlMotAgMeclPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
MOTAGCMPENAMASK_CNT_U08 = DataDict.Constant;
MOTAGCMPENAMASK_CNT_U08.LongName = 'Motor Angle Compensation Enable Mask';
MOTAGCMPENAMASK_CNT_U08.Description = [...
  'Mask used to determine the motor angle Compensation CaliculationThe va' ...
  'lue is drived from IC specification which need atleast 300us wakeup ti' ...
  'me'];
MOTAGCMPENAMASK_CNT_U08.DocUnits = 'Cnt';
MOTAGCMPENAMASK_CNT_U08.EngDT = dt.u08;
MOTAGCMPENAMASK_CNT_U08.EngVal = 11;
MOTAGCMPENAMASK_CNT_U08.Define = 'Local';


MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0 = DataDict.Constant;
MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0.LongName = 'Motor Angle Compensation Mechanical Degrees per Revolution';
MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0.Description = [...
  'Conversion from Revs to Degrees Mechanical'];
MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0.DocUnits = 'DegPerRev';
MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0.EngDT = dt.u16p0;
MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0.EngVal = 360;
MOTAGCMPMECLDEGPERREV_DEGPERREV_U16P0.Define = 'Local';


MOTAGCUMVALGNDMASK_CNT_U32 = DataDict.Constant;
MOTAGCUMVALGNDMASK_CNT_U32.LongName = 'Motor Angle Cumulative Aligned Mask';
MOTAGCUMVALGNDMASK_CNT_U32.Description = [...
  'Mask used to prevent overflow of cumulative aligned motor angle.  Mask' ...
  ' = TRUNC(LOG((2^31-1)/360)/LOG(2)) - 1'];
MOTAGCUMVALGNDMASK_CNT_U32.DocUnits = 'Cnt';
MOTAGCUMVALGNDMASK_CNT_U32.EngDT = dt.u32;
MOTAGCUMVALGNDMASK_CNT_U32.EngVal = 4194303;
MOTAGCUMVALGNDMASK_CNT_U32.Define = 'Local';


MOTAGCUMVALGNDMRFREVMASK_CNT_U32 = DataDict.Constant;
MOTAGCUMVALGNDMRFREVMASK_CNT_U32.LongName = 'Motor Angle Cumulative Aligned Revolution Mask';
MOTAGCUMVALGNDMRFREVMASK_CNT_U32.Description = [...
  'Mask used to prevent overflow of cumulative aligned rev counter.  Mask' ...
  ' = 2^30-1'];
MOTAGCUMVALGNDMRFREVMASK_CNT_U32.DocUnits = 'Cnt';
MOTAGCUMVALGNDMRFREVMASK_CNT_U32.EngDT = dt.u32;
MOTAGCUMVALGNDMRFREVMASK_CNT_U32.EngVal = 1073741823;
MOTAGCUMVALGNDMRFREVMASK_CNT_U32.Define = 'Local';


MOTAGDELTALIM_MOTREV_U0P16 = DataDict.Constant;
MOTAGDELTALIM_MOTREV_U0P16.LongName = 'Motor Angle Delta Limit';
MOTAGDELTALIM_MOTREV_U0P16.Description = [...
  'Maximum delta allowed to prevent overflow which is 2Pi'];
MOTAGDELTALIM_MOTREV_U0P16.DocUnits = 'MotRev';
MOTAGDELTALIM_MOTREV_U0P16.EngDT = dt.u0p16;
MOTAGDELTALIM_MOTREV_U0P16.EngVal = 0.9999847412;
MOTAGDELTALIM_MOTREV_U0P16.Define = 'Local';


MOTAGMAXDELTA_MOTREV_U0P16 = DataDict.Constant;
MOTAGMAXDELTA_MOTREV_U0P16.LongName = 'Motor Angle Maximum Delta';
MOTAGMAXDELTA_MOTREV_U0P16.Description = [...
  'Maximum delta allowed for determining revolution'];
MOTAGMAXDELTA_MOTREV_U0P16.DocUnits = 'MotRev';
MOTAGMAXDELTA_MOTREV_U0P16.EngDT = dt.u0p16;
MOTAGMAXDELTA_MOTREV_U0P16.EngVal = 0.5;
MOTAGMAXDELTA_MOTREV_U0P16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
