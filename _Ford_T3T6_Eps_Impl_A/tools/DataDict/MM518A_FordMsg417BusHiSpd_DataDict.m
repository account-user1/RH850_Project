%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 07-Nov-2017 14:13:13       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM518A = DataDict.FDD;
MM518A.Version = '2.0.X';
MM518A.LongName = 'Ford Message 417 Bus High Speed';
MM518A.ShoName  = 'FordMsg417BusHiSpd';
MM518A.DesignASIL = 'QM';
MM518A.Description = [...
  'The purpose of the Ford Message 417 Bus High Speed function is to tran' ...
  'smit Electric Power Assisted Steering information to other vehicle mod' ...
  'ules.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg417BusHiSpdInit1 = DataDict.Runnable;
FordMsg417BusHiSpdInit1.Context = 'Rte';
FordMsg417BusHiSpdInit1.TimeStep = 0;
FordMsg417BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg417BusHiSpdPer1 = DataDict.Runnable;
FordMsg417BusHiSpdPer1.Context = 'Rte';
FordMsg417BusHiSpdPer1.TimeStep = 0.01;
FordMsg417BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli seconds '];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
FordVehEvasSteerAssiSts = DataDict.IpSignal;
FordVehEvasSteerAssiSts.LongName = 'Ford Vehicle Evasive Steering Assist Status';
FordVehEvasSteerAssiSts.Description = [...
  'Receive Ford Vehicle Evasive Steering Assist Status from EPS and trans' ...
  'mit it to CAN bus '];
FordVehEvasSteerAssiSts.DocUnits = 'Cnt';
FordVehEvasSteerAssiSts.EngDT = enum.Ford_EsaOn_B_Stat;
FordVehEvasSteerAssiSts.EngInit = Ford_EsaOn_B_Stat.Cx1_On;
FordVehEvasSteerAssiSts.EngMin = Ford_EsaOn_B_Stat.Cx0_Off;
FordVehEvasSteerAssiSts.EngMax = Ford_EsaOn_B_Stat.Cx1_On;
FordVehEvasSteerAssiSts.ReadIn = {'FordMsg417BusHiSpdPer1'};
FordVehEvasSteerAssiSts.ReadType = 'Rte';


FordVehLatCtrlLimSts = DataDict.IpSignal;
FordVehLatCtrlLimSts.LongName = 'Ford Vehicle Lateral Control Limit Status';
FordVehLatCtrlLimSts.Description = [...
  'Receive Ford Vehicle Lateral Control Limit Status from EPS and transmi' ...
  't it to CAN bus'];
FordVehLatCtrlLimSts.DocUnits = 'Cnt';
FordVehLatCtrlLimSts.EngDT = enum.Ford_LatCtlLim_D_Stat;
FordVehLatCtrlLimSts.EngInit = Ford_LatCtlLim_D_Stat.Cx0_LimitNotReached;
FordVehLatCtrlLimSts.EngMin = Ford_LatCtlLim_D_Stat.Cx0_LimitNotReached;
FordVehLatCtrlLimSts.EngMax = Ford_LatCtlLim_D_Stat.Cx3_LimitWithDriverActive;
FordVehLatCtrlLimSts.ReadIn = {'FordMsg417BusHiSpdPer1'};
FordVehLatCtrlLimSts.ReadType = 'Rte';


FordVehLatCtrlSteerSts = DataDict.IpSignal;
FordVehLatCtrlSteerSts.LongName = 'Ford Vehicle Lateral Control Steering Status';
FordVehLatCtrlSteerSts.Description = [...
  'Receive Ford Vehicle Lateral Control Steering Status from EPS and tran' ...
  'smit it to CAN bus'];
FordVehLatCtrlSteerSts.DocUnits = 'Cnt';
FordVehLatCtrlSteerSts.EngDT = enum.Ford_LatCtlSte_D_Stat;
FordVehLatCtrlSteerSts.EngInit = Ford_LatCtlSte_D_Stat.Cx0_Unavailable;
FordVehLatCtrlSteerSts.EngMin = Ford_LatCtlSte_D_Stat.Cx0_Unavailable;
FordVehLatCtrlSteerSts.EngMax = Ford_LatCtlSte_D_Stat.Cx7_NotUsed3;
FordVehLatCtrlSteerSts.ReadIn = {'FordMsg417BusHiSpdPer1'};
FordVehLatCtrlSteerSts.ReadType = 'Rte';


FordVehSelDrvModSteerSts = DataDict.IpSignal;
FordVehSelDrvModSteerSts.LongName = 'Ford Vehicle Select Drive Mode Steering Status';
FordVehSelDrvModSteerSts.Description = [...
  'Receive Ford Vehicle Select Drive Mode Steering Status from EPS and tr' ...
  'ansmit it to CAN bus'];
FordVehSelDrvModSteerSts.DocUnits = 'Cnt';
FordVehSelDrvModSteerSts.EngDT = enum.Ford_SelDrvMdeSte_D_Stat;
FordVehSelDrvModSteerSts.EngInit = Ford_SelDrvMdeSte_D_Stat.Cx0_NotAvailable;
FordVehSelDrvModSteerSts.EngMin = Ford_SelDrvMdeSte_D_Stat.Cx0_NotAvailable;
FordVehSelDrvModSteerSts.EngMax = Ford_SelDrvMdeSte_D_Stat.Cx3_Faulty;
FordVehSelDrvModSteerSts.ReadIn = {'FordMsg417BusHiSpdPer1'};
FordVehSelDrvModSteerSts.ReadType = 'Rte';


FordVehTrlrAidEnaSts = DataDict.IpSignal;
FordVehTrlrAidEnaSts.LongName = 'Ford Vehicle Trailer Aid Enable Status';
FordVehTrlrAidEnaSts.Description = [...
  'Receive Ford Vehicle Trailer Aid Enable Status from EPS and transmit i' ...
  't to CAN bus'];
FordVehTrlrAidEnaSts.DocUnits = 'Cnt';
FordVehTrlrAidEnaSts.EngDT = enum.Ford_TrlrAidEnbl_D2_Stat;
FordVehTrlrAidEnaSts.EngInit = Ford_TrlrAidEnbl_D2_Stat.Cx0_Inactive;
FordVehTrlrAidEnaSts.EngMin = Ford_TrlrAidEnbl_D2_Stat.Cx0_Inactive;
FordVehTrlrAidEnaSts.EngMax = Ford_TrlrAidEnbl_D2_Stat.Cx7_NotUsed_1;
FordVehTrlrAidEnaSts.ReadIn = {'FordMsg417BusHiSpdPer1'};
FordVehTrlrAidEnaSts.ReadType = 'Rte';


FordVehTrlrAidMsgTxtReq = DataDict.IpSignal;
FordVehTrlrAidMsgTxtReq.LongName = 'Ford Vehicle Trailer Aid Message Text Request';
FordVehTrlrAidMsgTxtReq.Description = [...
  'Receive Ford Vehicle Trailer Aid Message Text Request from EPS and tra' ...
  'nsmit it to CAN bus'];
FordVehTrlrAidMsgTxtReq.DocUnits = 'Cnt';
FordVehTrlrAidMsgTxtReq.EngDT = enum.Ford_TrlrAidMsgTxt_D2_Rq;
FordVehTrlrAidMsgTxtReq.EngInit = Ford_TrlrAidMsgTxt_D2_Rq.Cx00_NoMessage;
FordVehTrlrAidMsgTxtReq.EngMin = Ford_TrlrAidMsgTxt_D2_Rq.Cx00_NoMessage;
FordVehTrlrAidMsgTxtReq.EngMax = Ford_TrlrAidMsgTxt_D2_Rq.Cx3F_Message63;
FordVehTrlrAidMsgTxtReq.ReadIn = {'FordMsg417BusHiSpdPer1'};
FordVehTrlrAidMsgTxtReq.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Ford_EsaOn_B_Stat1 = DataDict.OpSignal;
Ford_EsaOn_B_Stat1.LongName = 'Ford Evasive Steering Assist Status';
Ford_EsaOn_B_Stat1.Description = [...
  'Processed value of Ford Evasive Steering Assist Status'];
Ford_EsaOn_B_Stat1.DocUnits = 'Cnt';
Ford_EsaOn_B_Stat1.SwcShoName = 'FordMsg417BusHiSpd';
Ford_EsaOn_B_Stat1.EngDT = enum.Ford_EsaOn_B_Stat;
Ford_EsaOn_B_Stat1.EngInit = Ford_EsaOn_B_Stat.Cx1_On;
Ford_EsaOn_B_Stat1.EngMin = Ford_EsaOn_B_Stat.Cx0_Off;
Ford_EsaOn_B_Stat1.EngMax = Ford_EsaOn_B_Stat.Cx1_On;
Ford_EsaOn_B_Stat1.TestTolerance = 0;
Ford_EsaOn_B_Stat1.WrittenIn = {'FordMsg417BusHiSpdPer1'};
Ford_EsaOn_B_Stat1.WriteType = 'Rte';


Ford_LatCtlLim_D_Stat1 = DataDict.OpSignal;
Ford_LatCtlLim_D_Stat1.LongName = 'Ford Lateral Control Limit Status';
Ford_LatCtlLim_D_Stat1.Description = [...
  'Processed value of Ford Vehicle Lateral Control Limit Status'];
Ford_LatCtlLim_D_Stat1.DocUnits = 'Cnt';
Ford_LatCtlLim_D_Stat1.SwcShoName = 'FordMsg417BusHiSpd';
Ford_LatCtlLim_D_Stat1.EngDT = enum.Ford_LatCtlLim_D_Stat;
Ford_LatCtlLim_D_Stat1.EngInit = Ford_LatCtlLim_D_Stat.Cx0_LimitNotReached;
Ford_LatCtlLim_D_Stat1.EngMin = Ford_LatCtlLim_D_Stat.Cx0_LimitNotReached;
Ford_LatCtlLim_D_Stat1.EngMax = Ford_LatCtlLim_D_Stat.Cx3_LimitWithDriverActive;
Ford_LatCtlLim_D_Stat1.TestTolerance = 0;
Ford_LatCtlLim_D_Stat1.WrittenIn = {'FordMsg417BusHiSpdPer1'};
Ford_LatCtlLim_D_Stat1.WriteType = 'Rte';


Ford_LatCtlSte_D_Stat1 = DataDict.OpSignal;
Ford_LatCtlSte_D_Stat1.LongName = 'Ford Lateral Control Steering Status';
Ford_LatCtlSte_D_Stat1.Description = [...
  'Processed value of Ford Vehicle Lateral Control Steering Status'];
Ford_LatCtlSte_D_Stat1.DocUnits = 'Cnt';
Ford_LatCtlSte_D_Stat1.SwcShoName = 'FordMsg417BusHiSpd';
Ford_LatCtlSte_D_Stat1.EngDT = enum.Ford_LatCtlSte_D_Stat;
Ford_LatCtlSte_D_Stat1.EngInit = Ford_LatCtlSte_D_Stat.Cx0_Unavailable;
Ford_LatCtlSte_D_Stat1.EngMin = Ford_LatCtlSte_D_Stat.Cx0_Unavailable;
Ford_LatCtlSte_D_Stat1.EngMax = Ford_LatCtlSte_D_Stat.Cx7_NotUsed3;
Ford_LatCtlSte_D_Stat1.TestTolerance = 0;
Ford_LatCtlSte_D_Stat1.WrittenIn = {'FordMsg417BusHiSpdPer1'};
Ford_LatCtlSte_D_Stat1.WriteType = 'Rte';


Ford_SelDrvMdeSte_D_Stat1 = DataDict.OpSignal;
Ford_SelDrvMdeSte_D_Stat1.LongName = 'Ford Select Drive Mode Steering Status';
Ford_SelDrvMdeSte_D_Stat1.Description = [...
  'Processed value of Ford Select Drive Mode Steering Status'];
Ford_SelDrvMdeSte_D_Stat1.DocUnits = 'Cnt';
Ford_SelDrvMdeSte_D_Stat1.SwcShoName = 'FordMsg417BusHiSpd';
Ford_SelDrvMdeSte_D_Stat1.EngDT = enum.Ford_SelDrvMdeSte_D_Stat;
Ford_SelDrvMdeSte_D_Stat1.EngInit = Ford_SelDrvMdeSte_D_Stat.Cx0_NotAvailable;
Ford_SelDrvMdeSte_D_Stat1.EngMin = Ford_SelDrvMdeSte_D_Stat.Cx0_NotAvailable;
Ford_SelDrvMdeSte_D_Stat1.EngMax = Ford_SelDrvMdeSte_D_Stat.Cx3_Faulty;
Ford_SelDrvMdeSte_D_Stat1.TestTolerance = 0;
Ford_SelDrvMdeSte_D_Stat1.WrittenIn = {'FordMsg417BusHiSpdPer1'};
Ford_SelDrvMdeSte_D_Stat1.WriteType = 'Rte';


Ford_TrlrAidEnbl_D2_Stat1 = DataDict.OpSignal;
Ford_TrlrAidEnbl_D2_Stat1.LongName = 'Ford Trailer Aid Enable Status';
Ford_TrlrAidEnbl_D2_Stat1.Description = [...
  'Processed value of Ford Trailer Aid Enable Status'];
Ford_TrlrAidEnbl_D2_Stat1.DocUnits = 'Cnt';
Ford_TrlrAidEnbl_D2_Stat1.SwcShoName = 'FordMsg417BusHiSpd';
Ford_TrlrAidEnbl_D2_Stat1.EngDT = enum.Ford_TrlrAidEnbl_D2_Stat;
Ford_TrlrAidEnbl_D2_Stat1.EngInit = Ford_TrlrAidEnbl_D2_Stat.Cx0_Inactive;
Ford_TrlrAidEnbl_D2_Stat1.EngMin = Ford_TrlrAidEnbl_D2_Stat.Cx0_Inactive;
Ford_TrlrAidEnbl_D2_Stat1.EngMax = Ford_TrlrAidEnbl_D2_Stat.Cx7_NotUsed_1;
Ford_TrlrAidEnbl_D2_Stat1.TestTolerance = 0;
Ford_TrlrAidEnbl_D2_Stat1.WrittenIn = {'FordMsg417BusHiSpdPer1'};
Ford_TrlrAidEnbl_D2_Stat1.WriteType = 'Rte';


Ford_TrlrAidMsgTxt_D2_Rq1 = DataDict.OpSignal;
Ford_TrlrAidMsgTxt_D2_Rq1.LongName = 'Ford Trailer Aid Message Text Request';
Ford_TrlrAidMsgTxt_D2_Rq1.Description = [...
  'Processed value of Ford Vehicle Trailer Aid Message Text Request'];
Ford_TrlrAidMsgTxt_D2_Rq1.DocUnits = 'Cnt';
Ford_TrlrAidMsgTxt_D2_Rq1.SwcShoName = 'FordMsg417BusHiSpd';
Ford_TrlrAidMsgTxt_D2_Rq1.EngDT = enum.Ford_TrlrAidMsgTxt_D2_Rq;
Ford_TrlrAidMsgTxt_D2_Rq1.EngInit = Ford_TrlrAidMsgTxt_D2_Rq.Cx00_NoMessage;
Ford_TrlrAidMsgTxt_D2_Rq1.EngMin = Ford_TrlrAidMsgTxt_D2_Rq.Cx00_NoMessage;
Ford_TrlrAidMsgTxt_D2_Rq1.EngMax = Ford_TrlrAidMsgTxt_D2_Rq.Cx3F_Message63;
Ford_TrlrAidMsgTxt_D2_Rq1.TestTolerance = 0;
Ford_TrlrAidMsgTxt_D2_Rq1.WrittenIn = {'FordMsg417BusHiSpdPer1'};
Ford_TrlrAidMsgTxt_D2_Rq1.WriteType = 'Rte';



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

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
