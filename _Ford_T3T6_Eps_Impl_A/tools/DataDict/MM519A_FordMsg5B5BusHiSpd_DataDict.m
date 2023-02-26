%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Mar-2018 10:04:22       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM519A = DataDict.FDD;
MM519A.Version = '3.0.X';
MM519A.LongName = 'Ford Message 5B5 Bus High Speed';
MM519A.ShoName  = 'FordMsg5B5BusHiSpd';
MM519A.DesignASIL = 'B';
MM519A.Description = [...
  'The purpose of the Ford Message 5B5 Bus High Speed function is to tran' ...
  'smit Electric Power Assisted Steering information to other vehicle mod' ...
  'ules. Detailed requirements have implemented the Ford DBC file for gui' ...
  'dance.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg5B5BusHiSpdInit1 = DataDict.Runnable;
FordMsg5B5BusHiSpdInit1.Context = 'Rte';
FordMsg5B5BusHiSpdInit1.TimeStep = 0;
FordMsg5B5BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg5B5BusHiSpdPer1 = DataDict.Runnable;
FordMsg5B5BusHiSpdPer1.Context = 'Rte';
FordMsg5B5BusHiSpdPer1.TimeStep = 0.01;
FordMsg5B5BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 millisecond '];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Ford_PSCM_AutoSarNMControl = DataDict.OpSignal;
Ford_PSCM_AutoSarNMControl.LongName = 'Ford Power Steering Control Module AUTOSAR NM Control';
Ford_PSCM_AutoSarNMControl.Description = [...
  'It provides Power Steering Control Module AUTOSAR NM Control to CAN. D' ...
  'oc Unit: Ford_PSCM_AutoSarNMControl.'];
Ford_PSCM_AutoSarNMControl.DocUnits = 'Cnt';
Ford_PSCM_AutoSarNMControl.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_AutoSarNMControl.EngDT = dt.u08;
Ford_PSCM_AutoSarNMControl.EngInit = 0;
Ford_PSCM_AutoSarNMControl.EngMin = 0;
Ford_PSCM_AutoSarNMControl.EngMax = 0;
Ford_PSCM_AutoSarNMControl.TestTolerance = 0;
Ford_PSCM_AutoSarNMControl.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_AutoSarNMControl.WriteType = 'Rte';


Ford_PSCM_AutoSarNMNodeId = DataDict.OpSignal;
Ford_PSCM_AutoSarNMNodeId.LongName = 'Ford Power Steering Control Module AUTOSAR NM Node Identification';
Ford_PSCM_AutoSarNMNodeId.Description = [...
  'It provides AUTOSAR NM Node Identification to CAN. Doc Unit: Ford_PSCM' ...
  '_AutoSarNMNodeId.'];
Ford_PSCM_AutoSarNMNodeId.DocUnits = 'Cnt';
Ford_PSCM_AutoSarNMNodeId.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_AutoSarNMNodeId.EngDT = dt.u08;
Ford_PSCM_AutoSarNMNodeId.EngInit = 181;
Ford_PSCM_AutoSarNMNodeId.EngMin = 181;
Ford_PSCM_AutoSarNMNodeId.EngMax = 181;
Ford_PSCM_AutoSarNMNodeId.TestTolerance = 0;
Ford_PSCM_AutoSarNMNodeId.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_AutoSarNMNodeId.WriteType = 'Rte';


Ford_PSCM_AutoSarNMReserved1 = DataDict.OpSignal;
Ford_PSCM_AutoSarNMReserved1.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 1';
Ford_PSCM_AutoSarNMReserved1.Description = [...
  'It provide Power Steering Control Module AUTOSAR NM Reserved 1 to CAN.' ...
  ' Doc Unit: Ford_PSCM_AutoSarNMReserved1.'];
Ford_PSCM_AutoSarNMReserved1.DocUnits = 'Cnt';
Ford_PSCM_AutoSarNMReserved1.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_AutoSarNMReserved1.EngDT = dt.u08;
Ford_PSCM_AutoSarNMReserved1.EngInit = 255;
Ford_PSCM_AutoSarNMReserved1.EngMin = 255;
Ford_PSCM_AutoSarNMReserved1.EngMax = 255;
Ford_PSCM_AutoSarNMReserved1.TestTolerance = 0;
Ford_PSCM_AutoSarNMReserved1.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_AutoSarNMReserved1.WriteType = 'Rte';


Ford_PSCM_AutoSarNMReserved2 = DataDict.OpSignal;
Ford_PSCM_AutoSarNMReserved2.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 2';
Ford_PSCM_AutoSarNMReserved2.Description = [...
  'It provide Power Steering Control Module AUTOSAR NM Reserved 2 to CAN.' ...
  'Doc Unit: Ford_PSCM_AutoSarNMReserved2.'];
Ford_PSCM_AutoSarNMReserved2.DocUnits = 'Cnt';
Ford_PSCM_AutoSarNMReserved2.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_AutoSarNMReserved2.EngDT = dt.u08;
Ford_PSCM_AutoSarNMReserved2.EngInit = 255;
Ford_PSCM_AutoSarNMReserved2.EngMin = 255;
Ford_PSCM_AutoSarNMReserved2.EngMax = 255;
Ford_PSCM_AutoSarNMReserved2.TestTolerance = 0;
Ford_PSCM_AutoSarNMReserved2.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_AutoSarNMReserved2.WriteType = 'Rte';


Ford_PSCM_AutoSarNMReserved3 = DataDict.OpSignal;
Ford_PSCM_AutoSarNMReserved3.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 3';
Ford_PSCM_AutoSarNMReserved3.Description = [...
  'It Provide Power Steering Control Module AUTOSAR NM Reserved 3 to CAN.' ...
  ' Doc Unit: Ford_PSCM_AutoSarNMReserved3 .'];
Ford_PSCM_AutoSarNMReserved3.DocUnits = 'Cnt';
Ford_PSCM_AutoSarNMReserved3.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_AutoSarNMReserved3.EngDT = dt.u08;
Ford_PSCM_AutoSarNMReserved3.EngInit = 255;
Ford_PSCM_AutoSarNMReserved3.EngMin = 255;
Ford_PSCM_AutoSarNMReserved3.EngMax = 255;
Ford_PSCM_AutoSarNMReserved3.TestTolerance = 0;
Ford_PSCM_AutoSarNMReserved3.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_AutoSarNMReserved3.WriteType = 'Rte';


Ford_PSCM_AutoSarNMReserved4 = DataDict.OpSignal;
Ford_PSCM_AutoSarNMReserved4.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 4';
Ford_PSCM_AutoSarNMReserved4.Description = [...
  'It provide Power Steering Control Module AUTOSAR NM Reserved 4 to CAN.' ...
  'Doc Unit: Ford_PSCM_AutoSarNMReserved4.'];
Ford_PSCM_AutoSarNMReserved4.DocUnits = 'Cnt';
Ford_PSCM_AutoSarNMReserved4.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_AutoSarNMReserved4.EngDT = dt.u08;
Ford_PSCM_AutoSarNMReserved4.EngInit = 255;
Ford_PSCM_AutoSarNMReserved4.EngMin = 255;
Ford_PSCM_AutoSarNMReserved4.EngMax = 255;
Ford_PSCM_AutoSarNMReserved4.TestTolerance = 0;
Ford_PSCM_AutoSarNMReserved4.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_AutoSarNMReserved4.WriteType = 'Rte';


Ford_PSCM_GWNMProxy = DataDict.OpSignal;
Ford_PSCM_GWNMProxy.LongName = 'Power Steering Control Module Gateway NM Proxy';
Ford_PSCM_GWNMProxy.Description = [...
  'It Provide Power Steering Control Module Gateway NM Proxy to CAN.Doc U' ...
  'nit: Ford_PSCM_GWNMProxy .'];
Ford_PSCM_GWNMProxy.DocUnits = 'Cnt';
Ford_PSCM_GWNMProxy.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_GWNMProxy.EngDT = dt.u08;
Ford_PSCM_GWNMProxy.EngInit = 255;
Ford_PSCM_GWNMProxy.EngMin = 255;
Ford_PSCM_GWNMProxy.EngMax = 255;
Ford_PSCM_GWNMProxy.TestTolerance = 0;
Ford_PSCM_GWNMProxy.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_GWNMProxy.WriteType = 'Rte';


Ford_PSCM_GWOnBoardTester = DataDict.OpSignal;
Ford_PSCM_GWOnBoardTester.LongName = 'Power Steering Control Module Gateway On Board Tester';
Ford_PSCM_GWOnBoardTester.Description = [...
  'It provide Power Steering Control Module Gateway On Board Tester to CA' ...
  'N. Doc Unit: Ford_PSCM_GWOnBoardTester.'];
Ford_PSCM_GWOnBoardTester.DocUnits = 'Cnt';
Ford_PSCM_GWOnBoardTester.SwcShoName = 'FordMsg5B5BusHiSpd';
Ford_PSCM_GWOnBoardTester.EngDT = dt.u08;
Ford_PSCM_GWOnBoardTester.EngInit = 255;
Ford_PSCM_GWOnBoardTester.EngMin = 255;
Ford_PSCM_GWOnBoardTester.EngMax = 255;
Ford_PSCM_GWOnBoardTester.TestTolerance = 0;
Ford_PSCM_GWOnBoardTester.WrittenIn = {'FordMsg5B5BusHiSpdPer1'};
Ford_PSCM_GWOnBoardTester.WriteType = 'Rte';



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
PwrSteerCtrlModlArNmCtrlPrev = DataDict.PIM;
PwrSteerCtrlModlArNmCtrlPrev.LongName = 'Power Steering Control Module AUTOSAR NM Control Previous';
PwrSteerCtrlModlArNmCtrlPrev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlArNmCtrl'];
PwrSteerCtrlModlArNmCtrlPrev.DocUnits = 'Cnt';
PwrSteerCtrlModlArNmCtrlPrev.EngDT = dt.u08;
PwrSteerCtrlModlArNmCtrlPrev.EngMin = 0;
PwrSteerCtrlModlArNmCtrlPrev.EngMax = 0;
PwrSteerCtrlModlArNmCtrlPrev.InitRowCol = [1  1];


PwrSteerCtrlModlArNmNodIdnPrev = DataDict.PIM;
PwrSteerCtrlModlArNmNodIdnPrev.LongName = 'Power Steering Control Module AUTOSAR NM Node Identification Previous';
PwrSteerCtrlModlArNmNodIdnPrev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlArNmNodIdn'];
PwrSteerCtrlModlArNmNodIdnPrev.DocUnits = 'Cnt';
PwrSteerCtrlModlArNmNodIdnPrev.EngDT = dt.u08;
PwrSteerCtrlModlArNmNodIdnPrev.EngMin = 181;
PwrSteerCtrlModlArNmNodIdnPrev.EngMax = 181;
PwrSteerCtrlModlArNmNodIdnPrev.InitRowCol = [1  1];


PwrSteerCtrlModlArNmResd1Prev = DataDict.PIM;
PwrSteerCtrlModlArNmResd1Prev.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 1 Previous';
PwrSteerCtrlModlArNmResd1Prev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlArNmResd1'];
PwrSteerCtrlModlArNmResd1Prev.DocUnits = 'Cnt';
PwrSteerCtrlModlArNmResd1Prev.EngDT = dt.u08;
PwrSteerCtrlModlArNmResd1Prev.EngMin = 255;
PwrSteerCtrlModlArNmResd1Prev.EngMax = 255;
PwrSteerCtrlModlArNmResd1Prev.InitRowCol = [1  1];


PwrSteerCtrlModlArNmResd2Prev = DataDict.PIM;
PwrSteerCtrlModlArNmResd2Prev.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 2 Previous';
PwrSteerCtrlModlArNmResd2Prev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlArNmResd2'];
PwrSteerCtrlModlArNmResd2Prev.DocUnits = 'Cnt';
PwrSteerCtrlModlArNmResd2Prev.EngDT = dt.u08;
PwrSteerCtrlModlArNmResd2Prev.EngMin = 255;
PwrSteerCtrlModlArNmResd2Prev.EngMax = 255;
PwrSteerCtrlModlArNmResd2Prev.InitRowCol = [1  1];


PwrSteerCtrlModlArNmResd3Prev = DataDict.PIM;
PwrSteerCtrlModlArNmResd3Prev.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 3 Previous';
PwrSteerCtrlModlArNmResd3Prev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlArNmResd3Prev'];
PwrSteerCtrlModlArNmResd3Prev.DocUnits = 'Cnt';
PwrSteerCtrlModlArNmResd3Prev.EngDT = dt.u08;
PwrSteerCtrlModlArNmResd3Prev.EngMin = 255;
PwrSteerCtrlModlArNmResd3Prev.EngMax = 255;
PwrSteerCtrlModlArNmResd3Prev.InitRowCol = [1  1];


PwrSteerCtrlModlArNmResd4Prev = DataDict.PIM;
PwrSteerCtrlModlArNmResd4Prev.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 4 Previous';
PwrSteerCtrlModlArNmResd4Prev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlArNmResd4Prev'];
PwrSteerCtrlModlArNmResd4Prev.DocUnits = 'Cnt';
PwrSteerCtrlModlArNmResd4Prev.EngDT = dt.u08;
PwrSteerCtrlModlArNmResd4Prev.EngMin = 255;
PwrSteerCtrlModlArNmResd4Prev.EngMax = 255;
PwrSteerCtrlModlArNmResd4Prev.InitRowCol = [1  1];


PwrSteerCtrlModlGatewyNmOnBdTestPrev = DataDict.PIM;
PwrSteerCtrlModlGatewyNmOnBdTestPrev.LongName = 'Power Steering Control Module Gateway NM On Board Test Previous';
PwrSteerCtrlModlGatewyNmOnBdTestPrev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlGatewyNmOnBdTest'];
PwrSteerCtrlModlGatewyNmOnBdTestPrev.DocUnits = 'Cnt';
PwrSteerCtrlModlGatewyNmOnBdTestPrev.EngDT = dt.u08;
PwrSteerCtrlModlGatewyNmOnBdTestPrev.EngMin = 255;
PwrSteerCtrlModlGatewyNmOnBdTestPrev.EngMax = 255;
PwrSteerCtrlModlGatewyNmOnBdTestPrev.InitRowCol = [1  1];


PwrSteerCtrlModlGatewyNmProxyPrev = DataDict.PIM;
PwrSteerCtrlModlGatewyNmProxyPrev.LongName = 'Power Steering Control Module Gateway NM Proxy Previous';
PwrSteerCtrlModlGatewyNmProxyPrev.Description = [...
  'To hold the previous value of PwrSteerCtrlModlGatewyNmProxy'];
PwrSteerCtrlModlGatewyNmProxyPrev.DocUnits = 'Cnt';
PwrSteerCtrlModlGatewyNmProxyPrev.EngDT = dt.u08;
PwrSteerCtrlModlGatewyNmProxyPrev.EngMin = 255;
PwrSteerCtrlModlGatewyNmProxyPrev.EngMax = 255;
PwrSteerCtrlModlGatewyNmProxyPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Control Max Value';
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Control'];
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08.EngVal = 0;
PWRSTEERCTRLMODLARNMCTRLMAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Control Min Value';
PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Control'];
PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08.EngVal = 0;
PWRSTEERCTRLMODLARNMCTRLMINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Node Identification Maximum Value';
PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module AUTOSAR NM Node Identif' ...
  'ication'];
PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08.EngVal = 181;
PWRSTEERCTRLMODLARNMNODIDNMAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Node Identification Minimum Value';
PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module AUTOSAR NM Node Identif' ...
  'ication'];
PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08.EngVal = 181;
PWRSTEERCTRLMODLARNMNODIDNMINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMNODIDN_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMNODIDN_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Node Identification';
PWRSTEERCTRLMODLARNMNODIDN_CNT_U08.Description = [...
  'Init value of Power Steering Control Module AUTOSAR NM Node Identifica' ...
  'tion '];
PWRSTEERCTRLMODLARNMNODIDN_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMNODIDN_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMNODIDN_CNT_U08.EngVal = 181;
PWRSTEERCTRLMODLARNMNODIDN_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 1 maximum value';
PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 1'];
PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD1MAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 1 minimum value';
PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 1'];
PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD1MINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 2 Maximum value';
PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 2'];
PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD2MAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 2 Minimum value';
PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 2'];
PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD2MINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 3 Maximum value';
PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 3'];
PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD3MAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 3 Minimum value';
PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 3'];
PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD3MINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 4 Maximum value';
PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 4'];
PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD4MAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08.LongName = 'Power Steering Control Module AUTOSAR NM Reserved 4 Minimum value';
PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module AUTOSAR Networkmanageme' ...
  'nt Reserved 4'];
PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLARNMRESD4MINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08.LongName = 'Power Steering Control Module Gateway NM On Board Test Maximum value';
PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module Gateway Networkmanageme' ...
  'nt On Board Test'];
PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLGATEWYNMONBDTESTMAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08.LongName = 'Power Steering Control Module Gateway NM On Board Test minimum value';
PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module Gateway Networkmanageme' ...
  'nt On Board Test'];
PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLGATEWYNMONBDTESTMINVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08.LongName = 'Power Steering Control Module Gateway NM Proxy maximum value';
PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08.Description = [...
  'Maximum value of Power Steering Control Module Gateway Networkmanageme' ...
  'nt Proxy'];
PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLGATEWYNMPROXYMAXVAL_CNT_U08.Define = 'Local';


PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08 = DataDict.Constant;
PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08.LongName = 'Power Steering Control Module Gateway NM Proxy minimum value';
PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08.Description = [...
  'Minimum value of Power Steering Control Module Gateway Networkmanageme' ...
  'nt Proxy'];
PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08.DocUnits = 'Cnt';
PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08.EngDT = dt.u08;
PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08.EngVal = 255;
PWRSTEERCTRLMODLGATEWYNMPROXYMINVAL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
