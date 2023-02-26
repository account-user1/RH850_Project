%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 05-May-2018 14:22:38       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF111A = DataDict.FDD;
CF111A.Version = '1.0.X';
CF111A.LongName = 'Ford Black Box Interface Component 1';
CF111A.ShoName  = 'FordBlaBoxIfCmp1';
CF111A.DesignASIL = 'QM';
CF111A.Description = [...
  'This function initializes and calls the ASIL QM Ford In Housefeature f' ...
  'unctions.'];

%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordBlaBoxIfCmp1Init1 = DataDict.Runnable;
FordBlaBoxIfCmp1Init1.Context = 'Rte';
FordBlaBoxIfCmp1Init1.TimeStep = 0;
FordBlaBoxIfCmp1Init1.Description = 'Initialization Runnable';

FordBlaBoxIfCmp1Per1 = DataDict.Runnable;
FordBlaBoxIfCmp1Per1.Context = 'Rte';
FordBlaBoxIfCmp1Per1.TimeStep = 0.004;
FordBlaBoxIfCmp1Per1.Description = [...
  'Periodic Runnable execute at every 0.004'];

FordBlaBoxIfCmp1Per2 = DataDict.Runnable;
FordBlaBoxIfCmp1Per2.Context = 'Rte';
FordBlaBoxIfCmp1Per2.TimeStep = 0.01;
FordBlaBoxIfCmp1Per2.Description = [...
  'Periodic Runnable execute at every 0.01'];

FordClrBlaBoxNvm = DataDict.SrvRunnable;
FordClrBlaBoxNvm.Context = 'Rte';
FordClrBlaBoxNvm.Description = [...
  'Server Runnable to clear all NVM blocks'];
FordClrBlaBoxNvm.Return = DataDict.CSReturn;
FordClrBlaBoxNvm.Return.Type = 'Standard';
FordClrBlaBoxNvm.Return.Min = 0;
FordClrBlaBoxNvm.Return.Max = 1;
FordClrBlaBoxNvm.Return.TestTolerance = 0;
FordClrBlaBoxNvm.Return.Description = 'Standard Return';

%----------------------------------------------------------------%
%                       Write to HS-CAN                          %                                              
%----------------------------------------------------------------%

FIH_Write_LA_HS_CAN = DataDict.SrvRunnable;
FIH_Write_LA_HS_CAN.Context = 'NonRte';
FIH_Write_LA_HS_CAN.Description = [...
  'Server Runnable for FordVehLaneAssiHandsOff, FordVehLaneAssiDeny, Ford' ...
  'VehLaneAssiAvl'];
FIH_Write_LA_HS_CAN.Return = DataDict.CSReturn;
FIH_Write_LA_HS_CAN.Return.Type = 'None';
FIH_Write_LA_HS_CAN.Return.Min = [];
FIH_Write_LA_HS_CAN.Return.Max = [];
FIH_Write_LA_HS_CAN.Return.TestTolerance = [];
FIH_Write_LA_HS_CAN.Arguments(1) = DataDict.CSArguments;
FIH_Write_LA_HS_CAN.Arguments(1).Name = 'LaHandsOff_B_Actl';
FIH_Write_LA_HS_CAN.Arguments(1).EngDT = dt.u08;
FIH_Write_LA_HS_CAN.Arguments(1).EngMin = 0;
FIH_Write_LA_HS_CAN.Arguments(1).EngMax = 255;
FIH_Write_LA_HS_CAN.Arguments(1).Units = 'Cnt';
FIH_Write_LA_HS_CAN.Arguments(1).Direction = 'In';
FIH_Write_LA_HS_CAN.Arguments(1).InitRowCol = [1  1];
FIH_Write_LA_HS_CAN.Arguments(1).Description = [...
	'It gives Ford Vehicle Lane Assist HandsOff'];
FIH_Write_LA_HS_CAN.Arguments(2) = DataDict.CSArguments;
FIH_Write_LA_HS_CAN.Arguments(2).Name = 'LaActDeny_B_Actl';
FIH_Write_LA_HS_CAN.Arguments(2).EngDT = dt.u08;
FIH_Write_LA_HS_CAN.Arguments(2).EngMin = 0;
FIH_Write_LA_HS_CAN.Arguments(2).EngMax = 255;
FIH_Write_LA_HS_CAN.Arguments(2).Units = 'Cnt';
FIH_Write_LA_HS_CAN.Arguments(2).Direction = 'In';
FIH_Write_LA_HS_CAN.Arguments(2).InitRowCol = [1  1];
FIH_Write_LA_HS_CAN.Arguments(2).Description = [...
	'It gives Ford Vehicle Lane Assist Deny'];
FIH_Write_LA_HS_CAN.Arguments(3) = DataDict.CSArguments;
FIH_Write_LA_HS_CAN.Arguments(3).Name = 'LaActAvail_D_Actl';
FIH_Write_LA_HS_CAN.Arguments(3).EngDT = dt.u08;
FIH_Write_LA_HS_CAN.Arguments(3).EngMin = 0;
FIH_Write_LA_HS_CAN.Arguments(3).EngMax = 255;
FIH_Write_LA_HS_CAN.Arguments(3).Units = 'Cnt';
FIH_Write_LA_HS_CAN.Arguments(3).Direction = 'In';
FIH_Write_LA_HS_CAN.Arguments(3).InitRowCol = [1  1];
FIH_Write_LA_HS_CAN.Arguments(3).Description = [...
	'It gives Ford Vehicle Lane Assist Available'];

FIH_Write_LATCTL_HS_CAN = DataDict.SrvRunnable;
FIH_Write_LATCTL_HS_CAN.Context = 'NonRte';
FIH_Write_LATCTL_HS_CAN.Description = [...
  'Server Runnable for FordVehLatCtrlLimSts, FordVehLatCtrlSteerSts, Ford' ...
  'VehTrfcJamAvdncHandsOnConf'];
FIH_Write_LATCTL_HS_CAN.Return = DataDict.CSReturn;
FIH_Write_LATCTL_HS_CAN.Return.Type = 'None';
FIH_Write_LATCTL_HS_CAN.Return.Min = [];
FIH_Write_LATCTL_HS_CAN.Return.Max = [];
FIH_Write_LATCTL_HS_CAN.Return.TestTolerance = [];
FIH_Write_LATCTL_HS_CAN.Arguments(1) = DataDict.CSArguments;
FIH_Write_LATCTL_HS_CAN.Arguments(1).Name = 'LatCtlLim_D_Stat';
FIH_Write_LATCTL_HS_CAN.Arguments(1).EngDT = dt.u08;
FIH_Write_LATCTL_HS_CAN.Arguments(1).EngMin = 0;
FIH_Write_LATCTL_HS_CAN.Arguments(1).EngMax = 255;
FIH_Write_LATCTL_HS_CAN.Arguments(1).Units = 'Cnt';
FIH_Write_LATCTL_HS_CAN.Arguments(1).Direction = 'In';
FIH_Write_LATCTL_HS_CAN.Arguments(1).InitRowCol = [1  1];
FIH_Write_LATCTL_HS_CAN.Arguments(1).Description = [...
	'It gives Ford Vehicle Lateral Control Limit Status'];
FIH_Write_LATCTL_HS_CAN.Arguments(2) = DataDict.CSArguments;
FIH_Write_LATCTL_HS_CAN.Arguments(2).Name = 'LatCtlSte_D_Stat';
FIH_Write_LATCTL_HS_CAN.Arguments(2).EngDT = dt.u08;
FIH_Write_LATCTL_HS_CAN.Arguments(2).EngMin = 0;
FIH_Write_LATCTL_HS_CAN.Arguments(2).EngMax = 255;
FIH_Write_LATCTL_HS_CAN.Arguments(2).Units = 'Cnt';
FIH_Write_LATCTL_HS_CAN.Arguments(2).Direction = 'In';
FIH_Write_LATCTL_HS_CAN.Arguments(2).InitRowCol = [1  1];
FIH_Write_LATCTL_HS_CAN.Arguments(2).Description = [...
	'It gives Ford Vehicle Lateral Control Steering Status'];
FIH_Write_LATCTL_HS_CAN.Arguments(3) = DataDict.CSArguments;
FIH_Write_LATCTL_HS_CAN.Arguments(3).Name = 'TjaHandsOnCnfdnc_B_Est';
FIH_Write_LATCTL_HS_CAN.Arguments(3).EngDT = dt.u08;
FIH_Write_LATCTL_HS_CAN.Arguments(3).EngMin = 0;
FIH_Write_LATCTL_HS_CAN.Arguments(3).EngMax = 255;
FIH_Write_LATCTL_HS_CAN.Arguments(3).Units = 'Cnt';
FIH_Write_LATCTL_HS_CAN.Arguments(3).Direction = 'In';
FIH_Write_LATCTL_HS_CAN.Arguments(3).InitRowCol = [1  1];
FIH_Write_LATCTL_HS_CAN.Arguments(3).Description = [...
	'It gives Ford Vehicle Traffic Jam Advanced HandsOn Confidence'];

FIH_Write_TBA_to_TrlrAid_Data2 = DataDict.SrvRunnable;
FIH_Write_TBA_to_TrlrAid_Data2.Context = 'NonRte';
FIH_Write_TBA_to_TrlrAid_Data2.Description = [...
  'Server Runnable for FordVehTrlrAidEnaSts, FordVehTrlrAidMsgTxtReq, For' ...
  'dVehTrlrAgOffs, FordVehTrlrAgWarn, FordVehTrlrAgMax, FordVehHitchToTrl' ...
  'rAxle, FordVehTrlrAidTrlredReq, FordVehTrlrAidTarIdnReq, FordVehTrlrAi' ...
  'dSetupSts'];
FIH_Write_TBA_to_TrlrAid_Data2.Return = DataDict.CSReturn;
FIH_Write_TBA_to_TrlrAid_Data2.Return.Type = 'None';
FIH_Write_TBA_to_TrlrAid_Data2.Return.Min = [];
FIH_Write_TBA_to_TrlrAid_Data2.Return.Max = [];
FIH_Write_TBA_to_TrlrAid_Data2.Return.TestTolerance = [];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).Name = 'TrlrAidEnbl_D2_Stat';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(1).Description = [...
	'It gives Ford Vehicle Trailer Aid Enable Status'];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).Name = 'TrlrAidMsgTxt_D2_Rq';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(2).Description = [...
	'It gives Ford Vehicle Trailer Aid Message Text Request'];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).Name = 'TrlrAnOffst_An2_Calc';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(3).Description = [...
	'It gives Ford Vehicle Trailer Angle Offset'];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).Name = 'TrlrAn_An_WarnCalc';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(4).Description = [...
	'It gives Ford Vehicle Trailer Angle Warning'];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).Name = 'TrlrAn_An_MxCalc';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(5).Description = [...
	'It gives Ford Vehicle Trailer Trailer Angle Maximum'];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).Name = 'HitchToTrlrAxle_L_Calc';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).EngDT = dt.u16;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).EngMax = 65535;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(6).Description = 'It gives FordVehHitchToTrlrAxle';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).Name = 'TrlrAidTrlrId_No_Rq';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(7).Description = 'It gives FordVehTrlrAidTrlredReq';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).Name = 'TrlrAidTrgtId_No_Rq';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(8).Description = 'It gives FordVehTrlrAidTarIdnReq';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9) = DataDict.CSArguments;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).Name = 'TrlrAidSetup_D2_Stat';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).EngDT = dt.u08;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).EngMin = 0;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).EngMax = 255;
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).Units = 'Cnt';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).Direction = 'In';
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).InitRowCol = [1  1];
FIH_Write_TBA_to_TrlrAid_Data2.Arguments(9).Description = 'It gives FordVehTrlrAidSetupSts';

FIH_Write_TBA_to_EPAS_INFO = DataDict.SrvRunnable;
FIH_Write_TBA_to_EPAS_INFO.Context = 'NonRte';
FIH_Write_TBA_to_EPAS_INFO.Description = [...
  'Server Runnable for FordVehVelMaxReqTrlrAid, FordVehVelTrlrAidReq, For' ...
  'dVehTrlrHitchLampReq'];
FIH_Write_TBA_to_EPAS_INFO.Return = DataDict.CSReturn;
FIH_Write_TBA_to_EPAS_INFO.Return.Type = 'None';
FIH_Write_TBA_to_EPAS_INFO.Return.Min = [];
FIH_Write_TBA_to_EPAS_INFO.Return.Max = [];
FIH_Write_TBA_to_EPAS_INFO.Return.TestTolerance = [];
FIH_Write_TBA_to_EPAS_INFO.Arguments(1) = DataDict.CSArguments;
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).Name = 'Veh_V_RqMxTrlrAid';
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).EngDT = dt.u08;
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).EngMin = 0;
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).EngMax = 255;
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).Units = 'Cnt';
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).Direction = 'In';
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).InitRowCol = [1  1];
FIH_Write_TBA_to_EPAS_INFO.Arguments(1).Description = [...
	'It gives Ford Vehicle VelMaxReqTrlrAid '];
FIH_Write_TBA_to_EPAS_INFO.Arguments(2) = DataDict.CSArguments;
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).Name = 'VehVTrlrAid_B_Rq';
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).EngDT = dt.u08;
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).EngMin = 0;
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).EngMax = 255;
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).Units = 'Cnt';
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).Direction = 'In';
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).InitRowCol = [1  1];
FIH_Write_TBA_to_EPAS_INFO.Arguments(2).Description = [...
	'It gives Ford Vehicle VelTrlrAidReq'];
FIH_Write_TBA_to_EPAS_INFO.Arguments(3) = DataDict.CSArguments;
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).Name = 'TrlrHitchLamp_D_Rqst';
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).EngDT = dt.u08;
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).EngMin = 0;
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).EngMax = 255;
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).Units = 'Cnt';
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).Direction = 'In';
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).InitRowCol = [1  1];
FIH_Write_TBA_to_EPAS_INFO.Arguments(3).Description = [...
	'It gives Ford Vehicle TrlrHitchLampReq'];

FIH_Write_LsmcBrkDecel_Request = DataDict.SrvRunnable;
FIH_Write_LsmcBrkDecel_Request.Context = 'NonRte';
FIH_Write_LsmcBrkDecel_Request.Description = [...
  'Server Runnable for FordVehLoSpdMtnCtrlBrkDecelEnaReq, FordVehLoSpdMtn' ...
  'CtrlBrkTqReq'];
FIH_Write_LsmcBrkDecel_Request.Return = DataDict.CSReturn;
FIH_Write_LsmcBrkDecel_Request.Return.Type = 'None';
FIH_Write_LsmcBrkDecel_Request.Return.Min = [];
FIH_Write_LsmcBrkDecel_Request.Return.Max = [];
FIH_Write_LsmcBrkDecel_Request.Return.TestTolerance = [];
FIH_Write_LsmcBrkDecel_Request.Arguments(1) = DataDict.CSArguments;
FIH_Write_LsmcBrkDecel_Request.Arguments(1).Name = 'LsmcBrkDecelEnbl_D_Rq';
FIH_Write_LsmcBrkDecel_Request.Arguments(1).EngDT = dt.u08;
FIH_Write_LsmcBrkDecel_Request.Arguments(1).EngMin = 0;
FIH_Write_LsmcBrkDecel_Request.Arguments(1).EngMax = 255;
FIH_Write_LsmcBrkDecel_Request.Arguments(1).Units = 'Cnt';
FIH_Write_LsmcBrkDecel_Request.Arguments(1).Direction = 'In';
FIH_Write_LsmcBrkDecel_Request.Arguments(1).InitRowCol = [1  1];
FIH_Write_LsmcBrkDecel_Request.Arguments(1).Description = [...
	'It gives Ford Vehicle LoSpdMtnCtrlBrkDecelEnaReq'];
FIH_Write_LsmcBrkDecel_Request.Arguments(2) = DataDict.CSArguments;
FIH_Write_LsmcBrkDecel_Request.Arguments(2).Name = 'LsmcBrk_Tq_Rq';
FIH_Write_LsmcBrkDecel_Request.Arguments(2).EngDT = dt.u16;
FIH_Write_LsmcBrkDecel_Request.Arguments(2).EngMin = 0;
FIH_Write_LsmcBrkDecel_Request.Arguments(2).EngMax = 65535;
FIH_Write_LsmcBrkDecel_Request.Arguments(2).Units = 'Cnt';
FIH_Write_LsmcBrkDecel_Request.Arguments(2).Direction = 'In';
FIH_Write_LsmcBrkDecel_Request.Arguments(2).InitRowCol = [1  1];
FIH_Write_LsmcBrkDecel_Request.Arguments(2).Description = [...
	'It gives Ford Vehicle LoSpdMtnCtrlBrkTqReq'];

FIH_Write_TBA_to_LA_Data3 = DataDict.SrvRunnable;
FIH_Write_TBA_to_LA_Data3.Context = 'NonRte';
FIH_Write_TBA_to_LA_Data3.Description = [...
  'Server Runnable for FordVehTrlrAgTarCalcn'];
FIH_Write_TBA_to_LA_Data3.Return = DataDict.CSReturn;
FIH_Write_TBA_to_LA_Data3.Return.Type = 'None';
FIH_Write_TBA_to_LA_Data3.Return.Min = [];
FIH_Write_TBA_to_LA_Data3.Return.Max = [];
FIH_Write_TBA_to_LA_Data3.Return.TestTolerance = [];
FIH_Write_TBA_to_LA_Data3.Arguments(1) = DataDict.CSArguments;
FIH_Write_TBA_to_LA_Data3.Arguments(1).Name = 'TrlrAn_An_TrgtCalc';
FIH_Write_TBA_to_LA_Data3.Arguments(1).EngDT = dt.u08;
FIH_Write_TBA_to_LA_Data3.Arguments(1).EngMin = 0;
FIH_Write_TBA_to_LA_Data3.Arguments(1).EngMax = 255;
FIH_Write_TBA_to_LA_Data3.Arguments(1).Units = 'Cnt';
FIH_Write_TBA_to_LA_Data3.Arguments(1).Direction = 'In';
FIH_Write_TBA_to_LA_Data3.Arguments(1).InitRowCol = [1  1];
FIH_Write_TBA_to_LA_Data3.Arguments(1).Description = [...
	'It gives Ford Vehicle TrlrAgTarCalcn'];

%----------------------------------------------------------------%
%              Read/Write for Diagnostics                        %                                              
%----------------------------------------------------------------%

FIH_Read_PDC_Service_DID = DataDict.SrvRunnable;
FIH_Read_PDC_Service_DID.Context = 'NonRte';
FIH_Read_PDC_Service_DID.Description = [...
  'Server Runnable for FIH_Read_PDC_Service_DID'];
FIH_Read_PDC_Service_DID.Return = DataDict.CSReturn;
FIH_Read_PDC_Service_DID.Return.Type = 'None';
% FIH_Read_PDC_Service_DID.Return.Type = dt.s16;
FIH_Read_PDC_Service_DID.Return.Min = [];
FIH_Read_PDC_Service_DID.Return.Max = [];
FIH_Read_PDC_Service_DID.Return.TestTolerance = [];

FIH_Read_PDC_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_PDC_Int_Status_DID.Context = 'NonRte';
FIH_Read_PDC_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_PDC_Int_Status_DID'];
FIH_Read_PDC_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_PDC_Int_Status_DID.Return.Type = 'None';
% FIH_Read_PDC_Int_Status_DID.Return.Type = dt.u32;
FIH_Read_PDC_Int_Status_DID.Return.Min = [];
FIH_Read_PDC_Int_Status_DID.Return.Max = [];
FIH_Read_PDC_Int_Status_DID.Return.TestTolerance = [];

FIH_Read_LDW_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_LDW_Int_Status_DID.Context = 'NonRte';
FIH_Read_LDW_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_LDW_Int_Status_DID'];
FIH_Read_LDW_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_LDW_Int_Status_DID.Return.Type = 'None';
% FIH_Read_LDW_Int_Status_DID.Return.Type = dt.u32;
FIH_Read_LDW_Int_Status_DID.Return.Min = [];
FIH_Read_LDW_Int_Status_DID.Return.Max = [];
FIH_Read_LDW_Int_Status_DID.Return.TestTolerance = [];

FIH_Read_LKA_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_LKA_Int_Status_DID.Context = 'NonRte';
FIH_Read_LKA_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_LKA_Int_Status_DID'];
FIH_Read_LKA_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_LKA_Int_Status_DID.Return.Type = 'None';
% FIH_Read_LKA_Int_Status_DID.Return.Type = dt.u32;
FIH_Read_LKA_Int_Status_DID.Return.Min = [];
FIH_Read_LKA_Int_Status_DID.Return.Max = [];
FIH_Read_LKA_Int_Status_DID.Return.TestTolerance = [];

FIH_Read_ANC_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_ANC_Int_Status_DID.Context = 'NonRte';
FIH_Read_ANC_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_ANC_Int_Status_DID'];
FIH_Read_ANC_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_ANC_Int_Status_DID.Return.Type = 'None';
% FIH_Read_ANC_Int_Status_DID.Return.Type = dt.u32;
FIH_Read_ANC_Int_Status_DID.Return.Min = [];
FIH_Read_ANC_Int_Status_DID.Return.Max = [];
FIH_Read_ANC_Int_Status_DID.Return.TestTolerance = [];

FIH_Read_TBA_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_TBA_Int_Status_DID.Context = 'NonRte';
FIH_Read_TBA_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_TBA_Int_Status_DID'];
FIH_Read_TBA_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_TBA_Int_Status_DID.Return.Type = 'None';
% FIH_Read_TBA_Int_Status_DID.Return.Type = dt.u32;
FIH_Read_TBA_Int_Status_DID.Return.Min = [];
FIH_Read_TBA_Int_Status_DID.Return.Max = [];
FIH_Read_TBA_Int_Status_DID.Return.TestTolerance = [];

FIH_Read_LATCTL_Int_Status_DID = DataDict.SrvRunnable;
FIH_Read_LATCTL_Int_Status_DID.Context = 'NonRte';
FIH_Read_LATCTL_Int_Status_DID.Description = [...
  'Server Runnable for FIH_Read_LATCTL_Int_Status_DID'];
FIH_Read_LATCTL_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Read_LATCTL_Int_Status_DID.Return.Type = 'None';
% FIH_Read_LATCTL_Int_Status_DID.Return.Type = dt.u32;
FIH_Read_LATCTL_Int_Status_DID.Return.Min = [];
FIH_Read_LATCTL_Int_Status_DID.Return.Max = [];
FIH_Read_LATCTL_Int_Status_DID.Return.TestTolerance = [];

FIH_Read_ANC_Ext_Diag_Status = DataDict.SrvRunnable;
FIH_Read_ANC_Ext_Diag_Status.Context = 'NonRte';
FIH_Read_ANC_Ext_Diag_Status.Description = [...
  'Server Runnable for FIH_Read_ANC_Ext_Diag_Status'];
FIH_Read_ANC_Ext_Diag_Status.Return = DataDict.CSReturn;
FIH_Read_ANC_Ext_Diag_Status.Return.Type = 'None';
% FIH_Read_ANC_Ext_Diag_Status.Return.Type = dt.u08;
FIH_Read_ANC_Ext_Diag_Status.Return.Min = [];
FIH_Read_ANC_Ext_Diag_Status.Return.Max = [];
FIH_Read_ANC_Ext_Diag_Status.Return.TestTolerance = [];

FIH_Read_LDW_Ext_Diag_Status = DataDict.SrvRunnable;
FIH_Read_LDW_Ext_Diag_Status.Context = 'NonRte';
FIH_Read_LDW_Ext_Diag_Status.Description = [...
  'Server Runnable for FIH_Read_LDW_Ext_Diag_Status'];
FIH_Read_LDW_Ext_Diag_Status.Return = DataDict.CSReturn;
FIH_Read_LDW_Ext_Diag_Status.Return.Type = 'None';
% FIH_Read_LDW_Ext_Diag_Status.Return.Type = dt.u08;
FIH_Read_LDW_Ext_Diag_Status.Return.Min = [];
FIH_Read_LDW_Ext_Diag_Status.Return.Max = [];
FIH_Read_LDW_Ext_Diag_Status.Return.TestTolerance = [];

FIH_Write_PDC_Service_DID = DataDict.SrvRunnable;
FIH_Write_PDC_Service_DID.Context = 'NonRte';
FIH_Write_PDC_Service_DID.Description = [...
  'Server Runnable to provide data for SrvPullDriftCmpRstVal'];
FIH_Write_PDC_Service_DID.Return = DataDict.CSReturn;
FIH_Write_PDC_Service_DID.Return.Type = 'None';
FIH_Write_PDC_Service_DID.Return.Min = [];
FIH_Write_PDC_Service_DID.Return.Max = [];
FIH_Write_PDC_Service_DID.Return.TestTolerance = [];
FIH_Write_PDC_Service_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_PDC_Service_DID.Arguments(1).Name = 'ServicePDCResetValue';
FIH_Write_PDC_Service_DID.Arguments(1).EngDT = dt.s16;
FIH_Write_PDC_Service_DID.Arguments(1).EngMin = -32768;
FIH_Write_PDC_Service_DID.Arguments(1).EngMax = 32767;
FIH_Write_PDC_Service_DID.Arguments(1).Units = 'Cnt';
FIH_Write_PDC_Service_DID.Arguments(1).Direction = 'In';
FIH_Write_PDC_Service_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_PDC_Service_DID.Arguments(1).Description = 'It gives SrvPullDriftCmpRstVal';

FIH_Write_PDC_Actual_DID = DataDict.SrvRunnable;
FIH_Write_PDC_Actual_DID.Context = 'NonRte';
FIH_Write_PDC_Actual_DID.Description = [...
  'Server Runnable to provide data for SrvPullDriftCmpRstAct'];
FIH_Write_PDC_Actual_DID.Return = DataDict.CSReturn;
FIH_Write_PDC_Actual_DID.Return.Type = 'None';
FIH_Write_PDC_Actual_DID.Return.Min = [];
FIH_Write_PDC_Actual_DID.Return.Max = [];
FIH_Write_PDC_Actual_DID.Return.TestTolerance = [];
FIH_Write_PDC_Actual_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_PDC_Actual_DID.Arguments(1).Name = 'ServicePDCActual';
FIH_Write_PDC_Actual_DID.Arguments(1).EngDT = dt.s16;
FIH_Write_PDC_Actual_DID.Arguments(1).EngMin = -32768;
FIH_Write_PDC_Actual_DID.Arguments(1).EngMax = 32767;
FIH_Write_PDC_Actual_DID.Arguments(1).Units = 'Cnt';
FIH_Write_PDC_Actual_DID.Arguments(1).Direction = 'In';
FIH_Write_PDC_Actual_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_PDC_Actual_DID.Arguments(1).Description = 'It gives SrvPullDriftCmpRstAct';
    
FIH_Write_PDC_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_PDC_Int_Status_DID.Context = 'NonRte';
FIH_Write_PDC_Int_Status_DID.Description = [...
  'Server Runnable to provide data for PullDriftCmpIntSts'];
FIH_Write_PDC_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_PDC_Int_Status_DID.Return.Type = 'None';
FIH_Write_PDC_Int_Status_DID.Return.Min = [];
FIH_Write_PDC_Int_Status_DID.Return.Max = [];
FIH_Write_PDC_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_PDC_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_PDC_Int_Status_DID.Arguments(1).Name = 'PDC_InternalStatus';
FIH_Write_PDC_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_PDC_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_PDC_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_PDC_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_PDC_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_PDC_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_PDC_Int_Status_DID.Arguments(1).Description = 'It gives PullDriftCmpIntSts';

FIH_Write_LDW_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_LDW_Int_Status_DID.Context = 'NonRte';
FIH_Write_LDW_Int_Status_DID.Description = [...
  'Server Runnable to provide data for LaneDprtrWarnIntSts'];
FIH_Write_LDW_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_LDW_Int_Status_DID.Return.Type = 'None';
FIH_Write_LDW_Int_Status_DID.Return.Min = [];
FIH_Write_LDW_Int_Status_DID.Return.Max = [];
FIH_Write_LDW_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_LDW_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_LDW_Int_Status_DID.Arguments(1).Name = 'LDW_InternalStatus';
FIH_Write_LDW_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_LDW_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_LDW_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_LDW_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_LDW_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_LDW_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_LDW_Int_Status_DID.Arguments(1).Description = 'It gives LaneDprtrWarnIntSts';
    
FIH_Write_LKA_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_LKA_Int_Status_DID.Context = 'NonRte';
FIH_Write_LKA_Int_Status_DID.Description = [...
  'Server Runnable to provide data for LaneKeepAssiIntSts'];
FIH_Write_LKA_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_LKA_Int_Status_DID.Return.Type = 'None';
FIH_Write_LKA_Int_Status_DID.Return.Min = [];
FIH_Write_LKA_Int_Status_DID.Return.Max = [];
FIH_Write_LKA_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_LKA_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_LKA_Int_Status_DID.Arguments(1).Name = 'LKA_InternalStatus';
FIH_Write_LKA_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_LKA_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_LKA_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_LKA_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_LKA_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_LKA_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_LKA_Int_Status_DID.Arguments(1).Description = 'It gives LaneKeepAssiIntSts';
    
FIH_Write_ANC_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_ANC_Int_Status_DID.Context = 'NonRte';
FIH_Write_ANC_Int_Status_DID.Description = [...
  'Server Runnable to provide data for ActvNiblCmpIntSts'];
FIH_Write_ANC_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_ANC_Int_Status_DID.Return.Type = 'None';
FIH_Write_ANC_Int_Status_DID.Return.Min = [];
FIH_Write_ANC_Int_Status_DID.Return.Max = [];
FIH_Write_ANC_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_ANC_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_ANC_Int_Status_DID.Arguments(1).Name = 'ANC_InternalStatus';
FIH_Write_ANC_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_ANC_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_ANC_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_ANC_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_ANC_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_ANC_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_ANC_Int_Status_DID.Arguments(1).Description = 'It gives ActvNiblCmpIntSts';
    
FIH_Write_TBA_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_TBA_Int_Status_DID.Context = 'NonRte';
FIH_Write_TBA_Int_Status_DID.Description = [...
  'Server Runnable to provide data for TrlrBackupAssiIntSts'];
FIH_Write_TBA_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_TBA_Int_Status_DID.Return.Type = 'None';
FIH_Write_TBA_Int_Status_DID.Return.Min = [];
FIH_Write_TBA_Int_Status_DID.Return.Max = [];
FIH_Write_TBA_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_TBA_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_TBA_Int_Status_DID.Arguments(1).Name = 'TBA_InternalStatus';
FIH_Write_TBA_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_TBA_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_TBA_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_TBA_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_TBA_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_TBA_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_TBA_Int_Status_DID.Arguments(1).Description = 'It gives TrlrBackupAssiIntSts';
    
FIH_Write_LATCTL_Int_Status_DID = DataDict.SrvRunnable;
FIH_Write_LATCTL_Int_Status_DID.Context = 'NonRte';
FIH_Write_LATCTL_Int_Status_DID.Description = [...
  'Server Runnable to provide data for LatCtrlIntSts'];
FIH_Write_LATCTL_Int_Status_DID.Return = DataDict.CSReturn;
FIH_Write_LATCTL_Int_Status_DID.Return.Type = 'None';
FIH_Write_LATCTL_Int_Status_DID.Return.Min = [];
FIH_Write_LATCTL_Int_Status_DID.Return.Max = [];
FIH_Write_LATCTL_Int_Status_DID.Return.TestTolerance = [];
FIH_Write_LATCTL_Int_Status_DID.Arguments(1) = DataDict.CSArguments;
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).Name = 'LATCTL_InternalStatus';
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).EngDT = dt.u32;
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).EngMin = 0;
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).EngMax = 4294967295;
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).Units = 'Cnt';
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).Direction = 'In';
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).InitRowCol = [1  1];
FIH_Write_LATCTL_Int_Status_DID.Arguments(1).Description = 'It gives LatCtrlIntSts';

%----------------------------------------------------------------%
%           Write for Pass Thru Signals                          %                                              
%----------------------------------------------------------------%

FIH_Write_FIH_Msg_1_High = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_1_High.Context = 'NonRte';
FIH_Write_FIH_Msg_1_High.Description = [...
  'Server Runnable for FordVehBBMsgOutp1HiPart'];
FIH_Write_FIH_Msg_1_High.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_1_High.Return.Type = 'None';
FIH_Write_FIH_Msg_1_High.Return.Min = [];
FIH_Write_FIH_Msg_1_High.Return.Max = [];
FIH_Write_FIH_Msg_1_High.Return.TestTolerance = [];
FIH_Write_FIH_Msg_1_High.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_1_High.Arguments(1).Name = 'HSCAN_Out1_High';
FIH_Write_FIH_Msg_1_High.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_1_High.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_1_High.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_1_High.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_1_High.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_1_High.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_1_High.Arguments(1).Description = 'It gives FordVehBBMsgOutp1HiPart';

FIH_Write_FIH_Msg_1_Low = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_1_Low.Context = 'NonRte';
FIH_Write_FIH_Msg_1_Low.Description = [...
  'Server Runnable for FordVehBBMsgOutp1LoPart'];
FIH_Write_FIH_Msg_1_Low.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_1_Low.Return.Type = 'None';
FIH_Write_FIH_Msg_1_Low.Return.Min = [];
FIH_Write_FIH_Msg_1_Low.Return.Max = [];
FIH_Write_FIH_Msg_1_Low.Return.TestTolerance = [];
FIH_Write_FIH_Msg_1_Low.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_1_Low.Arguments(1).Name = 'HSCAN_Out1_Low';
FIH_Write_FIH_Msg_1_Low.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_1_Low.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_1_Low.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_1_Low.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_1_Low.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_1_Low.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_1_Low.Arguments(1).Description = 'It gives FordVehBBMsgOutp1LoPart';

FIH_Write_FIH_Msg_2_High = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_2_High.Context = 'NonRte';
FIH_Write_FIH_Msg_2_High.Description = [...
  'Server Runnable for FordVehBBMsgOutp2HiPart'];
FIH_Write_FIH_Msg_2_High.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_2_High.Return.Type = 'None';
FIH_Write_FIH_Msg_2_High.Return.Min = [];
FIH_Write_FIH_Msg_2_High.Return.Max = [];
FIH_Write_FIH_Msg_2_High.Return.TestTolerance = [];
FIH_Write_FIH_Msg_2_High.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_2_High.Arguments(1).Name = 'HSCAN_Out2_High';
FIH_Write_FIH_Msg_2_High.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_2_High.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_2_High.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_2_High.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_2_High.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_2_High.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_2_High.Arguments(1).Description = 'It gives FordVehBBMsgOutp2HiPart';

FIH_Write_FIH_Msg_2_Low = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_2_Low.Context = 'NonRte';
FIH_Write_FIH_Msg_2_Low.Description = [...
  'Server Runnable for FordVehBBMsgOutp2LoPart'];
FIH_Write_FIH_Msg_2_Low.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_2_Low.Return.Type = 'None';
FIH_Write_FIH_Msg_2_Low.Return.Min = [];
FIH_Write_FIH_Msg_2_Low.Return.Max = [];
FIH_Write_FIH_Msg_2_Low.Return.TestTolerance = [];
FIH_Write_FIH_Msg_2_Low.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_2_Low.Arguments(1).Name = 'HSCAN_Out2_Low';
FIH_Write_FIH_Msg_2_Low.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_2_Low.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_2_Low.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_2_Low.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_2_Low.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_2_Low.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_2_Low.Arguments(1).Description = 'It gives FordVehBBMsgOutp2LoPart';

FIH_Write_FIH_Msg_3_High = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_3_High.Context = 'NonRte';
FIH_Write_FIH_Msg_3_High.Description = [...
  'Server Runnable for FordVehBBMsgOutp3HiPart'];
FIH_Write_FIH_Msg_3_High.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_3_High.Return.Type = 'None';
FIH_Write_FIH_Msg_3_High.Return.Min = [];
FIH_Write_FIH_Msg_3_High.Return.Max = [];
FIH_Write_FIH_Msg_3_High.Return.TestTolerance = [];
FIH_Write_FIH_Msg_3_High.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_3_High.Arguments(1).Name = 'HSCAN_Out3_High';
FIH_Write_FIH_Msg_3_High.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_3_High.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_3_High.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_3_High.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_3_High.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_3_High.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_3_High.Arguments(1).Description = 'It gives FordVehBBMsgOutp3HiPart';

FIH_Write_FIH_Msg_3_Low = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_3_Low.Context = 'NonRte';
FIH_Write_FIH_Msg_3_Low.Description = [...
  'Server Runnable for FordVehBBMsgOutp3LoPart'];
FIH_Write_FIH_Msg_3_Low.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_3_Low.Return.Type = 'None';
FIH_Write_FIH_Msg_3_Low.Return.Min = [];
FIH_Write_FIH_Msg_3_Low.Return.Max = [];
FIH_Write_FIH_Msg_3_Low.Return.TestTolerance = [];
FIH_Write_FIH_Msg_3_Low.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_3_Low.Arguments(1).Name = 'HSCAN_Out3_Low';
FIH_Write_FIH_Msg_3_Low.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_3_Low.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_3_Low.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_3_Low.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_3_Low.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_3_Low.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_3_Low.Arguments(1).Description = 'It gives FordVehBBMsgOutp3LoPart';

FIH_Write_FIH_Msg_4_High = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_4_High.Context = 'NonRte';
FIH_Write_FIH_Msg_4_High.Description = [...
  'Server Runnable for FordVehBBMsgOutp4HiPart'];
FIH_Write_FIH_Msg_4_High.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_4_High.Return.Type = 'None';
FIH_Write_FIH_Msg_4_High.Return.Min = [];
FIH_Write_FIH_Msg_4_High.Return.Max = [];
FIH_Write_FIH_Msg_4_High.Return.TestTolerance = [];
FIH_Write_FIH_Msg_4_High.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_4_High.Arguments(1).Name = 'HSCAN_Out4_High';
FIH_Write_FIH_Msg_4_High.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_4_High.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_4_High.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_4_High.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_4_High.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_4_High.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_4_High.Arguments(1).Description = 'It gives FordVehBBMsgOutp4HiPart';

FIH_Write_FIH_Msg_4_Low = DataDict.SrvRunnable;
FIH_Write_FIH_Msg_4_Low.Context = 'NonRte';
FIH_Write_FIH_Msg_4_Low.Description = [...
  'Server Runnable for FordVehBBMsgOutp4LoPart'];
FIH_Write_FIH_Msg_4_Low.Return = DataDict.CSReturn;
FIH_Write_FIH_Msg_4_Low.Return.Type = 'None';
FIH_Write_FIH_Msg_4_Low.Return.Min = [];
FIH_Write_FIH_Msg_4_Low.Return.Max = [];
FIH_Write_FIH_Msg_4_Low.Return.TestTolerance = [];
FIH_Write_FIH_Msg_4_Low.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_Msg_4_Low.Arguments(1).Name = 'HSCAN_Out4_Low';
FIH_Write_FIH_Msg_4_Low.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_Msg_4_Low.Arguments(1).EngMin = 0;
FIH_Write_FIH_Msg_4_Low.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_Msg_4_Low.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_Msg_4_Low.Arguments(1).Direction = 'In';
FIH_Write_FIH_Msg_4_Low.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_Msg_4_Low.Arguments(1).Description = 'It gives FordVehBBMsgOutp4LoPart';

%----------------------------------------------------------------%
%             Base EPS Direct Boost Curve                        %                                              
%----------------------------------------------------------------%

FIH_Read_EPS_Direct_BC_Torque = DataDict.SrvRunnable;
FIH_Read_EPS_Direct_BC_Torque.Context = 'NonRte';
FIH_Read_EPS_Direct_BC_Torque.Description = [...
  'Server Runnable for Direct Boost Curve'];
FIH_Read_EPS_Direct_BC_Torque.Return = DataDict.CSReturn;
FIH_Read_EPS_Direct_BC_Torque.Return.Type = 'None';
% FIH_Read_EPS_Direct_BC_Torque.Return.Type = dt.u16;
FIH_Read_EPS_Direct_BC_Torque.Return.Min = [];
FIH_Read_EPS_Direct_BC_Torque.Return.Max = [];
FIH_Read_EPS_Direct_BC_Torque.Return.TestTolerance = [];
FIH_Read_EPS_Direct_BC_Torque.Arguments(1) = DataDict.CSArguments;
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).Name = 'Feature_Torque_Parameter';
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).EngDT = dt.u16;
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).EngMin = 0;
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).EngMax = 65535;
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).Units = 'Cnt';
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).Direction = 'In';
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).InitRowCol = [1  1];
FIH_Read_EPS_Direct_BC_Torque.Arguments(1).Description = 'It gives Feature Torque Parameter';

%----------------------------------------------------------------%
%             Base EPS Inverse Boost Curve                       %                                              
%----------------------------------------------------------------%

FIH_Read_EPS_Inverse_BC_Torque = DataDict.SrvRunnable;
FIH_Read_EPS_Inverse_BC_Torque.Context = 'NonRte';
FIH_Read_EPS_Inverse_BC_Torque.Description = [...
  'Server Runnable for Inverse Boost Curve'];
FIH_Read_EPS_Inverse_BC_Torque.Return = DataDict.CSReturn;
FIH_Read_EPS_Inverse_BC_Torque.Return.Type = 'None';
% FIH_Read_EPS_Inverse_BC_Torque.Return.Type = dt.u16;
FIH_Read_EPS_Inverse_BC_Torque.Return.Min = [];
FIH_Read_EPS_Inverse_BC_Torque.Return.Max = [];
FIH_Read_EPS_Inverse_BC_Torque.Return.TestTolerance = [];
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1) = DataDict.CSArguments;
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).Name = 'Feature_Torque_Offset';
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).EngDT = dt.u16;
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).EngMin = 0;
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).EngMax = 65535;
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).Units = 'Cnt';
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).Direction = 'In';
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).InitRowCol = [1  1];
FIH_Read_EPS_Inverse_BC_Torque.Arguments(1).Description = 'It gives Feature Torque Offset';

%----------------------------------------------------------------%
%         Ford In-House Feature Software Version Numbers         %                                              
%----------------------------------------------------------------%
FIH_Write_ANC_SW_Version = DataDict.SrvRunnable;
FIH_Write_ANC_SW_Version.Context = 'NonRte';
FIH_Write_ANC_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Active Nibble Control Version' ...
  ''];
FIH_Write_ANC_SW_Version.Return = DataDict.CSReturn;
FIH_Write_ANC_SW_Version.Return.Type = 'None';
FIH_Write_ANC_SW_Version.Return.Min = [];
FIH_Write_ANC_SW_Version.Return.Max = [];
FIH_Write_ANC_SW_Version.Return.TestTolerance = [];
FIH_Write_ANC_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_ANC_SW_Version.Arguments(1).Name = 'ANC_SW_Version';
FIH_Write_ANC_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_ANC_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_ANC_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_ANC_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_ANC_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_ANC_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_ANC_SW_Version.Arguments(1).Description = 'It gives ANC_SW_Version';

FIH_Write_LA_SW_Version = DataDict.SrvRunnable;
FIH_Write_LA_SW_Version.Context = 'NonRte';
FIH_Write_LA_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Lane Assist Software Version'];
FIH_Write_LA_SW_Version.Return = DataDict.CSReturn;
FIH_Write_LA_SW_Version.Return.Type = 'None';
FIH_Write_LA_SW_Version.Return.Min = [];
FIH_Write_LA_SW_Version.Return.Max = [];
FIH_Write_LA_SW_Version.Return.TestTolerance = [];
FIH_Write_LA_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_LA_SW_Version.Arguments(1).Name = 'LA_SW_Version';
FIH_Write_LA_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_LA_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_LA_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_LA_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_LA_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_LA_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_LA_SW_Version.Arguments(1).Description = 'It gives LA_SW_Version';

FIH_Write_PDC_SW_Version = DataDict.SrvRunnable;
FIH_Write_PDC_SW_Version.Context = 'NonRte';
FIH_Write_PDC_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Pull DRift Compensation Softw' ...
  'are Version'];
FIH_Write_PDC_SW_Version.Return = DataDict.CSReturn;
FIH_Write_PDC_SW_Version.Return.Type = 'None';
FIH_Write_PDC_SW_Version.Return.Min = [];
FIH_Write_PDC_SW_Version.Return.Max = [];
FIH_Write_PDC_SW_Version.Return.TestTolerance = [];
FIH_Write_PDC_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_PDC_SW_Version.Arguments(1).Name = 'PDC_SW_Version';
FIH_Write_PDC_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_PDC_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_PDC_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_PDC_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_PDC_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_PDC_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_PDC_SW_Version.Arguments(1).Description = 'It gives PDC_SW_Version';

FIH_Write_TBA_SW_Version = DataDict.SrvRunnable;
FIH_Write_TBA_SW_Version.Context = 'NonRte';
FIH_Write_TBA_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Trailer Backup Assist Softwar' ...
  'e Version'];
FIH_Write_TBA_SW_Version.Return = DataDict.CSReturn;
FIH_Write_TBA_SW_Version.Return.Type = 'None';
FIH_Write_TBA_SW_Version.Return.Min = [];
FIH_Write_TBA_SW_Version.Return.Max = [];
FIH_Write_TBA_SW_Version.Return.TestTolerance = [];
FIH_Write_TBA_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_TBA_SW_Version.Arguments(1).Name = 'TBA_SW_Version';
FIH_Write_TBA_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_TBA_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_TBA_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_TBA_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_TBA_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_TBA_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_TBA_SW_Version.Arguments(1).Description = 'It gives TBA_SW_Version';

FIH_Write_RF_SW_Version = DataDict.SrvRunnable;
FIH_Write_RF_SW_Version.Context = 'NonRte';
FIH_Write_RF_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Research Function Software Ve' ...
  'rsion'];
FIH_Write_RF_SW_Version.Return = DataDict.CSReturn;
FIH_Write_RF_SW_Version.Return.Type = 'None';
FIH_Write_RF_SW_Version.Return.Min = [];
FIH_Write_RF_SW_Version.Return.Max = [];
FIH_Write_RF_SW_Version.Return.TestTolerance = [];
FIH_Write_RF_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_RF_SW_Version.Arguments(1).Name = 'RF_SW_Version';
FIH_Write_RF_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_RF_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_RF_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_RF_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_RF_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_RF_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_RF_SW_Version.Arguments(1).Description = 'It gives RF_SW_Version';

FIH_Write_FIH_SW_Version = DataDict.SrvRunnable;
FIH_Write_FIH_SW_Version.Context = 'NonRte';
FIH_Write_FIH_SW_Version.Description = [...
  'Server Runnable to provide value of Ford Black Box Software Version'];
FIH_Write_FIH_SW_Version.Return = DataDict.CSReturn;
FIH_Write_FIH_SW_Version.Return.Type = 'None';
FIH_Write_FIH_SW_Version.Return.Min = [];
FIH_Write_FIH_SW_Version.Return.Max = [];
FIH_Write_FIH_SW_Version.Return.TestTolerance = [];
FIH_Write_FIH_SW_Version.Arguments(1) = DataDict.CSArguments;
FIH_Write_FIH_SW_Version.Arguments(1).Name = 'FIH_SW_Version';
FIH_Write_FIH_SW_Version.Arguments(1).EngDT = dt.u32;
FIH_Write_FIH_SW_Version.Arguments(1).EngMin = 0;
FIH_Write_FIH_SW_Version.Arguments(1).EngMax = 4294967295;
FIH_Write_FIH_SW_Version.Arguments(1).Units = 'Cnt';
FIH_Write_FIH_SW_Version.Arguments(1).Direction = 'In';
FIH_Write_FIH_SW_Version.Arguments(1).InitRowCol = [1  1];
FIH_Write_FIH_SW_Version.Arguments(1).Description = 'It gives FIH_SW_Version';

%----------------------------------------------------------------%
%               Read Arbiter Command                             %                                              
%----------------------------------------------------------------%

FIH_Read_ANC_Arbiter = DataDict.SrvRunnable;
FIH_Read_ANC_Arbiter.Context = 'NonRte';
FIH_Read_ANC_Arbiter.Description = [...
  'Server Runnable for FIH_Read_ANC_Arbiter'];
FIH_Read_ANC_Arbiter.Return = DataDict.CSReturn;
FIH_Read_ANC_Arbiter.Return.Type = 'None';
% FIH_Read_ANC_Arbiter.Return.Type = dt.u08;
FIH_Read_ANC_Arbiter.Return.Min = [];
FIH_Read_ANC_Arbiter.Return.Max = [];
FIH_Read_ANC_Arbiter.Return.TestTolerance = [];

FIH_Read_LKA_Arbiter = DataDict.SrvRunnable;
FIH_Read_LKA_Arbiter.Context = 'NonRte';
FIH_Read_LKA_Arbiter.Description = [...
  'Server Runnable for FIH_Read_LKA_Arbiter'];
FIH_Read_LKA_Arbiter.Return = DataDict.CSReturn;
FIH_Read_LKA_Arbiter.Return.Type = 'None';
% FIH_Read_LKA_Arbiter.Return.Type = dt.u08;
FIH_Read_LKA_Arbiter.Return.Min = [];
FIH_Read_LKA_Arbiter.Return.Max = [];
FIH_Read_LKA_Arbiter.Return.TestTolerance = [];

FIH_Read_LDW_Arbiter = DataDict.SrvRunnable;
FIH_Read_LDW_Arbiter.Context = 'NonRte';
FIH_Read_LDW_Arbiter.Description = [...
  'Server Runnable for FIH_Read_LDW_Arbiter'];
FIH_Read_LDW_Arbiter.Return = DataDict.CSReturn;
FIH_Read_LDW_Arbiter.Return.Type = 'None';
% FIH_Read_LDW_Arbiter.Return.Type = dt.u08;
FIH_Read_LDW_Arbiter.Return.Min = [];
FIH_Read_LDW_Arbiter.Return.Max = [];
FIH_Read_LDW_Arbiter.Return.TestTolerance = [];

FIH_Read_PDC_Arbiter = DataDict.SrvRunnable;
FIH_Read_PDC_Arbiter.Context = 'NonRte';
FIH_Read_PDC_Arbiter.Description = [...
  'Server Runnable for FIH_Read_PDC_Arbiter'];
FIH_Read_PDC_Arbiter.Return = DataDict.CSReturn;
FIH_Read_PDC_Arbiter.Return.Type = 'None';
% FIH_Read_PDC_Arbiter.Return.Type = dt.u08;
FIH_Read_PDC_Arbiter.Return.Min = [];
FIH_Read_PDC_Arbiter.Return.Max = [];
FIH_Read_PDC_Arbiter.Return.TestTolerance = [];

FIH_Read_PDCLearning_Arbiter = DataDict.SrvRunnable;
FIH_Read_PDCLearning_Arbiter.Context = 'NonRte';
FIH_Read_PDCLearning_Arbiter.Description = [...
  'Server Runnable for FIH_Read_PDCLearning_Arbiter'];
FIH_Read_PDCLearning_Arbiter.Return = DataDict.CSReturn;
FIH_Read_PDCLearning_Arbiter.Return.Type = 'None';
% FIH_Read_PDCLearning_Arbiter.Return.Type = dt.u08;
FIH_Read_PDCLearning_Arbiter.Return.Min = [];
FIH_Read_PDCLearning_Arbiter.Return.Max = [];
FIH_Read_PDCLearning_Arbiter.Return.TestTolerance = [];

FIH_Read_LATCTL_Arbiter = DataDict.SrvRunnable;
FIH_Read_LATCTL_Arbiter.Context = 'NonRte';
FIH_Read_LATCTL_Arbiter.Description = [...
  'Server Runnable for FIH_Read_LATCTL_Arbiter'];
FIH_Read_LATCTL_Arbiter.Return = DataDict.CSReturn;
FIH_Read_LATCTL_Arbiter.Return.Type = 'None';
% FIH_Read_LATCTL_Arbiter.Return.Type = dt.u08;
FIH_Read_LATCTL_Arbiter.Return.Min = [];
FIH_Read_LATCTL_Arbiter.Return.Max = [];
FIH_Read_LATCTL_Arbiter.Return.TestTolerance = [];

%----------------------------------------------------------------%
%            Write to Arbiter/Limiter                            %                                              
%----------------------------------------------------------------%

FIH_Write_PDCLearning_Arbiter = DataDict.SrvRunnable;
FIH_Write_PDCLearning_Arbiter.Context = 'NonRte';
FIH_Write_PDCLearning_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Pull Drift Compensation Learn' ...
  'ing Feature State.'];
FIH_Write_PDCLearning_Arbiter.Return = DataDict.CSReturn;
FIH_Write_PDCLearning_Arbiter.Return.Type = 'None';
FIH_Write_PDCLearning_Arbiter.Return.Min = [];
FIH_Write_PDCLearning_Arbiter.Return.Max = [];
FIH_Write_PDCLearning_Arbiter.Return.TestTolerance = [];
FIH_Write_PDCLearning_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_PDCLearning_Arbiter.Arguments(1).Name = 'PDCLearning_FeatureState';
FIH_Write_PDCLearning_Arbiter.Arguments(1).EngDT = dt.u08;
FIH_Write_PDCLearning_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_PDCLearning_Arbiter.Arguments(1).EngMax = 255;
FIH_Write_PDCLearning_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_PDCLearning_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_PDCLearning_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_PDCLearning_Arbiter.Arguments(1).Description = 'It gives PDCLearning_FeatureState';

FIH_Write_ANC_Arbiter = DataDict.SrvRunnable;
FIH_Write_ANC_Arbiter.Context = 'NonRte';
FIH_Write_ANC_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Active Nibble Control Feature' ...
  ' State and Ford Active Nibble Control Torque Request'];
FIH_Write_ANC_Arbiter.Return = DataDict.CSReturn;
FIH_Write_ANC_Arbiter.Return.Type = 'None';
FIH_Write_ANC_Arbiter.Return.Min = [];
FIH_Write_ANC_Arbiter.Return.Max = [];
FIH_Write_ANC_Arbiter.Return.TestTolerance = [];
FIH_Write_ANC_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_ANC_Arbiter.Arguments(1).Name = 'ANC_FeatureState';
FIH_Write_ANC_Arbiter.Arguments(1).EngDT = dt.u08;
FIH_Write_ANC_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_ANC_Arbiter.Arguments(1).EngMax = 255;
FIH_Write_ANC_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_ANC_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_ANC_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_ANC_Arbiter.Arguments(1).Description = 'It gives ANC_FeatureState';
FIH_Write_ANC_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_ANC_Arbiter.Arguments(2).Name = 'ANC_TorqueRequest';
FIH_Write_ANC_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_ANC_Arbiter.Arguments(2).EngMin = -32768;
FIH_Write_ANC_Arbiter.Arguments(2).EngMax = 32767;
FIH_Write_ANC_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_ANC_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_ANC_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_ANC_Arbiter.Arguments(2).Description = 'It gives ANC_TorqueRequest';

FIH_Write_LKA_Arbiter = DataDict.SrvRunnable;
FIH_Write_LKA_Arbiter.Context = 'NonRte';
FIH_Write_LKA_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Lane Keeping Assist Feature S' ...
  'tate and Ford Lane Keeping Assist Torque Request '];
FIH_Write_LKA_Arbiter.Return = DataDict.CSReturn;
FIH_Write_LKA_Arbiter.Return.Type = 'None';
FIH_Write_LKA_Arbiter.Return.Min = [];
FIH_Write_LKA_Arbiter.Return.Max = [];
FIH_Write_LKA_Arbiter.Return.TestTolerance = [];
FIH_Write_LKA_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_LKA_Arbiter.Arguments(1).Name = 'LKA_FeatureState';
FIH_Write_LKA_Arbiter.Arguments(1).EngDT = dt.u08;
FIH_Write_LKA_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_LKA_Arbiter.Arguments(1).EngMax = 255;
FIH_Write_LKA_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_LKA_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_LKA_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_LKA_Arbiter.Arguments(1).Description = 'It gives LKA_FeatureState';
FIH_Write_LKA_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_LKA_Arbiter.Arguments(2).Name = 'LKA_TorqueRequest';
FIH_Write_LKA_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_LKA_Arbiter.Arguments(2).EngMin = -32768;
FIH_Write_LKA_Arbiter.Arguments(2).EngMax = 32767;
FIH_Write_LKA_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_LKA_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_LKA_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_LKA_Arbiter.Arguments(2).Description = 'It gives LKA_TorqueRequest';

FIH_Write_LDW_Arbiter = DataDict.SrvRunnable;
FIH_Write_LDW_Arbiter.Context = 'NonRte';
FIH_Write_LDW_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Lane Departure Warning Featur' ...
  'e State and Ford Lane Departure Warning Torque Request '];
FIH_Write_LDW_Arbiter.Return = DataDict.CSReturn;
FIH_Write_LDW_Arbiter.Return.Type = 'None';
FIH_Write_LDW_Arbiter.Return.Min = [];
FIH_Write_LDW_Arbiter.Return.Max = [];
FIH_Write_LDW_Arbiter.Return.TestTolerance = [];
FIH_Write_LDW_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_LDW_Arbiter.Arguments(1).Name = 'LDW_FeatureState';
FIH_Write_LDW_Arbiter.Arguments(1).EngDT = dt.u08;
FIH_Write_LDW_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_LDW_Arbiter.Arguments(1).EngMax = 255;
FIH_Write_LDW_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_LDW_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_LDW_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_LDW_Arbiter.Arguments(1).Description = 'It gives LDW_FeatureState';
FIH_Write_LDW_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_LDW_Arbiter.Arguments(2).Name = 'LDW_TorqueRequest';
FIH_Write_LDW_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_LDW_Arbiter.Arguments(2).EngMin = -32768;
FIH_Write_LDW_Arbiter.Arguments(2).EngMax = 32767;
FIH_Write_LDW_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_LDW_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_LDW_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_LDW_Arbiter.Arguments(2).Description = 'It gives LDW_TorqueRequest';

FIH_Write_PDC_Arbiter = DataDict.SrvRunnable;
FIH_Write_PDC_Arbiter.Context = 'NonRte';
FIH_Write_PDC_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Pull Drift Compensation Featu' ...
  're State and Ford Pull Drift Compensation Torque Request'];
FIH_Write_PDC_Arbiter.Return = DataDict.CSReturn;
FIH_Write_PDC_Arbiter.Return.Type = 'None';
FIH_Write_PDC_Arbiter.Return.Min = [];
FIH_Write_PDC_Arbiter.Return.Max = [];
FIH_Write_PDC_Arbiter.Return.TestTolerance = [];
FIH_Write_PDC_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_PDC_Arbiter.Arguments(1).Name = 'PDC_FeatureState';
FIH_Write_PDC_Arbiter.Arguments(1).EngDT = dt.u08;
FIH_Write_PDC_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_PDC_Arbiter.Arguments(1).EngMax = 255;
FIH_Write_PDC_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_PDC_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_PDC_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_PDC_Arbiter.Arguments(1).Description = 'It gives PDC_FeatureState';
FIH_Write_PDC_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_PDC_Arbiter.Arguments(2).Name = 'PDC_TorqueRequest';
FIH_Write_PDC_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_PDC_Arbiter.Arguments(2).EngMin = -32768;
FIH_Write_PDC_Arbiter.Arguments(2).EngMax = 32767;
FIH_Write_PDC_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_PDC_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_PDC_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_PDC_Arbiter.Arguments(2).Description = 'It gives PDC_TorqueRequest';

FIH_Write_LATCTL_Arbiter = DataDict.SrvRunnable;
FIH_Write_LATCTL_Arbiter.Context = 'NonRte';
FIH_Write_LATCTL_Arbiter.Description = [...
  'Server Runnable to provide value of Ford Lateral Control Feature State' ...
  ' and Ford Lateral Control Torque Request'];
FIH_Write_LATCTL_Arbiter.Return = DataDict.CSReturn;
FIH_Write_LATCTL_Arbiter.Return.Type = 'None';
FIH_Write_LATCTL_Arbiter.Return.Min = [];
FIH_Write_LATCTL_Arbiter.Return.Max = [];
FIH_Write_LATCTL_Arbiter.Return.TestTolerance = [];
FIH_Write_LATCTL_Arbiter.Arguments(1) = DataDict.CSArguments;
FIH_Write_LATCTL_Arbiter.Arguments(1).Name = 'LATCTL_FeatureState';
FIH_Write_LATCTL_Arbiter.Arguments(1).EngDT = dt.u08;
FIH_Write_LATCTL_Arbiter.Arguments(1).EngMin = 0;
FIH_Write_LATCTL_Arbiter.Arguments(1).EngMax = 255;
FIH_Write_LATCTL_Arbiter.Arguments(1).Units = 'Cnt';
FIH_Write_LATCTL_Arbiter.Arguments(1).Direction = 'In';
FIH_Write_LATCTL_Arbiter.Arguments(1).InitRowCol = [1  1];
FIH_Write_LATCTL_Arbiter.Arguments(1).Description = 'It gives LATCTL_FeatureState';
FIH_Write_LATCTL_Arbiter.Arguments(2) = DataDict.CSArguments;
FIH_Write_LATCTL_Arbiter.Arguments(2).Name = 'LATCTL_TorqueRequest';
FIH_Write_LATCTL_Arbiter.Arguments(2).EngDT = dt.s16;
FIH_Write_LATCTL_Arbiter.Arguments(2).EngMin = -32768;
FIH_Write_LATCTL_Arbiter.Arguments(2).EngMax = 32767;
FIH_Write_LATCTL_Arbiter.Arguments(2).Units = 'Cnt';
FIH_Write_LATCTL_Arbiter.Arguments(2).Direction = 'In';
FIH_Write_LATCTL_Arbiter.Arguments(2).InitRowCol = [1  1];
FIH_Write_LATCTL_Arbiter.Arguments(2).Description = 'It gives LATCTL_TorqueRequest';

%----------------------------------------------------------------%
%                        Write to EAC                            %                                              
%----------------------------------------------------------------%

FIH_TBA_AngleRequest_Function = DataDict.SrvRunnable;
FIH_TBA_AngleRequest_Function.Context = 'NonRte';
FIH_TBA_AngleRequest_Function.Description = [...
  'Server Runnable for FIH_TBA_AngleRequest_Function'];
FIH_TBA_AngleRequest_Function.Return = DataDict.CSReturn;
FIH_TBA_AngleRequest_Function.Return.Type = 'None';
FIH_TBA_AngleRequest_Function.Return.Min = [];
FIH_TBA_AngleRequest_Function.Return.Max = [];
FIH_TBA_AngleRequest_Function.Return.TestTolerance = [];
FIH_TBA_AngleRequest_Function.Arguments(1) = DataDict.CSArguments;
FIH_TBA_AngleRequest_Function.Arguments(1).Name = 'EPASIntAngleStatReq';
FIH_TBA_AngleRequest_Function.Arguments(1).EngDT = dt.u08;
FIH_TBA_AngleRequest_Function.Arguments(1).EngMin = 0;
FIH_TBA_AngleRequest_Function.Arguments(1).EngMax = 255;
FIH_TBA_AngleRequest_Function.Arguments(1).Units = 'Cnt';
FIH_TBA_AngleRequest_Function.Arguments(1).Direction = 'In';
FIH_TBA_AngleRequest_Function.Arguments(1).InitRowCol = [1  1];
FIH_TBA_AngleRequest_Function.Arguments(1).Description = 'It gives EPASIntAngleStatReq';
FIH_TBA_AngleRequest_Function.Arguments(2) = DataDict.CSArguments;
FIH_TBA_AngleRequest_Function.Arguments(2).Name = 'IntSteeringAngleReq';
FIH_TBA_AngleRequest_Function.Arguments(2).EngDT = dt.s16;
FIH_TBA_AngleRequest_Function.Arguments(2).EngMin = -32768;
FIH_TBA_AngleRequest_Function.Arguments(2).EngMax = 32767;
FIH_TBA_AngleRequest_Function.Arguments(2).Units = 'Cnt';
FIH_TBA_AngleRequest_Function.Arguments(2).Direction = 'In';
FIH_TBA_AngleRequest_Function.Arguments(2).InitRowCol = [1  1];
FIH_TBA_AngleRequest_Function.Arguments(2).Description = 'It gives IntSteeringAngleReq';

%----------------------------------------------------------------%
%                 Read/Write for NVM                             %                                              
%----------------------------------------------------------------%
FIH_ANC_Read_NV_Byte = DataDict.SrvRunnable;
FIH_ANC_Read_NV_Byte.Context = 'NonRte';
FIH_ANC_Read_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box ANC Byte'];
FIH_ANC_Read_NV_Byte.Return = DataDict.CSReturn;
FIH_ANC_Read_NV_Byte.Return.Type = 'None';
% FIH_ANC_Read_NV_Byte.Return.Type = dt.u08;
FIH_ANC_Read_NV_Byte.Return.Min = [];
FIH_ANC_Read_NV_Byte.Return.Max = [];
FIH_ANC_Read_NV_Byte.Return.TestTolerance = [];
FIH_ANC_Read_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_ANC_Read_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_ANC_Read_NV_Byte.Arguments(1).EngDT = dt.u08;
FIH_ANC_Read_NV_Byte.Arguments(1).EngMin = 0;
FIH_ANC_Read_NV_Byte.Arguments(1).EngMax = 255;
FIH_ANC_Read_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_ANC_Read_NV_Byte.Arguments(1).Direction = 'In';
FIH_ANC_Read_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_ANC_Read_NV_Byte.Arguments(1).Description = [...
	'It is used to select index byte of Ford Black Box ANC Byte'];

FIH_PDC_Read_NV_Byte = DataDict.SrvRunnable;
FIH_PDC_Read_NV_Byte.Context = 'NonRte';
FIH_PDC_Read_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Pull Drift Compensa' ...
  'tion Byte'];
FIH_PDC_Read_NV_Byte.Return = DataDict.CSReturn;
FIH_PDC_Read_NV_Byte.Return.Type = 'None';
% FIH_PDC_Read_NV_Byte.Return.Type = dt.u08;
FIH_PDC_Read_NV_Byte.Return.Min = [];
FIH_PDC_Read_NV_Byte.Return.Max = [];
FIH_PDC_Read_NV_Byte.Return.TestTolerance = [];
FIH_PDC_Read_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_PDC_Read_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_PDC_Read_NV_Byte.Arguments(1).EngDT = dt.u08;
FIH_PDC_Read_NV_Byte.Arguments(1).EngMin = 0;
FIH_PDC_Read_NV_Byte.Arguments(1).EngMax = 255;
FIH_PDC_Read_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_PDC_Read_NV_Byte.Arguments(1).Direction = 'In';
FIH_PDC_Read_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_PDC_Read_NV_Byte.Arguments(1).Description = [...
	'It is used to select index byte of Ford Black Box Pull Drift Compensat' ...
	'ion Byte'];

FIH_LA_Read_NV_Byte = DataDict.SrvRunnable;
FIH_LA_Read_NV_Byte.Context = 'NonRte';
FIH_LA_Read_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Lane Assist Byte'];
FIH_LA_Read_NV_Byte.Return = DataDict.CSReturn;
FIH_LA_Read_NV_Byte.Return.Type = 'None';
% FIH_LA_Read_NV_Byte.Return.Type = dt.u08;
FIH_LA_Read_NV_Byte.Return.Min = [];
FIH_LA_Read_NV_Byte.Return.Max = [];
FIH_LA_Read_NV_Byte.Return.TestTolerance = [];
FIH_LA_Read_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_LA_Read_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_LA_Read_NV_Byte.Arguments(1).EngDT = dt.u08;
FIH_LA_Read_NV_Byte.Arguments(1).EngMin = 0;
FIH_LA_Read_NV_Byte.Arguments(1).EngMax = 255;
FIH_LA_Read_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_LA_Read_NV_Byte.Arguments(1).Direction = 'In';
FIH_LA_Read_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_LA_Read_NV_Byte.Arguments(1).Description = [...
  'It is used to select index byte of Ford Black Box Lane Assist Byte'];

FIH_TBA_Read_NV_Byte = DataDict.SrvRunnable;
FIH_TBA_Read_NV_Byte.Context = 'NonRte';
FIH_TBA_Read_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Trailer Backup Byte' ...
  ''];
FIH_TBA_Read_NV_Byte.Return = DataDict.CSReturn;
FIH_TBA_Read_NV_Byte.Return.Type = 'None';
% FIH_TBA_Read_NV_Byte.Return.Type = dt.u08;
FIH_TBA_Read_NV_Byte.Return.Min = [];
FIH_TBA_Read_NV_Byte.Return.Max = [];
FIH_TBA_Read_NV_Byte.Return.TestTolerance = [];
FIH_TBA_Read_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_TBA_Read_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_TBA_Read_NV_Byte.Arguments(1).EngDT = dt.u16;
FIH_TBA_Read_NV_Byte.Arguments(1).EngMin = 0;
FIH_TBA_Read_NV_Byte.Arguments(1).EngMax = 65535;
FIH_TBA_Read_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_TBA_Read_NV_Byte.Arguments(1).Direction = 'In';
FIH_TBA_Read_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_TBA_Read_NV_Byte.Arguments(1).Description = [...
  'It is used to select index byte of Ford Black Box Trailer Backup Byte'];
  
FIH_ANC_Write_NV_Byte = DataDict.SrvRunnable;
FIH_ANC_Write_NV_Byte.Context = 'NonRte';
FIH_ANC_Write_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Active Nibble Contr' ...
  'ol Byte and Ford Black Box Active Nibble Control Byte Index'];
FIH_ANC_Write_NV_Byte.Return = DataDict.CSReturn;
FIH_ANC_Write_NV_Byte.Return.Type = 'None';
FIH_ANC_Write_NV_Byte.Return.Min = [];
FIH_ANC_Write_NV_Byte.Return.Max = [];
FIH_ANC_Write_NV_Byte.Return.TestTolerance = [];
FIH_ANC_Write_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_ANC_Write_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_ANC_Write_NV_Byte.Arguments(1).EngDT = dt.u08;
FIH_ANC_Write_NV_Byte.Arguments(1).EngMin = 0;
FIH_ANC_Write_NV_Byte.Arguments(1).EngMax = 255;
FIH_ANC_Write_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_ANC_Write_NV_Byte.Arguments(1).Direction = 'In';
FIH_ANC_Write_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_ANC_Write_NV_Byte.Arguments(1).Description = [...
  'It returns Ford Black Box Active Nibble Control Byte Index in a u8 for' ...
  'mat'];
FIH_ANC_Write_NV_Byte.Arguments(2) = DataDict.CSArguments;
FIH_ANC_Write_NV_Byte.Arguments(2).Name = 'FIH_NV_Byte';
FIH_ANC_Write_NV_Byte.Arguments(2).EngDT = dt.u08;
FIH_ANC_Write_NV_Byte.Arguments(2).EngMin = 0;
FIH_ANC_Write_NV_Byte.Arguments(2).EngMax = 255;
FIH_ANC_Write_NV_Byte.Arguments(2).Units = 'Cnt';
FIH_ANC_Write_NV_Byte.Arguments(2).Direction = 'In';
FIH_ANC_Write_NV_Byte.Arguments(2).InitRowCol = [1  1];
FIH_ANC_Write_NV_Byte.Arguments(2).Description = [...
  'It returns Ford Black Box Active Nibble Control Byte in a u8 format'];
  
FIH_PDC_Write_NV_Byte = DataDict.SrvRunnable;
FIH_PDC_Write_NV_Byte.Context = 'NonRte';
FIH_PDC_Write_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Pull Drift Compensa' ...
  'tion Byte and Ford Black Box Pull Drift Compensation Byte Index'];
FIH_PDC_Write_NV_Byte.Return = DataDict.CSReturn;
FIH_PDC_Write_NV_Byte.Return.Type = 'None';
FIH_PDC_Write_NV_Byte.Return.Min = [];
FIH_PDC_Write_NV_Byte.Return.Max = [];
FIH_PDC_Write_NV_Byte.Return.TestTolerance = [];
FIH_PDC_Write_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_PDC_Write_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_PDC_Write_NV_Byte.Arguments(1).EngDT = dt.u08;
FIH_PDC_Write_NV_Byte.Arguments(1).EngMin = 0;
FIH_PDC_Write_NV_Byte.Arguments(1).EngMax = 255;
FIH_PDC_Write_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_PDC_Write_NV_Byte.Arguments(1).Direction = 'In';
FIH_PDC_Write_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_PDC_Write_NV_Byte.Arguments(1).Description = [...
  'It returns Ford Black Box Pull Drift Compensation Byte Index in a u8 f' ...
  'ormat'];
FIH_PDC_Write_NV_Byte.Arguments(2) = DataDict.CSArguments;
FIH_PDC_Write_NV_Byte.Arguments(2).Name = 'FIH_NV_Byte';
FIH_PDC_Write_NV_Byte.Arguments(2).EngDT = dt.u08;
FIH_PDC_Write_NV_Byte.Arguments(2).EngMin = 0;
FIH_PDC_Write_NV_Byte.Arguments(2).EngMax = 255;
FIH_PDC_Write_NV_Byte.Arguments(2).Units = 'Cnt';
FIH_PDC_Write_NV_Byte.Arguments(2).Direction = 'In';
FIH_PDC_Write_NV_Byte.Arguments(2).InitRowCol = [1  1];
FIH_PDC_Write_NV_Byte.Arguments(2).Description = [...
  'It returns Ford Black Box Pull Drift Compensation Byte in a u8 format'];
  
FIH_LA_Write_NV_Byte = DataDict.SrvRunnable;
FIH_LA_Write_NV_Byte.Context = 'NonRte';
FIH_LA_Write_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Lane Assist Byte an' ...
  'd Ford Black Box Lane Assist Byte Index'];
FIH_LA_Write_NV_Byte.Return = DataDict.CSReturn;
FIH_LA_Write_NV_Byte.Return.Type = 'None';
FIH_LA_Write_NV_Byte.Return.Min = [];
FIH_LA_Write_NV_Byte.Return.Max = [];
FIH_LA_Write_NV_Byte.Return.TestTolerance = [];
FIH_LA_Write_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_LA_Write_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_LA_Write_NV_Byte.Arguments(1).EngDT = dt.u08;
FIH_LA_Write_NV_Byte.Arguments(1).EngMin = 0;
FIH_LA_Write_NV_Byte.Arguments(1).EngMax = 255;
FIH_LA_Write_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_LA_Write_NV_Byte.Arguments(1).Direction = 'In';
FIH_LA_Write_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_LA_Write_NV_Byte.Arguments(1).Description = [...
  'It returns Ford Ford Black Box Lane Assist Byte Index in a u8 format'];
FIH_LA_Write_NV_Byte.Arguments(2) = DataDict.CSArguments;
FIH_LA_Write_NV_Byte.Arguments(2).Name = 'FIH_NV_Byte';
FIH_LA_Write_NV_Byte.Arguments(2).EngDT = dt.u08;
FIH_LA_Write_NV_Byte.Arguments(2).EngMin = 0;
FIH_LA_Write_NV_Byte.Arguments(2).EngMax = 255;
FIH_LA_Write_NV_Byte.Arguments(2).Units = 'Cnt';
FIH_LA_Write_NV_Byte.Arguments(2).Direction = 'In';
FIH_LA_Write_NV_Byte.Arguments(2).InitRowCol = [1  1];
FIH_LA_Write_NV_Byte.Arguments(2).Description = [...
  'It returns Ford Ford Black Box Lane Assist Byte in a u8 format'];
  
FIH_TBA_Write_NV_Byte = DataDict.SrvRunnable;
FIH_TBA_Write_NV_Byte.Context = 'NonRte';
FIH_TBA_Write_NV_Byte.Description = [...
  'Server Runnable to provide value of Ford Black Box Trailer Backup Byte' ...
  ' and Ford Black Box Trailer Backup Byte Index'];
FIH_TBA_Write_NV_Byte.Return = DataDict.CSReturn;
FIH_TBA_Write_NV_Byte.Return.Type = 'None';
FIH_TBA_Write_NV_Byte.Return.Min = [];
FIH_TBA_Write_NV_Byte.Return.Max = [];
FIH_TBA_Write_NV_Byte.Return.TestTolerance = [];
FIH_TBA_Write_NV_Byte.Arguments(1) = DataDict.CSArguments;
FIH_TBA_Write_NV_Byte.Arguments(1).Name = 'FIH_NV_Byte_Index';
FIH_TBA_Write_NV_Byte.Arguments(1).EngDT = dt.u16;
FIH_TBA_Write_NV_Byte.Arguments(1).EngMin = 0;
FIH_TBA_Write_NV_Byte.Arguments(1).EngMax = 65535;
FIH_TBA_Write_NV_Byte.Arguments(1).Units = 'Cnt';
FIH_TBA_Write_NV_Byte.Arguments(1).Direction = 'In';
FIH_TBA_Write_NV_Byte.Arguments(1).InitRowCol = [1  1];
FIH_TBA_Write_NV_Byte.Arguments(1).Description = [...
  'It returns Ford Black Box Trailer Backup Byte Index in a u16 format'];
FIH_TBA_Write_NV_Byte.Arguments(2) = DataDict.CSArguments;
FIH_TBA_Write_NV_Byte.Arguments(2).Name = 'FIH_NV_Byte';
FIH_TBA_Write_NV_Byte.Arguments(2).EngDT = dt.u08;
FIH_TBA_Write_NV_Byte.Arguments(2).EngMin = 0;
FIH_TBA_Write_NV_Byte.Arguments(2).EngMax = 255;
FIH_TBA_Write_NV_Byte.Arguments(2).Units = 'Cnt';
FIH_TBA_Write_NV_Byte.Arguments(2).Direction = 'In';
FIH_TBA_Write_NV_Byte.Arguments(2).InitRowCol = [1  1];
FIH_TBA_Write_NV_Byte.Arguments(2).Description = [...
  'It returns Ford Black Box Trailer Backup Byte in a u8 format'];

%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FIH_ANC_function = DataDict.Client;
FIH_ANC_function.CallLocation = {'FordBlaBoxIfCmp1Per1'};
FIH_ANC_function.Description = 'NonRte';
FIH_ANC_function.Return = DataDict.CSReturn;
FIH_ANC_function.Return.Type = 'None';
FIH_ANC_function.Return.Min = [];
FIH_ANC_function.Return.Max = [];
FIH_ANC_function.Return.TestTolerance = [];

FIH_ANC_init = DataDict.Client;
FIH_ANC_init.CallLocation = {'FordBlaBoxIfCmp1Init1'};
FIH_ANC_init.Description = 'NonRte';
FIH_ANC_init.Return = DataDict.CSReturn;
FIH_ANC_init.Return.Type = 'None';
FIH_ANC_init.Return.Min = [];
FIH_ANC_init.Return.Max = [];
FIH_ANC_init.Return.TestTolerance = [];

FIH_LA_function = DataDict.Client;
FIH_LA_function.CallLocation = {'FordBlaBoxIfCmp1Per1'};
FIH_LA_function.Description = 'NonRte';
FIH_LA_function.Return = DataDict.CSReturn;
FIH_LA_function.Return.Type = 'None';
FIH_LA_function.Return.Min = [];
FIH_LA_function.Return.Max = [];
FIH_LA_function.Return.TestTolerance = [];

FIH_LA_init = DataDict.Client;
FIH_LA_init.CallLocation = {'FordBlaBoxIfCmp1Init1'};
FIH_LA_init.Description = 'NonRte';
FIH_LA_init.Return = DataDict.CSReturn;
FIH_LA_init.Return.Type = 'None';
FIH_LA_init.Return.Min = [];
FIH_LA_init.Return.Max = [];
FIH_LA_init.Return.TestTolerance = [];

FIH_PDC_function = DataDict.Client;
FIH_PDC_function.CallLocation = {'FordBlaBoxIfCmp1Per1'};
FIH_PDC_function.Description = 'NonRte';
FIH_PDC_function.Return = DataDict.CSReturn;
FIH_PDC_function.Return.Type = 'None';
FIH_PDC_function.Return.Min = [];
FIH_PDC_function.Return.Max = [];
FIH_PDC_function.Return.TestTolerance = [];

FIH_PDC_init = DataDict.Client;
FIH_PDC_init.CallLocation = {'FordBlaBoxIfCmp1Init1'};
FIH_PDC_init.Description = 'NonRte';
FIH_PDC_init.Return = DataDict.CSReturn;
FIH_PDC_init.Return.Type = 'None';
FIH_PDC_init.Return.Min = [];
FIH_PDC_init.Return.Max = [];
FIH_PDC_init.Return.TestTolerance = [];

FIH_SW_init = DataDict.Client;
FIH_SW_init.CallLocation = {'FordBlaBoxIfCmp1Init1'};
FIH_SW_init.Description = 'NonRte';
FIH_SW_init.Return = DataDict.CSReturn;
FIH_SW_init.Return.Type = 'None';
FIH_SW_init.Return.Min = [];
FIH_SW_init.Return.Max = [];
FIH_SW_init.Return.TestTolerance = [];

FIH_TBA_function = DataDict.Client;
FIH_TBA_function.CallLocation = {'FordBlaBoxIfCmp1Per2'};
FIH_TBA_function.Description = 'NonRte';
FIH_TBA_function.Return = DataDict.CSReturn;
FIH_TBA_function.Return.Type = 'None';
FIH_TBA_function.Return.Min = [];
FIH_TBA_function.Return.Max = [];
FIH_TBA_function.Return.TestTolerance = [];

FIH_TBA_init = DataDict.Client;
FIH_TBA_init.CallLocation = {'FordBlaBoxIfCmp1Init1'};
FIH_TBA_init.Description = 'NonRte';
FIH_TBA_init.Return = DataDict.CSReturn;
FIH_TBA_init.Return.Type = 'None';
FIH_TBA_init.Return.Min = [];
FIH_TBA_init.Return.Max = [];
FIH_TBA_init.Return.TestTolerance = [];

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = 'ECU Identifier of the ECU';
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordBlaBoxIfCmp1Per2','FordBlaBoxIfCmp1Per1','FordBlaBoxIfCmp1Init1'};
EcuId.ReadType = 'Rte';

FordActvNiblCtrlArbnCmd = DataDict.IpSignal;
FordActvNiblCtrlArbnCmd.LongName = 'Ford Active Nibble Control Arbitration Command';
FordActvNiblCtrlArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Active Nibble Control' ...
  ' Arbitration Command to FIH'];
FordActvNiblCtrlArbnCmd.DocUnits = 'Cnt';
FordActvNiblCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordActvNiblCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordActvNiblCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordActvNiblCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordActvNiblCtrlArbnCmd.ReadIn = {'FIH_Read_ANC_Arbiter'};
FordActvNiblCtrlArbnCmd.ReadType = 'Rte';

FordActvNiblCtrlDiagcSts = DataDict.IpSignal;
FordActvNiblCtrlDiagcSts.LongName = 'Ford Active Nible Control Diagnostic Status';
FordActvNiblCtrlDiagcSts.Description = [...
  'This signal is used to return value of Ford Active Nible Control Diagn' ...
  'ostic Status to FIH'];
FordActvNiblCtrlDiagcSts.DocUnits = 'Cnt';
FordActvNiblCtrlDiagcSts.EngDT = dt.u08;
FordActvNiblCtrlDiagcSts.EngInit = 0;
FordActvNiblCtrlDiagcSts.EngMin = 0;
FordActvNiblCtrlDiagcSts.EngMax = 255;
FordActvNiblCtrlDiagcSts.ReadIn = {'FIH_Read_ANC_Ext_Diag_Status'};
FordActvNiblCtrlDiagcSts.ReadType = 'Rte';

FordLaneDprtrWarnArbnCmd = DataDict.IpSignal;
FordLaneDprtrWarnArbnCmd.LongName = 'Ford Lane Departure Warning Arbitration Command';
FordLaneDprtrWarnArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Lane Departure Warnin' ...
  'g Arbitration Command to FIH'];
FordLaneDprtrWarnArbnCmd.DocUnits = 'Cnt';
FordLaneDprtrWarnArbnCmd.EngDT = enum.FordArbnCmd1;
FordLaneDprtrWarnArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLaneDprtrWarnArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLaneDprtrWarnArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLaneDprtrWarnArbnCmd.ReadIn = {'FIH_Read_LDW_Arbiter'};
FordLaneDprtrWarnArbnCmd.ReadType = 'Rte';

FordLaneKeepAssiArbnCmd = DataDict.IpSignal;
FordLaneKeepAssiArbnCmd.LongName = 'Ford Lane Keep Assist Arbitration Command';
FordLaneKeepAssiArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Lane Keep Assist Arbi' ...
  'ter Command to FIH'];
FordLaneKeepAssiArbnCmd.DocUnits = 'Cnt';
FordLaneKeepAssiArbnCmd.EngDT = enum.FordArbnCmd1;
FordLaneKeepAssiArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLaneKeepAssiArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLaneKeepAssiArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLaneKeepAssiArbnCmd.ReadIn = {'FIH_Read_LKA_Arbiter'};
FordLaneKeepAssiArbnCmd.ReadType = 'Rte';

FordLatCtrlArbnCmd = DataDict.IpSignal;
FordLatCtrlArbnCmd.LongName = 'Ford Lateral Control Arbitration Command';
FordLatCtrlArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Lateral Control Arbit' ...
  'er Command to FIH'];
FordLatCtrlArbnCmd.DocUnits = 'Cnt';
FordLatCtrlArbnCmd.EngDT = enum.FordArbnCmd1;
FordLatCtrlArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordLatCtrlArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordLatCtrlArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordLatCtrlArbnCmd.ReadIn = {'FIH_Read_LATCTL_Arbiter'};
FordLatCtrlArbnCmd.ReadType = 'Rte';

FordPullDriftCmpArbnCmd = DataDict.IpSignal;
FordPullDriftCmpArbnCmd.LongName = 'Ford Pull Drift Compensation Arbitration Command';
FordPullDriftCmpArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Pull Drift Compensati' ...
  'on Arbitration Command to FIH'];
FordPullDriftCmpArbnCmd.DocUnits = 'Cnt';
FordPullDriftCmpArbnCmd.EngDT = enum.FordArbnCmd1;
FordPullDriftCmpArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordPullDriftCmpArbnCmd.ReadIn = {'FIH_Read_PDC_Arbiter'};
FordPullDriftCmpArbnCmd.ReadType = 'Rte';

FordPullDriftCmpLrngArbnCmd = DataDict.IpSignal;
FordPullDriftCmpLrngArbnCmd.LongName = 'Ford Pull Drift Compensation Learning Arbitration Command';
FordPullDriftCmpLrngArbnCmd.Description = [...
  'This signal is used to return infomation of Ford Pull Drift Compensati' ...
  'on Learning Arbitration Command to FIH'];
FordPullDriftCmpLrngArbnCmd.DocUnits = 'Cnt';
FordPullDriftCmpLrngArbnCmd.EngDT = enum.FordArbnCmd1;
FordPullDriftCmpLrngArbnCmd.EngInit = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpLrngArbnCmd.EngMin = FordArbnCmd1.Cx0_PASSIVE;
FordPullDriftCmpLrngArbnCmd.EngMax = FordArbnCmd1.Cx99_DONT_CARE;
FordPullDriftCmpLrngArbnCmd.ReadIn = {'FIH_Read_PDCLearning_Arbiter'};
FordPullDriftCmpLrngArbnCmd.ReadType = 'Rte';

FordSrvLaneDprtrWarnDiagcSts = DataDict.IpSignal;
FordSrvLaneDprtrWarnDiagcSts.LongName = 'Ford Service Lane Departure Warning Diagnosis Status';
FordSrvLaneDprtrWarnDiagcSts.Description = [...
  'This signal is used to return value of LDW Diagnosis Status Internal t' ...
  'o FIH'];
FordSrvLaneDprtrWarnDiagcSts.DocUnits = 'Cnt';
FordSrvLaneDprtrWarnDiagcSts.EngDT = dt.u08;
FordSrvLaneDprtrWarnDiagcSts.EngInit = 0;
FordSrvLaneDprtrWarnDiagcSts.EngMin = 0;
FordSrvLaneDprtrWarnDiagcSts.EngMax = 255;
FordSrvLaneDprtrWarnDiagcSts.ReadIn = {'FIH_Read_LDW_Ext_Diag_Status'};
FordSrvLaneDprtrWarnDiagcSts.ReadType = 'Rte';

FordSrvPullDriftCmpRstVal = DataDict.IpSignal;
FordSrvPullDriftCmpRstVal.LongName = 'Ford Service Pull Drift Compensated Reset Value';
FordSrvPullDriftCmpRstVal.Description = [...
  'This signal is used to return value of Service PDC Reset Value Interna' ...
  'l to FIH'];
FordSrvPullDriftCmpRstVal.DocUnits = 'HwNwtMtr';
FordSrvPullDriftCmpRstVal.EngDT = dt.s8p7;
FordSrvPullDriftCmpRstVal.EngInit = 0;
FordSrvPullDriftCmpRstVal.EngMin = -255;
FordSrvPullDriftCmpRstVal.EngMax = 255.99;
FordSrvPullDriftCmpRstVal.ReadIn = {'FIH_Read_PDC_Service_DID'};
FordSrvPullDriftCmpRstVal.ReadType = 'Rte';

FordWrSrvActvNiblCmpIntSts = DataDict.IpSignal;
FordWrSrvActvNiblCmpIntSts.LongName = 'Ford Write Serivice Active Nibble Compensation Internal Status';
FordWrSrvActvNiblCmpIntSts.Description = [...
  'This signal is used to return value of ANC Internal Status to FIH'];
FordWrSrvActvNiblCmpIntSts.DocUnits = 'Cnt';
FordWrSrvActvNiblCmpIntSts.EngDT = dt.u32;
FordWrSrvActvNiblCmpIntSts.EngInit = 0;
FordWrSrvActvNiblCmpIntSts.EngMin = 0;
FordWrSrvActvNiblCmpIntSts.EngMax = 4294967295;
FordWrSrvActvNiblCmpIntSts.ReadIn = {'FIH_Read_ANC_Int_Status_DID'};
FordWrSrvActvNiblCmpIntSts.ReadType = 'Rte';

FordWrSrvLaneDprtrWarnIntSts = DataDict.IpSignal;
FordWrSrvLaneDprtrWarnIntSts.LongName = 'Ford Write Service Lane Departure Warning Internal Status';
FordWrSrvLaneDprtrWarnIntSts.Description = [...
  'This signal is used to return value of LDW Internal Status to FIH'];
FordWrSrvLaneDprtrWarnIntSts.DocUnits = 'Cnt';
FordWrSrvLaneDprtrWarnIntSts.EngDT = dt.u32;
FordWrSrvLaneDprtrWarnIntSts.EngInit = 0;
FordWrSrvLaneDprtrWarnIntSts.EngMin = 0;
FordWrSrvLaneDprtrWarnIntSts.EngMax = 4294967295;
FordWrSrvLaneDprtrWarnIntSts.ReadIn = {'FIH_Read_LDW_Int_Status_DID'};
FordWrSrvLaneDprtrWarnIntSts.ReadType = 'Rte';

FordWrSrvLaneKeepAssiIntSts = DataDict.IpSignal;
FordWrSrvLaneKeepAssiIntSts.LongName = 'Ford Write Service Lane Keep Assist Internal Status';
FordWrSrvLaneKeepAssiIntSts.Description = [...
  'This signal is used to return value of LKA Internal Status to FIH'];
FordWrSrvLaneKeepAssiIntSts.DocUnits = 'Cnt';
FordWrSrvLaneKeepAssiIntSts.EngDT = dt.u32;
FordWrSrvLaneKeepAssiIntSts.EngInit = 0;
FordWrSrvLaneKeepAssiIntSts.EngMin = 0;
FordWrSrvLaneKeepAssiIntSts.EngMax = 4294967295;
FordWrSrvLaneKeepAssiIntSts.ReadIn = {'FIH_Read_LKA_Int_Status_DID'};
FordWrSrvLaneKeepAssiIntSts.ReadType = 'Rte';

FordWrSrvLatCtrlIntSts = DataDict.IpSignal;
FordWrSrvLatCtrlIntSts.LongName = 'Ford Write Service Lateral Control Internal Status';
FordWrSrvLatCtrlIntSts.Description = [...
  'This signal is used to return value of LATCTL Internal Status to FIH'];
FordWrSrvLatCtrlIntSts.DocUnits = 'Cnt';
FordWrSrvLatCtrlIntSts.EngDT = dt.u32;
FordWrSrvLatCtrlIntSts.EngInit = 0;
FordWrSrvLatCtrlIntSts.EngMin = 0;
FordWrSrvLatCtrlIntSts.EngMax = 4294967295;
FordWrSrvLatCtrlIntSts.ReadIn = {'FIH_Read_LATCTL_Int_Status_DID'};
FordWrSrvLatCtrlIntSts.ReadType = 'Rte';

FordWrSrvPullDriftCmpIntSts = DataDict.IpSignal;
FordWrSrvPullDriftCmpIntSts.LongName = 'Ford Write Service Pull Drift Compensated Internal Status';
FordWrSrvPullDriftCmpIntSts.Description = [...
  'This signal is used to return value of PDC Internal Status to FIH'];
FordWrSrvPullDriftCmpIntSts.DocUnits = 'Cnt';
FordWrSrvPullDriftCmpIntSts.EngDT = dt.u32;
FordWrSrvPullDriftCmpIntSts.EngInit = 0;
FordWrSrvPullDriftCmpIntSts.EngMin = 0;
FordWrSrvPullDriftCmpIntSts.EngMax = 4294967295;
FordWrSrvPullDriftCmpIntSts.ReadIn = {'FIH_Read_PDC_Int_Status_DID'};
FordWrSrvPullDriftCmpIntSts.ReadType = 'Rte';

FordWrSrvTrlrBackupAssiIntSts = DataDict.IpSignal;
FordWrSrvTrlrBackupAssiIntSts.LongName = 'Ford Write Service Trailer Backup Assist Internal Status';
FordWrSrvTrlrBackupAssiIntSts.Description = [...
  'This signal is used to return value of TBA Internal Status to FIH'];
FordWrSrvTrlrBackupAssiIntSts.DocUnits = 'Cnt';
FordWrSrvTrlrBackupAssiIntSts.EngDT = dt.u32;
FordWrSrvTrlrBackupAssiIntSts.EngInit = 0;
FordWrSrvTrlrBackupAssiIntSts.EngMin = 0;
FordWrSrvTrlrBackupAssiIntSts.EngMax = 4294967295;
FordWrSrvTrlrBackupAssiIntSts.ReadIn = {'FIH_Read_TBA_Int_Status_DID'};
FordWrSrvTrlrBackupAssiIntSts.ReadType = 'Rte';

VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed Signal';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'FIH_Read_EPS_Direct_BC_Torque','FIH_Read_EPS_Inverse_BC_Torque'};
VehSpd.ReadType = 'Rte';

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ActvNiblCmpIntSts = DataDict.OpSignal;
ActvNiblCmpIntSts.LongName = 'Active Nibble Compensation Internal Status';
ActvNiblCmpIntSts.Description = [...
  'This signal is used to provide the value of Active Nibble Compensation' ...
  ' Internal Status to EPS.'];
ActvNiblCmpIntSts.DocUnits = 'Cnt';
ActvNiblCmpIntSts.SwcShoName = 'FordBlaBoxIfCmp1';
ActvNiblCmpIntSts.EngDT = dt.u32;
ActvNiblCmpIntSts.EngInit = 0;
ActvNiblCmpIntSts.EngMin = 0;
ActvNiblCmpIntSts.EngMax = 4294967295;
ActvNiblCmpIntSts.TestTolerance = 1;
ActvNiblCmpIntSts.WrittenIn = {'FIH_Write_ANC_Int_Status_DID'};
ActvNiblCmpIntSts.WriteType = 'Rte';

FordActvNiblCtrlFeatSt = DataDict.OpSignal;
FordActvNiblCtrlFeatSt.LongName = 'Ford Active Nibble Control Feature State';
FordActvNiblCtrlFeatSt.Description = [...
  'This signal is used to write the value of Ford Active Nibble Control F' ...
  'eature State to memory.'];
FordActvNiblCtrlFeatSt.DocUnits = 'Cnt';
FordActvNiblCtrlFeatSt.SwcShoName = 'FordBlaBoxIfCmp1';
FordActvNiblCtrlFeatSt.EngDT = enum.FordFeatSt1;
FordActvNiblCtrlFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordActvNiblCtrlFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordActvNiblCtrlFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordActvNiblCtrlFeatSt.TestTolerance = 1;
FordActvNiblCtrlFeatSt.WrittenIn = {'FIH_Write_ANC_Arbiter'};
FordActvNiblCtrlFeatSt.WriteType = 'Rte';

FordActvNiblCtrlSwVers = DataDict.OpSignal;
FordActvNiblCtrlSwVers.LongName = 'Ford Active Nibble Control Software Version';
FordActvNiblCtrlSwVers.Description = [...
  'This signal is used to write the value of Ford Active Nibble Control S' ...
  'oftware Version to memory.'];
FordActvNiblCtrlSwVers.DocUnits = 'Cnt';
FordActvNiblCtrlSwVers.SwcShoName = 'FordBlaBoxIfCmp1';
FordActvNiblCtrlSwVers.EngDT = dt.u32;
FordActvNiblCtrlSwVers.EngInit = 0;
FordActvNiblCtrlSwVers.EngMin = 0;
FordActvNiblCtrlSwVers.EngMax = 4294967295;
FordActvNiblCtrlSwVers.TestTolerance = 1;
FordActvNiblCtrlSwVers.WrittenIn = {'FIH_Write_ANC_SW_Version'};
FordActvNiblCtrlSwVers.WriteType = 'Rte';

FordActvNiblCtrlTqReq = DataDict.OpSignal;
FordActvNiblCtrlTqReq.LongName = 'Ford Active Nibble Control Torque Request';
FordActvNiblCtrlTqReq.Description = [...
  'This signal is used to write the value of Ford Active Nibble Control T' ...
  'orque Request to memory.'];
FordActvNiblCtrlTqReq.DocUnits = 'HwNwtMtr';
FordActvNiblCtrlTqReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordActvNiblCtrlTqReq.EngDT = dt.float32;
FordActvNiblCtrlTqReq.EngInit = 0;
FordActvNiblCtrlTqReq.EngMin = 0;
FordActvNiblCtrlTqReq.EngMax = 0;
FordActvNiblCtrlTqReq.TestTolerance = 0;
FordActvNiblCtrlTqReq.WrittenIn = {'FIH_Write_ANC_Arbiter'};
FordActvNiblCtrlTqReq.WriteType = 'Rte';

FordBlaBoxSwVers = DataDict.OpSignal;
FordBlaBoxSwVers.LongName = 'Ford Black Box Software Version';
FordBlaBoxSwVers.Description = [...
  'This signal is used to write the value of Ford Black Box Software Vers' ...
  'ion to memory.'];
FordBlaBoxSwVers.DocUnits = 'Cnt';
FordBlaBoxSwVers.SwcShoName = 'FordBlaBoxIfCmp1';
FordBlaBoxSwVers.EngDT = dt.u32;
FordBlaBoxSwVers.EngInit = 0;
FordBlaBoxSwVers.EngMin = 0;
FordBlaBoxSwVers.EngMax = 4294967295;
FordBlaBoxSwVers.TestTolerance = 1;
FordBlaBoxSwVers.WrittenIn = {'FIH_Write_FIH_SW_Version'};
FordBlaBoxSwVers.WriteType = 'Rte';

FordLaneAssiSwVers = DataDict.OpSignal;
FordLaneAssiSwVers.LongName = 'Ford Lane Assist Software Version';
FordLaneAssiSwVers.Description = [...
  'This signal is used to write the value of Ford Lane Assist Software Ve' ...
  'rsion to memory.'];
FordLaneAssiSwVers.DocUnits = 'Cnt';
FordLaneAssiSwVers.SwcShoName = 'FordBlaBoxIfCmp1';
FordLaneAssiSwVers.EngDT = dt.u32;
FordLaneAssiSwVers.EngInit = 0;
FordLaneAssiSwVers.EngMin = 0;
FordLaneAssiSwVers.EngMax = 4294967295;
FordLaneAssiSwVers.TestTolerance = 1;
FordLaneAssiSwVers.WrittenIn = {'FIH_Write_LA_SW_Version'};
FordLaneAssiSwVers.WriteType = 'Rte';

FordLaneDprtrWarnFeatSt = DataDict.OpSignal;
FordLaneDprtrWarnFeatSt.LongName = 'Ford Lane Departure Warning Feature State';
FordLaneDprtrWarnFeatSt.Description = [...
  'This signal is used to write the value of Ford Lane Departure Warning ' ...
  'Feature State to memory.'];
FordLaneDprtrWarnFeatSt.DocUnits = 'Cnt';
FordLaneDprtrWarnFeatSt.SwcShoName = 'FordBlaBoxIfCmp1';
FordLaneDprtrWarnFeatSt.EngDT = enum.FordFeatSt1;
FordLaneDprtrWarnFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLaneDprtrWarnFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLaneDprtrWarnFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLaneDprtrWarnFeatSt.TestTolerance = 1;
FordLaneDprtrWarnFeatSt.WrittenIn = {'FIH_Write_LDW_Arbiter'};
FordLaneDprtrWarnFeatSt.WriteType = 'Rte';

FordLaneDprtrWarnTqReq = DataDict.OpSignal;
FordLaneDprtrWarnTqReq.LongName = 'Ford Lane Departure Warning Torque Request';
FordLaneDprtrWarnTqReq.Description = [...
  'This signal is used to write the value of Ford Lane Departure Warning ' ...
  'Torque Request to memory.'];
FordLaneDprtrWarnTqReq.DocUnits = 'HwNwtMtr';
FordLaneDprtrWarnTqReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordLaneDprtrWarnTqReq.EngDT = dt.float32;
FordLaneDprtrWarnTqReq.EngInit = 0;
FordLaneDprtrWarnTqReq.EngMin = 0;
FordLaneDprtrWarnTqReq.EngMax = 0;
FordLaneDprtrWarnTqReq.TestTolerance = 0;
FordLaneDprtrWarnTqReq.WrittenIn = {'FIH_Write_LDW_Arbiter'};
FordLaneDprtrWarnTqReq.WriteType = 'Rte';

FordLaneKeepAssiFeatSt = DataDict.OpSignal;
FordLaneKeepAssiFeatSt.LongName = 'Ford Lane Keeping Assist Feature State';
FordLaneKeepAssiFeatSt.Description = [...
  'This signal is used to write the value of Ford Lane Keeping Assist Fea' ...
  'ture State to memory.'];
FordLaneKeepAssiFeatSt.DocUnits = 'Cnt';
FordLaneKeepAssiFeatSt.SwcShoName = 'FordBlaBoxIfCmp1';
FordLaneKeepAssiFeatSt.EngDT = enum.FordFeatSt1;
FordLaneKeepAssiFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLaneKeepAssiFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLaneKeepAssiFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLaneKeepAssiFeatSt.TestTolerance = 1;
FordLaneKeepAssiFeatSt.WrittenIn = {'FIH_Write_LKA_Arbiter'};
FordLaneKeepAssiFeatSt.WriteType = 'Rte';

FordLaneKeepAssiTqReq = DataDict.OpSignal;
FordLaneKeepAssiTqReq.LongName = 'Ford Lane Keeping Assist Torque Request';
FordLaneKeepAssiTqReq.Description = [...
  'This signal is used to write the value of Ford Lane Keeping Assist Tor' ...
  'que Request to memory.'];
FordLaneKeepAssiTqReq.DocUnits = 'HwNwtMtr';
FordLaneKeepAssiTqReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordLaneKeepAssiTqReq.EngDT = dt.float32;
FordLaneKeepAssiTqReq.EngInit = 0;
FordLaneKeepAssiTqReq.EngMin = -8;
FordLaneKeepAssiTqReq.EngMax = 8;
FordLaneKeepAssiTqReq.TestTolerance = 0;
FordLaneKeepAssiTqReq.WrittenIn = {'FIH_Write_LKA_Arbiter'};
FordLaneKeepAssiTqReq.WriteType = 'Rte';

FordLatCtrlFeatSt = DataDict.OpSignal;
FordLatCtrlFeatSt.LongName = 'Ford Lateral Control Feature State';
FordLatCtrlFeatSt.Description = [...
  'This signal is used to write the value of Ford Lateral Control Feature' ...
  ' State to memory.'];
FordLatCtrlFeatSt.DocUnits = 'Cnt';
FordLatCtrlFeatSt.SwcShoName = 'FordBlaBoxIfCmp1';
FordLatCtrlFeatSt.EngDT = enum.FordFeatSt1;
FordLatCtrlFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordLatCtrlFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordLatCtrlFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordLatCtrlFeatSt.TestTolerance = 1;
FordLatCtrlFeatSt.WrittenIn = {'FIH_Write_LATCTL_Arbiter'};
FordLatCtrlFeatSt.WriteType = 'Rte';

FordLatCtrlTqReq = DataDict.OpSignal;
FordLatCtrlTqReq.LongName = 'Ford Lateral Control Torque Request';
FordLatCtrlTqReq.Description = [...
  'This signal is used to write the value of Ford Lateral Control Torque ' ...
  'Request to memory.'];
FordLatCtrlTqReq.DocUnits = 'HwNwtMtr';
FordLatCtrlTqReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordLatCtrlTqReq.EngDT = dt.float32;
FordLatCtrlTqReq.EngInit = 0;
FordLatCtrlTqReq.EngMin = 0;
FordLatCtrlTqReq.EngMax = 0;
FordLatCtrlTqReq.TestTolerance = 0;
FordLatCtrlTqReq.WrittenIn = {'FIH_Write_LATCTL_Arbiter'};
FordLatCtrlTqReq.WriteType = 'Rte';

FordPullDriftCmpFeatSt = DataDict.OpSignal;
FordPullDriftCmpFeatSt.LongName = 'Ford Pull Drift Compensation Feature State';
FordPullDriftCmpFeatSt.Description = [...
  'This signal is used to write the value of Ford Pull Drift Compensation' ...
  ' Feature State to memory.'];
FordPullDriftCmpFeatSt.DocUnits = 'Cnt';
FordPullDriftCmpFeatSt.SwcShoName = 'FordBlaBoxIfCmp1';
FordPullDriftCmpFeatSt.EngDT = enum.FordFeatSt1;
FordPullDriftCmpFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordPullDriftCmpFeatSt.TestTolerance = 1;
FordPullDriftCmpFeatSt.WrittenIn = {'FIH_Write_PDC_Arbiter'};
FordPullDriftCmpFeatSt.WriteType = 'Rte';

FordPullDriftCmpLrngFeatSt = DataDict.OpSignal;
FordPullDriftCmpLrngFeatSt.LongName = 'Ford Pull Drift Compensation Learning Feature State';
FordPullDriftCmpLrngFeatSt.Description = [...
  'This signal is used to write the value of Ford Pull Drift Compensation' ...
  ' Learning Feature State to memory.'];
FordPullDriftCmpLrngFeatSt.DocUnits = 'Cnt';
FordPullDriftCmpLrngFeatSt.SwcShoName = 'FordBlaBoxIfCmp1';
FordPullDriftCmpLrngFeatSt.EngDT = enum.FordFeatSt1;
FordPullDriftCmpLrngFeatSt.EngInit = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpLrngFeatSt.EngMin = FordFeatSt1.Cx0_PASSIVE;
FordPullDriftCmpLrngFeatSt.EngMax = FordFeatSt1.Cx5_LOCKED;
FordPullDriftCmpLrngFeatSt.TestTolerance = 1;
FordPullDriftCmpLrngFeatSt.WrittenIn = {'FIH_Write_PDCLearning_Arbiter'};
FordPullDriftCmpLrngFeatSt.WriteType = 'Rte';

FordPullDriftCmpSwVers = DataDict.OpSignal;
FordPullDriftCmpSwVers.LongName = 'Ford Pull Drift Compensation Software Version';
FordPullDriftCmpSwVers.Description = [...
  'This signal is used to write the value of Ford Pull Drift Compensation' ...
  ' Software Version to memory.'];
FordPullDriftCmpSwVers.DocUnits = 'Cnt';
FordPullDriftCmpSwVers.SwcShoName = 'FordBlaBoxIfCmp1';
FordPullDriftCmpSwVers.EngDT = dt.u32;
FordPullDriftCmpSwVers.EngInit = 0;
FordPullDriftCmpSwVers.EngMin = 0;
FordPullDriftCmpSwVers.EngMax = 4294967295;
FordPullDriftCmpSwVers.TestTolerance = 1;
FordPullDriftCmpSwVers.WrittenIn = {'FIH_Write_PDC_SW_Version'};
FordPullDriftCmpSwVers.WriteType = 'Rte';

FordPullDriftCmpTqReq = DataDict.OpSignal;
FordPullDriftCmpTqReq.LongName = 'Ford Pull Drift Compensation Torque Request';
FordPullDriftCmpTqReq.Description = [...
  'This signal is used to write the value of Ford Pull Drift Compensation' ...
  ' Torque Request to memory.'];
FordPullDriftCmpTqReq.DocUnits = 'HwNwtMtr';
FordPullDriftCmpTqReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordPullDriftCmpTqReq.EngDT = dt.float32;
FordPullDriftCmpTqReq.EngInit = 0;
FordPullDriftCmpTqReq.EngMin = 0;
FordPullDriftCmpTqReq.EngMax = 0;
FordPullDriftCmpTqReq.TestTolerance = 0;
FordPullDriftCmpTqReq.WrittenIn = {'FIH_Write_PDC_Arbiter'};
FordPullDriftCmpTqReq.WriteType = 'Rte';

FordResrchFctSwVers = DataDict.OpSignal;
FordResrchFctSwVers.LongName = 'Ford Research Function Software Version';
FordResrchFctSwVers.Description = [...
  'This signal is used to write the value of Ford Research Function Softw' ...
  'are Version to memory.'];
FordResrchFctSwVers.DocUnits = 'Cnt';
FordResrchFctSwVers.SwcShoName = 'FordBlaBoxIfCmp1';
FordResrchFctSwVers.EngDT = dt.u32;
FordResrchFctSwVers.EngInit = 0;
FordResrchFctSwVers.EngMin = 0;
FordResrchFctSwVers.EngMax = 4294967295;
FordResrchFctSwVers.TestTolerance = 1;
FordResrchFctSwVers.WrittenIn = {'FIH_Write_RF_SW_Version'};
FordResrchFctSwVers.WriteType = 'Rte';

FordTrlrBackupAssiSwVers = DataDict.OpSignal;
FordTrlrBackupAssiSwVers.LongName = 'Ford Trailer Backup Assist Software Version';
FordTrlrBackupAssiSwVers.Description = [...
  'This signal is used to write the value of Ford Trailer Backup Assist S' ...
  'oftware Version to memory.'];
FordTrlrBackupAssiSwVers.DocUnits = 'Cnt';
FordTrlrBackupAssiSwVers.SwcShoName = 'FordBlaBoxIfCmp1';
FordTrlrBackupAssiSwVers.EngDT = dt.u32;
FordTrlrBackupAssiSwVers.EngInit = 0;
FordTrlrBackupAssiSwVers.EngMin = 0;
FordTrlrBackupAssiSwVers.EngMax = 4294967295;
FordTrlrBackupAssiSwVers.TestTolerance = 1;
FordTrlrBackupAssiSwVers.WrittenIn = {'FIH_Write_TBA_SW_Version'};
FordTrlrBackupAssiSwVers.WriteType = 'Rte';

FordVehBBMsgOutp1HiPart = DataDict.OpSignal;
FordVehBBMsgOutp1HiPart.LongName = 'Ford Vehicle BB Message Output 1 High Part';
FordVehBBMsgOutp1HiPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 1 High Part depen' ...
  'ding on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp1HiPart.DocUnits = 'Cnt';
FordVehBBMsgOutp1HiPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp1HiPart.EngDT = dt.u32;
FordVehBBMsgOutp1HiPart.EngInit = 0;
FordVehBBMsgOutp1HiPart.EngMin = 0;
FordVehBBMsgOutp1HiPart.EngMax = 4294967295;
FordVehBBMsgOutp1HiPart.TestTolerance = 0;
FordVehBBMsgOutp1HiPart.WrittenIn = {'FIH_Write_FIH_Msg_1_High'};
FordVehBBMsgOutp1HiPart.WriteType = 'Rte';

FordVehBBMsgOutp1LoPart = DataDict.OpSignal;
FordVehBBMsgOutp1LoPart.LongName = 'Ford Vehicle BB Message Output 1 Low Part';
FordVehBBMsgOutp1LoPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 1 Low Part depend' ...
  'ing on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp1LoPart.DocUnits = 'Cnt';
FordVehBBMsgOutp1LoPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp1LoPart.EngDT = dt.u32;
FordVehBBMsgOutp1LoPart.EngInit = 0;
FordVehBBMsgOutp1LoPart.EngMin = 0;
FordVehBBMsgOutp1LoPart.EngMax = 4294967295;
FordVehBBMsgOutp1LoPart.TestTolerance = 0;
FordVehBBMsgOutp1LoPart.WrittenIn = {'FIH_Write_FIH_Msg_1_Low'};
FordVehBBMsgOutp1LoPart.WriteType = 'Rte';

FordVehBBMsgOutp2HiPart = DataDict.OpSignal;
FordVehBBMsgOutp2HiPart.LongName = 'Ford Vehicle BB Message Output 2 High Part';
FordVehBBMsgOutp2HiPart.Description = [...
  'Sets initial value of Ford Vehicle B B Message Output 2 High Part depe' ...
  'nding on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp2HiPart.DocUnits = 'Cnt';
FordVehBBMsgOutp2HiPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp2HiPart.EngDT = dt.u32;
FordVehBBMsgOutp2HiPart.EngInit = 0;
FordVehBBMsgOutp2HiPart.EngMin = 0;
FordVehBBMsgOutp2HiPart.EngMax = 4294967295;
FordVehBBMsgOutp2HiPart.TestTolerance = 0;
FordVehBBMsgOutp2HiPart.WrittenIn = {'FIH_Write_FIH_Msg_2_High'};
FordVehBBMsgOutp2HiPart.WriteType = 'Rte';

FordVehBBMsgOutp2LoPart = DataDict.OpSignal;
FordVehBBMsgOutp2LoPart.LongName = 'Ford Vehicle BB Message Output 2 Low Part';
FordVehBBMsgOutp2LoPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 2 Low Part depend' ...
  'ing on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp2LoPart.DocUnits = 'Cnt';
FordVehBBMsgOutp2LoPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp2LoPart.EngDT = dt.u32;
FordVehBBMsgOutp2LoPart.EngInit = 0;
FordVehBBMsgOutp2LoPart.EngMin = 0;
FordVehBBMsgOutp2LoPart.EngMax = 4294967295;
FordVehBBMsgOutp2LoPart.TestTolerance = 0;
FordVehBBMsgOutp2LoPart.WrittenIn = {'FIH_Write_FIH_Msg_2_Low'};
FordVehBBMsgOutp2LoPart.WriteType = 'Rte';

FordVehBBMsgOutp3HiPart = DataDict.OpSignal;
FordVehBBMsgOutp3HiPart.LongName = 'Ford Vehicle BB Message Output 3 High Part';
FordVehBBMsgOutp3HiPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 3 High Part depen' ...
  'ding on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp3HiPart.DocUnits = 'Cnt';
FordVehBBMsgOutp3HiPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp3HiPart.EngDT = dt.u32;
FordVehBBMsgOutp3HiPart.EngInit = 0;
FordVehBBMsgOutp3HiPart.EngMin = 0;
FordVehBBMsgOutp3HiPart.EngMax = 4294967295;
FordVehBBMsgOutp3HiPart.TestTolerance = 0;
FordVehBBMsgOutp3HiPart.WrittenIn = {'FIH_Write_FIH_Msg_3_High'};
FordVehBBMsgOutp3HiPart.WriteType = 'Rte';

FordVehBBMsgOutp3LoPart = DataDict.OpSignal;
FordVehBBMsgOutp3LoPart.LongName = 'Ford Vehicle BB Message Output 3 Low Part';
FordVehBBMsgOutp3LoPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 3 Low Part depend' ...
  'ing on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp3LoPart.DocUnits = 'Cnt';
FordVehBBMsgOutp3LoPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp3LoPart.EngDT = dt.u32;
FordVehBBMsgOutp3LoPart.EngInit = 0;
FordVehBBMsgOutp3LoPart.EngMin = 0;
FordVehBBMsgOutp3LoPart.EngMax = 4294967295;
FordVehBBMsgOutp3LoPart.TestTolerance = 0;
FordVehBBMsgOutp3LoPart.WrittenIn = {'FIH_Write_FIH_Msg_3_Low'};
FordVehBBMsgOutp3LoPart.WriteType = 'Rte';

FordVehBBMsgOutp4HiPart = DataDict.OpSignal;
FordVehBBMsgOutp4HiPart.LongName = 'Ford Vehicle BB Message Output 4 High Part';
FordVehBBMsgOutp4HiPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 4 High Part depen' ...
  'ding on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp4HiPart.DocUnits = 'Cnt';
FordVehBBMsgOutp4HiPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp4HiPart.EngDT = dt.u32;
FordVehBBMsgOutp4HiPart.EngInit = 0;
FordVehBBMsgOutp4HiPart.EngMin = 0;
FordVehBBMsgOutp4HiPart.EngMax = 4294967295;
FordVehBBMsgOutp4HiPart.TestTolerance = 0;
FordVehBBMsgOutp4HiPart.WrittenIn = {'FIH_Write_FIH_Msg_4_High'};
FordVehBBMsgOutp4HiPart.WriteType = 'Rte';

FordVehBBMsgOutp4LoPart = DataDict.OpSignal;
FordVehBBMsgOutp4LoPart.LongName = 'Ford Vehicle BB Message Output 4 Low Part';
FordVehBBMsgOutp4LoPart.Description = [...
  'Sets initial value of Ford Vehicle BB Message Output 4 Low Part depend' ...
  'ing on EcuId and FordEpsSysSt'];
FordVehBBMsgOutp4LoPart.DocUnits = 'Cnt';
FordVehBBMsgOutp4LoPart.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehBBMsgOutp4LoPart.EngDT = dt.u32;
FordVehBBMsgOutp4LoPart.EngInit = 0;
FordVehBBMsgOutp4LoPart.EngMin = 0;
FordVehBBMsgOutp4LoPart.EngMax = 4294967295;
FordVehBBMsgOutp4LoPart.TestTolerance = 0;
FordVehBBMsgOutp4LoPart.WrittenIn = {'FIH_Write_FIH_Msg_4_Low'};
FordVehBBMsgOutp4LoPart.WriteType = 'Rte';

FordVehLaneAssiAvl = DataDict.OpSignal;
FordVehLaneAssiAvl.LongName = 'Ford Vehicle Lane Assist Available';
FordVehLaneAssiAvl.Description = [...
  'Sets initial value of Ford Vehicle Lane Assist Available depending on ' ...
  'EcuId and FordEpsSysSt'];
FordVehLaneAssiAvl.DocUnits = 'Cnt';
FordVehLaneAssiAvl.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLaneAssiAvl.EngDT = dt.u08;
FordVehLaneAssiAvl.EngInit = 0;
FordVehLaneAssiAvl.EngMin = 0;
FordVehLaneAssiAvl.EngMax = 3;
FordVehLaneAssiAvl.TestTolerance = 0;
FordVehLaneAssiAvl.WrittenIn = {'FIH_Write_LA_HS_CAN'};
FordVehLaneAssiAvl.WriteType = 'Rte';

FordVehLaneAssiHandsOff = DataDict.OpSignal;
FordVehLaneAssiHandsOff.LongName = 'Ford Vehicle Lane Assist Hands Off';
FordVehLaneAssiHandsOff.Description = [...
  'Sets initial value of Ford Vehicle Lane Assist Hands Off depending on ' ...
  'EcuId and FordEpsSysSt'];
FordVehLaneAssiHandsOff.DocUnits = 'Cnt';
FordVehLaneAssiHandsOff.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLaneAssiHandsOff.EngDT = dt.u08;
FordVehLaneAssiHandsOff.EngInit = 1;
FordVehLaneAssiHandsOff.EngMin = 0;
FordVehLaneAssiHandsOff.EngMax = 1;
FordVehLaneAssiHandsOff.TestTolerance = 0;
FordVehLaneAssiHandsOff.WrittenIn = {'FIH_Write_LA_HS_CAN'};
FordVehLaneAssiHandsOff.WriteType = 'Rte';

FordVehLaneAssiRejctn = DataDict.OpSignal;
FordVehLaneAssiRejctn.LongName = 'Ford Vehicle Lane Assist Rejection';
FordVehLaneAssiRejctn.Description = [...
  'Sets initial value of Ford Vehicle Lane Assist Deny depending on EcuId' ...
  ' and FordEpsSysSt'];
FordVehLaneAssiRejctn.DocUnits = 'Cnt';
FordVehLaneAssiRejctn.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLaneAssiRejctn.EngDT = dt.u08;
FordVehLaneAssiRejctn.EngInit = 0;
FordVehLaneAssiRejctn.EngMin = 0;
FordVehLaneAssiRejctn.EngMax = 1;
FordVehLaneAssiRejctn.TestTolerance = 0;
FordVehLaneAssiRejctn.WrittenIn = {'FIH_Write_LA_HS_CAN'};
FordVehLaneAssiRejctn.WriteType = 'Rte';

FordVehLatCtrlLimSts = DataDict.OpSignal;
FordVehLatCtrlLimSts.LongName = 'Ford Vehicle Lateral Control Limit Status';
FordVehLatCtrlLimSts.Description = [...
  'Sets initial value of Ford Vehicle Lateral Control Limit Status depend' ...
  'ing on EcuId and FordEpsSysSt'];
FordVehLatCtrlLimSts.DocUnits = 'Cnt';
FordVehLatCtrlLimSts.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLatCtrlLimSts.EngDT = enum.Ford_LatCtlLim_D_Stat;
FordVehLatCtrlLimSts.EngInit = Ford_LatCtlLim_D_Stat.Cx0_LimitNotReached;
FordVehLatCtrlLimSts.EngMin = Ford_LatCtlLim_D_Stat.Cx0_LimitNotReached;
FordVehLatCtrlLimSts.EngMax = Ford_LatCtlLim_D_Stat.Cx3_LimitWithDriverActive;
FordVehLatCtrlLimSts.TestTolerance = 0;
FordVehLatCtrlLimSts.WrittenIn = {'FIH_Write_LATCTL_HS_CAN'};
FordVehLatCtrlLimSts.WriteType = 'Rte';

FordVehLatCtrlSteerSts = DataDict.OpSignal;
FordVehLatCtrlSteerSts.LongName = 'Ford Vehicle Lateral Control Steering Status';
FordVehLatCtrlSteerSts.Description = [...
  'Sets initial value of Ford Vehicle Lateral Control Steering Status dep' ...
  'ending on EcuId and FordEpsSysSt'];
FordVehLatCtrlSteerSts.DocUnits = 'Cnt';
FordVehLatCtrlSteerSts.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLatCtrlSteerSts.EngDT = enum.Ford_LatCtlSte_D_Stat;
FordVehLatCtrlSteerSts.EngInit = Ford_LatCtlSte_D_Stat.Cx0_Unavailable;
FordVehLatCtrlSteerSts.EngMin = Ford_LatCtlSte_D_Stat.Cx0_Unavailable;
FordVehLatCtrlSteerSts.EngMax = Ford_LatCtlSte_D_Stat.Cx7_NotUsed3;
FordVehLatCtrlSteerSts.TestTolerance = 0;
FordVehLatCtrlSteerSts.WrittenIn = {'FIH_Write_LATCTL_HS_CAN'};
FordVehLatCtrlSteerSts.WriteType = 'Rte';

FordVehLoSpdMtnCtrlBrkDecelEnaReq = DataDict.OpSignal;
FordVehLoSpdMtnCtrlBrkDecelEnaReq.LongName = 'Ford Vehicle Low Speed Motion Control Brake Deceleration Enable Request';
FordVehLoSpdMtnCtrlBrkDecelEnaReq.Description = [...
  'Sets initial value of Ford Vehicle Low Speed Motion Control Brake Dece' ...
  'leration Enable Request depending on EcuId and FordEpsSysSt'];
FordVehLoSpdMtnCtrlBrkDecelEnaReq.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkDecelEnaReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLoSpdMtnCtrlBrkDecelEnaReq.EngDT = dt.u08;
FordVehLoSpdMtnCtrlBrkDecelEnaReq.EngInit = 0;
FordVehLoSpdMtnCtrlBrkDecelEnaReq.EngMin = 0;
FordVehLoSpdMtnCtrlBrkDecelEnaReq.EngMax = 255;
FordVehLoSpdMtnCtrlBrkDecelEnaReq.TestTolerance = 0;
FordVehLoSpdMtnCtrlBrkDecelEnaReq.WrittenIn = {'FIH_Write_LsmcBrkDecel_Request'};
FordVehLoSpdMtnCtrlBrkDecelEnaReq.WriteType = 'Rte';

FordVehLoSpdMtnCtrlBrkTqReq = DataDict.OpSignal;
FordVehLoSpdMtnCtrlBrkTqReq.LongName = 'Ford Vehicle Low Speed Motion Control Brake Torque Request';
FordVehLoSpdMtnCtrlBrkTqReq.Description = [...
  'Sets initial value of Ford Vehicle Low Speed Motion Control Brake Torq' ...
  'ue Request depending on EcuId and FordEpsSysSt'];
FordVehLoSpdMtnCtrlBrkTqReq.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkTqReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehLoSpdMtnCtrlBrkTqReq.EngDT = dt.u16;
FordVehLoSpdMtnCtrlBrkTqReq.EngInit = 0;
FordVehLoSpdMtnCtrlBrkTqReq.EngMin = 0;
FordVehLoSpdMtnCtrlBrkTqReq.EngMax = 65535;
FordVehLoSpdMtnCtrlBrkTqReq.TestTolerance = 0;
FordVehLoSpdMtnCtrlBrkTqReq.WrittenIn = {'FIH_Write_LsmcBrkDecel_Request'};
FordVehLoSpdMtnCtrlBrkTqReq.WriteType = 'Rte';

FordVehTrfcJamAvdHandsOnConf = DataDict.OpSignal;
FordVehTrfcJamAvdHandsOnConf.LongName = 'Ford Vehicle Traffic Jam Avoid Hands On Confidence';
FordVehTrfcJamAvdHandsOnConf.Description = [...
  'Sets initial value of Ford Vehicle Traffic Jam Avoidance Hands On Conf' ...
  'idence depending on EcuId and FordEpsSysSt'];
FordVehTrfcJamAvdHandsOnConf.DocUnits = 'Cnt';
FordVehTrfcJamAvdHandsOnConf.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrfcJamAvdHandsOnConf.EngDT = dt.u08;
FordVehTrfcJamAvdHandsOnConf.EngInit = 0;
FordVehTrfcJamAvdHandsOnConf.EngMin = 0;
FordVehTrfcJamAvdHandsOnConf.EngMax = 1;
FordVehTrfcJamAvdHandsOnConf.TestTolerance = 0;
FordVehTrfcJamAvdHandsOnConf.WrittenIn = {'FIH_Write_LATCTL_HS_CAN'};
FordVehTrfcJamAvdHandsOnConf.WriteType = 'Rte';

FordVehTrlrAgTarCalcn = DataDict.OpSignal;
FordVehTrlrAgTarCalcn.LongName = 'Ford Vehicle Trailer Angle Target Calculation';
FordVehTrlrAgTarCalcn.Description = [...
  'Sets initial value of Ford Vehicle Trailer Angle Target Calculation de' ...
  'pending on EcuId and FordEpsSysSt'];
FordVehTrlrAgTarCalcn.DocUnits = 'Cnt';
FordVehTrlrAgTarCalcn.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAgTarCalcn.EngDT = dt.u08;
FordVehTrlrAgTarCalcn.EngInit = 0;
FordVehTrlrAgTarCalcn.EngMin = 0;
FordVehTrlrAgTarCalcn.EngMax = 255;
FordVehTrlrAgTarCalcn.TestTolerance = 0;
FordVehTrlrAgTarCalcn.WrittenIn = {'FIH_Write_TBA_to_LA_Data3'};
FordVehTrlrAgTarCalcn.WriteType = 'Rte';

FordVehTrlrAidAgMax = DataDict.OpSignal;
FordVehTrlrAidAgMax.LongName = 'Ford Vehicle Trailer Aid Angle Maximum';
FordVehTrlrAidAgMax.Description = [...
  'Sets initial value of Ford Vehicle Trailer Angle Maximum depending on ' ...
  'EcuId and FordEpsSysSt'];
FordVehTrlrAidAgMax.DocUnits = 'Cnt';
FordVehTrlrAidAgMax.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidAgMax.EngDT = dt.u08;
FordVehTrlrAidAgMax.EngInit = 0;
FordVehTrlrAidAgMax.EngMin = 0;
FordVehTrlrAidAgMax.EngMax = 255;
FordVehTrlrAidAgMax.TestTolerance = 0;
FordVehTrlrAidAgMax.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidAgMax.WriteType = 'Rte';

FordVehTrlrAidAgOffs = DataDict.OpSignal;
FordVehTrlrAidAgOffs.LongName = 'Ford Vehicle Trailer Aid Angle Offset';
FordVehTrlrAidAgOffs.Description = [...
  'Sets initial value of Ford Vehicle Trailer Angle Offset depending on E' ...
  'cuId and FordEpsSysSt'];
FordVehTrlrAidAgOffs.DocUnits = 'Cnt';
FordVehTrlrAidAgOffs.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidAgOffs.EngDT = dt.u08;
FordVehTrlrAidAgOffs.EngInit = 0;
FordVehTrlrAidAgOffs.EngMin = 0;
FordVehTrlrAidAgOffs.EngMax = 255;
FordVehTrlrAidAgOffs.TestTolerance = 0;
FordVehTrlrAidAgOffs.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidAgOffs.WriteType = 'Rte';

FordVehTrlrAidAgWarn = DataDict.OpSignal;
FordVehTrlrAidAgWarn.LongName = 'Ford Vehicle Trailer Aid Angle Warning';
FordVehTrlrAidAgWarn.Description = [...
  'Sets initial value of Ford Vehicle Trailer Angle Warning depending on ' ...
  'EcuId and FordEpsSysSt'];
FordVehTrlrAidAgWarn.DocUnits = 'Cnt';
FordVehTrlrAidAgWarn.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidAgWarn.EngDT = dt.u08;
FordVehTrlrAidAgWarn.EngInit = 0;
FordVehTrlrAidAgWarn.EngMin = 0;
FordVehTrlrAidAgWarn.EngMax = 255;
FordVehTrlrAidAgWarn.TestTolerance = 0;
FordVehTrlrAidAgWarn.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidAgWarn.WriteType = 'Rte';

FordVehTrlrAidEnaSts = DataDict.OpSignal;
FordVehTrlrAidEnaSts.LongName = 'Ford Vehicle Trailer Aid Enable Status';
FordVehTrlrAidEnaSts.Description = [...
  'Sets initial value of Ford Vehicle Trailer Aid Enable Status depending' ...
  ' on EcuId and FordEpsSysSt'];
FordVehTrlrAidEnaSts.DocUnits = 'Cnt';
FordVehTrlrAidEnaSts.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidEnaSts.EngDT = dt.u08;
FordVehTrlrAidEnaSts.EngInit = 0;
FordVehTrlrAidEnaSts.EngMin = 0;
FordVehTrlrAidEnaSts.EngMax = 255;
FordVehTrlrAidEnaSts.TestTolerance = 0;
FordVehTrlrAidEnaSts.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidEnaSts.WriteType = 'Rte';

FordVehTrlrAidHitchToAxle = DataDict.OpSignal;
FordVehTrlrAidHitchToAxle.LongName = 'Ford Vehicle Trailer Aid Hitch To Trailer Axle';
FordVehTrlrAidHitchToAxle.Description = [...
  'Sets initial value of Ford Vehicle Hitch To Trailer Axle depending on ' ...
  'EcuId and FordEpsSysSt'];
FordVehTrlrAidHitchToAxle.DocUnits = 'Cnt';
FordVehTrlrAidHitchToAxle.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidHitchToAxle.EngDT = dt.u16;
FordVehTrlrAidHitchToAxle.EngInit = 0;
FordVehTrlrAidHitchToAxle.EngMin = 0;
FordVehTrlrAidHitchToAxle.EngMax = 65535;
FordVehTrlrAidHitchToAxle.TestTolerance = 0;
FordVehTrlrAidHitchToAxle.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidHitchToAxle.WriteType = 'Rte';

FordVehTrlrAidMsgTxtReq = DataDict.OpSignal;
FordVehTrlrAidMsgTxtReq.LongName = 'Ford Vehicle Trailer Aid Message Text Request';
FordVehTrlrAidMsgTxtReq.Description = [...
  'Sets initial value of Ford Vehicle Trailer Aid Message Text Request de' ...
  'pending on EcuId and FordEpsSysSt'];
FordVehTrlrAidMsgTxtReq.DocUnits = 'Cnt';
FordVehTrlrAidMsgTxtReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidMsgTxtReq.EngDT = dt.u08;
FordVehTrlrAidMsgTxtReq.EngInit = 0;
FordVehTrlrAidMsgTxtReq.EngMin = 0;
FordVehTrlrAidMsgTxtReq.EngMax = 255;
FordVehTrlrAidMsgTxtReq.TestTolerance = 0;
FordVehTrlrAidMsgTxtReq.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidMsgTxtReq.WriteType = 'Rte';

FordVehTrlrAidSetUp = DataDict.OpSignal;
FordVehTrlrAidSetUp.LongName = 'Ford Vehicle Trailer Aid Set Up';
FordVehTrlrAidSetUp.Description = [...
  'Sets initial value of Ford Vehicle Trailer Aid Setup Status depending ' ...
  'on EcuId and FordEpsSysSt'];
FordVehTrlrAidSetUp.DocUnits = 'Cnt';
FordVehTrlrAidSetUp.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidSetUp.EngDT = dt.u08;
FordVehTrlrAidSetUp.EngInit = 0;
FordVehTrlrAidSetUp.EngMin = 0;
FordVehTrlrAidSetUp.EngMax = 255;
FordVehTrlrAidSetUp.TestTolerance = 0;
FordVehTrlrAidSetUp.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidSetUp.WriteType = 'Rte';

FordVehTrlrAidTarIdn = DataDict.OpSignal;
FordVehTrlrAidTarIdn.LongName = 'Ford Vehicle Trailer Aid Target Identification';
FordVehTrlrAidTarIdn.Description = [...
  'Sets initial value of Ford Vehicle Trailer Aid Target Identification R' ...
  'equest depending on EcuId and FordEpsSysSt'];
FordVehTrlrAidTarIdn.DocUnits = 'Cnt';
FordVehTrlrAidTarIdn.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidTarIdn.EngDT = dt.u08;
FordVehTrlrAidTarIdn.EngInit = 0;
FordVehTrlrAidTarIdn.EngMin = 0;
FordVehTrlrAidTarIdn.EngMax = 255;
FordVehTrlrAidTarIdn.TestTolerance = 0;
FordVehTrlrAidTarIdn.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidTarIdn.WriteType = 'Rte';

FordVehTrlrAidTrlrIdn = DataDict.OpSignal;
FordVehTrlrAidTrlrIdn.LongName = 'Ford Vehicle Trailer Aid Trailer Identification';
FordVehTrlrAidTrlrIdn.Description = [...
  'Sets initial value of Ford Vehicle Trailer Aid Trailer Identification ' ...
  'depending on EcuId and FordEpsSysSt'];
FordVehTrlrAidTrlrIdn.DocUnits = 'Cnt';
FordVehTrlrAidTrlrIdn.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrAidTrlrIdn.EngDT = dt.u08;
FordVehTrlrAidTrlrIdn.EngInit = 0;
FordVehTrlrAidTrlrIdn.EngMin = 0;
FordVehTrlrAidTrlrIdn.EngMax = 255;
FordVehTrlrAidTrlrIdn.TestTolerance = 0;
FordVehTrlrAidTrlrIdn.WrittenIn = {'FIH_Write_TBA_to_TrlrAid_Data2'};
FordVehTrlrAidTrlrIdn.WriteType = 'Rte';

FordVehTrlrHitchLampReq = DataDict.OpSignal;
FordVehTrlrHitchLampReq.LongName = 'Ford Vehicle Trailer Hitch Lamp Request';
FordVehTrlrHitchLampReq.Description = [...
  'Sets initial value of Ford Vehicle Trailer Hitch Lamp Request dependin' ...
  'g on EcuId and FordEpsSysSt'];
FordVehTrlrHitchLampReq.DocUnits = 'Cnt';
FordVehTrlrHitchLampReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehTrlrHitchLampReq.EngDT = dt.u08;
FordVehTrlrHitchLampReq.EngInit = 0;
FordVehTrlrHitchLampReq.EngMin = 0;
FordVehTrlrHitchLampReq.EngMax = 255;
FordVehTrlrHitchLampReq.TestTolerance = 0;
FordVehTrlrHitchLampReq.WrittenIn = {'FIH_Write_TBA_to_EPAS_INFO'};
FordVehTrlrHitchLampReq.WriteType = 'Rte';

FordVehVelMaxReqTrlrAid = DataDict.OpSignal;
FordVehVelMaxReqTrlrAid.LongName = 'Ford Vehicle Velocity Maximum Request Trailer Aid';
FordVehVelMaxReqTrlrAid.Description = [...
  'Sets initial value of Ford Vehicle Velocity Maximum Request Trailer Ai' ...
  'd depending on EcuId and FordEpsSysSt'];
FordVehVelMaxReqTrlrAid.DocUnits = 'Cnt';
FordVehVelMaxReqTrlrAid.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehVelMaxReqTrlrAid.EngDT = dt.u08;
FordVehVelMaxReqTrlrAid.EngInit = 255;
FordVehVelMaxReqTrlrAid.EngMin = 0;
FordVehVelMaxReqTrlrAid.EngMax = 255;
FordVehVelMaxReqTrlrAid.TestTolerance = 0;
FordVehVelMaxReqTrlrAid.WrittenIn = {'FIH_Write_TBA_to_EPAS_INFO'};
FordVehVelMaxReqTrlrAid.WriteType = 'Rte';

FordVehVelTrlrAidReq = DataDict.OpSignal;
FordVehVelTrlrAidReq.LongName = 'Ford Vehicle Velocity Trailer Aid Request';
FordVehVelTrlrAidReq.Description = [...
  'Sets initial value of Ford Vehicle Velocity Trailer Aid Request depend' ...
  'ing on EcuId and FordEpsSysSt'];
FordVehVelTrlrAidReq.DocUnits = 'Cnt';
FordVehVelTrlrAidReq.SwcShoName = 'FordBlaBoxIfCmp1';
FordVehVelTrlrAidReq.EngDT = dt.u08;
FordVehVelTrlrAidReq.EngInit = 0;
FordVehVelTrlrAidReq.EngMin = 0;
FordVehVelTrlrAidReq.EngMax = 255;
FordVehVelTrlrAidReq.TestTolerance = 0;
FordVehVelTrlrAidReq.WrittenIn = {'FIH_Write_TBA_to_EPAS_INFO'};
FordVehVelTrlrAidReq.WriteType = 'Rte';

LaneDprtrWarnIntSts = DataDict.OpSignal;
LaneDprtrWarnIntSts.LongName = 'Lane Departure Warning Internal Status';
LaneDprtrWarnIntSts.Description = [...
  'This signal is used to provide the value of Lane Departure Warning Int' ...
  'ernal Status to EPS.'];
LaneDprtrWarnIntSts.DocUnits = 'Cnt';
LaneDprtrWarnIntSts.SwcShoName = 'FordBlaBoxIfCmp1';
LaneDprtrWarnIntSts.EngDT = dt.u32;
LaneDprtrWarnIntSts.EngInit = 0;
LaneDprtrWarnIntSts.EngMin = 0;
LaneDprtrWarnIntSts.EngMax = 4294967295;
LaneDprtrWarnIntSts.TestTolerance = 1;
LaneDprtrWarnIntSts.WrittenIn = {'FIH_Write_LDW_Int_Status_DID'};
LaneDprtrWarnIntSts.WriteType = 'Rte';

LaneKeepAssiIntSts = DataDict.OpSignal;
LaneKeepAssiIntSts.LongName = 'Lane Keep Assist Internal Status';
LaneKeepAssiIntSts.Description = [...
  'This signal is used to provide the value of Lane Keep Assist Internal ' ...
  'Status to EPS.'];
LaneKeepAssiIntSts.DocUnits = 'Cnt';
LaneKeepAssiIntSts.SwcShoName = 'FordBlaBoxIfCmp1';
LaneKeepAssiIntSts.EngDT = dt.u32;
LaneKeepAssiIntSts.EngInit = 0;
LaneKeepAssiIntSts.EngMin = 0;
LaneKeepAssiIntSts.EngMax = 4294967295;
LaneKeepAssiIntSts.TestTolerance = 1;
LaneKeepAssiIntSts.WrittenIn = {'FIH_Write_LKA_Int_Status_DID'};
LaneKeepAssiIntSts.WriteType = 'Rte';

LatCtrlIntSts = DataDict.OpSignal;
LatCtrlIntSts.LongName = 'Lateral Control Internal Status';
LatCtrlIntSts.Description = [...
  'This signal is used to provide the value of Lateral Control Internal S' ...
  'tatus to EPS.'];
LatCtrlIntSts.DocUnits = 'Cnt';
LatCtrlIntSts.SwcShoName = 'FordBlaBoxIfCmp1';
LatCtrlIntSts.EngDT = dt.u32;
LatCtrlIntSts.EngInit = 0;
LatCtrlIntSts.EngMin = 0;
LatCtrlIntSts.EngMax = 4294967295;
LatCtrlIntSts.TestTolerance = 1;
LatCtrlIntSts.WrittenIn = {'FIH_Write_LATCTL_Int_Status_DID'};
LatCtrlIntSts.WriteType = 'Rte';

PullDriftCmpIntSts = DataDict.OpSignal;
PullDriftCmpIntSts.LongName = 'Pull Drift Compensation Internal Status';
PullDriftCmpIntSts.Description = [...
  'This signal is used to provide the value of Pull Drift Compensation In' ...
  'ternal Status to EPS.'];
PullDriftCmpIntSts.DocUnits = 'Cnt';
PullDriftCmpIntSts.SwcShoName = 'FordBlaBoxIfCmp1';
PullDriftCmpIntSts.EngDT = dt.u32;
PullDriftCmpIntSts.EngInit = 0;
PullDriftCmpIntSts.EngMin = 0;
PullDriftCmpIntSts.EngMax = 4294967295;
PullDriftCmpIntSts.TestTolerance = 1;
PullDriftCmpIntSts.WrittenIn = {'FIH_Write_PDC_Int_Status_DID'};
PullDriftCmpIntSts.WriteType = 'Rte';

SrvPullDriftCmpAct = DataDict.OpSignal;
SrvPullDriftCmpAct.LongName = 'Service Pull Drift Compensation Actual';
SrvPullDriftCmpAct.Description = [...
  'This signal is used to provide the value of Service Pull Drift Compens' ...
  'ation Actual to EPS.'];
SrvPullDriftCmpAct.DocUnits = 'HwNwtMtr';
SrvPullDriftCmpAct.SwcShoName = 'FordBlaBoxIfCmp1';
SrvPullDriftCmpAct.EngDT = dt.s8p7;
SrvPullDriftCmpAct.EngInit = 0;
SrvPullDriftCmpAct.EngMin = -255;
SrvPullDriftCmpAct.EngMax = 255.99;
SrvPullDriftCmpAct.TestTolerance = 0.0078125;
SrvPullDriftCmpAct.WrittenIn = {'FIH_Write_PDC_Actual_DID'};
SrvPullDriftCmpAct.WriteType = 'Rte';

SrvPullDriftCmpRstVal = DataDict.OpSignal;
SrvPullDriftCmpRstVal.LongName = 'Service Pull Drift Compensation Reset Value';
SrvPullDriftCmpRstVal.Description = [...
  'This signal is used to provide the value of Service Pull Drift Compens' ...
  'ation Reset Value to EPS.'];
SrvPullDriftCmpRstVal.DocUnits = 'HwNwtMtr';
SrvPullDriftCmpRstVal.SwcShoName = 'FordBlaBoxIfCmp1';
SrvPullDriftCmpRstVal.EngDT = dt.s8p7;
SrvPullDriftCmpRstVal.EngInit = 0;
SrvPullDriftCmpRstVal.EngMin = -255;
SrvPullDriftCmpRstVal.EngMax = 255.99;
SrvPullDriftCmpRstVal.TestTolerance = 0.0078125;
SrvPullDriftCmpRstVal.WrittenIn = {'FIH_Write_PDC_Service_DID'};
SrvPullDriftCmpRstVal.WriteType = 'Rte';

TrlrBackupAssiIntSts = DataDict.OpSignal;
TrlrBackupAssiIntSts.LongName = 'Trailer Backup Assist Internal Status';
TrlrBackupAssiIntSts.Description = [...
  'This signal is used to provide the value of Trailer Backup Assist Inte' ...
  'rnal Status to EPS.'];
TrlrBackupAssiIntSts.DocUnits = 'Cnt';
TrlrBackupAssiIntSts.SwcShoName = 'FordBlaBoxIfCmp1';
TrlrBackupAssiIntSts.EngDT = dt.u32;
TrlrBackupAssiIntSts.EngInit = 0;
TrlrBackupAssiIntSts.EngMin = 0;
TrlrBackupAssiIntSts.EngMax = 4294967295;
TrlrBackupAssiIntSts.TestTolerance = 1;
TrlrBackupAssiIntSts.WrittenIn = {'FIH_Write_TBA_Int_Status_DID'};
TrlrBackupAssiIntSts.WriteType = 'Rte';

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
AssiMotTqWhlImbRejctnMinX = DataDict.ImprtdCal;
AssiMotTqWhlImbRejctnMinX.DocUnits = 'HwNwtMtr';
AssiMotTqWhlImbRejctnMinX.EngDT = dt.u8p8;
AssiMotTqWhlImbRejctnMinX.EngVal =  ...
   [0        0.1015625        0.2070313        0.2460938        0.2890625        0.3359375        0.3828125        0.4296875        0.4804688        0.5234375        0.5703125        0.6210938        0.6640625        0.7109375        0.7578125        0.8007813                1         1.453125         4.765625               10
    0        0.1015625        0.3046875        0.3945313        0.4804688         0.578125        0.6679688         0.765625         0.859375        0.9492188         1.042969         1.132813         1.230469         1.324219         1.414063              1.7              2.2         2.808594          6.34375               10
    0        0.1992188           0.3125        0.4414063        0.5664063           0.6875        0.8007813        0.9296875         1.039063         1.160156         1.289063          1.40625         1.527344         1.648438         1.765625              2.1              2.8         3.578125          8.65625               10
    0        0.1992188           0.3125        0.4296875        0.5703125        0.6757813        0.8007813        0.9257813         1.039063         1.167969         1.289063          1.40625          1.53125         1.652344         1.765625         1.890625              2.5         3.582031         3.699219               10
    0        0.1992188           0.3125        0.4335938        0.5585938        0.6914063        0.8085938        0.9296875         1.042969         1.171875         1.289063         1.402344          1.53125         1.648438         1.769531         1.886719              2.5              3.2         3.699219               10
    0        0.1992188        0.3085938        0.4335938        0.5429688        0.6796875        0.8046875         0.921875         1.042969         1.171875         1.304688         1.429688         1.546875         1.671875         1.796875         1.929688              2.5              3.2         3.796875               10
    0        0.1992188           0.3125        0.4140625        0.5546875        0.6835938        0.8007813        0.9335938         1.054688         1.171875         1.296875         1.429688         1.554688         1.675781         1.804688         1.929688              2.5              3.2         3.796875               10
    0        0.1992188         0.390625        0.5078125        0.6367188        0.7578125        0.8945313         1.019531         1.136719         1.265625         1.386719         1.515625         1.640625         1.761719         1.886719         2.011719              2.5              3.2         3.898438               10
    0        0.1992188         0.390625        0.5078125         0.640625         0.765625          0.90625         1.015625         1.160156         1.277344          1.40625         1.546875         1.679688         1.804688         1.925781         2.058594              2.6              3.2                4               10
    0        0.1992188         0.390625        0.5078125         0.640625         0.765625          0.90625         1.015625         1.160156         1.277344          1.40625         1.546875         1.679688         1.804688         1.925781         2.058594              2.6              3.2                4               10
    0        0.1992188         0.390625        0.5078125         0.640625         0.765625          0.90625         1.015625         1.160156         1.277344          1.40625         1.546875         1.679688         1.804688         1.925781         2.058594              2.6              3.2                4               10
    0        0.1992188         0.390625        0.5078125         0.640625         0.765625          0.90625         1.015625         1.160156         1.277344          1.40625         1.546875         1.679688         1.804688         1.925781         2.058594              2.6              3.2                4               10];
AssiMotTqWhlImbRejctnMinX.EngMin = 0;
AssiMotTqWhlImbRejctnMinX.EngMax = 10;
AssiMotTqWhlImbRejctnMinX.PortName = 'AssiMotTqWhlImbRejctnMinX';
AssiMotTqWhlImbRejctnMinX.Description = [...
  'Handwheel Torque input for look-up table when WIR Command = ZERO.'...
  'This Cal is imported from SF001A.'];

AssiMotTqWhlImbRejctnMinY = DataDict.ImprtdCal;
AssiMotTqWhlImbRejctnMinY.DocUnits = 'MotNwtMtr';
AssiMotTqWhlImbRejctnMinY.EngDT = dt.s4p11;
AssiMotTqWhlImbRejctnMinY.EngVal =  ...
   [0                0        0.0234375       0.03515625       0.05078125        0.0703125          0.09375        0.1210938        0.1523438        0.1835938          0.21875        0.2617188        0.3007813        0.3476563        0.3984375        0.4492188             0.75         1.527344         8.742188         8.742188
    0                0          0.03125       0.05078125       0.07421875        0.1054688         0.140625        0.1835938        0.2304688          0.28125        0.3398438        0.4023438        0.4726563         0.546875            0.625             0.86              1.5              2.5         8.742188         8.742188
    0                0         0.015625        0.0390625       0.06640625       0.09765625        0.1328125        0.1757813          0.21875        0.2695313         0.328125        0.3867188         0.453125        0.5234375        0.5976563             0.85             1.48         2.308594         8.742188         8.742188
    0                0         0.015625       0.03515625           0.0625        0.0859375        0.1171875        0.1523438           0.1875        0.2304688        0.2734375        0.3203125        0.3710938        0.4257813        0.4804688        0.5429688                1         1.742188         1.851563         7.632813
    0                0         0.015625       0.03515625       0.05859375        0.0859375        0.1132813        0.1445313        0.1757813        0.2148438        0.2539063        0.2929688        0.3398438        0.3867188           0.4375        0.4882813             0.85             1.29         1.621094         6.578125
    0                0         0.015625       0.03515625        0.0546875       0.08203125         0.109375        0.1367188        0.1679688         0.203125        0.2421875          0.28125        0.3203125        0.3632813        0.4101563        0.4609375             0.75             1.13         1.476563         5.679688
    0                0         0.015625          0.03125        0.0546875         0.078125        0.1015625        0.1289063          0.15625        0.1835938        0.2148438             0.25        0.2851563        0.3203125         0.359375        0.3984375             0.64             0.94         1.199219         4.453125
    0                0        0.0234375        0.0390625       0.05859375         0.078125        0.1015625            0.125        0.1484375        0.1757813         0.203125         0.234375         0.265625         0.296875        0.3320313        0.3671875             0.55             0.84         1.105469         4.039063
    0                0        0.0234375        0.0390625       0.05859375         0.078125        0.1015625        0.1210937        0.1484375         0.171875        0.1992187        0.2304687        0.2617187        0.2929687        0.3242187         0.359375              0.5             0.75         1.054687         3.675781
    0                0        0.0234375        0.0390625       0.05859375         0.078125        0.1015625        0.1210937        0.1484375         0.171875        0.1992187        0.2304687        0.2617187        0.2929687        0.3242187         0.359375              0.5             0.75         1.054687         3.675781
    0                0        0.0234375        0.0390625       0.05859375         0.078125        0.1015625        0.1210937        0.1484375         0.171875        0.1992187        0.2304687        0.2617187        0.2929687        0.3242187         0.359375              0.5             0.75         1.054687         3.675781
    0                0        0.0234375        0.0390625       0.05859375         0.078125        0.1015625        0.1210937        0.1484375         0.171875        0.1992187        0.2304687        0.2617187        0.2929687        0.3242187         0.359375              0.5             0.75         1.054687         3.675781];
AssiMotTqWhlImbRejctnMinY.EngMin = -1;
AssiMotTqWhlImbRejctnMinY.EngMax = 15.99;
AssiMotTqWhlImbRejctnMinY.PortName = 'AssiMotTqWhlImbRejctnMinY';
AssiMotTqWhlImbRejctnMinY.Description = [...
  'Assist input for look-up table when WIR Command = ZERO.'...
  'This Cal is imported from SF001A.'];

SysGlbPrmVehSpdBilnrSeln = DataDict.ImprtdCal;
SysGlbPrmVehSpdBilnrSeln.DocUnits = 'Kph';
SysGlbPrmVehSpdBilnrSeln.EngDT = dt.u9p7;
SysGlbPrmVehSpdBilnrSeln.EngVal =  ...
   [0                5               15               30               60               80              100              120              150              180              200              220];
SysGlbPrmVehSpdBilnrSeln.EngMin = 0;
SysGlbPrmVehSpdBilnrSeln.EngMax = 511;
SysGlbPrmVehSpdBilnrSeln.PortName = 'SysGlbPrmVehSpdBilnrSeln';
SysGlbPrmVehSpdBilnrSeln.Description = [...
  '1-D vehicle speed table.  12 tuning points, common to multiple functions.' ...
  'This cal is imported from SF999A.'];
  
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
ActvNiblCtrl = DataDict.NVM;
ActvNiblCtrl.LongName = 'Active Nibble Control NVM';
ActvNiblCtrl.Description = 'NVM for Active Nibble Control';
ActvNiblCtrl.DocUnits = 'Cnt';
ActvNiblCtrl.EngDT = dt.u08;
ActvNiblCtrl.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
ActvNiblCtrl.EngMin = 0;
ActvNiblCtrl.EngMax = 255;
ActvNiblCtrl.CustomerVisible = false;
ActvNiblCtrl.Impact = 'H';
ActvNiblCtrl.TuningOwner = 'CSE';
ActvNiblCtrl.InitRowCol = [1  128];

LaneAssi = DataDict.NVM;
LaneAssi.LongName = 'Lane Assist NVM';
LaneAssi.Description = 'NVM for Lane Assist';
LaneAssi.DocUnits = 'Cnt';
LaneAssi.EngDT = dt.u08;
LaneAssi.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
LaneAssi.EngMin = 0;
LaneAssi.EngMax = 255;
LaneAssi.CustomerVisible = false;
LaneAssi.Impact = 'H';
LaneAssi.TuningOwner = 'CSE';
LaneAssi.InitRowCol = [1  256];

PullDriftCmp = DataDict.NVM;
PullDriftCmp.LongName = 'Pull Drift Compensation NVM';
PullDriftCmp.Description = 'NVM for Pull Drift Compensation';
PullDriftCmp.DocUnits = 'Cnt';
PullDriftCmp.EngDT = dt.u08;
PullDriftCmp.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
PullDriftCmp.EngMin = 0;
PullDriftCmp.EngMax = 255;
PullDriftCmp.CustomerVisible = false;
PullDriftCmp.Impact = 'H';
PullDriftCmp.TuningOwner = 'CSE';
PullDriftCmp.InitRowCol = [1  128];

TrlrBackupAssi = DataDict.NVM;
TrlrBackupAssi.LongName = 'Trailer Backup Assist NVM';
TrlrBackupAssi.Description = 'NVM for Trailer Backup Assist';
TrlrBackupAssi.DocUnits = 'Cnt';
TrlrBackupAssi.EngDT = dt.u08;
TrlrBackupAssi.EngInit =  ...
   [0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0                0];
TrlrBackupAssi.EngMin = 0;
TrlrBackupAssi.EngMax = 255;
TrlrBackupAssi.CustomerVisible = false;
TrlrBackupAssi.Impact = 'H';
TrlrBackupAssi.TuningOwner = 'CSE';
TrlrBackupAssi.InitRowCol = [1  512];

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
PullDriftCmpFctCallSel = DataDict.PIM;
PullDriftCmpFctCallSel.LongName = 'Pull Drift Compensation Function Call Select';
PullDriftCmpFctCallSel.Description = [...
  'Used to call FIH_PDC_function in every 8ms'];
PullDriftCmpFctCallSel.DocUnits = 'Cnt';
PullDriftCmpFctCallSel.EngDT = dt.lgc;
PullDriftCmpFctCallSel.EngMin = 0;
PullDriftCmpFctCallSel.EngMax = 1;
PullDriftCmpFctCallSel.InitRowCol = [1  1];

TrlrBackAssiFctCallSel = DataDict.PIM;
TrlrBackAssiFctCallSel.LongName = 'Trailer Backup Assist function call Select';
TrlrBackAssiFctCallSel.Description = [...
  'Used to call FIH_TBA_function in every 20ms'];
TrlrBackAssiFctCallSel.DocUnits = 'Cnt';
TrlrBackAssiFctCallSel.EngDT = dt.lgc;
TrlrBackAssiFctCallSel.EngMin = 0;
TrlrBackAssiFctCallSel.EngMax = 1;
TrlrBackAssiFctCallSel.InitRowCol = [1  1];

TqOffsTbl = DataDict.PIM;
TqOffsTbl.LongName = 'Torque Offset Table';
TqOffsTbl.Description = 'Torque Offset Table';
TqOffsTbl.DocUnits = 'HwNm';
TqOffsTbl.EngDT = dt.u8p8;
TqOffsTbl.EngMin = 0;
TqOffsTbl.EngMax = 255;
TqOffsTbl.InitRowCol = [12  20];

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ECUID1_CNT_U08 = DataDict.Constant;
ECUID1_CNT_U08.LongName = 'Ecu Identifier 1';
ECUID1_CNT_U08.Description = 'Ecu Identifier 1';
ECUID1_CNT_U08.DocUnits = 'Cnt';
ECUID1_CNT_U08.EngDT = dt.u08;
ECUID1_CNT_U08.EngVal = 1;
ECUID1_CNT_U08.Define = 'Local';

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
