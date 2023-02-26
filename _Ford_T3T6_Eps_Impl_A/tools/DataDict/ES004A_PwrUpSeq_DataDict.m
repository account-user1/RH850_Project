%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Dec-2016 13:45:44       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES004A = DataDict.FDD;
ES004A.Version = '1.5.X';
ES004A.LongName = 'Power Up Sequence';
ES004A.ShoName  = 'PwrUpSeq';
ES004A.DesignASIL = 'D';
ES004A.Description = [...
  'Determine if the System State WarmInit Milestones have been completed ' ...
  'or not.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrUpSeqInit1 = DataDict.Runnable;
PwrUpSeqInit1.Context = 'Rte';
PwrUpSeqInit1.TimeStep = 0;
PwrUpSeqInit1.Description = [...
  'Init Function for Power Up Sequence'];

PwrUpSeqPer1 = DataDict.Runnable;
PwrUpSeqPer1.Context = 'Rte';
PwrUpSeqPer1.TimeStep = 0.002;
PwrUpSeqPer1.Description = [...
  'Periodic Function for Power Up Sequence'];

PwrTurnOffCtrl = DataDict.SrvRunnable;
PwrTurnOffCtrl.Context = 'Both';
PwrTurnOffCtrl.Description = [...
  'server runnable to make power turn off control pin Low'];
PwrTurnOffCtrl.Return = DataDict.CSReturn;
PwrTurnOffCtrl.Return.Type = 'None';
PwrTurnOffCtrl.Return.Min = [];
PwrTurnOffCtrl.Return.Max = [];
PwrTurnOffCtrl.Return.TestTolerance = [];
PwrTurnOffCtrl.Arguments(1) = DataDict.CSArguments;
PwrTurnOffCtrl.Arguments(1).Name = 'PinSt';
PwrTurnOffCtrl.Arguments(1).EngDT = dt.lgc;
PwrTurnOffCtrl.Arguments(1).EngMin = 0;
PwrTurnOffCtrl.Arguments(1).EngMax = 1;
PwrTurnOffCtrl.Arguments(1).TestTolerance = 0;
PwrTurnOffCtrl.Arguments(1).Units = 'Cnt';
PwrTurnOffCtrl.Arguments(1).Direction = 'In';
PwrTurnOffCtrl.Arguments(1).InitRowCol = [1  1];
PwrTurnOffCtrl.Arguments(1).Description = 'To Control Pin State';



%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
IoHwAb_SetGpioPwrTurnOffCtrl = DataDict.Client;
IoHwAb_SetGpioPwrTurnOffCtrl.CallLocation = {'PwrTurnOffCtrl'};
IoHwAb_SetGpioPwrTurnOffCtrl.Description = 'None';
IoHwAb_SetGpioPwrTurnOffCtrl.Return = DataDict.CSReturn;
IoHwAb_SetGpioPwrTurnOffCtrl.Return.Type = 'Standard';
IoHwAb_SetGpioPwrTurnOffCtrl.Return.Min = 0;
IoHwAb_SetGpioPwrTurnOffCtrl.Return.Max = 1;
IoHwAb_SetGpioPwrTurnOffCtrl.Return.TestTolerance = [];
IoHwAb_SetGpioPwrTurnOffCtrl.Return.Description = 'This controls the Power Turn Off';
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).TestTolerance = 0;
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPwrTurnOffCtrl.Arguments(1).Description = 'To Control Pin State';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
CodFlsCrcChkCmpl = DataDict.IpSignal;
CodFlsCrcChkCmpl.LongName = 'Code Flash CRC Check Complete';
CodFlsCrcChkCmpl.Description = [...
  'Indicates the completion of Code Flash CRC Check'];
CodFlsCrcChkCmpl.DocUnits = 'Cnt';
CodFlsCrcChkCmpl.EngDT = dt.lgc;
CodFlsCrcChkCmpl.EngInit = 0;
CodFlsCrcChkCmpl.EngMin = 0;
CodFlsCrcChkCmpl.EngMax = 1;
CodFlsCrcChkCmpl.ReadIn = {'PwrUpSeqPer1'};
CodFlsCrcChkCmpl.ReadType = 'Rte';


CurrMeasWrmIninTestCmpl = DataDict.IpSignal;
CurrMeasWrmIninTestCmpl.LongName = 'Current Measurement Initialization Test Complete';
CurrMeasWrmIninTestCmpl.Description = [...
  'Indicates the completion of Current Measurement Initialization Test'];
CurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
CurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
CurrMeasWrmIninTestCmpl.EngInit = 0;
CurrMeasWrmIninTestCmpl.EngMin = 0;
CurrMeasWrmIninTestCmpl.EngMax = 1;
CurrMeasWrmIninTestCmpl.ReadIn = {'PwrUpSeqPer1'};
CurrMeasWrmIninTestCmpl.ReadType = 'Rte';


MotDrvr0IninTestCmpl = DataDict.IpSignal;
MotDrvr0IninTestCmpl.LongName = 'Motor Driver 0 Initialization Complete';
MotDrvr0IninTestCmpl.Description = [...
  'Indicates the completion of Motor Driver 0 Initialization'];
MotDrvr0IninTestCmpl.DocUnits = 'Cnt';
MotDrvr0IninTestCmpl.EngDT = dt.lgc;
MotDrvr0IninTestCmpl.EngInit = 0;
MotDrvr0IninTestCmpl.EngMin = 0;
MotDrvr0IninTestCmpl.EngMax = 1;
MotDrvr0IninTestCmpl.ReadIn = {'PwrUpSeqPer1'};
MotDrvr0IninTestCmpl.ReadType = 'Rte';


MotDrvr1IninTestCmpl = DataDict.IpSignal;
MotDrvr1IninTestCmpl.LongName = 'Motor Driver 1 Initialization Complete';
MotDrvr1IninTestCmpl.Description = [...
  'Indicates the completion of Motor Driver 1 Initialization'];
MotDrvr1IninTestCmpl.DocUnits = 'Cnt';
MotDrvr1IninTestCmpl.EngDT = dt.lgc;
MotDrvr1IninTestCmpl.EngInit = 0;
MotDrvr1IninTestCmpl.EngMin = 0;
MotDrvr1IninTestCmpl.EngMax = 1;
MotDrvr1IninTestCmpl.ReadIn = {'PwrUpSeqPer1'};
MotDrvr1IninTestCmpl.ReadType = 'Rte';


PwrDiscnctATestCmpl = DataDict.IpSignal;
PwrDiscnctATestCmpl.LongName = 'Power Disconnect A Test Complete';
PwrDiscnctATestCmpl.Description = [...
  'Indicates the completion of Power Disconnect A Test'];
PwrDiscnctATestCmpl.DocUnits = 'Cnt';
PwrDiscnctATestCmpl.EngDT = dt.lgc;
PwrDiscnctATestCmpl.EngInit = 0;
PwrDiscnctATestCmpl.EngMin = 0;
PwrDiscnctATestCmpl.EngMax = 1;
PwrDiscnctATestCmpl.ReadIn = {'PwrUpSeqPer1'};
PwrDiscnctATestCmpl.ReadType = 'Rte';


PwrDiscnctBTestCmpl = DataDict.IpSignal;
PwrDiscnctBTestCmpl.LongName = 'Power Disconnect B Test Complete';
PwrDiscnctBTestCmpl.Description = [...
  'Indicates the completion of Power Disconnect B Test'];
PwrDiscnctBTestCmpl.DocUnits = 'Cnt';
PwrDiscnctBTestCmpl.EngDT = dt.lgc;
PwrDiscnctBTestCmpl.EngInit = 0;
PwrDiscnctBTestCmpl.EngMin = 0;
PwrDiscnctBTestCmpl.EngMax = 1;
PwrDiscnctBTestCmpl.ReadIn = {'PwrUpSeqPer1'};
PwrDiscnctBTestCmpl.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'Represents the System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'PwrUpSeqPer1'};
SysSt.ReadType = 'Rte';


TmplMonIninTestCmpl = DataDict.IpSignal;
TmplMonIninTestCmpl.LongName = 'Temporal Monitor Initialization Test Complete';
TmplMonIninTestCmpl.Description = [...
  'Indicates the completion of Temporal Monitor Initialization Test'];
TmplMonIninTestCmpl.DocUnits = 'Cnt';
TmplMonIninTestCmpl.EngDT = dt.lgc;
TmplMonIninTestCmpl.EngInit = 0;
TmplMonIninTestCmpl.EngMin = 0;
TmplMonIninTestCmpl.EngMax = 1;
TmplMonIninTestCmpl.ReadIn = {'PwrUpSeqPer1'};
TmplMonIninTestCmpl.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
StrtUpSt = DataDict.OpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = [...
  'Constant indicating the sequence type'];
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.SwcShoName = 'PwrUpSeq';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 160;
StrtUpSt.TestTolerance = 0;
StrtUpSt.WrittenIn = {'PwrUpSeqPer1'};
StrtUpSt.WriteType = 'Rte';


SysStWrmIninCmpl = DataDict.OpSignal;
SysStWrmIninCmpl.LongName = 'Systerm State Warm Init Complete';
SysStWrmIninCmpl.Description = [...
  'Milestone variable for Warminit State'];
SysStWrmIninCmpl.DocUnits = 'Cnt';
SysStWrmIninCmpl.SwcShoName = 'PwrUpSeq';
SysStWrmIninCmpl.EngDT = dt.lgc;
SysStWrmIninCmpl.EngInit = 0;
SysStWrmIninCmpl.EngMin = 0;
SysStWrmIninCmpl.EngMax = 1;
SysStWrmIninCmpl.TestTolerance = 0;
SysStWrmIninCmpl.WrittenIn = {'PwrUpSeqPer1'};
SysStWrmIninCmpl.WriteType = 'Rte';



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

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
PwrTurnOffCtrlPrev = DataDict.PIM;
PwrTurnOffCtrlPrev.LongName = 'Power Turn Off Control Previous';
PwrTurnOffCtrlPrev.Description = [...
  'counter used by the PwrUpSeq FDD for setting TOD high'];
PwrTurnOffCtrlPrev.DocUnits = 'Cnt';
PwrTurnOffCtrlPrev.EngDT = dt.u08;
PwrTurnOffCtrlPrev.EngMin = 0;
PwrTurnOffCtrlPrev.EngMax = 255;
PwrTurnOffCtrlPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Start';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Current Measurement WarmInit Initialization '];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngVal = 100;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTDI_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTDI_CNT_U08.LongName = 'StartUp State - Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.Description = 'StartUp State in Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngVal = 160;
ELECGLBPRM_STRTUPSTDI_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.LongName = 'StartUp State - Flash Memory Initialization Start';
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.Description = 'Indication to start Flash Memory';
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.EngVal = 110;
ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.LongName = 'StartUp State - Motor Driver Initialization Start';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Description = [...
  'Indication to start Motor Driver Initialization '];
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.EngVal = 80;
ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect A Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect A Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngVal = 20;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect B Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect B Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngVal = 60;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Start';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Temporal Monitor Initialization'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngVal = 40;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.LongName = 'StartUp State - Warm Initialization Complete';
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.Description = [...
  'Indication to start Warm Initialization Complete'];
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.EngVal = 120;
ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08.Define = 'Global';


PWRTURNOFFCTRLTHD_CNT_U08 = DataDict.Constant;
PWRTURNOFFCTRLTHD_CNT_U08.LongName = 'Power Turn Off Control Threshold';
PWRTURNOFFCTRLTHD_CNT_U08.Description = [...
  'Number of counts that the PwrUpSeq FDD will wait before setting TOD hi' ...
  'gh'];
PWRTURNOFFCTRLTHD_CNT_U08.DocUnits = 'Cnt';
PWRTURNOFFCTRLTHD_CNT_U08.EngDT = dt.u08;
PWRTURNOFFCTRLTHD_CNT_U08.EngVal = 2;
PWRTURNOFFCTRLTHD_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
