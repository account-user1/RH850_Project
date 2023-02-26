%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 06-Mar-2017 11:25:57       %
%                                  Created with tool release: 2.54.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES108A = DataDict.FDD;
ES108A.Version = '1.0.X';
ES108A.LongName = 'ShutdownMechanism';
ES108A.ShoName  = 'ShtdwnMech';
ES108A.DesignASIL = 'D';
ES108A.Description = 'Shutdown Mechanism Single Inverter';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
ShtdwnMechInit1 = DataDict.Runnable;
ShtdwnMechInit1.Context = 'Rte';
ShtdwnMechInit1.TimeStep = 0;
ShtdwnMechInit1.Description = 'Dummy init function';

ShtdwnMechPer1 = DataDict.Runnable;
ShtdwnMechPer1.Context = 'Rte';
ShtdwnMechPer1.TimeStep = 0.002;
ShtdwnMechPer1.Description = 'Controls SysFlt2A pin';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
IoHwAb_SetGpioSysFlt2A = DataDict.Client;
IoHwAb_SetGpioSysFlt2A.CallLocation = {'ShtdwnMechPer1'};
IoHwAb_SetGpioSysFlt2A.Description = 'SetGpioSysFlt2A GPIO Write';
IoHwAb_SetGpioSysFlt2A.Return = DataDict.CSReturn;
IoHwAb_SetGpioSysFlt2A.Return.Type = 'Standard';
IoHwAb_SetGpioSysFlt2A.Return.Min = 0;
IoHwAb_SetGpioSysFlt2A.Return.Max = 1;
IoHwAb_SetGpioSysFlt2A.Return.TestTolerance = 0;
IoHwAb_SetGpioSysFlt2A.Return.Description = 'SetGpioSysFlt2A GPIO Write';
IoHwAb_SetGpioSysFlt2A.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioSysFlt2A.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngMin = 0;
IoHwAb_SetGpioSysFlt2A.Arguments(1).EngMax = 1;
IoHwAb_SetGpioSysFlt2A.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioSysFlt2A.Arguments(1).Direction = 'In';
IoHwAb_SetGpioSysFlt2A.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioSysFlt2A.Arguments(1).Description = 'PinSt';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = [...
  'Signal indicating the status of Inverter 1'];
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'ShtdwnMechPer1'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = 'Start Up State';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'ShtdwnMechPer1'};
StrtUpSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

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

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_STRTUPSTDI_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTDI_CNT_U08.LongName = 'StartUp State - Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.Description = 'StartUp State in Disable';
ELECGLBPRM_STRTUPSTDI_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTDI_CNT_U08.EngVal = 160;
ELECGLBPRM_STRTUPSTDI_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.LongName = 'StartUp State - Temporal Monitor Initialization Start';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Temporal Monitor Initialization'];
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.EngVal = 40;
ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
