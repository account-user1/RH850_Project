%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2015 12:59:58       %
%                                  Created with tool release: 2.10.0     %
%%-----------------------------------------------------------------------%

NM001A = DataDict.FDD;
NM001A.Version = '1.0.X';
NM001A.LongName = 'Common Manufacturing Services';
NM001A.ShoName  = 'CmnMfgSrv';
NM001A.DesignASIL = '';
NM001A.Description = [...
  'Shared Nexteer manufacturing services common across all EA4 platforms'];
NM001A.Ntc = ...
	{};
NM001A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CmnMfgSrcInit = DataDict.Runnable;
CmnMfgSrcInit.TimeStep = 0;

CmnMfgSrvPer1 = DataDict.Runnable;
CmnMfgSrvPer1.TimeStep = 0.01;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ReadNtcFltAry = DataDict.Client;
ReadNtcFltAry.CallLocation = {'CmnMfgSrv_FD60ReadNxtrTroCod'};
ReadNtcFltAry.Return = DataDict.CSReturn;
ReadNtcFltAry.Return.Type = 'None';
ReadNtcFltAry.Return.Min = [];
ReadNtcFltAry.Return.Max = [];
ReadNtcFltAry.Return.TestTolerance = [];
ReadNtcFltAry.Arguments(1) = DataDict.CSArguments;
ReadNtcFltAry.Arguments(1).Name = 'DiagcMgrNtcFltAry';
ReadNtcFltAry.Arguments(1).EngMin = -3.402823466e+38;
ReadNtcFltAry.Arguments(1).EngMax = 3.402823466e+38;
ReadNtcFltAry.Arguments(1).EngDT = dt.float32;
ReadNtcFltAry.Arguments(1).Units = 'Cnt';
ReadNtcFltAry.Arguments(1).Direction = 'In';
ReadNtcFltAry.Arguments(1).InitRowCol = [1  1];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
SysSt = DataDict.IpSignal;
SysSt.LongName = 'The New System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = dt.float32;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'CmnMfgSrv_FD00ReadSysSt'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
CmnMfgSrvCal0RelNr = DataDict.Calibration;
CmnMfgSrvCal0RelNr.LongName = 'Calibration Sector 0 Release Number';
CmnMfgSrvCal0RelNr.Description = [...
  'Calibration Sector 0 Release Number'];
CmnMfgSrvCal0RelNr.DocUnits = 'Cnt';
CmnMfgSrvCal0RelNr.EngDT = dt.u32;
CmnMfgSrvCal0RelNr.EngVal = 0;
CmnMfgSrvCal0RelNr.EngMin = 0;
CmnMfgSrvCal0RelNr.EngMax = 4294967295;
CmnMfgSrvCal0RelNr.ProgrammedBy = 'Nexteer';
CmnMfgSrvCal0RelNr.Cardinality = 'N';
CmnMfgSrvCal0RelNr.CustomerVisible = false;
CmnMfgSrvCal0RelNr.Online = false;
CmnMfgSrvCal0RelNr.Impact = 'L';
CmnMfgSrvCal0RelNr.TuningOwner = 'EPDT';
CmnMfgSrvCal0RelNr.GraphLink = '';
CmnMfgSrvCal0RelNr.Monotony = 'None';
CmnMfgSrvCal0RelNr.MaxGrad = 999;
CmnMfgSrvCal0RelNr.CoderInfo.CustomAttributes.PortName = 'CmnMfgSrvCal0RelNr';


CmnMfgSrvCal1RelNr = DataDict.Calibration;
CmnMfgSrvCal1RelNr.LongName = 'Calibration Sector 1 Release Number';
CmnMfgSrvCal1RelNr.Description = [...
  'Calibration Sector 1 Release Number'];
CmnMfgSrvCal1RelNr.DocUnits = 'Cnt';
CmnMfgSrvCal1RelNr.EngDT = dt.u32;
CmnMfgSrvCal1RelNr.EngVal = 0;
CmnMfgSrvCal1RelNr.EngMin = 0;
CmnMfgSrvCal1RelNr.EngMax = 4294967295;
CmnMfgSrvCal1RelNr.ProgrammedBy = 'Nexteer';
CmnMfgSrvCal1RelNr.Cardinality = 'N';
CmnMfgSrvCal1RelNr.CustomerVisible = false;
CmnMfgSrvCal1RelNr.Online = false;
CmnMfgSrvCal1RelNr.Impact = 'L';
CmnMfgSrvCal1RelNr.TuningOwner = 'EPDT';
CmnMfgSrvCal1RelNr.GraphLink = '';
CmnMfgSrvCal1RelNr.Monotony = 'None';
CmnMfgSrvCal1RelNr.MaxGrad = 999;
CmnMfgSrvCal1RelNr.CoderInfo.CustomAttributes.PortName = 'CmnMfgSrvCal1RelNr';


CmnMfgSrvCal2RelNr = DataDict.Calibration;
CmnMfgSrvCal2RelNr.LongName = 'Calibration Sector 2 Release Number';
CmnMfgSrvCal2RelNr.Description = [...
  'Calibration Sector 2 Release Number'];
CmnMfgSrvCal2RelNr.DocUnits = 'Cnt';
CmnMfgSrvCal2RelNr.EngDT = dt.u32;
CmnMfgSrvCal2RelNr.EngVal = 0;
CmnMfgSrvCal2RelNr.EngMin = 0;
CmnMfgSrvCal2RelNr.EngMax = 4294967295;
CmnMfgSrvCal2RelNr.ProgrammedBy = 'Nexteer';
CmnMfgSrvCal2RelNr.Cardinality = 'N';
CmnMfgSrvCal2RelNr.CustomerVisible = false;
CmnMfgSrvCal2RelNr.Online = false;
CmnMfgSrvCal2RelNr.Impact = 'L';
CmnMfgSrvCal2RelNr.TuningOwner = 'EPDT';
CmnMfgSrvCal2RelNr.GraphLink = '';
CmnMfgSrvCal2RelNr.Monotony = 'None';
CmnMfgSrvCal2RelNr.MaxGrad = 999;
CmnMfgSrvCal2RelNr.CoderInfo.CustomAttributes.PortName = 'CmnMfgSrvCal2RelNr';


CmnMfgSrvSecuAcsAtmptTiOut = DataDict.Calibration;
CmnMfgSrvSecuAcsAtmptTiOut.LongName = 'Security Access Attempt Time Out';
CmnMfgSrvSecuAcsAtmptTiOut.Description = 'Period of time, in milliseconds, delay after a number of failed attempts to unlock the controller.';
CmnMfgSrvSecuAcsAtmptTiOut.DocUnits = 'MilliSec';
CmnMfgSrvSecuAcsAtmptTiOut.EngDT = dt.u16;
CmnMfgSrvSecuAcsAtmptTiOut.EngVal = 0;
CmnMfgSrvSecuAcsAtmptTiOut.EngMin = 0;
CmnMfgSrvSecuAcsAtmptTiOut.EngMax = 65535;
CmnMfgSrvSecuAcsAtmptTiOut.ProgrammedBy = 'Nexteer';
CmnMfgSrvSecuAcsAtmptTiOut.Cardinality = 'N';
CmnMfgSrvSecuAcsAtmptTiOut.CustomerVisible = false;
CmnMfgSrvSecuAcsAtmptTiOut.Online = false;
CmnMfgSrvSecuAcsAtmptTiOut.Impact = 'L';
CmnMfgSrvSecuAcsAtmptTiOut.TuningOwner = 'EPDT';
CmnMfgSrvSecuAcsAtmptTiOut.GraphLink = '';
CmnMfgSrvSecuAcsAtmptTiOut.Monotony = 'None';
CmnMfgSrvSecuAcsAtmptTiOut.MaxGrad = 999;
CmnMfgSrvSecuAcsAtmptTiOut.CoderInfo.CustomAttributes.PortName = 'CmnMfgSrvSecuAcsAtmptTiOut';


CmnMfgSrvSecuAcsMaxNrAtmpt = DataDict.Calibration;
CmnMfgSrvSecuAcsMaxNrAtmpt.LongName = 'Security Access Maximum Number Attempts';
CmnMfgSrvSecuAcsMaxNrAtmpt.Description = 'Number of unrestricted bad attempts to unlock the Nexteer security access before the time delay is enforced.';
CmnMfgSrvSecuAcsMaxNrAtmpt.DocUnits = 'Cnt';
CmnMfgSrvSecuAcsMaxNrAtmpt.EngDT = dt.u08;
CmnMfgSrvSecuAcsMaxNrAtmpt.EngVal = 0;
CmnMfgSrvSecuAcsMaxNrAtmpt.EngMin = 0;
CmnMfgSrvSecuAcsMaxNrAtmpt.EngMax = 10;
CmnMfgSrvSecuAcsMaxNrAtmpt.ProgrammedBy = 'Nexteer';
CmnMfgSrvSecuAcsMaxNrAtmpt.Cardinality = 'N';
CmnMfgSrvSecuAcsMaxNrAtmpt.CustomerVisible = false;
CmnMfgSrvSecuAcsMaxNrAtmpt.Online = false;
CmnMfgSrvSecuAcsMaxNrAtmpt.Impact = 'L';
CmnMfgSrvSecuAcsMaxNrAtmpt.TuningOwner = 'EPDT';
CmnMfgSrvSecuAcsMaxNrAtmpt.GraphLink = '';
CmnMfgSrvSecuAcsMaxNrAtmpt.Monotony = 'None';
CmnMfgSrvSecuAcsMaxNrAtmpt.MaxGrad = 999;
CmnMfgSrvSecuAcsMaxNrAtmpt.CoderInfo.CustomAttributes.PortName = 'CmnMfgSrvSecuAcsMaxNrAtmpt';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
IgnCntr = DataDict.NVM;
IgnCntr.LongName = 'Ignition Cycle Counter';
IgnCntr.Description = [...
  'Ignition counter, increments every ignition cycle'];
IgnCntr.DocUnits = 'Cnt';
IgnCntr.EngDT = dt.u32;
IgnCntr.EngMin = 0;
IgnCntr.EngMax = 4294967295;
IgnCntr.ProgrammedBy = 'Nexteer';
IgnCntr.CustomerVisible = false;
IgnCntr.Impact = 'L';
IgnCntr.TuningOwner = 'FDD';
IgnCntr.CoderInfo.Alias = '';
IgnCntr.InitRowCol = [1  1];


NxtrMfgEnaCntr = DataDict.NVM;
NxtrMfgEnaCntr.LongName = 'Nexteer MEC Counter';
NxtrMfgEnaCntr.Description = [...
  'Nexteer manufacturng enable counter'];
NxtrMfgEnaCntr.DocUnits = 'Cnt';
NxtrMfgEnaCntr.EngDT = dt.u08;
NxtrMfgEnaCntr.EngMin = 0;
NxtrMfgEnaCntr.EngMax = 255;
NxtrMfgEnaCntr.ProgrammedBy = 'Nexteer';
NxtrMfgEnaCntr.CustomerVisible = false;
NxtrMfgEnaCntr.Impact = 'L';
NxtrMfgEnaCntr.TuningOwner = 'FDD';
NxtrMfgEnaCntr.CoderInfo.Alias = '';
NxtrMfgEnaCntr.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
%end of Data Dictionary