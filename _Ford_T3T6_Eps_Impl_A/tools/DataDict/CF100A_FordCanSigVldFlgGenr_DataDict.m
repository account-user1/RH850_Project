%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 30-Apr-2018 16:29:43       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CF100A = DataDict.FDD;
CF100A.Version = '1.0.X';
CF100A.LongName = 'Ford CAN Signal Valid Flag Generator';
CF100A.ShoName  = 'FordCanSigVldFlgGenr';
CF100A.DesignASIL = 'QM';
CF100A.Description = [...
  'The purpose of the Ford CAN Signal Valid Flag Generator is to generate' ...
  ' Ford-In-House valid flags that depend on CAN signals from multiple CA' ...
  'N messages.  This function also takes in those signals and outputs the' ...
  'm as a pass-through so that they are in sync with their corresponding ' ...
  'valid flags.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordCanSigVldFlgGenrInit1 = DataDict.Runnable;
FordCanSigVldFlgGenrInit1.Context = 'Rte';
FordCanSigVldFlgGenrInit1.TimeStep = 0;
FordCanSigVldFlgGenrInit1.Description = 'Initialization Runnable';

FordCanSigVldFlgGenrPer1 = DataDict.Runnable;
FordCanSigVldFlgGenrPer1.Context = 'Rte';
FordCanSigVldFlgGenrPer1.TimeStep = 0.01;
FordCanSigVldFlgGenrPer1.Description = [...
  'Periodic Runnable at 10 milliseconds'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
FordActvFrntSteerModlSteerWhlAgVldInt = DataDict.IpSignal;
FordActvFrntSteerModlSteerWhlAgVldInt.LongName = 'Ford Active Front Steer Module Steering Wheel Angle Valid Internal';
FordActvFrntSteerModlSteerWhlAgVldInt.Description = [...
  'Processed value of Active Front Steer Module Steering Wheel Angle Vali' ...
  'd Internal to be used by APA and EAC functions'];
FordActvFrntSteerModlSteerWhlAgVldInt.DocUnits = 'Cnt';
FordActvFrntSteerModlSteerWhlAgVldInt.EngDT = dt.lgc;
FordActvFrntSteerModlSteerWhlAgVldInt.EngInit = 0;
FordActvFrntSteerModlSteerWhlAgVldInt.EngMin = 0;
FordActvFrntSteerModlSteerWhlAgVldInt.EngMax = 1;
FordActvFrntSteerModlSteerWhlAgVldInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordActvFrntSteerModlSteerWhlAgVldInt.ReadType = 'Rte';


FordVehActvFrntSteerModlSteerWhlAgRaw = DataDict.IpSignal;
FordVehActvFrntSteerModlSteerWhlAgRaw.LongName = 'Ford Vehicle Active Front Steer Module Steering Wheel Angle Raw';
FordVehActvFrntSteerModlSteerWhlAgRaw.Description = [...
  'Processed to provide the output FordVehActvFrntSteerModlSteerWhlAgRawP' ...
  'assd.The input has the following states: 32766 - CxFFE_NoDataExists, 3' ...
  '2767 - CxFFF_Faulty'];
FordVehActvFrntSteerModlSteerWhlAgRaw.DocUnits = 'Cnt';
FordVehActvFrntSteerModlSteerWhlAgRaw.EngDT = dt.u16;
FordVehActvFrntSteerModlSteerWhlAgRaw.EngInit = 0;
FordVehActvFrntSteerModlSteerWhlAgRaw.EngMin = 0;
FordVehActvFrntSteerModlSteerWhlAgRaw.EngMax = 32767;
FordVehActvFrntSteerModlSteerWhlAgRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehActvFrntSteerModlSteerWhlAgRaw.ReadType = 'Rte';


FordVehGearLvrPosn = DataDict.IpSignal;
FordVehGearLvrPosn.LongName = 'Ford Vehicle Gear Lever Position';
FordVehGearLvrPosn.Description = [...
  'Provide the states for Vehicle Gear Lever Position'];
FordVehGearLvrPosn.DocUnits = 'Cnt';
FordVehGearLvrPosn.EngDT = enum.Ford_GearLvrPos_D_Actl;
FordVehGearLvrPosn.EngInit = Ford_GearLvrPos_D_Actl.CxE_Unknown_Position;
FordVehGearLvrPosn.EngMin = Ford_GearLvrPos_D_Actl.Cx0_Park;
FordVehGearLvrPosn.EngMax = Ford_GearLvrPos_D_Actl.CxF_Fault;
FordVehGearLvrPosn.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearLvrPosn.ReadType = 'Rte';


FordVehGearLvrPosnVldInt = DataDict.IpSignal;
FordVehGearLvrPosnVldInt.LongName = 'Ford Vehicle Gear Lever Position Valid Internal';
FordVehGearLvrPosnVldInt.Description = [...
  'Processed value of Gear Lever Position Valid Internal to be used by TB' ...
  'A functions'];
FordVehGearLvrPosnVldInt.DocUnits = 'Cnt';
FordVehGearLvrPosnVldInt.EngDT = dt.lgc;
FordVehGearLvrPosnVldInt.EngInit = 0;
FordVehGearLvrPosnVldInt.EngMin = 0;
FordVehGearLvrPosnVldInt.EngMax = 1;
FordVehGearLvrPosnVldInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearLvrPosnVldInt.ReadType = 'Rte';


FordVehGearPosnRaw = DataDict.IpSignal;
FordVehGearPosnRaw.LongName = 'Ford Vehicle Gear Position Raw';
FordVehGearPosnRaw.Description = [...
  'Provides the states for Vehicle Gear Position'];
FordVehGearPosnRaw.DocUnits = 'Cnt';
FordVehGearPosnRaw.EngDT = enum.Ford_GearPos_D_Actl;
FordVehGearPosnRaw.EngInit = Ford_GearPos_D_Actl.Cx0_Neutral;
FordVehGearPosnRaw.EngMin = Ford_GearPos_D_Actl.Cx0_Neutral;
FordVehGearPosnRaw.EngMax = Ford_GearPos_D_Actl.CxF_Unknown;
FordVehGearPosnRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearPosnRaw.ReadType = 'Rte';


FordVehGearPosnRawVldInt = DataDict.IpSignal;
FordVehGearPosnRawVldInt.LongName = 'Ford Vehicle Gear Position Raw Valid Internal';
FordVehGearPosnRawVldInt.Description = [...
  'Processed value of Gear Position Raw Valid Internal to be used by TBA ' ...
  'functions'];
FordVehGearPosnRawVldInt.DocUnits = 'Cnt';
FordVehGearPosnRawVldInt.EngDT = dt.lgc;
FordVehGearPosnRawVldInt.EngInit = 0;
FordVehGearPosnRawVldInt.EngMin = 0;
FordVehGearPosnRawVldInt.EngMax = 1;
FordVehGearPosnRawVldInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearPosnRawVldInt.ReadType = 'Rte';


FordVehParkAidModlReqdAgRaw = DataDict.IpSignal;
FordVehParkAidModlReqdAgRaw.LongName = 'Ford Vehicle Park Aid Module Requested Angle Raw';
FordVehParkAidModlReqdAgRaw.Description = [...
  'Processed to provide the output FordVehParkAidModlReqdAgRawPassd.The i' ...
  'nput has the following states: 32766 - CxFFE_NoDataExists, 32767 - CxF' ...
  'FF_Faulty'];
FordVehParkAidModlReqdAgRaw.DocUnits = 'Cnt';
FordVehParkAidModlReqdAgRaw.EngDT = dt.u16;
FordVehParkAidModlReqdAgRaw.EngInit = 10000;
FordVehParkAidModlReqdAgRaw.EngMin = 0;
FordVehParkAidModlReqdAgRaw.EngMax = 32767;
FordVehParkAidModlReqdAgRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehParkAidModlReqdAgRaw.ReadType = 'Rte';


FordVehParkAidModlReqdAgVldInt = DataDict.IpSignal;
FordVehParkAidModlReqdAgVldInt.LongName = 'Ford Vehicle Park Aid Module Requested Angle Valid Internal';
FordVehParkAidModlReqdAgVldInt.Description = [...
  'Processed value of Park Aid Module Requested Angle Valid Internal to b' ...
  'e used by APA and EAC functions'];
FordVehParkAidModlReqdAgVldInt.DocUnits = 'Cnt';
FordVehParkAidModlReqdAgVldInt.EngDT = dt.lgc;
FordVehParkAidModlReqdAgVldInt.EngInit = 0;
FordVehParkAidModlReqdAgVldInt.EngMin = 0;
FordVehParkAidModlReqdAgVldInt.EngMax = 1;
FordVehParkAidModlReqdAgVldInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehParkAidModlReqdAgVldInt.ReadType = 'Rte';


FordVehParkAidModlReqdSts = DataDict.IpSignal;
FordVehParkAidModlReqdSts.LongName = 'Ford Vehicle Park Aid Module Requested Status';
FordVehParkAidModlReqdSts.Description = [...
  'Provides States for Vehicle Park Aid Module'];
FordVehParkAidModlReqdSts.DocUnits = 'Cnt';
FordVehParkAidModlReqdSts.EngDT = enum.Ford_EPASExtAngleStatReq;
FordVehParkAidModlReqdSts.EngInit = Ford_EPASExtAngleStatReq.Cx0_NoRequest;
FordVehParkAidModlReqdSts.EngMin = Ford_EPASExtAngleStatReq.Cx0_NoRequest;
FordVehParkAidModlReqdSts.EngMax = Ford_EPASExtAngleStatReq.Cx1_Request;
FordVehParkAidModlReqdSts.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehParkAidModlReqdSts.ReadType = 'Rte';


FordVehParkAidModlStsVldInt = DataDict.IpSignal;
FordVehParkAidModlStsVldInt.LongName = 'Ford Vehicle Park Aid Module Status Valid Internal';
FordVehParkAidModlStsVldInt.Description = [...
  'Processed value of Park Aid Module Status Valid Internal to be used by' ...
  ' APA and EAC functions'];
FordVehParkAidModlStsVldInt.DocUnits = 'Cnt';
FordVehParkAidModlStsVldInt.EngDT = dt.lgc;
FordVehParkAidModlStsVldInt.EngInit = 0;
FordVehParkAidModlStsVldInt.EngMin = 0;
FordVehParkAidModlStsVldInt.EngMax = 1;
FordVehParkAidModlStsVldInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehParkAidModlStsVldInt.ReadType = 'Rte';


FordVehTrlrAgOffsDirRaw = DataDict.IpSignal;
FordVehTrlrAgOffsDirRaw.LongName = 'Ford Vehicle Trailer Angle Offset Direction Raw';
FordVehTrlrAgOffsDirRaw.Description = [...
  'Provides states for Vehicle Trailer Angle Offset Direction'];
FordVehTrlrAgOffsDirRaw.DocUnits = 'Cnt';
FordVehTrlrAgOffsDirRaw.EngDT = enum.Ford_TrlrAnOffstDir_D_Mem;
FordVehTrlrAgOffsDirRaw.EngInit = Ford_TrlrAnOffstDir_D_Mem.Cx0_Null;
FordVehTrlrAgOffsDirRaw.EngMin = Ford_TrlrAnOffstDir_D_Mem.Cx0_Null;
FordVehTrlrAgOffsDirRaw.EngMax = Ford_TrlrAnOffstDir_D_Mem.Cx3_NotUSed;
FordVehTrlrAgOffsDirRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAgOffsDirRaw.ReadType = 'Rte';


FordVehTrlrAidIdnNrRaw = DataDict.IpSignal;
FordVehTrlrAidIdnNrRaw.LongName = 'Ford Vehicle Trailer Aid Identification Number Raw';
FordVehTrlrAidIdnNrRaw.Description = [...
  'Processed to provide the output FordVehTrlrAidIdnNrRawPassd'];
FordVehTrlrAidIdnNrRaw.DocUnits = 'Cnt';
FordVehTrlrAidIdnNrRaw.EngDT = dt.u08;
FordVehTrlrAidIdnNrRaw.EngInit = 0;
FordVehTrlrAidIdnNrRaw.EngMin = 0;
FordVehTrlrAidIdnNrRaw.EngMax = 15;
FordVehTrlrAidIdnNrRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAidIdnNrRaw.ReadType = 'Rte';


FordVehTrlrAidSetUpRaw = DataDict.IpSignal;
FordVehTrlrAidSetUpRaw.LongName = 'Ford Vehicle Trailer Aid Set Up Raw';
FordVehTrlrAidSetUpRaw.Description = [...
  'Provides states for Vehicle Trailer Aid Set Up'];
FordVehTrlrAidSetUpRaw.DocUnits = 'Cnt';
FordVehTrlrAidSetUpRaw.EngDT = enum.Ford_TrlrAidSetup_D2_Rq;
FordVehTrlrAidSetUpRaw.EngInit = Ford_TrlrAidSetup_D2_Rq.Cx0_Inactive;
FordVehTrlrAidSetUpRaw.EngMin = Ford_TrlrAidSetup_D2_Rq.Cx0_Inactive;
FordVehTrlrAidSetUpRaw.EngMax = Ford_TrlrAidSetup_D2_Rq.CxF_NotUsed_9;
FordVehTrlrAidSetUpRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAidSetUpRaw.ReadType = 'Rte';


FordVehTrlrAidTrlrRvsGuidcSts = DataDict.IpSignal;
FordVehTrlrAidTrlrRvsGuidcSts.LongName = 'Ford Vehicle Trailer Aid Trailer Reverse Guidance Status';
FordVehTrlrAidTrlrRvsGuidcSts.Description = [...
  'Provides status for Trailer Aid Trailer Reverse Guidance'];
FordVehTrlrAidTrlrRvsGuidcSts.DocUnits = 'Cnt';
FordVehTrlrAidTrlrRvsGuidcSts.EngDT = enum.Ford_TrlrRvrse_D_Stat;
FordVehTrlrAidTrlrRvsGuidcSts.EngInit = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidTrlrRvsGuidcSts.EngMin = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidTrlrRvsGuidcSts.EngMax = Ford_TrlrRvrse_D_Stat.Cx3_Faulty;
FordVehTrlrAidTrlrRvsGuidcSts.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAidTrlrRvsGuidcSts.ReadType = 'Rte';


FordVehTrlrEnaReqRaw = DataDict.IpSignal;
FordVehTrlrEnaReqRaw.LongName = 'Ford Vehicle Trailer Enable Request Raw';
FordVehTrlrEnaReqRaw.Description = [...
  'Processed to provide the output FordVehTrlrEnaReqRawPassd'];
FordVehTrlrEnaReqRaw.DocUnits = 'Cnt';
FordVehTrlrEnaReqRaw.EngDT = enum.Ford_TrlrAidEnbl_D2_Rq;
FordVehTrlrEnaReqRaw.EngInit = Ford_TrlrAidEnbl_D2_Rq.Cx0_Inactive;
FordVehTrlrEnaReqRaw.EngMin = Ford_TrlrAidEnbl_D2_Rq.Cx0_Inactive;
FordVehTrlrEnaReqRaw.EngMax = Ford_TrlrAidEnbl_D2_Rq.Cx7_NotUsed_4;
FordVehTrlrEnaReqRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrEnaReqRaw.ReadType = 'Rte';


FordVehTrlrHitchAgRateRaw = DataDict.IpSignal;
FordVehTrlrHitchAgRateRaw.LongName = 'Ford Vehicle Trailer Hitch Angle Rate Raw';
FordVehTrlrHitchAgRateRaw.Description = [...
  'Processed to provide the output FordVehTrlrHitchAgRateRawPassd.The inp' ...
  'ut has the following states: 4094 - CxFFE_NoDataExists, 4095 - CxFFF_F' ...
  'aulty '];
FordVehTrlrHitchAgRateRaw.DocUnits = 'Cnt';
FordVehTrlrHitchAgRateRaw.EngDT = dt.u16;
FordVehTrlrHitchAgRateRaw.EngInit = 4094;
FordVehTrlrHitchAgRateRaw.EngMin = 0;
FordVehTrlrHitchAgRateRaw.EngMax = 4095;
FordVehTrlrHitchAgRateRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrHitchAgRateRaw.ReadType = 'Rte';


FordVehTrlrHitchYawAgRaw = DataDict.IpSignal;
FordVehTrlrHitchYawAgRaw.LongName = 'Ford Vehicle Trailer Hitch Yaw Angle Raw';
FordVehTrlrHitchYawAgRaw.Description = [...
  'Processed to provide the output FordVehTrlrHitchYawAgRawPassd. The inp' ...
  'ut has the following states: 4094 - CxFFE_NoDataExists, 4095 - CxFFF_F' ...
  'aulty'];
FordVehTrlrHitchYawAgRaw.DocUnits = 'Cnt';
FordVehTrlrHitchYawAgRaw.EngDT = dt.u16;
FordVehTrlrHitchYawAgRaw.EngInit = 4094;
FordVehTrlrHitchYawAgRaw.EngMin = 0;
FordVehTrlrHitchYawAgRaw.EngMax = 4095;
FordVehTrlrHitchYawAgRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrHitchYawAgRaw.ReadType = 'Rte';


FordVehTrlrHitchYawSts = DataDict.IpSignal;
FordVehTrlrHitchYawSts.LongName = 'Ford Vehicle Trailer Hitch Yaw Status';
FordVehTrlrHitchYawSts.Description = [...
  'Provides states for Trailer Hitch Yaw Status'];
FordVehTrlrHitchYawSts.DocUnits = 'Cnt';
FordVehTrlrHitchYawSts.EngDT = enum.Ford_TrlrHitchYaw_D_Stat;
FordVehTrlrHitchYawSts.EngInit = Ford_TrlrHitchYaw_D_Stat.Cx0_NoConnectionWithYrsu;
FordVehTrlrHitchYawSts.EngMin = Ford_TrlrHitchYaw_D_Stat.Cx0_NoConnectionWithYrsu;
FordVehTrlrHitchYawSts.EngMax = Ford_TrlrHitchYaw_D_Stat.CxF_Faulty;
FordVehTrlrHitchYawSts.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrHitchYawSts.ReadType = 'Rte';


FordVehTrlrIdnTypRaw = DataDict.IpSignal;
FordVehTrlrIdnTypRaw.LongName = 'Ford Vehicle Trailer Identification Type Raw';
FordVehTrlrIdnTypRaw.Description = [...
  'Processed to provide the output FordVehTrlrIdnTypRawPassd'];
FordVehTrlrIdnTypRaw.DocUnits = 'Cnt';
FordVehTrlrIdnTypRaw.EngDT = enum.Ford_TrlrIdType_D_Stat;
FordVehTrlrIdnTypRaw.EngInit = Ford_TrlrIdType_D_Stat.Cx0_Null;
FordVehTrlrIdnTypRaw.EngMin = Ford_TrlrIdType_D_Stat.Cx0_Null;
FordVehTrlrIdnTypRaw.EngMax = Ford_TrlrIdType_D_Stat.Cx3_Gooseneck;
FordVehTrlrIdnTypRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrIdnTypRaw.ReadType = 'Rte';


FordVehTrlrRvsCnclReqRaw = DataDict.IpSignal;
FordVehTrlrRvsCnclReqRaw.LongName = 'Ford Vehicle Trailer Reverse Cancel Request Raw';
FordVehTrlrRvsCnclReqRaw.Description = [...
  'Provides states for Trailer Reverse Cancel Request'];
FordVehTrlrRvsCnclReqRaw.DocUnits = 'Cnt';
FordVehTrlrRvsCnclReqRaw.EngDT = enum.Ford_TrlrRvrseCancl_B_Rq;
FordVehTrlrRvsCnclReqRaw.EngInit = Ford_TrlrRvrseCancl_B_Rq.Cx0_Null;
FordVehTrlrRvsCnclReqRaw.EngMin = Ford_TrlrRvrseCancl_B_Rq.Cx0_Null;
FordVehTrlrRvsCnclReqRaw.EngMax = Ford_TrlrRvrseCancl_B_Rq.Cx1_Cancel;
FordVehTrlrRvsCnclReqRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrRvsCnclReqRaw.ReadType = 'Rte';


FordVehTrlrRvsEnaRaw = DataDict.IpSignal;
FordVehTrlrRvsEnaRaw.LongName = 'Ford Vehicle Trailer Reverse Enable Raw';
FordVehTrlrRvsEnaRaw.Description = [...
  'Provides states for Vehicle Trailer Reverse Enable'];
FordVehTrlrRvsEnaRaw.DocUnits = 'Cnt';
FordVehTrlrRvsEnaRaw.EngDT = enum.Ford_TrlrRvrseEnbl_D2_Stat;
FordVehTrlrRvsEnaRaw.EngInit = Ford_TrlrRvrseEnbl_D2_Stat.Cx0_Inactive;
FordVehTrlrRvsEnaRaw.EngMin = Ford_TrlrRvrseEnbl_D2_Stat.Cx0_Inactive;
FordVehTrlrRvsEnaRaw.EngMax = Ford_TrlrRvrseEnbl_D2_Stat.Cx7_NotUsed;
FordVehTrlrRvsEnaRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrRvsEnaRaw.ReadType = 'Rte';


FordVehTrlrRvsMsgTxtReqRaw = DataDict.IpSignal;
FordVehTrlrRvsMsgTxtReqRaw.LongName = 'Ford Vehicle Trailer Reverse Message Text Request Raw';
FordVehTrlrRvsMsgTxtReqRaw.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrRvrseMsgTxt_D2_Rq' ...
  '. Elements are: "Cx0_NoMessage" - 0 "Cx1_Message1" - 1 "Cx2_Message2" ' ...
  '- 2 "Cx3_Message3" - 3 "Cx4_Message4" - 4 "Cx5_Message5" - 5 "Cx6_Mess' ...
  'age6" - 6 "Cx7_Message7" - 7 "Cx8_Message8" - 8"Cx9_Message9" - 9"CxA_' ...
  'Message10" - 10 "CxB_Message11" - 11 "CxC_Message12" - 12 "CxD_Message' ...
  '13" - 13 "CxE_Message14" - 14 "CxF_Message15" - 15 "Cx10_Message16" - ' ...
  '16 "Cx11_Message17" - 17 "Cx12_Message18" - 18 "Cx13_Message19" - 19 "' ...
  'Cx14_Message20" - 20 "Cx15_Message21" - 21 "Cx16_Message22" - 22 "Cx17' ...
  '_Message23" - 23 "Cx18_Message24" - 24 "Cx19_Message25" - 25 "Cx1A_Mes' ...
  'sage26" - 26 "Cx1B_Message27" - 27 "Cx1C_Message28" - 28, "Cx1D_Messag' ...
  'e29" - 29, "Cx1E_Message30" - 30 , "Cx1F_Message31" - 31, 32 - 63 - "R' ...
  'egular Integers".'];
FordVehTrlrRvsMsgTxtReqRaw.DocUnits = 'Cnt';
FordVehTrlrRvsMsgTxtReqRaw.EngDT = dt.u08;
FordVehTrlrRvsMsgTxtReqRaw.EngInit = 0;
FordVehTrlrRvsMsgTxtReqRaw.EngMin = 0;
FordVehTrlrRvsMsgTxtReqRaw.EngMax = 63;
FordVehTrlrRvsMsgTxtReqRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrRvsMsgTxtReqRaw.ReadType = 'Rte';


FordVehTrlrYawRateQlyFac = DataDict.IpSignal;
FordVehTrlrYawRateQlyFac.LongName = 'Ford Vehicle Trailer Yaw Rate Quality Factor';
FordVehTrlrYawRateQlyFac.Description = [...
  'Provides states for Vehicle Trailer Yaw Rate Quality Factor'];
FordVehTrlrYawRateQlyFac.DocUnits = 'Cnt';
FordVehTrlrYawRateQlyFac.EngDT = enum.Ford_TrlrYaw_W_Actl_D_Qf;
FordVehTrlrYawRateQlyFac.EngInit = Ford_TrlrYaw_W_Actl_D_Qf.Cx1_No_Data_Exists;
FordVehTrlrYawRateQlyFac.EngMin = Ford_TrlrYaw_W_Actl_D_Qf.Cx0_Faulty;
FordVehTrlrYawRateQlyFac.EngMax = Ford_TrlrYaw_W_Actl_D_Qf.Cx3_OK;
FordVehTrlrYawRateQlyFac.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrYawRateQlyFac.ReadType = 'Rte';


FordVehTrlrYawRateRaw = DataDict.IpSignal;
FordVehTrlrYawRateRaw.LongName = 'Ford Vehicle Trailer Yaw Rate Raw';
FordVehTrlrYawRateRaw.Description = [...
  'Processed to provide the output FordVehTrlrYawRateRawPassd.The input h' ...
  'as the following states: 65534 - CxFFE_NoDataExists, 65535 - CxFFF_Fau' ...
  'lty'];
FordVehTrlrYawRateRaw.DocUnits = 'Cnt';
FordVehTrlrYawRateRaw.EngDT = dt.u16;
FordVehTrlrYawRateRaw.EngInit = 65534;
FordVehTrlrYawRateRaw.EngMin = 0;
FordVehTrlrYawRateRaw.EngMax = 65535;
FordVehTrlrYawRateRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrYawRateRaw.ReadType = 'Rte';


FordVehTrsmDesGearRaw = DataDict.IpSignal;
FordVehTrsmDesGearRaw.LongName = 'Ford Vehicle Transmission Desired Gear Raw';
FordVehTrsmDesGearRaw.Description = [...
  'Provides states for Vehicle Transmission Desired Gear'];
FordVehTrsmDesGearRaw.DocUnits = 'Cnt';
FordVehTrsmDesGearRaw.EngDT = enum.Ford_TrnRng_D_Rq;
FordVehTrsmDesGearRaw.EngInit = Ford_TrnRng_D_Rq.Cx0_Park;
FordVehTrsmDesGearRaw.EngMin = Ford_TrnRng_D_Rq.Cx0_Park;
FordVehTrsmDesGearRaw.EngMax = Ford_TrnRng_D_Rq.CxF_Fault;
FordVehTrsmDesGearRaw.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrsmDesGearRaw.ReadType = 'Rte';


FordVehTrsmDesGearRawVldInt = DataDict.IpSignal;
FordVehTrsmDesGearRawVldInt.LongName = 'Ford Vehicle Transmission Desired Gear Raw Valid Internal';
FordVehTrsmDesGearRawVldInt.Description = [...
  'Processed value of Transmission Desired Gear Raw Valid Internal to be ' ...
  'used by TBA function'];
FordVehTrsmDesGearRawVldInt.DocUnits = 'Cnt';
FordVehTrsmDesGearRawVldInt.EngDT = dt.lgc;
FordVehTrsmDesGearRawVldInt.EngInit = 0;
FordVehTrsmDesGearRawVldInt.EngMin = 0;
FordVehTrsmDesGearRawVldInt.EngMax = 1;
FordVehTrsmDesGearRawVldInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrsmDesGearRawVldInt.ReadType = 'Rte';


FordVehYawRateSnsrIdHi = DataDict.IpSignal;
FordVehYawRateSnsrIdHi.LongName = 'Ford Vehicle Yaw Rate Sensor ID High';
FordVehYawRateSnsrIdHi.Description = [...
  'Processed to provide the output FordVehYawRateSnsrIdHiPassd'];
FordVehYawRateSnsrIdHi.DocUnits = 'Cnt';
FordVehYawRateSnsrIdHi.EngDT = dt.u32;
FordVehYawRateSnsrIdHi.EngInit = 0;
FordVehYawRateSnsrIdHi.EngMin = 0;
FordVehYawRateSnsrIdHi.EngMax = 4294967295;
FordVehYawRateSnsrIdHi.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehYawRateSnsrIdHi.ReadType = 'Rte';


FordVehYawRateSnsrIdLo = DataDict.IpSignal;
FordVehYawRateSnsrIdLo.LongName = 'Ford Vehicle Yaw Rate Sensor ID Low';
FordVehYawRateSnsrIdLo.Description = [...
  'Processed to provide the output FordVehYawRateSnsrIdLoPassd'];
FordVehYawRateSnsrIdLo.DocUnits = 'Cnt';
FordVehYawRateSnsrIdLo.EngDT = dt.u32;
FordVehYawRateSnsrIdLo.EngInit = 0;
FordVehYawRateSnsrIdLo.EngMin = 0;
FordVehYawRateSnsrIdLo.EngMax = 4294967295;
FordVehYawRateSnsrIdLo.ReadIn = {'FordCanSigVldFlgGenrPer1'};
FordVehYawRateSnsrIdLo.ReadType = 'Rte';


ImgProcgDataPrsntInt = DataDict.IpSignal;
ImgProcgDataPrsntInt.LongName = 'Image Processing Data Present Internal';
ImgProcgDataPrsntInt.Description = [...
  'Processed value of Image Processing Data Present Internal to be used b' ...
  'y TBA function'];
ImgProcgDataPrsntInt.DocUnits = 'Cnt';
ImgProcgDataPrsntInt.EngDT = dt.lgc;
ImgProcgDataPrsntInt.EngInit = 0;
ImgProcgDataPrsntInt.EngMin = 0;
ImgProcgDataPrsntInt.EngMax = 1;
ImgProcgDataPrsntInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
ImgProcgDataPrsntInt.ReadType = 'Rte';


TrlrAidData3PrsntInt = DataDict.IpSignal;
TrlrAidData3PrsntInt.LongName = 'Trailer Aid Data Three Present Internal';
TrlrAidData3PrsntInt.Description = [...
  'Processed value of Trailer Aid Data Three Present Internal to be used ' ...
  'by TBA function'];
TrlrAidData3PrsntInt.DocUnits = 'Cnt';
TrlrAidData3PrsntInt.EngDT = dt.lgc;
TrlrAidData3PrsntInt.EngInit = 0;
TrlrAidData3PrsntInt.EngMin = 0;
TrlrAidData3PrsntInt.EngMax = 1;
TrlrAidData3PrsntInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
TrlrAidData3PrsntInt.ReadType = 'Rte';


TrlrAidDataPrsntInt = DataDict.IpSignal;
TrlrAidDataPrsntInt.LongName = 'Trailer Aid Data Present Internal';
TrlrAidDataPrsntInt.Description = [...
  'Processed value of Trailer Aid Data Present Internal to be used by TBA' ...
  ' function'];
TrlrAidDataPrsntInt.DocUnits = 'Cnt';
TrlrAidDataPrsntInt.EngDT = dt.lgc;
TrlrAidDataPrsntInt.EngInit = 0;
TrlrAidDataPrsntInt.EngMin = 0;
TrlrAidDataPrsntInt.EngMax = 1;
TrlrAidDataPrsntInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
TrlrAidDataPrsntInt.ReadType = 'Rte';


TrlrAidStatPrsntInt = DataDict.IpSignal;
TrlrAidStatPrsntInt.LongName = 'Trailer Aid Static Present Internal';
TrlrAidStatPrsntInt.Description = [...
  'Processed value of Trailer Aid Static Present Internal to be used by T' ...
  'BA function'];
TrlrAidStatPrsntInt.DocUnits = 'Cnt';
TrlrAidStatPrsntInt.EngDT = dt.lgc;
TrlrAidStatPrsntInt.EngInit = 0;
TrlrAidStatPrsntInt.EngMin = 0;
TrlrAidStatPrsntInt.EngMax = 1;
TrlrAidStatPrsntInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
TrlrAidStatPrsntInt.ReadType = 'Rte';


TrlrAidStatTwoPrsntInt = DataDict.IpSignal;
TrlrAidStatTwoPrsntInt.LongName = 'Trailer Aid Static Two Present Internal';
TrlrAidStatTwoPrsntInt.Description = [...
  'Processed value of Trailer Aid Static Two Present Internal to be used ' ...
  'by TBA function'];
TrlrAidStatTwoPrsntInt.DocUnits = 'Cnt';
TrlrAidStatTwoPrsntInt.EngDT = dt.lgc;
TrlrAidStatTwoPrsntInt.EngInit = 0;
TrlrAidStatTwoPrsntInt.EngMin = 0;
TrlrAidStatTwoPrsntInt.EngMax = 1;
TrlrAidStatTwoPrsntInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
TrlrAidStatTwoPrsntInt.ReadType = 'Rte';


TrlrAidStsThreePrsntInt = DataDict.IpSignal;
TrlrAidStsThreePrsntInt.LongName = 'Trailer Aid Status Three Present Internal';
TrlrAidStsThreePrsntInt.Description = [...
  'Processed value of Trailer Aid Status Three Present Internal to be use' ...
  'd by TBA function'];
TrlrAidStsThreePrsntInt.DocUnits = 'Cnt';
TrlrAidStsThreePrsntInt.EngDT = dt.lgc;
TrlrAidStsThreePrsntInt.EngInit = 0;
TrlrAidStsThreePrsntInt.EngMin = 0;
TrlrAidStsThreePrsntInt.EngMax = 1;
TrlrAidStsThreePrsntInt.ReadIn = {'FordCanSigVldFlgGenrPer1'};
TrlrAidStsThreePrsntInt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehActvFrntSteerModlSteerWhlAgRawPassd = DataDict.OpSignal;
FordVehActvFrntSteerModlSteerWhlAgRawPassd.LongName = 'Ford Vehicle Active Front Steer Module Steering Wheel Angle Raw Passed';
FordVehActvFrntSteerModlSteerWhlAgRawPassd.Description = [...
  'Output for Steering Wheel angle.The input has the following states: 32' ...
  '766 - CxFFE_NoDataExists, 32767 - CxFFF_Faulty'];
FordVehActvFrntSteerModlSteerWhlAgRawPassd.DocUnits = 'Cnt';
FordVehActvFrntSteerModlSteerWhlAgRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehActvFrntSteerModlSteerWhlAgRawPassd.EngDT = dt.u16;
FordVehActvFrntSteerModlSteerWhlAgRawPassd.EngInit = 0;
FordVehActvFrntSteerModlSteerWhlAgRawPassd.EngMin = 0;
FordVehActvFrntSteerModlSteerWhlAgRawPassd.EngMax = 32767;
FordVehActvFrntSteerModlSteerWhlAgRawPassd.TestTolerance = 0;
FordVehActvFrntSteerModlSteerWhlAgRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehActvFrntSteerModlSteerWhlAgRawPassd.WriteType = 'Rte';


FordVehActvParkAssiVld = DataDict.OpSignal;
FordVehActvParkAssiVld.LongName = 'Ford Vehicle Active Park Assist Valid';
FordVehActvParkAssiVld.Description = 'Provides Validity for Park Assist';
FordVehActvParkAssiVld.DocUnits = 'Cnt';
FordVehActvParkAssiVld.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehActvParkAssiVld.EngDT = dt.lgc;
FordVehActvParkAssiVld.EngInit = 0;
FordVehActvParkAssiVld.EngMin = 0;
FordVehActvParkAssiVld.EngMax = 1;
FordVehActvParkAssiVld.TestTolerance = 0;
FordVehActvParkAssiVld.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehActvParkAssiVld.WriteType = 'Rte';


FordVehGearLvrPosnPassd = DataDict.OpSignal;
FordVehGearLvrPosnPassd.LongName = 'Ford Vehicle Gear Lever Position Passed';
FordVehGearLvrPosnPassd.Description = [...
  'Provides different states for Gear Lever Position'];
FordVehGearLvrPosnPassd.DocUnits = 'Cnt';
FordVehGearLvrPosnPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehGearLvrPosnPassd.EngDT = enum.Ford_GearLvrPos_D_Actl;
FordVehGearLvrPosnPassd.EngInit = Ford_GearLvrPos_D_Actl.CxE_Unknown_Position;
FordVehGearLvrPosnPassd.EngMin = Ford_GearLvrPos_D_Actl.Cx0_Park;
FordVehGearLvrPosnPassd.EngMax = Ford_GearLvrPos_D_Actl.CxF_Fault;
FordVehGearLvrPosnPassd.TestTolerance = 0;
FordVehGearLvrPosnPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearLvrPosnPassd.WriteType = 'Rte';


FordVehGearLvrPosnVld = DataDict.OpSignal;
FordVehGearLvrPosnVld.LongName = 'Ford Vehicle Gear Lever Position Valid';
FordVehGearLvrPosnVld.Description = [...
  'Provides validity for Gear Lever Position '];
FordVehGearLvrPosnVld.DocUnits = 'Cnt';
FordVehGearLvrPosnVld.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehGearLvrPosnVld.EngDT = dt.lgc;
FordVehGearLvrPosnVld.EngInit = 0;
FordVehGearLvrPosnVld.EngMin = 0;
FordVehGearLvrPosnVld.EngMax = 1;
FordVehGearLvrPosnVld.TestTolerance = 0;
FordVehGearLvrPosnVld.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearLvrPosnVld.WriteType = 'Rte';


FordVehGearPosnRawPassd = DataDict.OpSignal;
FordVehGearPosnRawPassd.LongName = 'Ford Vehicle Gear Position Raw Passed';
FordVehGearPosnRawPassd.Description = [...
  'Provides the states for various Gear Positions'];
FordVehGearPosnRawPassd.DocUnits = 'Cnt';
FordVehGearPosnRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehGearPosnRawPassd.EngDT = enum.Ford_GearPos_D_Actl;
FordVehGearPosnRawPassd.EngInit = Ford_GearPos_D_Actl.Cx0_Neutral;
FordVehGearPosnRawPassd.EngMin = Ford_GearPos_D_Actl.Cx0_Neutral;
FordVehGearPosnRawPassd.EngMax = Ford_GearPos_D_Actl.CxF_Unknown;
FordVehGearPosnRawPassd.TestTolerance = 0;
FordVehGearPosnRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehGearPosnRawPassd.WriteType = 'Rte';


FordVehParkAidModlReqdAgRawPassd = DataDict.OpSignal;
FordVehParkAidModlReqdAgRawPassd.LongName = 'Ford Vehicle Park Aid Module Requested Angle Raw Passed';
FordVehParkAidModlReqdAgRawPassd.Description = [...
  'Provides values for Park Aid Module Requested Angle.The output has the' ...
  ' following states: 32766 - CxFFE_NoDataExists, 32767 - CxFFF_Faulty'];
FordVehParkAidModlReqdAgRawPassd.DocUnits = 'Cnt';
FordVehParkAidModlReqdAgRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehParkAidModlReqdAgRawPassd.EngDT = dt.u16;
FordVehParkAidModlReqdAgRawPassd.EngInit = 10000;
FordVehParkAidModlReqdAgRawPassd.EngMin = 0;
FordVehParkAidModlReqdAgRawPassd.EngMax = 32767;
FordVehParkAidModlReqdAgRawPassd.TestTolerance = 0;
FordVehParkAidModlReqdAgRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehParkAidModlReqdAgRawPassd.WriteType = 'Rte';


FordVehParkAidModlReqdStsPassd = DataDict.OpSignal;
FordVehParkAidModlReqdStsPassd.LongName = 'Ford Vehicle Park Aid Module Requested Status Passed';
FordVehParkAidModlReqdStsPassd.Description = [...
  'Provides status for Park Aid Module'];
FordVehParkAidModlReqdStsPassd.DocUnits = 'Cnt';
FordVehParkAidModlReqdStsPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehParkAidModlReqdStsPassd.EngDT = enum.Ford_EPASExtAngleStatReq;
FordVehParkAidModlReqdStsPassd.EngInit = Ford_EPASExtAngleStatReq.Cx0_NoRequest;
FordVehParkAidModlReqdStsPassd.EngMin = Ford_EPASExtAngleStatReq.Cx0_NoRequest;
FordVehParkAidModlReqdStsPassd.EngMax = Ford_EPASExtAngleStatReq.Cx1_Request;
FordVehParkAidModlReqdStsPassd.TestTolerance = 0;
FordVehParkAidModlReqdStsPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehParkAidModlReqdStsPassd.WriteType = 'Rte';


FordVehTrlrAgOffsDirRawPassd = DataDict.OpSignal;
FordVehTrlrAgOffsDirRawPassd.LongName = 'Ford Vehicle Trailer Angle Offset Direction Raw Passed';
FordVehTrlrAgOffsDirRawPassd.Description = [...
  'Provides states for Trailer Angle Offset Direction'];
FordVehTrlrAgOffsDirRawPassd.DocUnits = 'Cnt';
FordVehTrlrAgOffsDirRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrAgOffsDirRawPassd.EngDT = enum.Ford_TrlrAnOffstDir_D_Mem;
FordVehTrlrAgOffsDirRawPassd.EngInit = Ford_TrlrAnOffstDir_D_Mem.Cx0_Null;
FordVehTrlrAgOffsDirRawPassd.EngMin = Ford_TrlrAnOffstDir_D_Mem.Cx0_Null;
FordVehTrlrAgOffsDirRawPassd.EngMax = Ford_TrlrAnOffstDir_D_Mem.Cx3_NotUSed;
FordVehTrlrAgOffsDirRawPassd.TestTolerance = 0;
FordVehTrlrAgOffsDirRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAgOffsDirRawPassd.WriteType = 'Rte';


FordVehTrlrAidIdnNrRawPassd = DataDict.OpSignal;
FordVehTrlrAidIdnNrRawPassd.LongName = 'Ford Vehicle Trailer Aid Identification Number Raw Passed';
FordVehTrlrAidIdnNrRawPassd.Description = [...
  'Provides value for Trailer Aid Identification Number'];
FordVehTrlrAidIdnNrRawPassd.DocUnits = 'Cnt';
FordVehTrlrAidIdnNrRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrAidIdnNrRawPassd.EngDT = dt.u08;
FordVehTrlrAidIdnNrRawPassd.EngInit = 0;
FordVehTrlrAidIdnNrRawPassd.EngMin = 0;
FordVehTrlrAidIdnNrRawPassd.EngMax = 15;
FordVehTrlrAidIdnNrRawPassd.TestTolerance = 0;
FordVehTrlrAidIdnNrRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAidIdnNrRawPassd.WriteType = 'Rte';


FordVehTrlrAidSetUpRawPassd = DataDict.OpSignal;
FordVehTrlrAidSetUpRawPassd.LongName = 'Ford Vehicle Trailer Aid Set Up Raw Passed';
FordVehTrlrAidSetUpRawPassd.Description = [...
  'Provides states for Trailer Aid Set Up'];
FordVehTrlrAidSetUpRawPassd.DocUnits = 'Cnt';
FordVehTrlrAidSetUpRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrAidSetUpRawPassd.EngDT = enum.Ford_TrlrAidSetup_D2_Rq;
FordVehTrlrAidSetUpRawPassd.EngInit = Ford_TrlrAidSetup_D2_Rq.Cx0_Inactive;
FordVehTrlrAidSetUpRawPassd.EngMin = Ford_TrlrAidSetup_D2_Rq.Cx0_Inactive;
FordVehTrlrAidSetUpRawPassd.EngMax = Ford_TrlrAidSetup_D2_Rq.CxF_NotUsed_9;
FordVehTrlrAidSetUpRawPassd.TestTolerance = 0;
FordVehTrlrAidSetUpRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAidSetUpRawPassd.WriteType = 'Rte';


FordVehTrlrAidTrlrRvsGuidcStsPassd = DataDict.OpSignal;
FordVehTrlrAidTrlrRvsGuidcStsPassd.LongName = 'Ford Vehicle Trailer Aid Trailer Reverse Guidance Status Passed';
FordVehTrlrAidTrlrRvsGuidcStsPassd.Description = [...
  'Provides the status for Trailer Aid Trailer Reverse Guidance'];
FordVehTrlrAidTrlrRvsGuidcStsPassd.DocUnits = 'Cnt';
FordVehTrlrAidTrlrRvsGuidcStsPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrAidTrlrRvsGuidcStsPassd.EngDT = enum.Ford_TrlrRvrse_D_Stat;
FordVehTrlrAidTrlrRvsGuidcStsPassd.EngInit = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidTrlrRvsGuidcStsPassd.EngMin = Ford_TrlrRvrse_D_Stat.Cx0_Off;
FordVehTrlrAidTrlrRvsGuidcStsPassd.EngMax = Ford_TrlrRvrse_D_Stat.Cx3_Faulty;
FordVehTrlrAidTrlrRvsGuidcStsPassd.TestTolerance = 0;
FordVehTrlrAidTrlrRvsGuidcStsPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrAidTrlrRvsGuidcStsPassd.WriteType = 'Rte';


FordVehTrlrBackUpAssiEnaVld = DataDict.OpSignal;
FordVehTrlrBackUpAssiEnaVld.LongName = 'Ford Vehicle Trailer Back Up Assist Enable Valid';
FordVehTrlrBackUpAssiEnaVld.Description = [...
  'Processed value of Ford Vehicle Trailer Back Up Assist Enable Valid to' ...
  ' be used by TBA function'];
FordVehTrlrBackUpAssiEnaVld.DocUnits = 'Cnt';
FordVehTrlrBackUpAssiEnaVld.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrBackUpAssiEnaVld.EngDT = dt.lgc;
FordVehTrlrBackUpAssiEnaVld.EngInit = 0;
FordVehTrlrBackUpAssiEnaVld.EngMin = 0;
FordVehTrlrBackUpAssiEnaVld.EngMax = 1;
FordVehTrlrBackUpAssiEnaVld.TestTolerance = 0;
FordVehTrlrBackUpAssiEnaVld.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrBackUpAssiEnaVld.WriteType = 'Rte';


FordVehTrlrBackUpAssiRvsVld = DataDict.OpSignal;
FordVehTrlrBackUpAssiRvsVld.LongName = 'Ford Vehicle Trailer Back Up Assist Reverse Valid';
FordVehTrlrBackUpAssiRvsVld.Description = [...
  'Processed value of Ford Vehicle Trailer Back Up Assist Reverse Valid t' ...
  'o be used by TBA function'];
FordVehTrlrBackUpAssiRvsVld.DocUnits = 'Cnt';
FordVehTrlrBackUpAssiRvsVld.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrBackUpAssiRvsVld.EngDT = dt.lgc;
FordVehTrlrBackUpAssiRvsVld.EngInit = 0;
FordVehTrlrBackUpAssiRvsVld.EngMin = 0;
FordVehTrlrBackUpAssiRvsVld.EngMax = 1;
FordVehTrlrBackUpAssiRvsVld.TestTolerance = 0;
FordVehTrlrBackUpAssiRvsVld.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrBackUpAssiRvsVld.WriteType = 'Rte';


FordVehTrlrBackUpAssiYawRateVld = DataDict.OpSignal;
FordVehTrlrBackUpAssiYawRateVld.LongName = 'Ford Vehicle Trailer Back Up Assist Yaw Rate Valid';
FordVehTrlrBackUpAssiYawRateVld.Description = [...
  'Processed value of Ford Vehicle Trailer Back Up Assist Yaw Rate Valid ' ...
  'to be used by TBA function'];
FordVehTrlrBackUpAssiYawRateVld.DocUnits = 'Cnt';
FordVehTrlrBackUpAssiYawRateVld.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrBackUpAssiYawRateVld.EngDT = dt.lgc;
FordVehTrlrBackUpAssiYawRateVld.EngInit = 0;
FordVehTrlrBackUpAssiYawRateVld.EngMin = 0;
FordVehTrlrBackUpAssiYawRateVld.EngMax = 1;
FordVehTrlrBackUpAssiYawRateVld.TestTolerance = 0;
FordVehTrlrBackUpAssiYawRateVld.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrBackUpAssiYawRateVld.WriteType = 'Rte';


FordVehTrlrEnaReqRawPassd = DataDict.OpSignal;
FordVehTrlrEnaReqRawPassd.LongName = 'Ford Vehicle Trailer Enable Request Raw Passed';
FordVehTrlrEnaReqRawPassd.Description = [...
  'Provides states for Trailer Enable Request'];
FordVehTrlrEnaReqRawPassd.DocUnits = 'Cnt';
FordVehTrlrEnaReqRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrEnaReqRawPassd.EngDT = enum.Ford_TrlrAidEnbl_D2_Rq;
FordVehTrlrEnaReqRawPassd.EngInit = Ford_TrlrAidEnbl_D2_Rq.Cx0_Inactive;
FordVehTrlrEnaReqRawPassd.EngMin = Ford_TrlrAidEnbl_D2_Rq.Cx0_Inactive;
FordVehTrlrEnaReqRawPassd.EngMax = Ford_TrlrAidEnbl_D2_Rq.Cx7_NotUsed_4;
FordVehTrlrEnaReqRawPassd.TestTolerance = 0;
FordVehTrlrEnaReqRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrEnaReqRawPassd.WriteType = 'Rte';


FordVehTrlrHitchAgRateRawPassd = DataDict.OpSignal;
FordVehTrlrHitchAgRateRawPassd.LongName = ' Ford Vehicle Trailer Hitch Angle Rate Raw Passed';
FordVehTrlrHitchAgRateRawPassd.Description = [...
  'Output for Ford Vehicle Trailer Hitch Angle Rate Raw.The output has th' ...
  'e following states: 4094 - CxFFE_NoDataExists, 4095 - CxFFF_Faulty.'];
FordVehTrlrHitchAgRateRawPassd.DocUnits = 'Cnt';
FordVehTrlrHitchAgRateRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrHitchAgRateRawPassd.EngDT = dt.u16;
FordVehTrlrHitchAgRateRawPassd.EngInit = 4094;
FordVehTrlrHitchAgRateRawPassd.EngMin = 0;
FordVehTrlrHitchAgRateRawPassd.EngMax = 4095;
FordVehTrlrHitchAgRateRawPassd.TestTolerance = 0;
FordVehTrlrHitchAgRateRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrHitchAgRateRawPassd.WriteType = 'Rte';


FordVehTrlrHitchYawAgRawPassd = DataDict.OpSignal;
FordVehTrlrHitchYawAgRawPassd.LongName = 'Ford Vehicle Trailer Hitch Yaw Angle Raw Passed';
FordVehTrlrHitchYawAgRawPassd.Description = [...
  'Output for Ford Vehicle Trailer Hitch Yaw Angle Raw. The output has th' ...
  'e following states: 4094 - CxFFE_NoDataExists, 4095 - CxFFF_Faulty'];
FordVehTrlrHitchYawAgRawPassd.DocUnits = 'Cnt';
FordVehTrlrHitchYawAgRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrHitchYawAgRawPassd.EngDT = dt.u16;
FordVehTrlrHitchYawAgRawPassd.EngInit = 4094;
FordVehTrlrHitchYawAgRawPassd.EngMin = 0;
FordVehTrlrHitchYawAgRawPassd.EngMax = 4095;
FordVehTrlrHitchYawAgRawPassd.TestTolerance = 0;
FordVehTrlrHitchYawAgRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrHitchYawAgRawPassd.WriteType = 'Rte';


FordVehTrlrHitchYawStsPassd = DataDict.OpSignal;
FordVehTrlrHitchYawStsPassd.LongName = 'Ford Vehicle Trailer Hitch Yaw Status Passed';
FordVehTrlrHitchYawStsPassd.Description = [...
  'Provides states for Trailer Hitch Yaw Status'];
FordVehTrlrHitchYawStsPassd.DocUnits = 'Cnt';
FordVehTrlrHitchYawStsPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrHitchYawStsPassd.EngDT = enum.Ford_TrlrHitchYaw_D_Stat;
FordVehTrlrHitchYawStsPassd.EngInit = Ford_TrlrHitchYaw_D_Stat.Cx0_NoConnectionWithYrsu;
FordVehTrlrHitchYawStsPassd.EngMin = Ford_TrlrHitchYaw_D_Stat.Cx0_NoConnectionWithYrsu;
FordVehTrlrHitchYawStsPassd.EngMax = Ford_TrlrHitchYaw_D_Stat.CxF_Faulty;
FordVehTrlrHitchYawStsPassd.TestTolerance = 0;
FordVehTrlrHitchYawStsPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrHitchYawStsPassd.WriteType = 'Rte';


FordVehTrlrIdnTypRawPassd = DataDict.OpSignal;
FordVehTrlrIdnTypRawPassd.LongName = 'Ford Vehicle Trailer Identification Type Raw Passed';
FordVehTrlrIdnTypRawPassd.Description = [...
  'Provides states for Trailer Identification Type'];
FordVehTrlrIdnTypRawPassd.DocUnits = 'Cnt';
FordVehTrlrIdnTypRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrIdnTypRawPassd.EngDT = enum.Ford_TrlrIdType_D_Stat;
FordVehTrlrIdnTypRawPassd.EngInit = Ford_TrlrIdType_D_Stat.Cx0_Null;
FordVehTrlrIdnTypRawPassd.EngMin = Ford_TrlrIdType_D_Stat.Cx0_Null;
FordVehTrlrIdnTypRawPassd.EngMax = Ford_TrlrIdType_D_Stat.Cx3_Gooseneck;
FordVehTrlrIdnTypRawPassd.TestTolerance = 0;
FordVehTrlrIdnTypRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrIdnTypRawPassd.WriteType = 'Rte';


FordVehTrlrRvsCnclReqRawPassd = DataDict.OpSignal;
FordVehTrlrRvsCnclReqRawPassd.LongName = 'Ford Vehicle Trailer Reverse Cancel Request Raw Passed';
FordVehTrlrRvsCnclReqRawPassd.Description = [...
  'Provides states for Trailer Reverse Cancel Request'];
FordVehTrlrRvsCnclReqRawPassd.DocUnits = 'Cnt';
FordVehTrlrRvsCnclReqRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrRvsCnclReqRawPassd.EngDT = enum.Ford_TrlrRvrseCancl_B_Rq;
FordVehTrlrRvsCnclReqRawPassd.EngInit = Ford_TrlrRvrseCancl_B_Rq.Cx0_Null;
FordVehTrlrRvsCnclReqRawPassd.EngMin = Ford_TrlrRvrseCancl_B_Rq.Cx0_Null;
FordVehTrlrRvsCnclReqRawPassd.EngMax = Ford_TrlrRvrseCancl_B_Rq.Cx1_Cancel;
FordVehTrlrRvsCnclReqRawPassd.TestTolerance = 0;
FordVehTrlrRvsCnclReqRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrRvsCnclReqRawPassd.WriteType = 'Rte';


FordVehTrlrRvsEnaRawPassd = DataDict.OpSignal;
FordVehTrlrRvsEnaRawPassd.LongName = 'Ford Vehicle Trailer Reverse Enable Raw Passed';
FordVehTrlrRvsEnaRawPassd.Description = [...
  'Provides states for Trailer Reverse Enable'];
FordVehTrlrRvsEnaRawPassd.DocUnits = 'Cnt';
FordVehTrlrRvsEnaRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrRvsEnaRawPassd.EngDT = enum.Ford_TrlrRvrseEnbl_D2_Stat;
FordVehTrlrRvsEnaRawPassd.EngInit = Ford_TrlrRvrseEnbl_D2_Stat.Cx0_Inactive;
FordVehTrlrRvsEnaRawPassd.EngMin = Ford_TrlrRvrseEnbl_D2_Stat.Cx0_Inactive;
FordVehTrlrRvsEnaRawPassd.EngMax = Ford_TrlrRvrseEnbl_D2_Stat.Cx7_NotUsed;
FordVehTrlrRvsEnaRawPassd.TestTolerance = 0;
FordVehTrlrRvsEnaRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrRvsEnaRawPassd.WriteType = 'Rte';


FordVehTrlrRvsMsgTxtReqRawPassd = DataDict.OpSignal;
FordVehTrlrRvsMsgTxtReqRawPassd.LongName = 'Ford Vehicle Trailer Reverse Message Text Request Raw Passed';
FordVehTrlrRvsMsgTxtReqRawPassd.Description = [...
  'Customer datatype should be used. Datatype: Ford_TrlrRvrseMsgTxt_D2_Rq' ...
  '. Elements are: "Cx0_NoMessage" - 0 "Cx1_Message1" - 1 "Cx2_Message2" ' ...
  '- 2 "Cx3_Message3" - 3 "Cx4_Message4" - 4 "Cx5_Message5" - 5 "Cx6_Mess' ...
  'age6" - 6 "Cx7_Message7" - 7 "Cx8_Message8" - 8"Cx9_Message9" - 9"CxA_' ...
  'Message10" - 10 "CxB_Message11" - 11 "CxC_Message12" - 12 "CxD_Message' ...
  '13" - 13 "CxE_Message14" - 14 "CxF_Message15" - 15 "Cx10_Message16" - ' ...
  '16 "Cx11_Message17" - 17 "Cx12_Message18" - 18 "Cx13_Message19" - 19 "' ...
  'Cx14_Message20" - 20 "Cx15_Message21" - 21 "Cx16_Message22" - 22 "Cx17' ...
  '_Message23" - 23 "Cx18_Message24" - 24 "Cx19_Message25" - 25 "Cx1A_Mes' ...
  'sage26" - 26 "Cx1B_Message27" - 27 "Cx1C_Message28" - 28, "Cx1D_Messag' ...
  'e29" - 29, "Cx1E_Message30" - 30 , "Cx1F_Message31" - 31, 32 - 63 - "R' ...
  'egular Integers".'];
FordVehTrlrRvsMsgTxtReqRawPassd.DocUnits = 'Cnt';
FordVehTrlrRvsMsgTxtReqRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrRvsMsgTxtReqRawPassd.EngDT = dt.u08;
FordVehTrlrRvsMsgTxtReqRawPassd.EngInit = 0;
FordVehTrlrRvsMsgTxtReqRawPassd.EngMin = 0;
FordVehTrlrRvsMsgTxtReqRawPassd.EngMax = 63;
FordVehTrlrRvsMsgTxtReqRawPassd.TestTolerance = 0;
FordVehTrlrRvsMsgTxtReqRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrRvsMsgTxtReqRawPassd.WriteType = 'Rte';


FordVehTrlrYawRateQlyFacPassd = DataDict.OpSignal;
FordVehTrlrYawRateQlyFacPassd.LongName = 'Ford Vehicle Trailer Yaw Rate Quality Factor Passed';
FordVehTrlrYawRateQlyFacPassd.Description = [...
  'Provides different states for Trailer Yaw Rate Quality Factor'];
FordVehTrlrYawRateQlyFacPassd.DocUnits = 'Cnt';
FordVehTrlrYawRateQlyFacPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrYawRateQlyFacPassd.EngDT = enum.Ford_TrlrYaw_W_Actl_D_Qf;
FordVehTrlrYawRateQlyFacPassd.EngInit = Ford_TrlrYaw_W_Actl_D_Qf.Cx1_No_Data_Exists;
FordVehTrlrYawRateQlyFacPassd.EngMin = Ford_TrlrYaw_W_Actl_D_Qf.Cx0_Faulty;
FordVehTrlrYawRateQlyFacPassd.EngMax = Ford_TrlrYaw_W_Actl_D_Qf.Cx3_OK;
FordVehTrlrYawRateQlyFacPassd.TestTolerance = 0;
FordVehTrlrYawRateQlyFacPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrYawRateQlyFacPassd.WriteType = 'Rte';


FordVehTrlrYawRateRawPassd = DataDict.OpSignal;
FordVehTrlrYawRateRawPassd.LongName = 'Ford Vehicle Trailer Yaw Rate Raw Passed';
FordVehTrlrYawRateRawPassd.Description = [...
  'Output for Ford Vehicle Trailer Yaw Rate Raw.The output has the follow' ...
  'ing states: 65534 - CxFFE_NoDataExists, 65535 - CxFFF_Faulty'];
FordVehTrlrYawRateRawPassd.DocUnits = 'Cnt';
FordVehTrlrYawRateRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrlrYawRateRawPassd.EngDT = dt.u16;
FordVehTrlrYawRateRawPassd.EngInit = 65534;
FordVehTrlrYawRateRawPassd.EngMin = 0;
FordVehTrlrYawRateRawPassd.EngMax = 65535;
FordVehTrlrYawRateRawPassd.TestTolerance = 0;
FordVehTrlrYawRateRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrlrYawRateRawPassd.WriteType = 'Rte';


FordVehTrsmDesGearRawPassd = DataDict.OpSignal;
FordVehTrsmDesGearRawPassd.LongName = 'Ford Vehicle Transmission Desired Gear Raw Passed';
FordVehTrsmDesGearRawPassd.Description = [...
  'Provides states for Transmission Desired Gear'];
FordVehTrsmDesGearRawPassd.DocUnits = 'Cnt';
FordVehTrsmDesGearRawPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehTrsmDesGearRawPassd.EngDT = enum.Ford_TrnRng_D_Rq;
FordVehTrsmDesGearRawPassd.EngInit = Ford_TrnRng_D_Rq.Cx0_Park;
FordVehTrsmDesGearRawPassd.EngMin = Ford_TrnRng_D_Rq.Cx0_Park;
FordVehTrsmDesGearRawPassd.EngMax = Ford_TrnRng_D_Rq.CxF_Fault;
FordVehTrsmDesGearRawPassd.TestTolerance = 0;
FordVehTrsmDesGearRawPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehTrsmDesGearRawPassd.WriteType = 'Rte';


FordVehYawRateSnsrIdHiPassd = DataDict.OpSignal;
FordVehYawRateSnsrIdHiPassd.LongName = ' Ford Vehicle Yaw Rate Sensor ID High Passed';
FordVehYawRateSnsrIdHiPassd.Description = [...
  'Output for Ford Vehicle Yaw Rate Sensor ID High'];
FordVehYawRateSnsrIdHiPassd.DocUnits = 'Cnt';
FordVehYawRateSnsrIdHiPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehYawRateSnsrIdHiPassd.EngDT = dt.u32;
FordVehYawRateSnsrIdHiPassd.EngInit = 0;
FordVehYawRateSnsrIdHiPassd.EngMin = 0;
FordVehYawRateSnsrIdHiPassd.EngMax = 4294967295;
FordVehYawRateSnsrIdHiPassd.TestTolerance = 0;
FordVehYawRateSnsrIdHiPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehYawRateSnsrIdHiPassd.WriteType = 'Rte';


FordVehYawRateSnsrIdLoPassd = DataDict.OpSignal;
FordVehYawRateSnsrIdLoPassd.LongName = 'Ford Vehicle Yaw Rate Sensor ID Low Passed';
FordVehYawRateSnsrIdLoPassd.Description = [...
  'Output for Ford Vehicle Yaw Rate Sensor ID Low'];
FordVehYawRateSnsrIdLoPassd.DocUnits = 'Cnt';
FordVehYawRateSnsrIdLoPassd.SwcShoName = 'FordCanSigVldFlgGenr';
FordVehYawRateSnsrIdLoPassd.EngDT = dt.u32;
FordVehYawRateSnsrIdLoPassd.EngInit = 0;
FordVehYawRateSnsrIdLoPassd.EngMin = 0;
FordVehYawRateSnsrIdLoPassd.EngMax = 4294967295;
FordVehYawRateSnsrIdLoPassd.TestTolerance = 0;
FordVehYawRateSnsrIdLoPassd.WrittenIn = {'FordCanSigVldFlgGenrPer1'};
FordVehYawRateSnsrIdLoPassd.WriteType = 'Rte';



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
