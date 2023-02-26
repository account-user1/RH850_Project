%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Mar-2018 09:37:17       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM533A = DataDict.FDD;
MM533A.Version = '2.0.X';
MM533A.LongName = 'Ford Message 3CC Bus High Speed';
MM533A.ShoName  = 'FordMsg3CCBusHiSpd';
MM533A.DesignASIL = 'B';
MM533A.Description = [...
  'The purpose of the Ford Message 3CC Bus High Speed function is to tran' ...
  'smit Electric Power Assisted Steering information to other vehicle mod' ...
  'ules.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg3CCBusHiSpdInit1 = DataDict.Runnable;
FordMsg3CCBusHiSpdInit1.Context = 'Rte';
FordMsg3CCBusHiSpdInit1.TimeStep = 0;
FordMsg3CCBusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg3CCBusHiSpdPer1 = DataDict.Runnable;
FordMsg3CCBusHiSpdPer1.Context = 'Rte';
FordMsg3CCBusHiSpdPer1.TimeStep = 0.01;
FordMsg3CCBusHiSpdPer1.Description = 'Periodic Runnable at 10ms ';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
FordVehLaneAssiAvl = DataDict.IpSignal;
FordVehLaneAssiAvl.LongName = 'Ford Vehicle Lane Assist Available';
FordVehLaneAssiAvl.Description = [...
  'Ford Vehicle Lane Assist Available is received as input from EPS and p' ...
  'rocessed to CAN Bus'];
FordVehLaneAssiAvl.DocUnits = 'Cnt';
FordVehLaneAssiAvl.EngDT = dt.u08;
FordVehLaneAssiAvl.EngInit = 0;
FordVehLaneAssiAvl.EngMin = 0;
FordVehLaneAssiAvl.EngMax = 3;
FordVehLaneAssiAvl.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehLaneAssiAvl.ReadType = 'Rte';


FordVehLaneAssiHandsOff = DataDict.IpSignal;
FordVehLaneAssiHandsOff.LongName = 'Ford Vehicle Lane Assist Hands Off';
FordVehLaneAssiHandsOff.Description = [...
  'Ford Vehicle Lane Assist Hands Off is received as input from EPS and p' ...
  'rocessed to CAN Bus'];
FordVehLaneAssiHandsOff.DocUnits = 'Cnt';
FordVehLaneAssiHandsOff.EngDT = dt.u08;
FordVehLaneAssiHandsOff.EngInit = 1;
FordVehLaneAssiHandsOff.EngMin = 0;
FordVehLaneAssiHandsOff.EngMax = 1;
FordVehLaneAssiHandsOff.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehLaneAssiHandsOff.ReadType = 'Rte';


FordVehLaneAssiRejctn = DataDict.IpSignal;
FordVehLaneAssiRejctn.LongName = 'Ford Vehicle Lane Assist Rejection';
FordVehLaneAssiRejctn.Description = [...
  'Ford Vehicle Lane Assist Rejection is received as input from EPS and p' ...
  'rocessed to CAN Bus'];
FordVehLaneAssiRejctn.DocUnits = 'Cnt';
FordVehLaneAssiRejctn.EngDT = dt.u08;
FordVehLaneAssiRejctn.EngInit = 0;
FordVehLaneAssiRejctn.EngMin = 0;
FordVehLaneAssiRejctn.EngMax = 1;
FordVehLaneAssiRejctn.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehLaneAssiRejctn.ReadType = 'Rte';


FordVehLoSpdMtnCtrlBrkDecelEna = DataDict.IpSignal;
FordVehLoSpdMtnCtrlBrkDecelEna.LongName = 'Ford Vehicle Low Speed Motion Control Brake Deceleration Enable';
FordVehLoSpdMtnCtrlBrkDecelEna.Description = [...
  'Ford Vehicle Low Speed Motion Control Brake Deceleration Enable is rec' ...
  'eived as input from EPS and processed to CAN Bus'];
FordVehLoSpdMtnCtrlBrkDecelEna.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkDecelEna.EngDT = dt.u08;
FordVehLoSpdMtnCtrlBrkDecelEna.EngInit = 0;
FordVehLoSpdMtnCtrlBrkDecelEna.EngMin = 0;
FordVehLoSpdMtnCtrlBrkDecelEna.EngMax = 3;
FordVehLoSpdMtnCtrlBrkDecelEna.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehLoSpdMtnCtrlBrkDecelEna.ReadType = 'Rte';


FordVehLoSpdMtnCtrlBrkTqReq = DataDict.IpSignal;
FordVehLoSpdMtnCtrlBrkTqReq.LongName = 'Ford Vehicle Low Speed Motion Control Brake Torque Request';
FordVehLoSpdMtnCtrlBrkTqReq.Description = [...
  'Ford Vehicle Low Speed Motion Control Brake Torque Request is received' ...
  ' as input from EPS and processed to CAN Bus'];
FordVehLoSpdMtnCtrlBrkTqReq.DocUnits = 'NwtMtr';
FordVehLoSpdMtnCtrlBrkTqReq.EngDT = dt.float32;
FordVehLoSpdMtnCtrlBrkTqReq.EngInit = 0;
FordVehLoSpdMtnCtrlBrkTqReq.EngMin = 0;
FordVehLoSpdMtnCtrlBrkTqReq.EngMax = 131056;
FordVehLoSpdMtnCtrlBrkTqReq.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehLoSpdMtnCtrlBrkTqReq.ReadType = 'Rte';


FordVehTrfcJamAvdHandsOnConf = DataDict.IpSignal;
FordVehTrfcJamAvdHandsOnConf.LongName = 'Ford Vehicle Traffic Jam Avoid Hands On Confidence';
FordVehTrfcJamAvdHandsOnConf.Description = [...
  'Ford Vehicle Traffic Jam Avoidance Hands On Confidence is received as ' ...
  'input from EPS and processed to CAN Bus'];
FordVehTrfcJamAvdHandsOnConf.DocUnits = 'Cnt';
FordVehTrfcJamAvdHandsOnConf.EngDT = dt.u08;
FordVehTrfcJamAvdHandsOnConf.EngInit = 0;
FordVehTrfcJamAvdHandsOnConf.EngMin = 0;
FordVehTrfcJamAvdHandsOnConf.EngMax = 1;
FordVehTrfcJamAvdHandsOnConf.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehTrfcJamAvdHandsOnConf.ReadType = 'Rte';


FordVehTrlrAgTarCalcn = DataDict.IpSignal;
FordVehTrlrAgTarCalcn.LongName = 'Ford Vehicle Trailer Angle Target Calculation';
FordVehTrlrAgTarCalcn.Description = [...
  'Ford Vehicle Trailer Angle Target Calculation is received as input fro' ...
  'm EPS and processed to CAN Bus'];
FordVehTrlrAgTarCalcn.DocUnits = 'Cnt';
FordVehTrlrAgTarCalcn.EngDT = dt.u08;
FordVehTrlrAgTarCalcn.EngInit = 0;
FordVehTrlrAgTarCalcn.EngMin = 0;
FordVehTrlrAgTarCalcn.EngMax = 255;
FordVehTrlrAgTarCalcn.ReadIn = {'FordMsg3CCBusHiSpdPer1'};
FordVehTrlrAgTarCalcn.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Ford_LaActAvail_D_Actl1 = DataDict.OpSignal;
Ford_LaActAvail_D_Actl1.LongName = 'Ford_LaActAvail_D_Actl';
Ford_LaActAvail_D_Actl1.Description = [...
  'Processed value of Ford_LaActAvail_D_Actl. Customer datatype should be' ...
  ' used. Datatype:Ford_LaActAvail_D_Actl Elements are: 0 - "Cx0_LCA_LKA_' ...
  'LDW_Suppress", 1 - "Cx1_LCA_LKA_Suppress_LDW_Avail2 - "Cx2_LCA_LKA_Ava' ...
  'il_LDW_Suppress", 3 - "Cx3_LKA_LCA_LDW_Avail"'];
Ford_LaActAvail_D_Actl1.DocUnits = 'Cnt';
Ford_LaActAvail_D_Actl1.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_LaActAvail_D_Actl1.EngDT = enum.Ford_LaActAvail_D_Actl;
Ford_LaActAvail_D_Actl1.EngInit = Ford_LaActAvail_D_Actl.Cx0_LCA_LKA_LDW_Suppress;
Ford_LaActAvail_D_Actl1.EngMin = Ford_LaActAvail_D_Actl.Cx0_LCA_LKA_LDW_Suppress;
Ford_LaActAvail_D_Actl1.EngMax = Ford_LaActAvail_D_Actl.Cx3_LKA_LCA_LDW_Avail;
Ford_LaActAvail_D_Actl1.TestTolerance = 0;
Ford_LaActAvail_D_Actl1.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_LaActAvail_D_Actl1.WriteType = 'Rte';


Ford_LaActDeny_B_Actl1 = DataDict.OpSignal;
Ford_LaActDeny_B_Actl1.LongName = 'Ford_LaActDeny_B_Actl';
Ford_LaActDeny_B_Actl1.Description = [...
  'Processed value of Ford_LaActDeny_B_Actl1. Customer datatype should be' ...
  ' used. Datatype:Ford_LaActDeny_B_Actl. Elements are: 0 - "Cx0_LA_Not_D' ...
  'enied", 1 - "Cx1_LA_Denied'];
Ford_LaActDeny_B_Actl1.DocUnits = 'Cnt';
Ford_LaActDeny_B_Actl1.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_LaActDeny_B_Actl1.EngDT = enum.Ford_LaActDeny_B_Actl;
Ford_LaActDeny_B_Actl1.EngInit = Ford_LaActDeny_B_Actl.Cx0_LA_Not_Denied;
Ford_LaActDeny_B_Actl1.EngMin = Ford_LaActDeny_B_Actl.Cx0_LA_Not_Denied;
Ford_LaActDeny_B_Actl1.EngMax = Ford_LaActDeny_B_Actl.Cx1_LA_Denied;
Ford_LaActDeny_B_Actl1.TestTolerance = 0;
Ford_LaActDeny_B_Actl1.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_LaActDeny_B_Actl1.WriteType = 'Rte';


Ford_LaHandsOff_B_Actl1 = DataDict.OpSignal;
Ford_LaHandsOff_B_Actl1.LongName = 'Ford_LaHandsOff_B_Actl';
Ford_LaHandsOff_B_Actl1.Description = [...
  'Processed value of Ford_LaHandsOff_B_Actl. Customer datatype should be' ...
  ' used. Datatype:Ford_LaHandsOff_B_Actl. Elements are: 0 - "Cx0_Hands_O' ...
  'n", 1 - "Cx1_Hands_Off'];
Ford_LaHandsOff_B_Actl1.DocUnits = 'Cnt';
Ford_LaHandsOff_B_Actl1.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_LaHandsOff_B_Actl1.EngDT = enum.Ford_LaHandsOff_B_Actl;
Ford_LaHandsOff_B_Actl1.EngInit = Ford_LaHandsOff_B_Actl.Cx1_Hands_Off;
Ford_LaHandsOff_B_Actl1.EngMin = Ford_LaHandsOff_B_Actl.Cx0_Hands_On;
Ford_LaHandsOff_B_Actl1.EngMax = Ford_LaHandsOff_B_Actl.Cx1_Hands_Off;
Ford_LaHandsOff_B_Actl1.TestTolerance = 0;
Ford_LaHandsOff_B_Actl1.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_LaHandsOff_B_Actl1.WriteType = 'Rte';


Ford_LsmcBrkDecelEnbl_D_Rq1 = DataDict.OpSignal;
Ford_LsmcBrkDecelEnbl_D_Rq1.LongName = 'Ford_LsmcBrkDecelEnbl_D_Rq';
Ford_LsmcBrkDecelEnbl_D_Rq1.Description = [...
  'Processed value of Ford_LsmcBrkDecelEnbl_D_Rq. Customer datatype shoul' ...
  'd be used. Datatype:Ford_LsmcBrkDecelEnbl_D_Rq. Elements are: 0 - "Cx0' ...
  '_Off", 1 - "Cx1_On2 - "Cx2_NotUsed1", 3 - "Cx3_NotUsed2"'];
Ford_LsmcBrkDecelEnbl_D_Rq1.DocUnits = 'Cnt';
Ford_LsmcBrkDecelEnbl_D_Rq1.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_LsmcBrkDecelEnbl_D_Rq1.EngDT = enum.Ford_LsmcBrkDecelEnbl_D_Rq;
Ford_LsmcBrkDecelEnbl_D_Rq1.EngInit = Ford_LsmcBrkDecelEnbl_D_Rq.Cx0_Off;
Ford_LsmcBrkDecelEnbl_D_Rq1.EngMin = Ford_LsmcBrkDecelEnbl_D_Rq.Cx0_Off;
Ford_LsmcBrkDecelEnbl_D_Rq1.EngMax = Ford_LsmcBrkDecelEnbl_D_Rq.Cx3_NotUsed2;
Ford_LsmcBrkDecelEnbl_D_Rq1.TestTolerance = 0;
Ford_LsmcBrkDecelEnbl_D_Rq1.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_LsmcBrkDecelEnbl_D_Rq1.WriteType = 'Rte';


Ford_LsmcBrk_Tq_Rq = DataDict.OpSignal;
Ford_LsmcBrk_Tq_Rq.LongName = 'Ford_LsmcBrk_Tq_Rq';
Ford_LsmcBrk_Tq_Rq.Description = [...
  'Processed value of Ford_LsmcBrk_Tq_Rq. Customer datatype should be use' ...
  'd. Datatype:Ford_LsmcBrk_Tq_Rq with the range of 0 to 32764.'];
Ford_LsmcBrk_Tq_Rq.DocUnits = 'Cnt';
Ford_LsmcBrk_Tq_Rq.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_LsmcBrk_Tq_Rq.EngDT = dt.u16;
Ford_LsmcBrk_Tq_Rq.EngInit = 0;
Ford_LsmcBrk_Tq_Rq.EngMin = 0;
Ford_LsmcBrk_Tq_Rq.EngMax = 32764;
Ford_LsmcBrk_Tq_Rq.TestTolerance = 0;
Ford_LsmcBrk_Tq_Rq.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_LsmcBrk_Tq_Rq.WriteType = 'Rte';


Ford_TjaHandsOnCnfdnc_B_Est1 = DataDict.OpSignal;
Ford_TjaHandsOnCnfdnc_B_Est1.LongName = 'Ford_TjaHandsOnCnfdnc_B_Est';
Ford_TjaHandsOnCnfdnc_B_Est1.Description = [...
  'Processed value of Ford_TjaHandsOnCnfdnc_B_Est.Customer datatype shoul' ...
  'd be used. Datatype:Ford_TjaHandsOnCnfdnc_B_Est1. Elements are: 0 - "C' ...
  'x0_Low_Confidence", 1 - "Cx1_High_Confidence'];
Ford_TjaHandsOnCnfdnc_B_Est1.DocUnits = 'Cnt';
Ford_TjaHandsOnCnfdnc_B_Est1.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_TjaHandsOnCnfdnc_B_Est1.EngDT = enum.Ford_TjaHandsOnCnfdnc_B_Est;
Ford_TjaHandsOnCnfdnc_B_Est1.EngInit = Ford_TjaHandsOnCnfdnc_B_Est.Cx0_Low_Confidence;
Ford_TjaHandsOnCnfdnc_B_Est1.EngMin = Ford_TjaHandsOnCnfdnc_B_Est.Cx0_Low_Confidence;
Ford_TjaHandsOnCnfdnc_B_Est1.EngMax = Ford_TjaHandsOnCnfdnc_B_Est.Cx1_High_Confidence;
Ford_TjaHandsOnCnfdnc_B_Est1.TestTolerance = 0;
Ford_TjaHandsOnCnfdnc_B_Est1.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_TjaHandsOnCnfdnc_B_Est1.WriteType = 'Rte';


Ford_TrlrAn_An_TrgtCalc = DataDict.OpSignal;
Ford_TrlrAn_An_TrgtCalc.LongName = 'Ford_TrlrAn_An_TrgtCalc';
Ford_TrlrAn_An_TrgtCalc.Description = [...
  'Processed value of Ford_TrlrAn_An_TrgtCalc.Customer datatype should be' ...
  ' used. Datatype:Ford_TrlrAn_An_TrgtCalc with the range of 0 to 255.'];
Ford_TrlrAn_An_TrgtCalc.DocUnits = 'Cnt';
Ford_TrlrAn_An_TrgtCalc.SwcShoName = 'FordMsg3CCBusHiSpd';
Ford_TrlrAn_An_TrgtCalc.EngDT = dt.u08;
Ford_TrlrAn_An_TrgtCalc.EngInit = 0;
Ford_TrlrAn_An_TrgtCalc.EngMin = 0;
Ford_TrlrAn_An_TrgtCalc.EngMax = 255;
Ford_TrlrAn_An_TrgtCalc.TestTolerance = 0;
Ford_TrlrAn_An_TrgtCalc.WrittenIn = {'FordMsg3CCBusHiSpdPer1'};
Ford_TrlrAn_An_TrgtCalc.WriteType = 'Rte';



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
LOSPDMTNCTRLBRKDECELMAX_CNT_U16 = DataDict.Constant;
LOSPDMTNCTRLBRKDECELMAX_CNT_U16.LongName = 'Low Speed Motion Control Brake Deceleration Maximum';
LOSPDMTNCTRLBRKDECELMAX_CNT_U16.Description = [...
  'Maximum value of Low Speed Motion Control Brake Deceleration'];
LOSPDMTNCTRLBRKDECELMAX_CNT_U16.DocUnits = 'Cnt';
LOSPDMTNCTRLBRKDECELMAX_CNT_U16.EngDT = dt.u16;
LOSPDMTNCTRLBRKDECELMAX_CNT_U16.EngVal = 32764;
LOSPDMTNCTRLBRKDECELMAX_CNT_U16.Define = 'Local';


LOSPDMTNCTRLBRKDECELMIN_CNT_U16 = DataDict.Constant;
LOSPDMTNCTRLBRKDECELMIN_CNT_U16.LongName = 'Low Speed Motion Control Brake Deceleration Minimum';
LOSPDMTNCTRLBRKDECELMIN_CNT_U16.Description = [...
  'Minimum value of Low Speed Motion Control Brake Deceleration'];
LOSPDMTNCTRLBRKDECELMIN_CNT_U16.DocUnits = 'Cnt';
LOSPDMTNCTRLBRKDECELMIN_CNT_U16.EngDT = dt.u16;
LOSPDMTNCTRLBRKDECELMIN_CNT_U16.EngVal = 0;
LOSPDMTNCTRLBRKDECELMIN_CNT_U16.Define = 'Local';


SCAGFACBRKTQREQ_NWTMTR_F32 = DataDict.Constant;
SCAGFACBRKTQREQ_NWTMTR_F32.LongName = 'Scaling Factor for Brake Torque Request';
SCAGFACBRKTQREQ_NWTMTR_F32.Description = [...
  'Scaling Factor used for Ford Vehicle Low Speed Motion Control Brake To' ...
  'rque Request'];
SCAGFACBRKTQREQ_NWTMTR_F32.DocUnits = 'NwtMtr';
SCAGFACBRKTQREQ_NWTMTR_F32.EngDT = dt.float32;
SCAGFACBRKTQREQ_NWTMTR_F32.EngVal = 0.25;
SCAGFACBRKTQREQ_NWTMTR_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
