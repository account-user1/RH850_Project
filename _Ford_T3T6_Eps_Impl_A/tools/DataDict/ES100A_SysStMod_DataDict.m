%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-Mar-2016 16:05:49       %
%                                  Created with tool release: 2.35.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES100A = DataDict.FDD;
ES100A.Version = '1.3.X';
ES100A.LongName = 'System States and Modes';
ES100A.ShoName  = 'SysStMod';
ES100A.DesignASIL = 'D';
ES100A.Description = [...
  'Controls the operating state of the system'];
ES100A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SysStModInit1 = DataDict.Runnable;
SysStModInit1.Context = 'Rte';
SysStModInit1.TimeStep = 0;

SysStModPer1 = DataDict.Runnable;
SysStModPer1.Context = 'Rte';
SysStModPer1.TimeStep = 0.002;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
PwrSplyEnaReq = DataDict.IpSignal;
PwrSplyEnaReq.LongName = 'Enable Request to Keep CM Power Supply ON';
PwrSplyEnaReq.DocUnits = 'Cnt';
PwrSplyEnaReq.EngDT = dt.lgc;
PwrSplyEnaReq.EngInit = 0;
PwrSplyEnaReq.EngMin = 0;
PwrSplyEnaReq.EngMax = 1;
PwrSplyEnaReq.ReadIn = {'SysStModPer1'};
PwrSplyEnaReq.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'SysStModPer1'};
StrtUpSt.ReadType = 'Rte';


SysStFltOutpReqDi = DataDict.IpSignal;
SysStFltOutpReqDi.LongName = 'Request to Go to Disable State from a Failure Removing Output';
SysStFltOutpReqDi.DocUnits = 'Cnt';
SysStFltOutpReqDi.EngDT = dt.lgc;
SysStFltOutpReqDi.EngInit = 0;
SysStFltOutpReqDi.EngMin = 0;
SysStFltOutpReqDi.EngMax = 1;
SysStFltOutpReqDi.ReadIn = {'SysStModPer1'};
SysStFltOutpReqDi.ReadType = 'Rte';


SysStImdtTranReqOff = DataDict.IpSignal;
SysStImdtTranReqOff.LongName = 'System State Immediate Transition Request Off';
SysStImdtTranReqOff.DocUnits = 'Cnt';
SysStImdtTranReqOff.EngDT = dt.lgc;
SysStImdtTranReqOff.EngInit = 0;
SysStImdtTranReqOff.EngMin = 0;
SysStImdtTranReqOff.EngMax = 1;
SysStImdtTranReqOff.ReadIn = {'SysStModPer1'};
SysStImdtTranReqOff.ReadType = 'Rte';


SysStReqDi = DataDict.IpSignal;
SysStReqDi.LongName = 'System Request to Go to the Disable State from State Output Control';
SysStReqDi.DocUnits = 'Cnt';
SysStReqDi.EngDT = dt.lgc;
SysStReqDi.EngInit = 0;
SysStReqDi.EngMin = 0;
SysStReqDi.EngMax = 1;
SysStReqDi.ReadIn = {'SysStModPer1'};
SysStReqDi.ReadType = 'Rte';


SysStReqEna = DataDict.IpSignal;
SysStReqEna.LongName = 'Enable Request to Go to Enable State';
SysStReqEna.DocUnits = 'Cnt';
SysStReqEna.EngDT = dt.lgc;
SysStReqEna.EngInit = 0;
SysStReqEna.EngMin = 0;
SysStReqEna.EngMax = 1;
SysStReqEna.ReadIn = {'SysStModPer1'};
SysStReqEna.ReadType = 'Rte';


SysStWrmIninCmpl = DataDict.IpSignal;
SysStWrmIninCmpl.LongName = 'Warm Init Start Up Testing Completed';
SysStWrmIninCmpl.DocUnits = 'Cnt';
SysStWrmIninCmpl.EngDT = dt.lgc;
SysStWrmIninCmpl.EngInit = 0;
SysStWrmIninCmpl.EngMin = 0;
SysStWrmIninCmpl.EngMax = 1;
SysStWrmIninCmpl.ReadIn = {'SysStModPer1'};
SysStWrmIninCmpl.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
SysSt = DataDict.OpSignal;
SysSt.LongName = 'The New System State';
SysSt.Description = 'The new system state';
SysSt.DocUnits = 'Cnt';
SysSt.SwcShoName = 'SysStMod';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.TestTolerance = 0;
SysSt.WrittenIn = {'SysStModPer1'};
SysSt.WriteType = 'Rte';



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
dSysStModTranVect = DataDict.Display;
dSysStModTranVect.LongName = 'System State Transition Vector';
dSysStModTranVect.Description = [...
  'Identifies the combined system state vector used for table lookups'];
dSysStModTranVect.DocUnits = 'Cnt';
dSysStModTranVect.EngDT = dt.u16;
dSysStModTranVect.EngMin = 0;
dSysStModTranVect.EngMax = 31;
dSysStModTranVect.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
SysStModPrevSysSt = DataDict.PIM;
SysStModPrevSysSt.LongName = 'System State from the Previous Loop';
SysStModPrevSysSt.Description = 'Previous System State';
SysStModPrevSysSt.DocUnits = 'Cnt';
SysStModPrevSysSt.EngDT = dt.u16;
SysStModPrevSysSt.EngMin = SysSt1.SYSST_DI;
SysStModPrevSysSt.EngMax = SysSt1.SYSST_WRMININ;
SysStModPrevSysSt.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
SYSSTMODPRSNTSTDI_CNT_U16 = DataDict.Constant;
SYSSTMODPRSNTSTDI_CNT_U16.LongName = 'Disable State Lookup Table';
SYSSTMODPRSNTSTDI_CNT_U16.Description = [...
  'Next state lookup when in the DISABLE state'];
SYSSTMODPRSNTSTDI_CNT_U16.DocUnits = 'Cnt';
SYSSTMODPRSNTSTDI_CNT_U16.EngDT = dt.u16;
SYSSTMODPRSNTSTDI_CNT_U16.EngVal = [SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI];
SYSSTMODPRSNTSTDI_CNT_U16.Header = '';
SYSSTMODPRSNTSTDI_CNT_U16.Define = 'Local';


SYSSTMODPRSNTSTENA_CNT_U16 = DataDict.Constant;
SYSSTMODPRSNTSTENA_CNT_U16.LongName = 'Enable State Lookup Table';
SYSSTMODPRSNTSTENA_CNT_U16.Description = [...
  'Next state lookup when in the ENABLE state'];
SYSSTMODPRSNTSTENA_CNT_U16.DocUnits = 'Cnt';
SYSSTMODPRSNTSTENA_CNT_U16.EngDT = dt.u16;
SYSSTMODPRSNTSTENA_CNT_U16.EngVal = [SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_ENA SysSt1.SYSST_ENA 0 0 SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_ENA SysSt1.SYSST_ENA SysSt1.SYSST_DI SysSt1.SYSST_DI];
SYSSTMODPRSNTSTENA_CNT_U16.Header = '';
SYSSTMODPRSNTSTENA_CNT_U16.Define = 'Local';


SYSSTMODPRSNTSTOFF_CNT_U16 = DataDict.Constant;
SYSSTMODPRSNTSTOFF_CNT_U16.LongName = 'Off State Lookup Table';
SYSSTMODPRSNTSTOFF_CNT_U16.Description = [...
  'Next state lookup when in the OFF state'];
SYSSTMODPRSNTSTOFF_CNT_U16.DocUnits = 'Cnt';
SYSSTMODPRSNTSTOFF_CNT_U16.EngDT = dt.u16;
SYSSTMODPRSNTSTOFF_CNT_U16.EngVal = [SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_OFF SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ];
SYSSTMODPRSNTSTOFF_CNT_U16.Header = '';
SYSSTMODPRSNTSTOFF_CNT_U16.Define = 'Local';


SYSSTMODPRSNTSTWRMININ_CNT_U16 = DataDict.Constant;
SYSSTMODPRSNTSTWRMININ_CNT_U16.LongName = 'Warm Init State Lookup Table';
SYSSTMODPRSNTSTWRMININ_CNT_U16.Description = [...
  'Next state lookup when in the WARM INIT state'];
SYSSTMODPRSNTSTWRMININ_CNT_U16.DocUnits = 'Cnt';
SYSSTMODPRSNTSTWRMININ_CNT_U16.EngDT = dt.u16;
SYSSTMODPRSNTSTWRMININ_CNT_U16.EngVal = [SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_ENA SysSt1.SYSST_WRMININ SysSt1.SYSST_WRMININ SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI SysSt1.SYSST_DI];
SYSSTMODPRSNTSTWRMININ_CNT_U16.Header = '';
SYSSTMODPRSNTSTWRMININ_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
