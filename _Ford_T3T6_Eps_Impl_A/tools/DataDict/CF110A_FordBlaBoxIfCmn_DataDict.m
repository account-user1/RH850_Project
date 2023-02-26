%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Apr-2018 22:50:44       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: nz2610 %          %
%%-----------------------------------------------------------------------%

CF110A = DataDict.FDD;
CF110A.Version = '1.0.X';
CF110A.LongName = 'Ford Black Box Interface Common';
CF110A.ShoName  = 'FordBlaBoxIfCmn';
CF110A.DesignASIL = 'B';
CF110A.Description = [...
  'This function is designed to return information from Nexteer software ' ...
  'to the Ford In-House (FIH) software, vie a specified function call.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordBlaBoxIfCmnInit1 = DataDict.Runnable;
FordBlaBoxIfCmnInit1.Context = 'Rte';
FordBlaBoxIfCmnInit1.TimeStep = 0;
FordBlaBoxIfCmnInit1.Description = 'Initialization Runnable';

FordBlaBoxIfCmnPer1 = DataDict.Runnable;
FordBlaBoxIfCmnPer1.Context = 'Rte';
FordBlaBoxIfCmnPer1.TimeStep = 0.002;
FordBlaBoxIfCmnPer1.Description = 'Periodic Runnable';

%%--------------------------------------------------------------------
%% Ford In-House Features Enable/Disable via DID
%%--------------------------------------------------------------------

FIH_Read_FIH_EoL_Config = DataDict.SrvRunnable;
FIH_Read_FIH_EoL_Config.Context = 'NonRte';
FIH_Read_FIH_EoL_Config.Description = 'Server Runnable for FIH_EoL_Config';
FIH_Read_FIH_EoL_Config.Return = DataDict.CSReturn;
FIH_Read_FIH_EoL_Config.Return.Type = 'None';
FIH_Read_FIH_EoL_Config.Return.Min = [];
FIH_Read_FIH_EoL_Config.Return.Max = [];
FIH_Read_FIH_EoL_Config.Return.TestTolerance = [];
%FIH_Read_FIH_EoL_Config.Return.Type = dt.u16;

%%--------------------------------------------------------------------
%% Read from BASE EPS
%%--------------------------------------------------------------------

FIH_Read_APA_Torque_Filtered = DataDict.SrvRunnable;
FIH_Read_APA_Torque_Filtered.Context = 'NonRte';
FIH_Read_APA_Torque_Filtered.Description = [...
  'Server Runnable to provide data of Active Park Assist Torque Filtered'];
FIH_Read_APA_Torque_Filtered.Return = DataDict.CSReturn;
FIH_Read_APA_Torque_Filtered.Return.Type = 'None';
FIH_Read_APA_Torque_Filtered.Return.Min = [];
FIH_Read_APA_Torque_Filtered.Return.Max = [];
FIH_Read_APA_Torque_Filtered.Return.TestTolerance = [];

% FIH_Read_APA_Torque_Filtered.Return.Type = dt.s16;
% FIH_Read_APA_Torque_Filtered.Return.Min = -32767;
% FIH_Read_APA_Torque_Filtered.Return.Max = 32767;
% FIH_Read_APA_Torque_Filtered.Return.TestTolerance = [];
% FIH_Read_APA_Torque_Filtered.Description = [...
%   'It returns Active Park Assist Torque Filtered with a resolution of 0.0' ...
%   '009765625.'];


FIH_Read_AngleControlState = DataDict.SrvRunnable;
FIH_Read_AngleControlState.Context = 'NonRte';
FIH_Read_AngleControlState.Description = [...
  'Server Runnable to provide data of INT Angle Control Status 1 '];
FIH_Read_AngleControlState.Return = DataDict.CSReturn;
FIH_Read_AngleControlState.Return.Type = 'None';
FIH_Read_AngleControlState.Return.Min = [];
FIH_Read_AngleControlState.Return.Max = [];
FIH_Read_AngleControlState.Return.TestTolerance = [];

% FIH_Read_AngleControlState.Return.Type = dt.u08;
% FIH_Read_AngleControlState.Return.Min = 0;
% FIH_Read_AngleControlState.Return.Max = 256;
% FIH_Read_AngleControlState.Return.TestTolerance = [];
% FIH_Read_AngleControlState.Description = [...
%   'It returns INT Angle Control Status 1 with a resolution of 1.'];


FIH_Read_EPS_Assist_Torque = DataDict.SrvRunnable;
FIH_Read_EPS_Assist_Torque.Context = 'NonRte';
FIH_Read_EPS_Assist_Torque.Description = [...
  'Server Runnable to provide value of Boost Curve Assist Torque'];
FIH_Read_EPS_Assist_Torque.Return = DataDict.CSReturn;
FIH_Read_EPS_Assist_Torque.Return.Type = 'None';
FIH_Read_EPS_Assist_Torque.Return.Min = [];
FIH_Read_EPS_Assist_Torque.Return.Max = [];
FIH_Read_EPS_Assist_Torque.Return.TestTolerance = [];

% FIH_Read_EPS_Assist_Torque.Return.Type = dt.s16;
% FIH_Read_EPS_Assist_Torque.Return.Min = -32767;
% FIH_Read_EPS_Assist_Torque.Return.Max = 32767;
% FIH_Read_EPS_Assist_Torque.Return.TestTolerance = [];
% FIH_Read_EPS_Assist_Torque.Description = [...
%   'It returns Boost Curve Assist Torque with a resolution of 0.0078125.'];


FIH_Read_EPS_ColumnVelocity = DataDict.SrvRunnable;
FIH_Read_EPS_ColumnVelocity.Context = 'NonRte';
FIH_Read_EPS_ColumnVelocity.Description = [...
  'Server Runnable to provide value of Handwheel Velocity '];
FIH_Read_EPS_ColumnVelocity.Return = DataDict.CSReturn;
FIH_Read_EPS_ColumnVelocity.Return.Type = 'None';
FIH_Read_EPS_ColumnVelocity.Return.Min = [];
FIH_Read_EPS_ColumnVelocity.Return.Max = [];
FIH_Read_EPS_ColumnVelocity.Return.TestTolerance = [];

% FIH_Read_EPS_ColumnVelocity.Return.Type = dt.s16;
% FIH_Read_EPS_ColumnVelocity.Return.Min = -32767;
% FIH_Read_EPS_ColumnVelocity.Return.Max = 32767;
% FIH_Read_EPS_ColumnVelocity.Return.TestTolerance = [];
% FIH_Read_EPS_ColumnVelocity.Description = [...
%   'It returns Handwheel Velocity with a resolution of 0.25.'];


FIH_Read_EPS_CompSPA_QF = DataDict.SrvRunnable;
FIH_Read_EPS_CompSPA_QF.Context = 'NonRte';
FIH_Read_EPS_CompSPA_QF.Description = [...
  'Server Runnable to provide data of Compensated Handwheel Position Qual' ...
  'ity Factor'];
FIH_Read_EPS_CompSPA_QF.Return = DataDict.CSReturn;
FIH_Read_EPS_CompSPA_QF.Return.Type = 'None';
FIH_Read_EPS_CompSPA_QF.Return.Min = [];
FIH_Read_EPS_CompSPA_QF.Return.Max = [];
FIH_Read_EPS_CompSPA_QF.Return.TestTolerance = [];

% FIH_Read_EPS_CompSPA_QF.Return.Type = dt.u08;
% FIH_Read_EPS_CompSPA_QF.Return.Min = 0;
% FIH_Read_EPS_CompSPA_QF.Return.Max = 256;
% FIH_Read_EPS_CompSPA_QF.Return.TestTolerance = [];
% FIH_Read_EPS_CompSPA_QF.Description = [...
%   'returns Compensated Handwheel Position Quality Factor with a resolutio' ...
%   'n of 1.'];


FIH_Read_EPS_Final_Motor_Tq_App = DataDict.SrvRunnable;
FIH_Read_EPS_Final_Motor_Tq_App.Context = 'NonRte';
FIH_Read_EPS_Final_Motor_Tq_App.Description = [...
  'Server Runnable to provide data of Applied Final Motor Torque'];
FIH_Read_EPS_Final_Motor_Tq_App.Return = DataDict.CSReturn;
FIH_Read_EPS_Final_Motor_Tq_App.Return.Type = 'None';
FIH_Read_EPS_Final_Motor_Tq_App.Return.Min = [];
FIH_Read_EPS_Final_Motor_Tq_App.Return.Max = [];
FIH_Read_EPS_Final_Motor_Tq_App.Return.TestTolerance = [];

% FIH_Read_EPS_Final_Motor_Tq_App.Return.Type = dt.s32;
% FIH_Read_EPS_Final_Motor_Tq_App.Return.Min = -2147483647;
% FIH_Read_EPS_Final_Motor_Tq_App.Return.Max = 2147483647;
% FIH_Read_EPS_Final_Motor_Tq_App.Return.TestTolerance = [];
% FIH_Read_EPS_Final_Motor_Tq_App.Description = [...
%   'It returns Applied Final Motor Torque with a resolution of 0.03125.'];


FIH_Read_EPS_Final_Motor_Tq_Rq = DataDict.SrvRunnable;
FIH_Read_EPS_Final_Motor_Tq_Rq.Context = 'NonRte';
FIH_Read_EPS_Final_Motor_Tq_Rq.Description = [...
  'Server Runnable to provide data of Requested Final Motor Torque.'];
FIH_Read_EPS_Final_Motor_Tq_Rq.Return = DataDict.CSReturn;
FIH_Read_EPS_Final_Motor_Tq_Rq.Return.Type = 'None';
FIH_Read_EPS_Final_Motor_Tq_Rq.Return.Min = [];
FIH_Read_EPS_Final_Motor_Tq_Rq.Return.Max = [];
FIH_Read_EPS_Final_Motor_Tq_Rq.Return.TestTolerance = [];

% FIH_Read_EPS_Final_Motor_Tq_Rq.Return.Type = dt.s32;
% FIH_Read_EPS_Final_Motor_Tq_Rq.Return.Min = -2147483647;
% FIH_Read_EPS_Final_Motor_Tq_Rq.Return.Max = 2147483647;
% FIH_Read_EPS_Final_Motor_Tq_Rq.Return.TestTolerance = [];
% FIH_Read_EPS_Final_Motor_Tq_Rq.Description = [...
%   'It returns Requested Final Motor Torque with a resolution of 0.03125.'];


FIH_Read_EPS_InputTorqueFilt = DataDict.SrvRunnable;
FIH_Read_EPS_InputTorqueFilt.Context = 'NonRte';
FIH_Read_EPS_InputTorqueFilt.Description = [...
  'Server Runnable to provide value of Boost Curve Input Torque'];
FIH_Read_EPS_InputTorqueFilt.Return = DataDict.CSReturn;
FIH_Read_EPS_InputTorqueFilt.Return.Type = 'None';
FIH_Read_EPS_InputTorqueFilt.Return.Min = [];
FIH_Read_EPS_InputTorqueFilt.Return.Max = [];
FIH_Read_EPS_InputTorqueFilt.Return.TestTolerance = [];

% FIH_Read_EPS_InputTorqueFilt.Return.Type = dt.s16;
% FIH_Read_EPS_InputTorqueFilt.Return.Min = -32767;
% FIH_Read_EPS_InputTorqueFilt.Return.Max = 32767;
% FIH_Read_EPS_InputTorqueFilt.Return.TestTolerance = [];
% FIH_Read_EPS_InputTorqueFilt.Description = [...
%   'It returns Boost Curve Input Torque with a resolution of 0.0009765625.' ...
%   ''];


FIH_Read_EPS_InputTorqueRaw = DataDict.SrvRunnable;
FIH_Read_EPS_InputTorqueRaw.Context = 'NonRte';
FIH_Read_EPS_InputTorqueRaw.Description = [...
  'Server Runnable to provide value of Input Torque Raw.'];
FIH_Read_EPS_InputTorqueRaw.Return = DataDict.CSReturn;
FIH_Read_EPS_InputTorqueRaw.Return.Type = 'None';
FIH_Read_EPS_InputTorqueRaw.Return.Min = [];
FIH_Read_EPS_InputTorqueRaw.Return.Max = [];
FIH_Read_EPS_InputTorqueRaw.Return.TestTolerance = [];

% FIH_Read_EPS_InputTorqueRaw.Return.Type = dt.s16;
% FIH_Read_EPS_InputTorqueRaw.Return.Min = -32767;
% FIH_Read_EPS_InputTorqueRaw.Return.Max = 32767;
% FIH_Read_EPS_InputTorqueRaw.Return.TestTolerance = [];
% FIH_Read_EPS_InputTorqueRaw.Description = [...
%   'It returns Input Torque Raw with a resolution of 0.0009765625.'];


FIH_Read_EPS_Personalization = DataDict.SrvRunnable;
FIH_Read_EPS_Personalization.Context = 'NonRte';
FIH_Read_EPS_Personalization.Description = [...
  'Server Runnable to provide data of Selective Driving Mode Steering Mod' ...
  'e'];
FIH_Read_EPS_Personalization.Return = DataDict.CSReturn;
FIH_Read_EPS_Personalization.Return.Type = 'None';
FIH_Read_EPS_Personalization.Return.Min = [];
FIH_Read_EPS_Personalization.Return.Max = [];
FIH_Read_EPS_Personalization.Return.TestTolerance = [];

% FIH_Read_EPS_Personalization.Return.Type = dt.u08;
% FIH_Read_EPS_Personalization.Return.Min = 0;
% FIH_Read_EPS_Personalization.Return.Max = 256;
% FIH_Read_EPS_Personalization.Return.TestTolerance = [];
% FIH_Read_EPS_Personalization.Description = [...
%   'It returns Selective Driving Mode Steering Mode with a resolution of 1' ...
%   ''];


FIH_Read_EPS_Rel_SteeringAngle = DataDict.SrvRunnable;
FIH_Read_EPS_Rel_SteeringAngle.Context = 'NonRte';
FIH_Read_EPS_Rel_SteeringAngle.Description = [...
  'Server Runnable to provide value of Relative Handwheel Position.'];
FIH_Read_EPS_Rel_SteeringAngle.Return = DataDict.CSReturn;
FIH_Read_EPS_Rel_SteeringAngle.Return.Type = 'None';
FIH_Read_EPS_Rel_SteeringAngle.Return.Min = [];
FIH_Read_EPS_Rel_SteeringAngle.Return.Max = [];
FIH_Read_EPS_Rel_SteeringAngle.Return.TestTolerance = [];

% FIH_Read_EPS_Rel_SteeringAngle.Return.Type = dt.s16;
% FIH_Read_EPS_Rel_SteeringAngle.Return.Min = -32767;
% FIH_Read_EPS_Rel_SteeringAngle.Return.Max = 32767;
% FIH_Read_EPS_Rel_SteeringAngle.Return.TestTolerance = [];
% FIH_Read_EPS_Rel_SteeringAngle.Description = [...
%   'It returns Relative Handwheel Position value'];


FIH_Read_EPS_SteeringAngle = DataDict.SrvRunnable;
FIH_Read_EPS_SteeringAngle.Context = 'NonRte';
FIH_Read_EPS_SteeringAngle.Description = [...
  'Server Runnable to provide value of Compensated Handwheel Position'];
FIH_Read_EPS_SteeringAngle.Return = DataDict.CSReturn;
FIH_Read_EPS_SteeringAngle.Return.Type = 'None';
FIH_Read_EPS_SteeringAngle.Return.Min = [];
FIH_Read_EPS_SteeringAngle.Return.Max = [];
FIH_Read_EPS_SteeringAngle.Return.TestTolerance = [];

% FIH_Read_EPS_SteeringAngle.Return.Type = dt.s16;
% FIH_Read_EPS_SteeringAngle.Return.Min = -32767;
% FIH_Read_EPS_SteeringAngle.Return.Max = 32767;
% FIH_Read_EPS_SteeringAngle.Return.TestTolerance = [];
% FIH_Read_EPS_SteeringAngle.Description = [...
%   'It returns Compensated Handwheel Position value'];


FIH_Read_EPS_System_Time = DataDict.SrvRunnable;
FIH_Read_EPS_System_Time.Context = 'NonRte';
FIH_Read_EPS_System_Time.Description = [...
  'Server Runnable to provide system time. '];
FIH_Read_EPS_System_Time.Return = DataDict.CSReturn;
FIH_Read_EPS_System_Time.Return.Type = 'None';
FIH_Read_EPS_System_Time.Return.Min = [];
FIH_Read_EPS_System_Time.Return.Max = [];
FIH_Read_EPS_System_Time.Return.TestTolerance = [];

% FIH_Read_EPS_System_Time.Return.Type = dt.u32;
% FIH_Read_EPS_System_Time.Return.Min = 0;
% FIH_Read_EPS_System_Time.Return.Max = 4294967295;
% FIH_Read_EPS_System_Time.Return.TestTolerance = [];
% FIH_Read_EPS_System_Time.Description = [...
%   'It returns System Time with a resolution of 1.'];


FIH_Read_TireCircumference = DataDict.SrvRunnable;
FIH_Read_TireCircumference.Context = 'NonRte';
FIH_Read_TireCircumference.Description = [...
  'Server Runnable to provide value of Tire Circumference'];
FIH_Read_TireCircumference.Return = DataDict.CSReturn;
FIH_Read_TireCircumference.Return.Type = 'None';
FIH_Read_TireCircumference.Return.Min = [];
FIH_Read_TireCircumference.Return.Max = [];
FIH_Read_TireCircumference.Return.TestTolerance = [];

% FIH_Read_TireCircumference.Return.Type = dt.u16;
% FIH_Read_TireCircumference.Return.Min = 0;
% FIH_Read_TireCircumference.Return.Max = 65535;
% FIH_Read_TireCircumference.Return.TestTolerance = [];
% FIH_Read_TireCircumference.Description = [...
%   'It returns Tire Circumference with a resolution of 1.'];


FIH_Read_EPS_VehicleSpeed = DataDict.SrvRunnable;
FIH_Read_EPS_VehicleSpeed.Context = 'NonRte';
FIH_Read_EPS_VehicleSpeed.Description = [...
  'Server Runnable to provide value of Filtered Vehicle Speed '];
FIH_Read_EPS_VehicleSpeed.Return = DataDict.CSReturn;
FIH_Read_EPS_VehicleSpeed.Return.Type = 'None';
FIH_Read_EPS_VehicleSpeed.Return.Min = [];
FIH_Read_EPS_VehicleSpeed.Return.Max = [];
FIH_Read_EPS_VehicleSpeed.Return.TestTolerance = [];

% FIH_Read_EPS_VehicleSpeed.Return.Type = dt.u16;
% FIH_Read_EPS_VehicleSpeed.Return.Min = 0;
% FIH_Read_EPS_VehicleSpeed.Return.Max = 65535;
% FIH_Read_EPS_VehicleSpeed.Return.TestTolerance = [];
% FIH_Read_EPS_VehicleSpeed.Description = [...
%   'It returns Filtered Vehicle Speed with a resolution of 0.015625.'];


FIH_Read_EPS_VehicleSpeed_Raw = DataDict.SrvRunnable;
FIH_Read_EPS_VehicleSpeed_Raw.Context = 'NonRte';
FIH_Read_EPS_VehicleSpeed_Raw.Description = [...
  'Server Runnable to provide value of Vehicle Speed'];
FIH_Read_EPS_VehicleSpeed_Raw.Return = DataDict.CSReturn;
FIH_Read_EPS_VehicleSpeed_Raw.Return.Type = 'None';
FIH_Read_EPS_VehicleSpeed_Raw.Return.Min = [];
FIH_Read_EPS_VehicleSpeed_Raw.Return.Max = [];
FIH_Read_EPS_VehicleSpeed_Raw.Return.TestTolerance = [];

% FIH_Read_EPS_VehicleSpeed_Raw.Return.Type = dt.u16;
% FIH_Read_EPS_VehicleSpeed_Raw.Return.Min = 0;
% FIH_Read_EPS_VehicleSpeed_Raw.Return.Max = 65535;
% FIH_Read_EPS_VehicleSpeed_Raw.Return.TestTolerance = [];
% FIH_Read_EPS_VehicleSpeed_Raw.Description = [...
%   'It returns Vehicle Speed with a resolution of 0.015625.'];


FIH_Read_EPSSystemState = DataDict.SrvRunnable;
FIH_Read_EPSSystemState.Context = 'NonRte';
FIH_Read_EPSSystemState.Description = [...
  'Server Runnable to provide value of EPS System State'];
FIH_Read_EPSSystemState.Return = DataDict.CSReturn;
FIH_Read_EPSSystemState.Return.Type = 'None';
FIH_Read_EPSSystemState.Return.Min = [];
FIH_Read_EPSSystemState.Return.Max = [];
FIH_Read_EPSSystemState.Return.TestTolerance = [];
% FIH_Read_EPSSystemState.Return.Type = dt.u08;

FIH_Read_EngineSize = DataDict.SrvRunnable;
FIH_Read_EngineSize.Context = 'NonRte';
FIH_Read_EngineSize.Description = [...
  'Server Runnable to provide value of Engine Torque Class '];
FIH_Read_EngineSize.Return = DataDict.CSReturn;
FIH_Read_EngineSize.Return.Type = 'None';
FIH_Read_EngineSize.Return.Min = [];
FIH_Read_EngineSize.Return.Max = [];
FIH_Read_EngineSize.Return.TestTolerance = [];

% FIH_Read_EngineSize.Return.Type = dt.u08;
% FIH_Read_EngineSize.Return.Min = 0;
% FIH_Read_EngineSize.Return.Max = 255;
% FIH_Read_EngineSize.Return.TestTolerance = [];
% FIH_Read_EngineSize.Description = [...
%   'It returns Engine Torque Class with a resolution of 1.'];


FIH_Read_MaxAssistanceTorque = DataDict.SrvRunnable;
FIH_Read_MaxAssistanceTorque.Context = 'NonRte';
FIH_Read_MaxAssistanceTorque.Description = [...
  'Server Runnable to provide value of Maximum Assistance Torque '];
FIH_Read_MaxAssistanceTorque.Return = DataDict.CSReturn;
FIH_Read_MaxAssistanceTorque.Return.Type = 'None';
FIH_Read_MaxAssistanceTorque.Return.Min = [];
FIH_Read_MaxAssistanceTorque.Return.Max = [];
FIH_Read_MaxAssistanceTorque.Return.TestTolerance = [];

% FIH_Read_MaxAssistanceTorque.Return.Type = dt.u08;
% FIH_Read_MaxAssistanceTorque.Return.Min = 0;
% FIH_Read_MaxAssistanceTorque.Return.Max = 255;
% FIH_Read_MaxAssistanceTorque.Return.TestTolerance = [];
% FIH_Read_MaxAssistanceTorque.Description = [...
%   'It returns Max Assistance Torque with a resolution of 1.'];


FIH_Read_RackPinionRatio = DataDict.SrvRunnable;
FIH_Read_RackPinionRatio.Context = 'NonRte';
FIH_Read_RackPinionRatio.Description = [...
  'Server Runnable to provide value of Rack To Pinion Ratio'];
FIH_Read_RackPinionRatio.Return = DataDict.CSReturn;
FIH_Read_RackPinionRatio.Return.Type = 'None';
FIH_Read_RackPinionRatio.Return.Min = [];
FIH_Read_RackPinionRatio.Return.Max = [];
FIH_Read_RackPinionRatio.Return.TestTolerance = [];

% FIH_Read_RackPinionRatio.Return.Type = dt.u16;
% FIH_Read_RackPinionRatio.Return.Min = 0;
% FIH_Read_RackPinionRatio.Return.Max = 65535;
% FIH_Read_RackPinionRatio.Return.TestTolerance = [];
% FIH_Read_RackPinionRatio.Description = [...
%   'It returns Rack to Pinion Ratio with a resolution of 0.00390625.'];


FIH_Read_SAPPAngleControlStat1 = DataDict.SrvRunnable;
FIH_Read_SAPPAngleControlStat1.Context = 'NonRte';
FIH_Read_SAPPAngleControlStat1.Description = [...
  'Server Runnable to provide value of Semi Automatic Parallel Park Angle' ...
  ' Control Status 1 '];
FIH_Read_SAPPAngleControlStat1.Return = DataDict.CSReturn;
FIH_Read_SAPPAngleControlStat1.Return.Type = 'None';
FIH_Read_SAPPAngleControlStat1.Return.Min = [];
FIH_Read_SAPPAngleControlStat1.Return.Max = [];
FIH_Read_SAPPAngleControlStat1.Return.TestTolerance = [];

% FIH_Read_SAPPAngleControlStat1.Return.Type = dt.u08;
% FIH_Read_SAPPAngleControlStat1.Return.Min = 0;
% FIH_Read_SAPPAngleControlStat1.Return.Max = 255;
% FIH_Read_SAPPAngleControlStat1.Return.TestTolerance = [];
% FIH_Read_SAPPAngleControlStat1.Description = [...
%   'It returns Semi-Automatic Parallel Park Angle Control Status 1 with a ' ...
%   'resolution of 1.'];


FIH_Read_SAPPAngleControlStat2 = DataDict.SrvRunnable;
FIH_Read_SAPPAngleControlStat2.Context = 'NonRte';
FIH_Read_SAPPAngleControlStat2.Description = [...
  'Server Runnable to provide value of Semi Automatic Parallel Park Angle' ...
  ' Control Status 2 '];
FIH_Read_SAPPAngleControlStat2.Return = DataDict.CSReturn;
FIH_Read_SAPPAngleControlStat2.Return.Type = 'None';
FIH_Read_SAPPAngleControlStat2.Return.Min = [];
FIH_Read_SAPPAngleControlStat2.Return.Max = [];
FIH_Read_SAPPAngleControlStat2.Return.TestTolerance = [];

% FIH_Read_SAPPAngleControlStat2.Return.Type = dt.u08;
% FIH_Read_SAPPAngleControlStat2.Return.Min = 0;
% FIH_Read_SAPPAngleControlStat2.Return.Max = 255;
% FIH_Read_SAPPAngleControlStat2.Return.TestTolerance = [];
% FIH_Read_SAPPAngleControlStat2.Description = [...
%   'It returns Semi-Automatic Parallel Park Angle Control Status 2 in a bo' ...
%   'olean format.'];


FIH_Read_SAPPAngleControlStat3 = DataDict.SrvRunnable;
FIH_Read_SAPPAngleControlStat3.Context = 'NonRte';
FIH_Read_SAPPAngleControlStat3.Description = [...
  'Server Runnable to provide value of Semi Automatic Parallel Park Angle' ...
  ' Control Status 3 '];
FIH_Read_SAPPAngleControlStat3.Return = DataDict.CSReturn;
FIH_Read_SAPPAngleControlStat3.Return.Type = 'None';
FIH_Read_SAPPAngleControlStat3.Return.Min = [];
FIH_Read_SAPPAngleControlStat3.Return.Max = [];
FIH_Read_SAPPAngleControlStat3.Return.TestTolerance = [];

% FIH_Read_SAPPAngleControlStat3.Return.Type = dt.u08;
% FIH_Read_SAPPAngleControlStat3.Return.Min = 0;
% FIH_Read_SAPPAngleControlStat3.Return.Max = 255;
% FIH_Read_SAPPAngleControlStat3.Return.TestTolerance = [];
% FIH_Read_SAPPAngleControlStat3.Description = [...
%   'It returns Semi-Automatic Parallel Park Angle Control Status 3 in a bo' ...
%   'olean format.'];


FIH_Read_SAPPAngleControlStat4 = DataDict.SrvRunnable;
FIH_Read_SAPPAngleControlStat4.Context = 'NonRte';
FIH_Read_SAPPAngleControlStat4.Description = [...
  'Server Runnable to provide value of Semi Automatic Parallel Park Angle' ...
  ' Control Status 4'];
FIH_Read_SAPPAngleControlStat4.Return = DataDict.CSReturn;
FIH_Read_SAPPAngleControlStat4.Return.Type = 'None';
FIH_Read_SAPPAngleControlStat4.Return.Min = [];
FIH_Read_SAPPAngleControlStat4.Return.Max = [];
FIH_Read_SAPPAngleControlStat4.Return.TestTolerance = [];

% FIH_Read_SAPPAngleControlStat4.Return.Type = dt.u08;
% FIH_Read_SAPPAngleControlStat4.Return.Min = 0;
% FIH_Read_SAPPAngleControlStat4.Return.Max = 255;
% FIH_Read_SAPPAngleControlStat4.Return.TestTolerance = [];
% FIH_Read_SAPPAngleControlStat4.Description = [...
%   'It returns Semi-Automatic Parallel Park Angle Control Status 4 in a bo' ...
%   'olean format'];


FIH_Read_SAPPAngleControlStat5 = DataDict.SrvRunnable;
FIH_Read_SAPPAngleControlStat5.Context = 'NonRte';
FIH_Read_SAPPAngleControlStat5.Description = [...
  'Server Runnable to provide value of Semi Automatic Parallel Park Angle' ...
  ' Control Status 5 '];
FIH_Read_SAPPAngleControlStat5.Return = DataDict.CSReturn;
FIH_Read_SAPPAngleControlStat5.Return.Type = 'None';
FIH_Read_SAPPAngleControlStat5.Return.Min = [];
FIH_Read_SAPPAngleControlStat5.Return.Max = [];
FIH_Read_SAPPAngleControlStat5.Return.TestTolerance = [];

% FIH_Read_SAPPAngleControlStat5.Return.Type = dt.u08;
% FIH_Read_SAPPAngleControlStat5.Return.Min = 0;
% FIH_Read_SAPPAngleControlStat5.Return.Max = 255;
% FIH_Read_SAPPAngleControlStat5.Return.TestTolerance = [];
% FIH_Read_SAPPAngleControlStat5.Description = [...
%   'It returns Semi-Automatic Parallel Park Angle Control Status 5 in a bo' ...
%   'olean format'];


% FIH_Read_TBA_EAC_Status = DataDict.SrvRunnable;
% FIH_Read_TBA_EAC_Status.Context = 'NonRte';
% FIH_Read_TBA_EAC_Status.Description = [...
  % 'Server Runnable to read TBA EAC Status '];
% FIH_Read_TBA_EAC_Status.Return = DataDict.CSReturn;
% FIH_Read_TBA_EAC_Status.Return.Type = 'None';
% FIH_Read_TBA_EAC_Status.Return.Min = [];
% FIH_Read_TBA_EAC_Status.Return.Max = [];
% FIH_Read_TBA_EAC_Status.Return.TestTolerance = [];
%FIH_Read_TBA_EAC_Status.Return.Type = dt.u16;


FIH_Read_VehicleSteeringRatio = DataDict.SrvRunnable;
FIH_Read_VehicleSteeringRatio.Context = 'NonRte';
FIH_Read_VehicleSteeringRatio.Description = [...
  'Server Runnable to provide Vehicle Steering Ratio '];
FIH_Read_VehicleSteeringRatio.Return = DataDict.CSReturn;
FIH_Read_VehicleSteeringRatio.Return.Type = 'None';
FIH_Read_VehicleSteeringRatio.Return.Min = [];
FIH_Read_VehicleSteeringRatio.Return.Max = [];
FIH_Read_VehicleSteeringRatio.Return.TestTolerance = [];

% FIH_Read_VehicleSteeringRatio.Return.Type = dt.u16;
% FIH_Read_VehicleSteeringRatio.Return.Min = 0;
% FIH_Read_VehicleSteeringRatio.Return.Max = 65535;
% FIH_Read_VehicleSteeringRatio.Return.TestTolerance = [];
% FIH_Read_VehicleSteeringRatio.Description = [...
%   'It returns Vehicle Steering Ratio with a resolution of 0.00390625.'];


FIH_Read_WheelBase = DataDict.SrvRunnable;
FIH_Read_WheelBase.Context = 'NonRte';
FIH_Read_WheelBase.Description = [...
  'Server Runnable to provide value of Vehicle Wheel Base '];
FIH_Read_WheelBase.Return = DataDict.CSReturn;
FIH_Read_WheelBase.Return.Type = 'None';
FIH_Read_WheelBase.Return.Min = [];
FIH_Read_WheelBase.Return.Max = [];
FIH_Read_WheelBase.Return.TestTolerance = [];

% FIH_Read_WheelBase.Return.Type = dt.u16;
% FIH_Read_WheelBase.Return.Min = 0;
% FIH_Read_WheelBase.Return.Max = 65535;
% FIH_Read_WheelBase.Return.TestTolerance = [];
% FIH_Read_WheelBase.Description = [...
%   'It returns Vehicle Wheel Base with a resolution of 1.'];



%%----------------------------------------------------------------------
%% Read from HS-CAN
%%----------------------------------------------------------------------

FIH_Read_AbsActv_B_Actl = DataDict.SrvRunnable;
FIH_Read_AbsActv_B_Actl.Context = 'NonRte';
FIH_Read_AbsActv_B_Actl.Description = [...
  'Server Runnable to provide data of ABS Active'];
FIH_Read_AbsActv_B_Actl.Return = DataDict.CSReturn;
FIH_Read_AbsActv_B_Actl.Return.Type = 'None';
FIH_Read_AbsActv_B_Actl.Return.Min = [];
FIH_Read_AbsActv_B_Actl.Return.Max = [];
FIH_Read_AbsActv_B_Actl.Return.TestTolerance = [];

% FIH_Read_AbsActv_B_Actl.Return.Type = dt.u08;
% FIH_Read_AbsActv_B_Actl.Return.Min = 0;
% FIH_Read_AbsActv_B_Actl.Return.Max = 255;
% FIH_Read_AbsActv_B_Actl.Return.TestTolerance = [];
% FIH_Read_AbsActv_B_Actl.Description = [...
%   'It provides data of ABS Active to FIH function'];


FIH_Read_ApedPosPcActl_D_Qf = DataDict.SrvRunnable;
FIH_Read_ApedPosPcActl_D_Qf.Context = 'NonRte';
FIH_Read_ApedPosPcActl_D_Qf.Description = [...
  'Server Runnable to provide data of Accelerator Pedal Position Status Q' ...
  'uality Factor'];
FIH_Read_ApedPosPcActl_D_Qf.Return = DataDict.CSReturn;
FIH_Read_ApedPosPcActl_D_Qf.Return.Type = 'None';
FIH_Read_ApedPosPcActl_D_Qf.Return.Min = [];
FIH_Read_ApedPosPcActl_D_Qf.Return.Max = [];
FIH_Read_ApedPosPcActl_D_Qf.Return.TestTolerance = [];

% FIH_Read_ApedPosPcActl_D_Qf.Return.Type = dt.u08;
% FIH_Read_ApedPosPcActl_D_Qf.Return.Min = 0;
% FIH_Read_ApedPosPcActl_D_Qf.Return.Max = 255;
% FIH_Read_ApedPosPcActl_D_Qf.Return.TestTolerance = [];
% FIH_Read_ApedPosPcActl_D_Qf.Description = [...
%   'It provides data of Accelerator Pedal Position Status Quality Factor t' ...
%   'o FIH function'];


FIH_Read_ApedPos_Pc_ActlArb = DataDict.SrvRunnable;
FIH_Read_ApedPos_Pc_ActlArb.Context = 'NonRte';
FIH_Read_ApedPos_Pc_ActlArb.Description = [...
  'Server Runnable to provide data of Accelerator Pedal Position Status'];
FIH_Read_ApedPos_Pc_ActlArb.Return = DataDict.CSReturn;
FIH_Read_ApedPos_Pc_ActlArb.Return.Type = 'None';
FIH_Read_ApedPos_Pc_ActlArb.Return.Min = [];
FIH_Read_ApedPos_Pc_ActlArb.Return.Max = [];
FIH_Read_ApedPos_Pc_ActlArb.Return.TestTolerance = [];

% FIH_Read_ApedPos_Pc_ActlArb.Return.Type = dt.u16;
% FIH_Read_ApedPos_Pc_ActlArb.Return.Min = 0;
% FIH_Read_ApedPos_Pc_ActlArb.Return.Max = 65535;
% FIH_Read_ApedPos_Pc_ActlArb.Return.TestTolerance = [];
% FIH_Read_ApedPos_Pc_ActlArb.Description = [...
%   'It provides data of Accelerator Pedal Position Status to FIH function'];


FIH_Read_BpedDrvAppl_Actl = DataDict.SrvRunnable;
FIH_Read_BpedDrvAppl_Actl.Context = 'NonRte';
FIH_Read_BpedDrvAppl_Actl.Description = [...
  'Server Runnable to provide data of Brake Pedal Applied'];
FIH_Read_BpedDrvAppl_Actl.Return = DataDict.CSReturn;
FIH_Read_BpedDrvAppl_Actl.Return.Type = 'None';
FIH_Read_BpedDrvAppl_Actl.Return.Min = [];
FIH_Read_BpedDrvAppl_Actl.Return.Max = [];
FIH_Read_BpedDrvAppl_Actl.Return.TestTolerance = [];

% FIH_Read_BpedDrvAppl_Actl.Return.Type = dt.u08;
% FIH_Read_BpedDrvAppl_Actl.Return.Min = 0;
% FIH_Read_BpedDrvAppl_Actl.Return.Max = 255;
% FIH_Read_BpedDrvAppl_Actl.Return.TestTolerance = [];
% FIH_Read_BpedDrvAppl_Actl.Description = [...
%   'It provides data of Brake Pedal Applied to FIH function'];


FIH_Read_BpedDrvAppl_QF = DataDict.SrvRunnable;
FIH_Read_BpedDrvAppl_QF.Context = 'NonRte';
FIH_Read_BpedDrvAppl_QF.Description = [...
  'Server Runnable to provide data of Brake Pedal Applied Quality Factor'];
FIH_Read_BpedDrvAppl_QF.Return = DataDict.CSReturn;
FIH_Read_BpedDrvAppl_QF.Return.Type = 'None';
FIH_Read_BpedDrvAppl_QF.Return.Min = [];
FIH_Read_BpedDrvAppl_QF.Return.Max = [];
FIH_Read_BpedDrvAppl_QF.Return.TestTolerance = [];

% FIH_Read_BpedDrvAppl_QF.Return.Type = dt.u08;
% FIH_Read_BpedDrvAppl_QF.Return.Min = 0;
% FIH_Read_BpedDrvAppl_QF.Return.Max = 255;
% FIH_Read_BpedDrvAppl_QF.Return.TestTolerance = [];
% FIH_Read_BpedDrvAppl_QF.Description = [...
%   'It provides data of Brake Pedal Applied Quality Factor to FIH function' ...
%   ''];


FIH_Read_BrkTot_Tq_Actl = DataDict.SrvRunnable;
FIH_Read_BrkTot_Tq_Actl.Context = 'NonRte';
FIH_Read_BrkTot_Tq_Actl.Description = [...
  'Server Runnable to provide data of Actual Brake Torque'];
FIH_Read_BrkTot_Tq_Actl.Return = DataDict.CSReturn;
FIH_Read_BrkTot_Tq_Actl.Return.Type = 'None';
FIH_Read_BrkTot_Tq_Actl.Return.Min = [];
FIH_Read_BrkTot_Tq_Actl.Return.Max = [];
FIH_Read_BrkTot_Tq_Actl.Return.TestTolerance = [];

% FIH_Read_BrkTot_Tq_Actl.Return.Type = dt.u16;
% FIH_Read_BrkTot_Tq_Actl.Return.Min = [];
% FIH_Read_BrkTot_Tq_Actl.Return.Max = [];
% FIH_Read_BrkTot_Tq_Actl.Return.TestTolerance = [];
% FIH_Read_BrkTot_Tq_Actl.Description = [...
%   'It provides data of Actual Brake Torque to FIH function'];


FIH_Read_CmbbBrkDis_B_Actl = DataDict.SrvRunnable;
FIH_Read_CmbbBrkDis_B_Actl.Context = 'NonRte';
FIH_Read_CmbbBrkDis_B_Actl.Description = [...
  'Server Runnable to provide data of Collision Mitigation By Braking Dis' ...
  'abled'];
FIH_Read_CmbbBrkDis_B_Actl.Return = DataDict.CSReturn;
FIH_Read_CmbbBrkDis_B_Actl.Return.Type = 'None';
FIH_Read_CmbbBrkDis_B_Actl.Return.Min = [];
FIH_Read_CmbbBrkDis_B_Actl.Return.Max = [];
FIH_Read_CmbbBrkDis_B_Actl.Return.TestTolerance = [];

% FIH_Read_CmbbBrkDis_B_Actl.Return.Type = dt.u08;
% FIH_Read_CmbbBrkDis_B_Actl.Return.Min = 0;
% FIH_Read_CmbbBrkDis_B_Actl.Return.Max = 255;
% FIH_Read_CmbbBrkDis_B_Actl.Return.TestTolerance = [];
% FIH_Read_CmbbBrkDis_B_Actl.Description = [...
%   'It provides data of Collision Mitigation By Braking Disabled to FIH fu' ...
%   'nction'];


FIH_Read_CmbbDeny_B_ActlBrk = DataDict.SrvRunnable;
FIH_Read_CmbbDeny_B_ActlBrk.Context = 'NonRte';
FIH_Read_CmbbDeny_B_ActlBrk.Description = [...
  'Server Runnable to provide data of Collistion Mitigation By Braking De' ...
  'nied'];
FIH_Read_CmbbDeny_B_ActlBrk.Return = DataDict.CSReturn;
FIH_Read_CmbbDeny_B_ActlBrk.Return.Type = 'None';
FIH_Read_CmbbDeny_B_ActlBrk.Return.Min = [];
FIH_Read_CmbbDeny_B_ActlBrk.Return.Max = [];
FIH_Read_CmbbDeny_B_ActlBrk.Return.TestTolerance = [];

% FIH_Read_CmbbDeny_B_ActlBrk.Return.Type = dt.u08;
% FIH_Read_CmbbDeny_B_ActlBrk.Return.Min = 0;
% FIH_Read_CmbbDeny_B_ActlBrk.Return.Max = 255;
% FIH_Read_CmbbDeny_B_ActlBrk.Return.TestTolerance = [];
% FIH_Read_CmbbDeny_B_ActlBrk.Description = [...
%   'It provides data of Collistion Mitigation By Braking Denied to FIH fun' ...
%   'ction'];


FIH_Read_CmbbObjClass_D_Stat = DataDict.SrvRunnable;
FIH_Read_CmbbObjClass_D_Stat.Context = 'NonRte';
FIH_Read_CmbbObjClass_D_Stat.Description = [...
  'Server Runnable to provide data of Object Type Classification'];
FIH_Read_CmbbObjClass_D_Stat.Return = DataDict.CSReturn;
FIH_Read_CmbbObjClass_D_Stat.Return.Type = 'None';
FIH_Read_CmbbObjClass_D_Stat.Return.Min = [];
FIH_Read_CmbbObjClass_D_Stat.Return.Max = [];
FIH_Read_CmbbObjClass_D_Stat.Return.TestTolerance = [];

% FIH_Read_CmbbObjClass_D_Stat.Return.Type = dt.u08;
% FIH_Read_CmbbObjClass_D_Stat.Return.Min = 0;
% FIH_Read_CmbbObjClass_D_Stat.Return.Max = 255;
% FIH_Read_CmbbObjClass_D_Stat.Return.TestTolerance = [];
% FIH_Read_CmbbObjClass_D_Stat.Description = [...
%   'It provides data of Object Type Classification to FIH function'];


FIH_Read_CmbbObjColl_T_Actl = DataDict.SrvRunnable;
FIH_Read_CmbbObjColl_T_Actl.Context = 'NonRte';
FIH_Read_CmbbObjColl_T_Actl.Description = [...
  'Server Runnable to provide data of Time to Collision'];
FIH_Read_CmbbObjColl_T_Actl.Return = DataDict.CSReturn;
FIH_Read_CmbbObjColl_T_Actl.Return.Type = 'None';
FIH_Read_CmbbObjColl_T_Actl.Return.Min = [];
FIH_Read_CmbbObjColl_T_Actl.Return.Max = [];
FIH_Read_CmbbObjColl_T_Actl.Return.TestTolerance = [];

% FIH_Read_CmbbObjColl_T_Actl.Return.Type = dt.u08;
% FIH_Read_CmbbObjColl_T_Actl.Return.Min = 0;
% FIH_Read_CmbbObjColl_T_Actl.Return.Max = 255;
% FIH_Read_CmbbObjColl_T_Actl.Return.TestTolerance = [];
% FIH_Read_CmbbObjColl_T_Actl.Description = [...
%   'It provides data of Time to Collision to FIH function'];


FIH_Read_CmbbObjConfdnc_D_Stat = DataDict.SrvRunnable;
FIH_Read_CmbbObjConfdnc_D_Stat.Context = 'NonRte';
FIH_Read_CmbbObjConfdnc_D_Stat.Description = [...
  'Server Runnable to provide data of Object Data Confidence Level'];
FIH_Read_CmbbObjConfdnc_D_Stat.Return = DataDict.CSReturn;
FIH_Read_CmbbObjConfdnc_D_Stat.Return.Type = 'None';
FIH_Read_CmbbObjConfdnc_D_Stat.Return.Min = [];
FIH_Read_CmbbObjConfdnc_D_Stat.Return.Max = [];
FIH_Read_CmbbObjConfdnc_D_Stat.Return.TestTolerance = [];

% FIH_Read_CmbbObjConfdnc_D_Stat.Return.Type = dt.u08;
% FIH_Read_CmbbObjConfdnc_D_Stat.Return.Min = 0;
% FIH_Read_CmbbObjConfdnc_D_Stat.Return.Max = 255;
% FIH_Read_CmbbObjConfdnc_D_Stat.Return.TestTolerance = [];
% FIH_Read_CmbbObjConfdnc_D_Stat.Description = [...
%   'It provides data of Object Data Confidence Level to FIH function'];


FIH_Read_CmbbObjDistLat_L_Actl = DataDict.SrvRunnable;
FIH_Read_CmbbObjDistLat_L_Actl.Context = 'NonRte';
FIH_Read_CmbbObjDistLat_L_Actl.Description = [...
  'Server Runnable to provide data of Lateral Distance'];
FIH_Read_CmbbObjDistLat_L_Actl.Return = DataDict.CSReturn;
FIH_Read_CmbbObjDistLat_L_Actl.Return.Type = 'None';
FIH_Read_CmbbObjDistLat_L_Actl.Return.Min = [];
FIH_Read_CmbbObjDistLat_L_Actl.Return.Max = [];
FIH_Read_CmbbObjDistLat_L_Actl.Return.TestTolerance = [];

% FIH_Read_CmbbObjDistLat_L_Actl.Return.Type = dt.u16;
% FIH_Read_CmbbObjDistLat_L_Actl.Return.Min = 0;
% FIH_Read_CmbbObjDistLat_L_Actl.Return.Max = 65535;
% FIH_Read_CmbbObjDistLat_L_Actl.Return.TestTolerance = [];
% FIH_Read_CmbbObjDistLat_L_Actl.Description = [...
%   'It provides data of Lateral Distance to FIH function'];


FIH_Read_CmbbObjDistLong_L_Actl = DataDict.SrvRunnable;
FIH_Read_CmbbObjDistLong_L_Actl.Context = 'NonRte';
FIH_Read_CmbbObjDistLong_L_Actl.Description = [...
  'Server Runnable to provide data of Longitudinal Distance'];
FIH_Read_CmbbObjDistLong_L_Actl.Return = DataDict.CSReturn;
FIH_Read_CmbbObjDistLong_L_Actl.Return.Type = 'None';
FIH_Read_CmbbObjDistLong_L_Actl.Return.Min = [];
FIH_Read_CmbbObjDistLong_L_Actl.Return.Max = [];
FIH_Read_CmbbObjDistLong_L_Actl.Return.TestTolerance = [];

% FIH_Read_CmbbObjDistLong_L_Actl.Return.Type = dt.u16;
% FIH_Read_CmbbObjDistLong_L_Actl.Return.Min = 0;
% FIH_Read_CmbbObjDistLong_L_Actl.Return.Max = 65535;
% FIH_Read_CmbbObjDistLong_L_Actl.Return.TestTolerance = [];
% FIH_Read_CmbbObjDistLong_L_Actl.Arguments(1).Description = [...
%   'It provides data of Longitudinal Distance to FIH function'];


FIH_Read_CmbbObjRelLat_V_Actl = DataDict.SrvRunnable;
FIH_Read_CmbbObjRelLat_V_Actl.Context = 'NonRte';
FIH_Read_CmbbObjRelLat_V_Actl.Description = [...
  'Server Runnable to provide data of Relative Lateral Velocity'];
FIH_Read_CmbbObjRelLat_V_Actl.Return = DataDict.CSReturn;
FIH_Read_CmbbObjRelLat_V_Actl.Return.Type = 'None';
FIH_Read_CmbbObjRelLat_V_Actl.Return.Min = [];
FIH_Read_CmbbObjRelLat_V_Actl.Return.Max = [];
FIH_Read_CmbbObjRelLat_V_Actl.Return.TestTolerance = [];

% FIH_Read_CmbbObjRelLat_V_Actl.Return.Type = dt.u16;
% FIH_Read_CmbbObjRelLat_V_Actl.Return.Min = 0;
% FIH_Read_CmbbObjRelLat_V_Actl.Return.Max = 65535;
% FIH_Read_CmbbObjRelLat_V_Actl.Return.TestTolerance = [];
% FIH_Read_CmbbObjRelLat_V_Actl.Description = [...
%   'It provides data of Relative Lateral Velocity to FIH function'];


FIH_Read_CmbbObjRelLong_V_Actl = DataDict.SrvRunnable;
FIH_Read_CmbbObjRelLong_V_Actl.Context = 'NonRte';
FIH_Read_CmbbObjRelLong_V_Actl.Description = [...
  'Server Runnable to provide data of Relative Longitudinal Velocity'];
FIH_Read_CmbbObjRelLong_V_Actl.Return = DataDict.CSReturn;
FIH_Read_CmbbObjRelLong_V_Actl.Return.Type = 'None';
FIH_Read_CmbbObjRelLong_V_Actl.Return.Min = [];
FIH_Read_CmbbObjRelLong_V_Actl.Return.Max = [];
FIH_Read_CmbbObjRelLong_V_Actl.Return.TestTolerance = [];

% FIH_Read_CmbbObjRelLong_V_Actl.Return.Type = dt.u16;
% FIH_Read_CmbbObjRelLong_V_Actl.Return.Min = 0;
% FIH_Read_CmbbObjRelLong_V_Actl.Return.Max = 65535;
% FIH_Read_CmbbObjRelLong_V_Actl.Return.TestTolerance = [];
% FIH_Read_CmbbObjRelLong_V_Actl.Description = [...
%   'It provides data of Relative Longitudinal Velocity to FIH function'];


FIH_Read_EngAout_N_Actl = DataDict.SrvRunnable;
FIH_Read_EngAout_N_Actl.Context = 'NonRte';
FIH_Read_EngAout_N_Actl.Description = [...
  'Server Runnable to provide data of Engine Speed'];
FIH_Read_EngAout_N_Actl.Return = DataDict.CSReturn;
FIH_Read_EngAout_N_Actl.Return.Type = 'None';
FIH_Read_EngAout_N_Actl.Return.Min = [];
FIH_Read_EngAout_N_Actl.Return.Max = [];
FIH_Read_EngAout_N_Actl.Return.TestTolerance = [];

% FIH_Read_EngAout_N_Actl.Return.Type = dt.u16;
% FIH_Read_EngAout_N_Actl.Return.Min = 0;
% FIH_Read_EngAout_N_Actl.Return.Max = 65535;
% FIH_Read_EngAout_N_Actl.Return.TestTolerance = [];
% FIH_Read_EngAout_N_Actl.Description = [...
%   'It provides data of Engine Speed to FIH function'];


FIH_Read_EsaEnbl_D_Rq = DataDict.SrvRunnable;
FIH_Read_EsaEnbl_D_Rq.Context = 'NonRte';
FIH_Read_EsaEnbl_D_Rq.Description = [...
  'Server Runnable to provide data of ESA Enable Request'];
FIH_Read_EsaEnbl_D_Rq.Return = DataDict.CSReturn;
FIH_Read_EsaEnbl_D_Rq.Return.Type = 'None';
FIH_Read_EsaEnbl_D_Rq.Return.Min = [];
FIH_Read_EsaEnbl_D_Rq.Return.Max = [];
FIH_Read_EsaEnbl_D_Rq.Return.TestTolerance = [];

% FIH_Read_EsaEnbl_D_Rq.Return.Type = dt.u08;
% FIH_Read_EsaEnbl_D_Rq.Return.Min = 0;
% FIH_Read_EsaEnbl_D_Rq.Return.Max = 255;
% FIH_Read_EsaEnbl_D_Rq.Return.TestTolerance = [];
% FIH_Read_EsaEnbl_D_Rq.Description = [...
%   'It provides data of ESA Enable Request to FIH function'];


FIH_Read_EsaOn_B_Rq = DataDict.SrvRunnable;
FIH_Read_EsaOn_B_Rq.Context = 'NonRte';
FIH_Read_EsaOn_B_Rq.Description = [...
  'Server Runnable to provide data of Requested ESA Mode'];
FIH_Read_EsaOn_B_Rq.Return = DataDict.CSReturn;
FIH_Read_EsaOn_B_Rq.Return.Type = 'None';
FIH_Read_EsaOn_B_Rq.Return.Min = [];
FIH_Read_EsaOn_B_Rq.Return.Max = [];
FIH_Read_EsaOn_B_Rq.Return.TestTolerance = [];

% FIH_Read_EsaOn_B_Rq.Return.Type = dt.u08;
% FIH_Read_EsaOn_B_Rq.Return.Min = 0;
% FIH_Read_EsaOn_B_Rq.Return.Max = 255;
% FIH_Read_EsaOn_B_Rq.Return.TestTolerance = [];
% FIH_Read_EsaOn_B_Rq.Description = [...
%   'It provides data of Requested ESA Mode to FIH function'];


FIH_Read_FIH_Msg_In_1_High = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_1_High.Context = 'NonRte';
FIH_Read_FIH_Msg_In_1_High.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 1 Hig' ...
  'h Part'];
FIH_Read_FIH_Msg_In_1_High.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_1_High.Return.Type = 'None';
FIH_Read_FIH_Msg_In_1_High.Return.Min = [];
FIH_Read_FIH_Msg_In_1_High.Return.Max = [];
FIH_Read_FIH_Msg_In_1_High.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_1_High.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_1_High.Return.Min = 0;
% FIH_Read_FIH_Msg_In_1_High.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_1_High.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_1_High.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 1 High Part to FIH f' ...
%   'unction'];


FIH_Read_FIH_Msg_In_1_Low = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_1_Low.Context = 'NonRte';
FIH_Read_FIH_Msg_In_1_Low.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 1 Low' ...
  ' Part'];
FIH_Read_FIH_Msg_In_1_Low.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_1_Low.Return.Type = 'None';
FIH_Read_FIH_Msg_In_1_Low.Return.Min = [];
FIH_Read_FIH_Msg_In_1_Low.Return.Max = [];
FIH_Read_FIH_Msg_In_1_Low.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_1_Low.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_1_Low.Return.Min = 0;
% FIH_Read_FIH_Msg_In_1_Low.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_1_Low.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_1_Low.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 1 Low Part to FIH fu' ...
%   'nction'];


FIH_Read_FIH_Msg_In_2_High = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_2_High.Context = 'NonRte';
FIH_Read_FIH_Msg_In_2_High.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 2 Hig' ...
  'h Part'];
FIH_Read_FIH_Msg_In_2_High.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_2_High.Return.Type = 'None';
FIH_Read_FIH_Msg_In_2_High.Return.Min = [];
FIH_Read_FIH_Msg_In_2_High.Return.Max = [];
FIH_Read_FIH_Msg_In_2_High.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_2_High.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_2_High.Return.Min = 0;
% FIH_Read_FIH_Msg_In_2_High.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_2_High.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_2_High.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 2 High Part to FIH f' ...
%   'unction'];


FIH_Read_FIH_Msg_In_2_Low = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_2_Low.Context = 'NonRte';
FIH_Read_FIH_Msg_In_2_Low.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 2 Low' ...
  ' Part'];
FIH_Read_FIH_Msg_In_2_Low.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_2_Low.Return.Type = 'None';
FIH_Read_FIH_Msg_In_2_Low.Return.Min = [];
FIH_Read_FIH_Msg_In_2_Low.Return.Max = [];
FIH_Read_FIH_Msg_In_2_Low.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_2_Low.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_2_Low.Return.Min = 0;
% FIH_Read_FIH_Msg_In_2_Low.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_2_Low.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_2_Low.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 2 Low Part to FIH fu' ...
%   'nction'];


FIH_Read_FIH_Msg_In_3_High = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_3_High.Context = 'NonRte';
FIH_Read_FIH_Msg_In_3_High.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 3 Hig' ...
  'h Part'];
FIH_Read_FIH_Msg_In_3_High.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_3_High.Return.Type = 'None';
FIH_Read_FIH_Msg_In_3_High.Return.Min = [];
FIH_Read_FIH_Msg_In_3_High.Return.Max = [];
FIH_Read_FIH_Msg_In_3_High.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_3_High.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_3_High.Return.Min = 0;
% FIH_Read_FIH_Msg_In_3_High.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_3_High.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_3_High.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 3 High Part to FIH f' ...
%   'unction'];


FIH_Read_FIH_Msg_In_3_Low = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_3_Low.Context = 'NonRte';
FIH_Read_FIH_Msg_In_3_Low.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 3 Low' ...
  ' Part'];
FIH_Read_FIH_Msg_In_3_Low.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_3_Low.Return.Type = 'None';
FIH_Read_FIH_Msg_In_3_Low.Return.Min = [];
FIH_Read_FIH_Msg_In_3_Low.Return.Max = [];
FIH_Read_FIH_Msg_In_3_Low.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_3_Low.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_3_Low.Return.Min = 0;
% FIH_Read_FIH_Msg_In_3_Low.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_3_Low.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_3_Low.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 3 Low Part to FIH fu' ...
%   'nction'];


FIH_Read_FIH_Msg_In_4_High = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_4_High.Context = 'NonRte';
FIH_Read_FIH_Msg_In_4_High.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 4 Hig' ...
  'h Part'];
FIH_Read_FIH_Msg_In_4_High.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_4_High.Return.Type = 'None';
FIH_Read_FIH_Msg_In_4_High.Return.Min = [];
FIH_Read_FIH_Msg_In_4_High.Return.Max = [];
FIH_Read_FIH_Msg_In_4_High.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_4_High.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_4_High.Return.Min = 0;
% FIH_Read_FIH_Msg_In_4_High.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_4_High.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_4_High.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 4 High Part to FIH f' ...
%   'unction'];


FIH_Read_FIH_Msg_In_4_Low = DataDict.SrvRunnable;
FIH_Read_FIH_Msg_In_4_Low.Context = 'NonRte';
FIH_Read_FIH_Msg_In_4_Low.Description = [...
  'Server Runnable to provide data of Ford Vehicle BB Message Input 4 Low' ...
  ' Part'];
FIH_Read_FIH_Msg_In_4_Low.Return = DataDict.CSReturn;
FIH_Read_FIH_Msg_In_4_Low.Return.Type = 'None';
FIH_Read_FIH_Msg_In_4_Low.Return.Min = [];
FIH_Read_FIH_Msg_In_4_Low.Return.Max = [];
FIH_Read_FIH_Msg_In_4_Low.Return.TestTolerance = [];

% FIH_Read_FIH_Msg_In_4_Low.Return.Type = dt.u32;
% FIH_Read_FIH_Msg_In_4_Low.Return.Min = 0;
% FIH_Read_FIH_Msg_In_4_Low.Return.Max = 4294967295;
% FIH_Read_FIH_Msg_In_4_Low.Return.TestTolerance = [];
% FIH_Read_FIH_Msg_In_4_Low.Description = [...
%   'It provides data of Ford Vehicle BB Message Input 4 Low Part to FIH fu' ...
%   'nction'];


FIH_Read_GearLvrPos_D_Actl = DataDict.SrvRunnable;
FIH_Read_GearLvrPos_D_Actl.Context = 'NonRte';
FIH_Read_GearLvrPos_D_Actl.Description = [...
  'Server Runnable to provide data of Gear Lever Position'];
FIH_Read_GearLvrPos_D_Actl.Return = DataDict.CSReturn;
FIH_Read_GearLvrPos_D_Actl.Return.Type = 'None';
FIH_Read_GearLvrPos_D_Actl.Return.Min = [];
FIH_Read_GearLvrPos_D_Actl.Return.Max = [];
FIH_Read_GearLvrPos_D_Actl.Return.TestTolerance = [];

% FIH_Read_GearLvrPos_D_Actl.Return.Type = dt.u08;
% FIH_Read_GearLvrPos_D_Actl.Return.Min = 0;
% FIH_Read_GearLvrPos_D_Actl.Return.Max = 255;
% FIH_Read_GearLvrPos_D_Actl.Return.TestTolerance = [];
% FIH_Read_GearLvrPos_D_Actl.Description = [...
%   'It provides data of Gear Lever Position to FIH function'];


FIH_Read_GearPosition = DataDict.SrvRunnable;
FIH_Read_GearPosition.Context = 'NonRte';
FIH_Read_GearPosition.Description = [...
  'Server Runnable to provide data of Transmission Gear Position'];
FIH_Read_GearPosition.Return = DataDict.CSReturn;
FIH_Read_GearPosition.Return.Type = 'None';
FIH_Read_GearPosition.Return.Min = [];
FIH_Read_GearPosition.Return.Max = [];
FIH_Read_GearPosition.Return.TestTolerance = [];

% FIH_Read_GearPosition.Return.Type = dt.u08;
% FIH_Read_GearPosition.Return.Min = 0;
% FIH_Read_GearPosition.Return.Max = 255;
% FIH_Read_GearPosition.Return.TestTolerance = [];
% FIH_Read_GearPosition.Description = [...
%   'It provides data of Transmission Gear Position to FIH function'];


FIH_Read_GearRvrse_D_Actl = DataDict.SrvRunnable;
FIH_Read_GearRvrse_D_Actl.Context = 'NonRte';
FIH_Read_GearRvrse_D_Actl.Description = [...
  'Server Runnable to provide data of Vehicle in Reverse'];
FIH_Read_GearRvrse_D_Actl.Return = DataDict.CSReturn;
FIH_Read_GearRvrse_D_Actl.Return.Type = 'None';
FIH_Read_GearRvrse_D_Actl.Return.Min = [];
FIH_Read_GearRvrse_D_Actl.Return.Max = [];
FIH_Read_GearRvrse_D_Actl.Return.TestTolerance = [];

% FIH_Read_GearRvrse_D_Actl.Return.Type = dt.u08;
% FIH_Read_GearRvrse_D_Actl.Return.Min = 0;
% FIH_Read_GearRvrse_D_Actl.Return.Max = 255;
% FIH_Read_GearRvrse_D_Actl.Return.TestTolerance = [];
% FIH_Read_GearRvrse_D_Actl.Description = [...
%   'It provides data of Vehicle in Reverse to FIH function'];


FIH_Read_HandsOffCnfm_B_Rq = DataDict.SrvRunnable;
FIH_Read_HandsOffCnfm_B_Rq.Context = 'NonRte';
FIH_Read_HandsOffCnfm_B_Rq.Description = [...
  'Server Runnable to provide data of Lateral Control Hand Off Detection ' ...
  'Torque Stimulus Request'];
FIH_Read_HandsOffCnfm_B_Rq.Return = DataDict.CSReturn;
FIH_Read_HandsOffCnfm_B_Rq.Return.Type = 'None';
FIH_Read_HandsOffCnfm_B_Rq.Return.Min = [];
FIH_Read_HandsOffCnfm_B_Rq.Return.Max = [];
FIH_Read_HandsOffCnfm_B_Rq.Return.TestTolerance = [];

% FIH_Read_HandsOffCnfm_B_Rq.Return.Type = dt.u08;
% FIH_Read_HandsOffCnfm_B_Rq.Return.Min = 0;
% FIH_Read_HandsOffCnfm_B_Rq.Return.Max = 255;
% FIH_Read_HandsOffCnfm_B_Rq.Return.TestTolerance = [];
% FIH_Read_HandsOffCnfm_B_Rq.Description = [...
%   'It provides data of Lateral Control Hand Off Detection Torque Stimulus' ...
%   ' Request to FIH function'];


FIH_Read_HitchToVehAxle = DataDict.SrvRunnable;
FIH_Read_HitchToVehAxle.Context = 'NonRte';
FIH_Read_HitchToVehAxle.Description = [...
  'Server Runnable to provide data of Trailer Ball to Axle'];
FIH_Read_HitchToVehAxle.Return = DataDict.CSReturn;
FIH_Read_HitchToVehAxle.Return.Type = 'None';
FIH_Read_HitchToVehAxle.Return.Min = [];
FIH_Read_HitchToVehAxle.Return.Max = [];
FIH_Read_HitchToVehAxle.Return.TestTolerance = [];

% FIH_Read_HitchToVehAxle.Return.Type = dt.u08;
% FIH_Read_HitchToVehAxle.Return.Min = 0;
% FIH_Read_HitchToVehAxle.Return.Max = 255;
% FIH_Read_HitchToVehAxle.Return.TestTolerance = [];
% FIH_Read_HitchToVehAxle.Description = [...
%   'It provides data of Trailer Ball to Axle to FIH function'];


FIH_Read_Ignition_Status = DataDict.SrvRunnable;
FIH_Read_Ignition_Status.Context = 'NonRte';
FIH_Read_Ignition_Status.Description = [...
  'Server Runnable to provide data of CAN Ignition Status'];
FIH_Read_Ignition_Status.Return = DataDict.CSReturn;
FIH_Read_Ignition_Status.Return.Type = 'None';
FIH_Read_Ignition_Status.Return.Min = [];
FIH_Read_Ignition_Status.Return.Max = [];
FIH_Read_Ignition_Status.Return.TestTolerance = [];

% FIH_Read_Ignition_Status.Return.Type = dt.u08;
% FIH_Read_Ignition_Status.Return.Min = 0;
% FIH_Read_Ignition_Status.Return.Max = 255;
% FIH_Read_Ignition_Status.Return.TestTolerance = [];
% FIH_Read_Ignition_Status.Description = [...
%   'It provides data of CAN Ignition Status to FIH function'];


FIH_Read_LaCurvature_No_Calc = DataDict.SrvRunnable;
FIH_Read_LaCurvature_No_Calc.Context = 'NonRte';
FIH_Read_LaCurvature_No_Calc.Description = [...
  'Server Runnable to provide data of LKS Curvature'];
FIH_Read_LaCurvature_No_Calc.Return = DataDict.CSReturn;
FIH_Read_LaCurvature_No_Calc.Return.Type = 'None';
FIH_Read_LaCurvature_No_Calc.Return.Min = [];
FIH_Read_LaCurvature_No_Calc.Return.Max = [];
FIH_Read_LaCurvature_No_Calc.Return.TestTolerance = [];

% FIH_Read_LaCurvature_No_Calc.Return.Type = dt.u16;
% FIH_Read_LaCurvature_No_Calc.Return.Min = 0;
% FIH_Read_LaCurvature_No_Calc.Return.Max = 65535;
% FIH_Read_LaCurvature_No_Calc.Return.TestTolerance = [];
% FIH_Read_LaCurvature_No_Calc.Description = [...
%   'It provides data of LKS Curvature to FIH function'];


FIH_Read_LaRampType_B_Req = DataDict.SrvRunnable;
FIH_Read_LaRampType_B_Req.Context = 'NonRte';
FIH_Read_LaRampType_B_Req.Description = [...
  'Server Runnable to provide data of LKS Ramp Type'];
FIH_Read_LaRampType_B_Req.Return = DataDict.CSReturn;
FIH_Read_LaRampType_B_Req.Return.Type = 'None';
FIH_Read_LaRampType_B_Req.Return.Min = [];
FIH_Read_LaRampType_B_Req.Return.Max = [];
FIH_Read_LaRampType_B_Req.Return.TestTolerance = [];

% FIH_Read_LaRampType_B_Req.Return.Type = dt.u08;
% FIH_Read_LaRampType_B_Req.Return.Min = 0;
% FIH_Read_LaRampType_B_Req.Return.Max = 255;
% FIH_Read_LaRampType_B_Req.Return.TestTolerance = [];
% FIH_Read_LaRampType_B_Req.Description = [...
%   'It provides data of LKS Ramp Type to FIH function'];


FIH_Read_LaRefAng_No_Req = DataDict.SrvRunnable;
FIH_Read_LaRefAng_No_Req.Context = 'NonRte';
FIH_Read_LaRefAng_No_Req.Description = [...
  'Server Runnable to provide data of LKS Requested Angle'];
FIH_Read_LaRefAng_No_Req.Return = DataDict.CSReturn;
FIH_Read_LaRefAng_No_Req.Return.Type = 'None';
FIH_Read_LaRefAng_No_Req.Return.Min = [];
FIH_Read_LaRefAng_No_Req.Return.Max = [];
FIH_Read_LaRefAng_No_Req.Return.TestTolerance = [];

% FIH_Read_LaRefAng_No_Req.Return.Type = dt.u16;
% FIH_Read_LaRefAng_No_Req.Return.Min = 0;
% FIH_Read_LaRefAng_No_Req.Return.Max = 65535;
% FIH_Read_LaRefAng_No_Req.Return.TestTolerance = [];
% FIH_Read_LaRefAng_No_Req.Description = [...
%   'It provides data of LKS Requested Angle to FIH function'];


FIH_Read_LatCtlCurv_NoRate_Actl = DataDict.SrvRunnable;
FIH_Read_LatCtlCurv_NoRate_Actl.Context = 'NonRte';
FIH_Read_LatCtlCurv_NoRate_Actl.Description = [...
  'Server Runnable to provide data of Lateral Control Curvature Rate'];
FIH_Read_LatCtlCurv_NoRate_Actl.Return = DataDict.CSReturn;
FIH_Read_LatCtlCurv_NoRate_Actl.Return.Type = 'None';
FIH_Read_LatCtlCurv_NoRate_Actl.Return.Min = [];
FIH_Read_LatCtlCurv_NoRate_Actl.Return.Max = [];
FIH_Read_LatCtlCurv_NoRate_Actl.Return.TestTolerance = [];

% FIH_Read_LatCtlCurv_NoRate_Actl.Return.Type = dt.u16;
% FIH_Read_LatCtlCurv_NoRate_Actl.Return.Min = 0;
% FIH_Read_LatCtlCurv_NoRate_Actl.Return.Max = 65535;
% FIH_Read_LatCtlCurv_NoRate_Actl.Return.TestTolerance = [];
% FIH_Read_LatCtlCurv_NoRate_Actl.Description = [...
%   'It provides data of Lateral Control Curvature Rate to FIH function'];


FIH_Read_LatCtlCurv_No_Actl = DataDict.SrvRunnable;
FIH_Read_LatCtlCurv_No_Actl.Context = 'NonRte';
FIH_Read_LatCtlCurv_No_Actl.Description = [...
  'Server Runnable to provide data of Lateral Control Curvature'];
FIH_Read_LatCtlCurv_No_Actl.Return = DataDict.CSReturn;
FIH_Read_LatCtlCurv_No_Actl.Return.Type = 'None';
FIH_Read_LatCtlCurv_No_Actl.Return.Min = [];
FIH_Read_LatCtlCurv_No_Actl.Return.Max = [];
FIH_Read_LatCtlCurv_No_Actl.Return.TestTolerance = [];

% FIH_Read_LatCtlCurv_No_Actl.Return.Type = dt.u16;
% FIH_Read_LatCtlCurv_No_Actl.Return.Min = 0;
% FIH_Read_LatCtlCurv_No_Actl.Return.Max = 65535;
% FIH_Read_LatCtlCurv_No_Actl.Return.TestTolerance = [];
% FIH_Read_LatCtlCurv_No_Actl.Arguments(1).Description = [...
%   'It provides data of Lateral Control Curvature to FIH function'];


FIH_Read_LatCtlPathOffst_L_Actl = DataDict.SrvRunnable;
FIH_Read_LatCtlPathOffst_L_Actl.Context = 'NonRte';
FIH_Read_LatCtlPathOffst_L_Actl.Description = [...
  'Server Runnable to provide data of Lateral Control Path Offset'];
FIH_Read_LatCtlPathOffst_L_Actl.Return = DataDict.CSReturn;
FIH_Read_LatCtlPathOffst_L_Actl.Return.Type = 'None';
FIH_Read_LatCtlPathOffst_L_Actl.Return.Min = [];
FIH_Read_LatCtlPathOffst_L_Actl.Return.Max = [];
FIH_Read_LatCtlPathOffst_L_Actl.Return.TestTolerance = [];

% FIH_Read_LatCtlPathOffst_L_Actl.Return.Type = dt.u16;
% FIH_Read_LatCtlPathOffst_L_Actl.Return.Min = 0;
% FIH_Read_LatCtlPathOffst_L_Actl.Return.Max = 65535;
% FIH_Read_LatCtlPathOffst_L_Actl.Return.TestTolerance = [];
% FIH_Read_LatCtlPathOffst_L_Actl.Description = [...
%   'It provides data of Lateral Control Path Offset to FIH function'];


FIH_Read_LatCtlPath_An_Actl = DataDict.SrvRunnable;
FIH_Read_LatCtlPath_An_Actl.Context = 'NonRte';
FIH_Read_LatCtlPath_An_Actl.Description = [...
  'Server Runnable to provide data of Lateral Control Path'];
FIH_Read_LatCtlPath_An_Actl.Return = DataDict.CSReturn;
FIH_Read_LatCtlPath_An_Actl.Return.Type = 'None';
FIH_Read_LatCtlPath_An_Actl.Return.Min = [];
FIH_Read_LatCtlPath_An_Actl.Return.Max = [];
FIH_Read_LatCtlPath_An_Actl.Return.TestTolerance = [];

% FIH_Read_LatCtlPath_An_Actl.Return.Type = dt.u16;
% FIH_Read_LatCtlPath_An_Actl.Return.Min = 0;
% FIH_Read_LatCtlPath_An_Actl.Return.Max = 65535;
% FIH_Read_LatCtlPath_An_Actl.Return.TestTolerance = [];
% FIH_Read_LatCtlPath_An_Actl.Description = [...
%   'It provides data of Lateral Control Path to FIH function'];


FIH_Read_LatCtlPrecision_D_Rq = DataDict.SrvRunnable;
FIH_Read_LatCtlPrecision_D_Rq.Context = 'NonRte';
FIH_Read_LatCtlPrecision_D_Rq.Description = [...
  'Server Runnable to provide data of Lateral Control Precision'];
FIH_Read_LatCtlPrecision_D_Rq.Return = DataDict.CSReturn;
FIH_Read_LatCtlPrecision_D_Rq.Return.Type = 'None';
FIH_Read_LatCtlPrecision_D_Rq.Return.Min = [];
FIH_Read_LatCtlPrecision_D_Rq.Return.Max = [];
FIH_Read_LatCtlPrecision_D_Rq.Return.TestTolerance = [];

% FIH_Read_LatCtlPrecision_D_Rq.Return.Type = dt.u08;
% FIH_Read_LatCtlPrecision_D_Rq.Return.Min = 0;
% FIH_Read_LatCtlPrecision_D_Rq.Return.Max = 255;
% FIH_Read_LatCtlPrecision_D_Rq.Return.TestTolerance = [];
% FIH_Read_LatCtlPrecision_D_Rq.Description = [...
%   'It provides data of Lateral Control Precision to FIH function'];

FIH_Read_LatCtlRampType_D_Rq = DataDict.SrvRunnable;
FIH_Read_LatCtlRampType_D_Rq.Context = 'NonRte';
FIH_Read_LatCtlRampType_D_Rq.Description = [...
  'Server Runnable to provide data of Lateral Control Ramp Type'];
FIH_Read_LatCtlRampType_D_Rq.Return = DataDict.CSReturn;
FIH_Read_LatCtlRampType_D_Rq.Return.Type = 'None';
FIH_Read_LatCtlRampType_D_Rq.Return.Min = [];
FIH_Read_LatCtlRampType_D_Rq.Return.Max = [];
FIH_Read_LatCtlRampType_D_Rq.Return.TestTolerance = [];

% FIH_Read_LatCtlRampType_D_Rq.Return.Type = dt.u08;
% FIH_Read_LatCtlRampType_D_Rq.Return.Min = 0;
% FIH_Read_LatCtlRampType_D_Rq.Return.Max = 255;
% FIH_Read_LatCtlRampType_D_Rq.Return.TestTolerance = [];
% FIH_Read_LatCtlRampType_D_Rq.Description = [...
%   'It provides data of Lateral Control Ramp Type to FIH function'];


FIH_Read_LatCtlRangeMax = DataDict.SrvRunnable;
FIH_Read_LatCtlRangeMax.Context = 'NonRte';
FIH_Read_LatCtlRangeMax.Description = [...
  'Server Runnable to provide data of Lateral Control Range Max'];
FIH_Read_LatCtlRangeMax.Return = DataDict.CSReturn;
FIH_Read_LatCtlRangeMax.Return.Type = 'None';
FIH_Read_LatCtlRangeMax.Return.Min = [];
FIH_Read_LatCtlRangeMax.Return.Max = [];
FIH_Read_LatCtlRangeMax.Return.TestTolerance = [];

% FIH_Read_LatCtlRangeMax.Return.Type = dt.u08;
% FIH_Read_LatCtlRangeMax.Return.Min = 0;
% FIH_Read_LatCtlRangeMax.Return.Max = 255;
% FIH_Read_LatCtlRangeMax.Return.TestTolerance = [];
% FIH_Read_LatCtlRangeMax.Description = [...
%   'It provides data of Lateral Control Range Max to FIH function'];


FIH_Read_LatCtl_D_Rq = DataDict.SrvRunnable;
FIH_Read_LatCtl_D_Rq.Context = 'NonRte';
FIH_Read_LatCtl_D_Rq.Description = [...
  'Server Runnable to provide data of Lateral Control Request'];
FIH_Read_LatCtl_D_Rq.Return = DataDict.CSReturn;
FIH_Read_LatCtl_D_Rq.Return.Type = 'None';
FIH_Read_LatCtl_D_Rq.Return.Min = [];
FIH_Read_LatCtl_D_Rq.Return.Max = [];
FIH_Read_LatCtl_D_Rq.Return.TestTolerance = [];

% FIH_Read_LatCtl_D_Rq.Return.Type = dt.u08;
% FIH_Read_LatCtl_D_Rq.Return.Min = 0;
% FIH_Read_LatCtl_D_Rq.Return.Max = 255;
% FIH_Read_LatCtl_D_Rq.Return.TestTolerance = [];
% FIH_Read_LatCtl_D_Rq.Description = [...
%   'It provides data of Lateral Control Request to FIH function'];


FIH_Read_LdwActvIntns_D_Req = DataDict.SrvRunnable;
FIH_Read_LdwActvIntns_D_Req.Context = 'NonRte';
FIH_Read_LdwActvIntns_D_Req.Description = [...
  'Server Runnable to provide data of LDW Intensity'];
FIH_Read_LdwActvIntns_D_Req.Return = DataDict.CSReturn;
FIH_Read_LdwActvIntns_D_Req.Return.Type = 'None';
FIH_Read_LdwActvIntns_D_Req.Return.Min = [];
FIH_Read_LdwActvIntns_D_Req.Return.Max = [];
FIH_Read_LdwActvIntns_D_Req.Return.TestTolerance = [];

% FIH_Read_LdwActvIntns_D_Req.Return.Type = dt.u08;
% FIH_Read_LdwActvIntns_D_Req.Return.Min = 0;
% FIH_Read_LdwActvIntns_D_Req.Return.Max = 255;
% FIH_Read_LdwActvIntns_D_Req.Return.TestTolerance = [];
% FIH_Read_LdwActvIntns_D_Req.Description = [...
%   'It provides data of LDW Intensity to FIH function'];


FIH_Read_LdwActvStats_D_Req = DataDict.SrvRunnable;
FIH_Read_LdwActvStats_D_Req.Context = 'NonRte';
FIH_Read_LdwActvStats_D_Req.Description = [...
  'Server Runnable to provide data of LDW Status'];
FIH_Read_LdwActvStats_D_Req.Return = DataDict.CSReturn;
FIH_Read_LdwActvStats_D_Req.Return.Type = 'None';
FIH_Read_LdwActvStats_D_Req.Return.Min = [];
FIH_Read_LdwActvStats_D_Req.Return.Max = [];
FIH_Read_LdwActvStats_D_Req.Return.TestTolerance = [];

% FIH_Read_LdwActvStats_D_Req.Return.Type = dt.u08;
% FIH_Read_LdwActvStats_D_Req.Return.Min = 0;
% FIH_Read_LdwActvStats_D_Req.Return.Max = 255;
% FIH_Read_LdwActvStats_D_Req.Return.TestTolerance = [];
% FIH_Read_LdwActvStats_D_Req.Description = [...
%   'It provides data of LDW Status to FIH function'];


FIH_Read_LkaActvStats_D_Req = DataDict.SrvRunnable;
FIH_Read_LkaActvStats_D_Req.Context = 'NonRte';
FIH_Read_LkaActvStats_D_Req.Description = [...
  'Server Runnable to provide data of LKA Status'];
FIH_Read_LkaActvStats_D_Req.Return = DataDict.CSReturn;
FIH_Read_LkaActvStats_D_Req.Return.Type = 'None';
FIH_Read_LkaActvStats_D_Req.Return.Min = [];
FIH_Read_LkaActvStats_D_Req.Return.Max = [];
FIH_Read_LkaActvStats_D_Req.Return.TestTolerance = [];

% FIH_Read_LkaActvStats_D_Req.Return.Type = dt.u08;
% FIH_Read_LkaActvStats_D_Req.Return.Min = 0;
% FIH_Read_LkaActvStats_D_Req.Return.Max = 255;
% FIH_Read_LkaActvStats_D_Req.Return.TestTolerance = [];
% FIH_Read_LkaActvStats_D_Req.Description = [...
%   'It provides data of LKA Status to FIH function'];


FIH_Read_LsmcBrkDecel_D_Stat = DataDict.SrvRunnable;
FIH_Read_LsmcBrkDecel_D_Stat.Context = 'NonRte';
FIH_Read_LsmcBrkDecel_D_Stat.Description = [...
  'Server Runnable to provide data of LSMC Brake Support Status'];
FIH_Read_LsmcBrkDecel_D_Stat.Return = DataDict.CSReturn;
FIH_Read_LsmcBrkDecel_D_Stat.Return.Type = 'None';
FIH_Read_LsmcBrkDecel_D_Stat.Return.Min = [];
FIH_Read_LsmcBrkDecel_D_Stat.Return.Max = [];
FIH_Read_LsmcBrkDecel_D_Stat.Return.TestTolerance = [];

% FIH_Read_LsmcBrkDecel_D_Stat.Return.Type = dt.u08;
% FIH_Read_LsmcBrkDecel_D_Stat.Description = [...
%   'It provides data of LSMC Brake Support Status to FIH function'];


FIH_Read_PrplWhlTot2_Tq_Actl = DataDict.SrvRunnable;
FIH_Read_PrplWhlTot2_Tq_Actl.Context = 'NonRte';
FIH_Read_PrplWhlTot2_Tq_Actl.Description = [...
  'Server Runnable to provide data of Propulsion Wheel Torque'];
FIH_Read_PrplWhlTot2_Tq_Actl.Return = DataDict.CSReturn;
FIH_Read_PrplWhlTot2_Tq_Actl.Return.Type = 'None';
FIH_Read_PrplWhlTot2_Tq_Actl.Return.Min = [];
FIH_Read_PrplWhlTot2_Tq_Actl.Return.Max = [];
FIH_Read_PrplWhlTot2_Tq_Actl.Return.TestTolerance = [];

% FIH_Read_PrplWhlTot2_Tq_Actl.Return.Type = dt.u16;
% FIH_Read_PrplWhlTot2_Tq_Actl.Description = [...
%   'It provides data of Propulsion Wheel Torque to FIH function'];


FIH_Read_SAPPStatusCoding = DataDict.SrvRunnable;
FIH_Read_SAPPStatusCoding.Context = 'NonRte';
FIH_Read_SAPPStatusCoding.Description = [...
  'Server Runnable to provide data of PAM System State'];
FIH_Read_SAPPStatusCoding.Return = DataDict.CSReturn;
FIH_Read_SAPPStatusCoding.Return.Type = 'None';
FIH_Read_SAPPStatusCoding.Return.Min = [];
FIH_Read_SAPPStatusCoding.Return.Max = [];
FIH_Read_SAPPStatusCoding.Return.TestTolerance = [];

% FIH_Read_SAPPStatusCoding.Return.Type = dt.u08;
% FIH_Read_SAPPStatusCoding.Description = [...
%   'It provides data of PAM System State to FIH function'];


FIH_Read_StabCtlBrkActv_B_Actl = DataDict.SrvRunnable;
FIH_Read_StabCtlBrkActv_B_Actl.Context = 'NonRte';
FIH_Read_StabCtlBrkActv_B_Actl.Description = [...
  'Server Runnable to provide data of ESC Active'];
FIH_Read_StabCtlBrkActv_B_Actl.Return = DataDict.CSReturn;
FIH_Read_StabCtlBrkActv_B_Actl.Return.Type = 'None';
FIH_Read_StabCtlBrkActv_B_Actl.Return.Min = [];
FIH_Read_StabCtlBrkActv_B_Actl.Return.Max = [];
FIH_Read_StabCtlBrkActv_B_Actl.Return.TestTolerance = [];

% FIH_Read_StabCtlBrkActv_B_Actl.Return.Type = dt.u08;
% FIH_Read_StabCtlBrkActv_B_Actl.Description = [...
%   'It provides data of ESC Active to FIH function'];


FIH_Read_StePinOffst_An_Est = DataDict.SrvRunnable;
FIH_Read_StePinOffst_An_Est.Context = 'NonRte';
FIH_Read_StePinOffst_An_Est.Description = [...
  'Server Runnable to provide data of ABS ESC SPA Offset'];
FIH_Read_StePinOffst_An_Est.Return = DataDict.CSReturn;
FIH_Read_StePinOffst_An_Est.Return.Type = 'None';
FIH_Read_StePinOffst_An_Est.Return.Min = [];
FIH_Read_StePinOffst_An_Est.Return.Max = [];
FIH_Read_StePinOffst_An_Est.Return.TestTolerance = [];

% FIH_Read_StePinOffst_An_Est.Return.Type = dt.u16;
% FIH_Read_StePinOffst_An_Est.Description = [...
%   'It provides data of ABS ESC SPA Offset to FIH function'];


FIH_Read_StePinOffst_D_Stat = DataDict.SrvRunnable;
FIH_Read_StePinOffst_D_Stat.Context = 'NonRte';
FIH_Read_StePinOffst_D_Stat.Description = [...
  'Server Runnable to provide data of ABS ESC SPA Offset Status'];
FIH_Read_StePinOffst_D_Stat.Return = DataDict.CSReturn;
FIH_Read_StePinOffst_D_Stat.Return.Type = 'None';
FIH_Read_StePinOffst_D_Stat.Return.Min = [];
FIH_Read_StePinOffst_D_Stat.Return.Max = [];
FIH_Read_StePinOffst_D_Stat.Return.TestTolerance = [];

% FIH_Read_StePinOffst_D_Stat.Return.Type = dt.u08;
% FIH_Read_StePinOffst_D_Stat.Description = [...
%   'It provides data of ABS ESC SPA Offset Status to FIH function'];


FIH_Read_TrlrAidCancl_B_Rq = DataDict.SrvRunnable;
FIH_Read_TrlrAidCancl_B_Rq.Context = 'NonRte';
FIH_Read_TrlrAidCancl_B_Rq.Description = [...
  'Server Runnable to provide data of Trailer Aid Cancel Request'];
FIH_Read_TrlrAidCancl_B_Rq.Return = DataDict.CSReturn;
FIH_Read_TrlrAidCancl_B_Rq.Return.Type = 'None';
FIH_Read_TrlrAidCancl_B_Rq.Return.Min = [];
FIH_Read_TrlrAidCancl_B_Rq.Return.Max = [];
FIH_Read_TrlrAidCancl_B_Rq.Return.TestTolerance = [];

% FIH_Read_TrlrAidCancl_B_Rq.Return.Type = dt.u08;
% FIH_Read_TrlrAidCancl_B_Rq.Arguments(1).Description = [...
%   'It provides data of Trailer Aid Cancel Request to FIH function'];


FIH_Read_TrlrAidCtl_U_RqDrv = DataDict.SrvRunnable;
FIH_Read_TrlrAidCtl_U_RqDrv.Context = 'NonRte';
FIH_Read_TrlrAidCtl_U_RqDrv.Description = [...
  'Server Runnable to provide data of Trailer Aid Knob Position'];
FIH_Read_TrlrAidCtl_U_RqDrv.Return = DataDict.CSReturn;
FIH_Read_TrlrAidCtl_U_RqDrv.Return.Type = 'None';
FIH_Read_TrlrAidCtl_U_RqDrv.Return.Min = [];
FIH_Read_TrlrAidCtl_U_RqDrv.Return.Max = [];
FIH_Read_TrlrAidCtl_U_RqDrv.Return.TestTolerance = [];

% FIH_Read_TrlrAidCtl_U_RqDrv.Return.Type = dt.u16;
% FIH_Read_TrlrAidCtl_U_RqDrv.Description = [...
%   'It provides data of Trailer Aid Knob Position to FIH function'];


FIH_Read_TrlrAidEnbl_D2_Rq = DataDict.SrvRunnable;
FIH_Read_TrlrAidEnbl_D2_Rq.Context = 'NonRte';
FIH_Read_TrlrAidEnbl_D2_Rq.Description = [...
  'Server Runnable to provide data of Trailer Aid On Request'];
FIH_Read_TrlrAidEnbl_D2_Rq.Return = DataDict.CSReturn;
FIH_Read_TrlrAidEnbl_D2_Rq.Return.Type = 'None';
FIH_Read_TrlrAidEnbl_D2_Rq.Return.Min = [];
FIH_Read_TrlrAidEnbl_D2_Rq.Return.Max = [];
FIH_Read_TrlrAidEnbl_D2_Rq.Return.TestTolerance = [];

% FIH_Read_TrlrAidEnbl_D2_Rq.Return.Type = dt.u08;
% FIH_Read_TrlrAidEnbl_D2_Rq.Description = [...
%   'It provides data of Trailer Aid On Request to FIH function'];


FIH_Read_TrlrAidSetup_Rq = DataDict.SrvRunnable;
FIH_Read_TrlrAidSetup_Rq.Context = 'NonRte';
FIH_Read_TrlrAidSetup_Rq.Description = [...
  'Server Runnable to provide data of Trailer Aid Setup Request'];
FIH_Read_TrlrAidSetup_Rq.Return = DataDict.CSReturn;
FIH_Read_TrlrAidSetup_Rq.Return.Type = 'None';
FIH_Read_TrlrAidSetup_Rq.Return.Min = [];
FIH_Read_TrlrAidSetup_Rq.Return.Max = [];
FIH_Read_TrlrAidSetup_Rq.Return.TestTolerance = [];

% FIH_Read_TrlrAidSetup_Rq.Return.Type = dt.u08;
% FIH_Read_TrlrAidSetup_Rq.Description = [...
%   'It provides data of Trailer Aid Setup Request to FIH function'];


FIH_Read_TrlrAidSwtch_D_RqDrv = DataDict.SrvRunnable;
FIH_Read_TrlrAidSwtch_D_RqDrv.Context = 'NonRte';
FIH_Read_TrlrAidSwtch_D_RqDrv.Description = [...
  'Server Runnable to provide data of Trailer Aid Knob Button'];
FIH_Read_TrlrAidSwtch_D_RqDrv.Return = DataDict.CSReturn;
FIH_Read_TrlrAidSwtch_D_RqDrv.Return.Type = 'None';
FIH_Read_TrlrAidSwtch_D_RqDrv.Return.Min = [];
FIH_Read_TrlrAidSwtch_D_RqDrv.Return.Max = [];
FIH_Read_TrlrAidSwtch_D_RqDrv.Return.TestTolerance = [];

% FIH_Read_TrlrAidSwtch_D_RqDrv.Return.Type = dt.u08;
% FIH_Read_TrlrAidSwtch_D_RqDrv.Description = [...
%   'It provides data of Trailer Aid Knob Button to FIH function'];


FIH_Read_TrlrAidTrgtId = DataDict.SrvRunnable;
FIH_Read_TrlrAidTrgtId.Context = 'NonRte';
FIH_Read_TrlrAidTrgtId.Description = [...
  'Server Runnable to provide data of Trailer ID Value'];
FIH_Read_TrlrAidTrgtId.Return = DataDict.CSReturn;
FIH_Read_TrlrAidTrgtId.Return.Type = 'None';
FIH_Read_TrlrAidTrgtId.Return.Min = [];
FIH_Read_TrlrAidTrgtId.Return.Max = [];
FIH_Read_TrlrAidTrgtId.Return.TestTolerance = [];

% FIH_Read_TrlrAidTrgtId.Return.Type = dt.u08;
% FIH_Read_TrlrAidTrgtId.Description = [...
%   'It provides data of Trailer ID Value to FIH function'];


FIH_Read_TrlrAid_Angle = DataDict.SrvRunnable;
FIH_Read_TrlrAid_Angle.Context = 'NonRte';
FIH_Read_TrlrAid_Angle.Description = [...
  'Server Runnable to provide data of Trailer Aid Hitch Angle'];
FIH_Read_TrlrAid_Angle.Return = DataDict.CSReturn;
FIH_Read_TrlrAid_Angle.Return.Type = 'None';
FIH_Read_TrlrAid_Angle.Return.Min = [];
FIH_Read_TrlrAid_Angle.Return.Max = [];
FIH_Read_TrlrAid_Angle.Return.TestTolerance = [];

% FIH_Read_TrlrAid_Angle.Return.Type = dt.u16;
% FIH_Read_TrlrAid_Angle.Description = [...
%   'It provides data of Trailer Aid Hitch Angle to FIH function'];


FIH_Read_TrlrAid_AngleRate = DataDict.SrvRunnable;
FIH_Read_TrlrAid_AngleRate.Context = 'NonRte';
FIH_Read_TrlrAid_AngleRate.Description = [...
  'Server Runnable to provide data of Trailer Aid Hitch Angle Rate'];
FIH_Read_TrlrAid_AngleRate.Return = DataDict.CSReturn;
FIH_Read_TrlrAid_AngleRate.Return.Type = 'None';
FIH_Read_TrlrAid_AngleRate.Return.Min = [];
FIH_Read_TrlrAid_AngleRate.Return.Max = [];
FIH_Read_TrlrAid_AngleRate.Return.TestTolerance = [];

% FIH_Read_TrlrAid_AngleRate.Return.Type = dt.u16;
% FIH_Read_TrlrAid_AngleRate.Description = [...
%   'It provides data of Trailer Aid Hitch Angle Rate to FIH function'];


FIH_Read_TrlrAid_D2_Stat = DataDict.SrvRunnable;
FIH_Read_TrlrAid_D2_Stat.Context = 'NonRte';
FIH_Read_TrlrAid_D2_Stat.Description = [...
  'Server Runnable to provide data of Trailer Aid Track State'];
FIH_Read_TrlrAid_D2_Stat.Return = DataDict.CSReturn;
FIH_Read_TrlrAid_D2_Stat.Return.Type = 'None';
FIH_Read_TrlrAid_D2_Stat.Return.Min = [];
FIH_Read_TrlrAid_D2_Stat.Return.Max = [];
FIH_Read_TrlrAid_D2_Stat.Return.TestTolerance = [];

% FIH_Read_TrlrAid_D2_Stat.Return.Type = dt.u08;
% FIH_Read_TrlrAid_D2_Stat.Description = [...
%   'It provides data of Trailer Aid Track State to FIH function'];


FIH_Read_TrlrAid_Mode_Rq = DataDict.SrvRunnable;
FIH_Read_TrlrAid_Mode_Rq.Context = 'NonRte';
FIH_Read_TrlrAid_Mode_Rq.Description = [...
  'Server Runnable to provide data of Trailer Aid Mode Request'];
FIH_Read_TrlrAid_Mode_Rq.Return = DataDict.CSReturn;
FIH_Read_TrlrAid_Mode_Rq.Return.Type = 'None';
FIH_Read_TrlrAid_Mode_Rq.Return.Min = [];
FIH_Read_TrlrAid_Mode_Rq.Return.Max = [];
FIH_Read_TrlrAid_Mode_Rq.Return.TestTolerance = [];

% FIH_Read_TrlrAid_Mode_Rq.Return.Type = dt.u08;
% FIH_Read_TrlrAid_Mode_Rq.Description = [...
%   'It provides data of Trailer Aid Mode Request to FIH function'];


FIH_Read_TrlrAnOffstDir_Mem = DataDict.SrvRunnable;
FIH_Read_TrlrAnOffstDir_Mem.Context = 'NonRte';
FIH_Read_TrlrAnOffstDir_Mem.Description = [...
  'Server Runnable to provide data of Trailer Aid Hitch Angle Memory Magn' ...
  'itude Data'];
FIH_Read_TrlrAnOffstDir_Mem.Return = DataDict.CSReturn;
FIH_Read_TrlrAnOffstDir_Mem.Return.Type = 'None';
FIH_Read_TrlrAnOffstDir_Mem.Return.Min = [];
FIH_Read_TrlrAnOffstDir_Mem.Return.Max = [];
FIH_Read_TrlrAnOffstDir_Mem.Return.TestTolerance = [];

% FIH_Read_TrlrAnOffstDir_Mem.Return.Type = dt.u08;
% FIH_Read_TrlrAnOffstDir_Mem.Description = [...
%   'It provides data of Trailer Aid Hitch Angle Memory Magnitude Data to F' ...
%   'IH function'];


FIH_Read_TrlrAxleToBmpr_L_Actl = DataDict.SrvRunnable;
FIH_Read_TrlrAxleToBmpr_L_Actl.Context = 'NonRte';
FIH_Read_TrlrAxleToBmpr_L_Actl.Description = [...
  'Server Runnable to provide data of Trailer Axle to Bumper'];
FIH_Read_TrlrAxleToBmpr_L_Actl.Return = DataDict.CSReturn;
FIH_Read_TrlrAxleToBmpr_L_Actl.Return.Type = 'None';
FIH_Read_TrlrAxleToBmpr_L_Actl.Return.Min = [];
FIH_Read_TrlrAxleToBmpr_L_Actl.Return.Max = [];
FIH_Read_TrlrAxleToBmpr_L_Actl.Return.TestTolerance = [];

% FIH_Read_TrlrAxleToBmpr_L_Actl.Return.Type = dt.u16;
% FIH_Read_TrlrAxleToBmpr_L_Actl.Description = [...
%   'It provides data of Trailer Axle to Bumper to FIH function'];


FIH_Read_TrlrBrkActCnnct_B_Actl = DataDict.SrvRunnable;
FIH_Read_TrlrBrkActCnnct_B_Actl.Context = 'NonRte';
FIH_Read_TrlrBrkActCnnct_B_Actl.Description = [...
  'Server Runnable to provide data of Trailer Brake Connection Status'];
FIH_Read_TrlrBrkActCnnct_B_Actl.Return = DataDict.CSReturn;
FIH_Read_TrlrBrkActCnnct_B_Actl.Return.Type = 'None';
FIH_Read_TrlrBrkActCnnct_B_Actl.Return.Min = [];
FIH_Read_TrlrBrkActCnnct_B_Actl.Return.Max = [];
FIH_Read_TrlrBrkActCnnct_B_Actl.Return.TestTolerance = [];

% FIH_Read_TrlrBrkActCnnct_B_Actl.Return.Type = dt.u08;
% FIH_Read_TrlrBrkActCnnct_B_Actl.Arguments(1).Description = [...
%   'It provides data of Trailer Brake Connection Status to FIH function'];


FIH_Read_TrlrHitYaw_AnRate = DataDict.SrvRunnable;
FIH_Read_TrlrHitYaw_AnRate.Context = 'NonRte';
FIH_Read_TrlrHitYaw_AnRate.Description = [...
  'Server Runnable to provide data of Trailer Hitch Angle Rate'];
FIH_Read_TrlrHitYaw_AnRate.Return = DataDict.CSReturn;
FIH_Read_TrlrHitYaw_AnRate.Return.Type = 'None';
FIH_Read_TrlrHitYaw_AnRate.Return.Min = [];
FIH_Read_TrlrHitYaw_AnRate.Return.Max = [];
FIH_Read_TrlrHitYaw_AnRate.Return.TestTolerance = [];

% FIH_Read_TrlrHitYaw_AnRate.Return.Type = dt.u16;
% FIH_Read_TrlrHitYaw_AnRate.Description = [...
%   'It provides data of Trailer Hitch Angle Rate to FIH function'];


FIH_Read_TrlrHitchYaw_An = DataDict.SrvRunnable;
FIH_Read_TrlrHitchYaw_An.Context = 'NonRte';
FIH_Read_TrlrHitchYaw_An.Description = [...
  'Server Runnable to provide data of Trailer Hitch Angle'];
FIH_Read_TrlrHitchYaw_An.Return = DataDict.CSReturn;
FIH_Read_TrlrHitchYaw_An.Return.Type = 'None';
FIH_Read_TrlrHitchYaw_An.Return.Min = [];
FIH_Read_TrlrHitchYaw_An.Return.Max = [];
FIH_Read_TrlrHitchYaw_An.Return.TestTolerance = [];

% FIH_Read_TrlrHitchYaw_An.Return.Type = dt.u16;
% FIH_Read_TrlrHitchYaw_An.Description = [...
%   'It provides data of Trailer Hitch Angle to FIH function'];


FIH_Read_TrlrHitchYaw_Stat = DataDict.SrvRunnable;
FIH_Read_TrlrHitchYaw_Stat.Context = 'NonRte';
FIH_Read_TrlrHitchYaw_Stat.Description = [...
  'Server Runnable to provide data of RCM Trailer Angle Status'];
FIH_Read_TrlrHitchYaw_Stat.Return = DataDict.CSReturn;
FIH_Read_TrlrHitchYaw_Stat.Return.Type = 'None';
FIH_Read_TrlrHitchYaw_Stat.Return.Min = [];
FIH_Read_TrlrHitchYaw_Stat.Return.Max = [];
FIH_Read_TrlrHitchYaw_Stat.Return.TestTolerance = [];

% FIH_Read_TrlrHitchYaw_Stat.Return.Type = dt.u08;
% FIH_Read_TrlrHitchYaw_Stat.Description = [...
%   'It provides data of RCM Trailer Angle Status to FIH function'];


FIH_Read_TrlrIdType_Stat = DataDict.SrvRunnable;
FIH_Read_TrlrIdType_Stat.Context = 'NonRte';
FIH_Read_TrlrIdType_Stat.Description = [...
  'Server Runnable to provide data of Trailer Type'];
FIH_Read_TrlrIdType_Stat.Return = DataDict.CSReturn;
FIH_Read_TrlrIdType_Stat.Return.Type = 'None';
FIH_Read_TrlrIdType_Stat.Return.Min = [];
FIH_Read_TrlrIdType_Stat.Return.Max = [];
FIH_Read_TrlrIdType_Stat.Return.TestTolerance = [];

% FIH_Read_TrlrIdType_Stat.Return.Type = dt.u16;
% FIH_Read_TrlrIdType_Stat.Description = [...
%   'It provides data of Trailer Type to FIH function'];


FIH_Read_TrlrId_No_Actl = DataDict.SrvRunnable;
FIH_Read_TrlrId_No_Actl.Context = 'NonRte';
FIH_Read_TrlrId_No_Actl.Description = [...
  'Server Runnable to provide data of Trailer Aid ID Number'];
FIH_Read_TrlrId_No_Actl.Return = DataDict.CSReturn;
FIH_Read_TrlrId_No_Actl.Return.Type = 'None';
FIH_Read_TrlrId_No_Actl.Return.Min = [];
FIH_Read_TrlrId_No_Actl.Return.Max = [];
FIH_Read_TrlrId_No_Actl.Return.TestTolerance = [];

% FIH_Read_TrlrId_No_Actl.Return.Type = dt.u08;
% FIH_Read_TrlrId_No_Actl.Description = [...
%   'It provides data of Trailer Aid ID Number to FIH function'];


FIH_Read_TrlrLampCnnct_B_Actl = DataDict.SrvRunnable;
FIH_Read_TrlrLampCnnct_B_Actl.Context = 'NonRte';
FIH_Read_TrlrLampCnnct_B_Actl.Description = [...
  'Server Runnable to provide data of Trailer Lamp Connection Status'];
FIH_Read_TrlrLampCnnct_B_Actl.Return = DataDict.CSReturn;
FIH_Read_TrlrLampCnnct_B_Actl.Return.Type = 'None';
FIH_Read_TrlrLampCnnct_B_Actl.Return.Min = [];
FIH_Read_TrlrLampCnnct_B_Actl.Return.Max = [];
FIH_Read_TrlrLampCnnct_B_Actl.Return.TestTolerance = [];

% FIH_Read_TrlrLampCnnct_B_Actl.Return.Type = dt.u08;
% FIH_Read_TrlrLampCnnct_B_Actl.Description = [...
%   'It provides data of Trailer Lamp Connection Status to FIH function'];


FIH_Read_TrlrRvrseCancl_Rq = DataDict.SrvRunnable;
FIH_Read_TrlrRvrseCancl_Rq.Context = 'NonRte';
FIH_Read_TrlrRvrseCancl_Rq.Description = [...
  'Server Runnable to provide data of Trailer Reverse Guidance Cancel Req' ...
  'uest'];
FIH_Read_TrlrRvrseCancl_Rq.Return = DataDict.CSReturn;
FIH_Read_TrlrRvrseCancl_Rq.Return.Type = 'None';
FIH_Read_TrlrRvrseCancl_Rq.Return.Min = [];
FIH_Read_TrlrRvrseCancl_Rq.Return.Max = [];
FIH_Read_TrlrRvrseCancl_Rq.Return.TestTolerance = [];

% FIH_Read_TrlrRvrseCancl_Rq.Return.Type = dt.u08;
% FIH_Read_TrlrRvrseCancl_Rq.Description = [...
%   'It provides data of Trailer Reverse Guidance Cancel Request to FIH fun' ...
%   'ction'];


FIH_Read_TrlrRvrseEnbl = DataDict.SrvRunnable;
FIH_Read_TrlrRvrseEnbl.Context = 'NonRte';
FIH_Read_TrlrRvrseEnbl.Description = [...
  'Server Runnable to provide data of Trailer Reverse Guidance Enable'];
FIH_Read_TrlrRvrseEnbl.Return = DataDict.CSReturn;
FIH_Read_TrlrRvrseEnbl.Return.Type = 'None';
FIH_Read_TrlrRvrseEnbl.Return.Min = [];
FIH_Read_TrlrRvrseEnbl.Return.Max = [];
FIH_Read_TrlrRvrseEnbl.Return.TestTolerance = [];

% FIH_Read_TrlrRvrseEnbl.Return.Type = dt.u08;
% FIH_Read_TrlrRvrseEnbl.Description = [...
%   'It provides data of Trailer Reverse Guidance Enable to FIH function'];


FIH_Read_TrlrRvrseMsgTxt = DataDict.SrvRunnable;
FIH_Read_TrlrRvrseMsgTxt.Context = 'NonRte';
FIH_Read_TrlrRvrseMsgTxt.Description = [...
  'Server Runnable to provide data of Trailer Reverse Guidance Message Te' ...
  'xt Request'];
FIH_Read_TrlrRvrseMsgTxt.Return = DataDict.CSReturn;
FIH_Read_TrlrRvrseMsgTxt.Return.Type = 'None';
FIH_Read_TrlrRvrseMsgTxt.Return.Min = [];
FIH_Read_TrlrRvrseMsgTxt.Return.Max = [];
FIH_Read_TrlrRvrseMsgTxt.Return.TestTolerance = [];

% FIH_Read_TrlrRvrseMsgTxt.Return.Type = dt.u08;
% FIH_Read_TrlrRvrseMsgTxt.Description = [...
%   'It provides data of Trailer Reverse Guidance Message Text Request to F' ...
%   'IH function'];


FIH_Read_TrlrRvrseOn_Stat = DataDict.SrvRunnable;
FIH_Read_TrlrRvrseOn_Stat.Context = 'NonRte';
FIH_Read_TrlrRvrseOn_Stat.Description = [...
  'Server Runnable to provide data of Trailer Reverse Guidance Status'];
FIH_Read_TrlrRvrseOn_Stat.Return = DataDict.CSReturn;
FIH_Read_TrlrRvrseOn_Stat.Return.Type = 'None';
FIH_Read_TrlrRvrseOn_Stat.Return.Min = [];
FIH_Read_TrlrRvrseOn_Stat.Return.Max = [];
FIH_Read_TrlrRvrseOn_Stat.Return.TestTolerance = [];

% FIH_Read_TrlrRvrseOn_Stat.Return.Type = dt.u08;
% FIH_Read_TrlrRvrseOn_Stat.Description = [...
%   'It provides data of Trailer Reverse Guidance Status to FIH function'];


FIH_Read_TrlrSnsId_High = DataDict.SrvRunnable;
FIH_Read_TrlrSnsId_High.Context = 'NonRte';
FIH_Read_TrlrSnsId_High.Description = [...
  'Server Runnable to provide data of Yaw Rate Sensor ID High'];
FIH_Read_TrlrSnsId_High.Return = DataDict.CSReturn;
FIH_Read_TrlrSnsId_High.Return.Type = 'None';
FIH_Read_TrlrSnsId_High.Return.Min = [];
FIH_Read_TrlrSnsId_High.Return.Max = [];
FIH_Read_TrlrSnsId_High.Return.TestTolerance = [];

% FIH_Read_TrlrSnsId_High.Return.Type = dt.u32;
% FIH_Read_TrlrSnsId_High.Description = [...
%   'It provides data of Yaw Rate Sensor ID High to FIH function'];


FIH_Read_TrlrSnsId_Low = DataDict.SrvRunnable;
FIH_Read_TrlrSnsId_Low.Context = 'NonRte';
FIH_Read_TrlrSnsId_Low.Description = [...
  'Server Runnable to provide data of Yaw Rate Sensor ID Low'];
FIH_Read_TrlrSnsId_Low.Return = DataDict.CSReturn;
FIH_Read_TrlrSnsId_Low.Return.Type = 'None';
FIH_Read_TrlrSnsId_Low.Return.Min = [];
FIH_Read_TrlrSnsId_Low.Return.Max = [];
FIH_Read_TrlrSnsId_Low.Return.TestTolerance = [];

% FIH_Read_TrlrSnsId_Low.Return.Type = dt.u32;
% FIH_Read_TrlrSnsId_Low.Description = [...
%   'It provides data of Yaw Rate Sensor ID Low to FIH function'];


FIH_Read_TrlrTrgtAcquire = DataDict.SrvRunnable;
FIH_Read_TrlrTrgtAcquire.Context = 'NonRte';
FIH_Read_TrlrTrgtAcquire.Description = [...
  'Server Runnable to provide data of Trailer Aid Acquire FIH TAD ID Stat' ...
  'us'];
FIH_Read_TrlrTrgtAcquire.Return = DataDict.CSReturn;
FIH_Read_TrlrTrgtAcquire.Return.Type = 'None';
FIH_Read_TrlrTrgtAcquire.Return.Min = [];
FIH_Read_TrlrTrgtAcquire.Return.Max = [];
FIH_Read_TrlrTrgtAcquire.Return.TestTolerance = [];

% FIH_Read_TrlrTrgtAcquire.Return.Type = dt.u08;
% FIH_Read_TrlrTrgtAcquire.Description = [...
%   'It provides data of Trailer Aid Acquire FIH TAD ID Status to FIH funct' ...
%   'ion'];


FIH_Read_TrlrYaw_W = DataDict.SrvRunnable;
FIH_Read_TrlrYaw_W.Context = 'NonRte';
FIH_Read_TrlrYaw_W.Description = [...
  'Server Runnable to provide data of Trailer Yaw Rate Actual'];
FIH_Read_TrlrYaw_W.Return = DataDict.CSReturn;
FIH_Read_TrlrYaw_W.Return.Type = 'None';
FIH_Read_TrlrYaw_W.Return.Min = [];
FIH_Read_TrlrYaw_W.Return.Max = [];
FIH_Read_TrlrYaw_W.Return.TestTolerance = [];

% FIH_Read_TrlrYaw_W.Return.Type = dt.u16;
% FIH_Read_TrlrYaw_W.Description = [...
%   'It provides data of Trailer Yaw Rate Actual to FIH function'];


FIH_Read_TrlrYaw_W_Qf = DataDict.SrvRunnable;
FIH_Read_TrlrYaw_W_Qf.Context = 'NonRte';
FIH_Read_TrlrYaw_W_Qf.Description = [...
  'Server Runnable to provide data of Trailer Yaw Rate Quality Factor'];
FIH_Read_TrlrYaw_W_Qf.Return = DataDict.CSReturn;
FIH_Read_TrlrYaw_W_Qf.Return.Type = 'None';
FIH_Read_TrlrYaw_W_Qf.Return.Min = [];
FIH_Read_TrlrYaw_W_Qf.Return.Max = [];
FIH_Read_TrlrYaw_W_Qf.Return.TestTolerance = [];

% FIH_Read_TrlrYaw_W_Qf.Return.Type = dt.u08;
% FIH_Read_TrlrYaw_W_Qf.Description = [...
%   'It provides data of Trailer Yaw Rate Quality Factor to FIH function'];


FIH_Read_TrnRng = DataDict.SrvRunnable;
FIH_Read_TrnRng.Context = 'NonRte';
FIH_Read_TrnRng.Description = [...
  'Server Runnable to provide data of Transmission Desired Gear Shift'];
FIH_Read_TrnRng.Return = DataDict.CSReturn;
FIH_Read_TrnRng.Return.Type = 'None';
FIH_Read_TrnRng.Return.Min = [];
FIH_Read_TrnRng.Return.Max = [];
FIH_Read_TrnRng.Return.TestTolerance = [];

% FIH_Read_TrnRng.Return.Type = dt.u08;
% FIH_Read_TrnRng.Description = [...
%   'It provides data of Transmission Desired Gear Shift to FIH function'];


FIH_Read_TurnLghtSwtch_D_Stat = DataDict.SrvRunnable;
FIH_Read_TurnLghtSwtch_D_Stat.Context = 'NonRte';
FIH_Read_TurnLghtSwtch_D_Stat.Description = [...
  'Server Runnable to provide data of Turn Signal Switch Status'];
FIH_Read_TurnLghtSwtch_D_Stat.Return = DataDict.CSReturn;
FIH_Read_TurnLghtSwtch_D_Stat.Return.Type = 'None';
FIH_Read_TurnLghtSwtch_D_Stat.Return.Min = [];
FIH_Read_TurnLghtSwtch_D_Stat.Return.Max = [];
FIH_Read_TurnLghtSwtch_D_Stat.Return.TestTolerance = [];

% FIH_Read_TurnLghtSwtch_D_Stat.Return.Type = dt.u08;
% FIH_Read_TurnLghtSwtch_D_Stat.Description = [...
%   'It provides data of Turn Signal Switch Status to FIH function'];


FIH_Read_VehLatComp_A_Actl = DataDict.SrvRunnable;
FIH_Read_VehLatComp_A_Actl.Context = 'NonRte';
FIH_Read_VehLatComp_A_Actl.Description = [...
  'Server Runnable to provide data of Vehicle Lateral Acceleration Compen' ...
  'sated'];
FIH_Read_VehLatComp_A_Actl.Return = DataDict.CSReturn;
FIH_Read_VehLatComp_A_Actl.Return.Type = 'None';
FIH_Read_VehLatComp_A_Actl.Return.Min = [];
FIH_Read_VehLatComp_A_Actl.Return.Max = [];
FIH_Read_VehLatComp_A_Actl.Return.TestTolerance = [];

% FIH_Read_VehLatComp_A_Actl.Return.Type = dt.u16;
% FIH_Read_VehLatComp_A_Actl.Description = [...
%   'It provides data of Vehicle Lateral Acceleration Compensated to FIH fu' ...
%   'nction'];


FIH_Read_VehLongComp_A_Actl = DataDict.SrvRunnable;
FIH_Read_VehLongComp_A_Actl.Context = 'NonRte';
FIH_Read_VehLongComp_A_Actl.Description = [...
  'Server Runnable to provide data of Vehicle Longitudinal Acceleration C' ...
  'ompensated'];
FIH_Read_VehLongComp_A_Actl.Return = DataDict.CSReturn;
FIH_Read_VehLongComp_A_Actl.Return.Type = 'None';
FIH_Read_VehLongComp_A_Actl.Return.Min = [];
FIH_Read_VehLongComp_A_Actl.Return.Max = [];
FIH_Read_VehLongComp_A_Actl.Return.TestTolerance = [];

% FIH_Read_VehLongComp_A_Actl.Return.Type = dt.u16;
% FIH_Read_VehLongComp_A_Actl.Description = [...
%   'It provides data of Vehicle Longitudinal Acceleration Compensated to F' ...
%   'IH function'];


FIH_Read_VehOverGnd_V_Est = DataDict.SrvRunnable;
FIH_Read_VehOverGnd_V_Est.Context = 'NonRte';
FIH_Read_VehOverGnd_V_Est.Description = [...
  'Server Runnable to provide data of Vehicle Speed Over Ground'];
FIH_Read_VehOverGnd_V_Est.Return = DataDict.CSReturn;
FIH_Read_VehOverGnd_V_Est.Return.Type = 'None';
FIH_Read_VehOverGnd_V_Est.Return.Min = [];
FIH_Read_VehOverGnd_V_Est.Return.Max = [];
FIH_Read_VehOverGnd_V_Est.Return.TestTolerance = [];

% FIH_Read_VehOverGnd_V_Est.Return.Type = dt.u16;
% FIH_Read_VehOverGnd_V_Est.Description = [...
%   'It provides data of Vehicle Speed Over Ground to FIH function'];


FIH_Read_VehVTrlrAid_B_Avail = DataDict.SrvRunnable;
FIH_Read_VehVTrlrAid_B_Avail.Context = 'NonRte';
FIH_Read_VehVTrlrAid_B_Avail.Description = [...
  'Server Runnable to provide data of Trailer Aid Available'];
FIH_Read_VehVTrlrAid_B_Avail.Return = DataDict.CSReturn;
FIH_Read_VehVTrlrAid_B_Avail.Return.Type = 'None';
FIH_Read_VehVTrlrAid_B_Avail.Return.Min = [];
FIH_Read_VehVTrlrAid_B_Avail.Return.Max = [];
FIH_Read_VehVTrlrAid_B_Avail.Return.TestTolerance = [];

% FIH_Read_VehVTrlrAid_B_Avail.Return.Type = dt.u08;
% FIH_Read_VehVTrlrAid_B_Avail.Description = [...
%   'It provides data of Trailer Aid Available to FIH function'];


FIH_Read_VehVertComp = DataDict.SrvRunnable;
FIH_Read_VehVertComp.Context = 'NonRte';
FIH_Read_VehVertComp.Description = [...
  'Server Runnable to provide data of Vehicle Vertical Acceleration Rate ' ...
  'Compensated'];
FIH_Read_VehVertComp.Return = DataDict.CSReturn;
FIH_Read_VehVertComp.Return.Type = 'None';
FIH_Read_VehVertComp.Return.Min = [];
FIH_Read_VehVertComp.Return.Max = [];
FIH_Read_VehVertComp.Return.TestTolerance = [];

% FIH_Read_VehVertComp.Return.Type = dt.u08;
% FIH_Read_VehVertComp.Description = [...
%   'It provides data of Vehicle Vertical Acceleration Rate Compensated to ' ...
%   'FIH function'];


FIH_Read_VehYawComp_W_Actl = DataDict.SrvRunnable;
FIH_Read_VehYawComp_W_Actl.Context = 'NonRte';
FIH_Read_VehYawComp_W_Actl.Description = [...
  'Server Runnable to provide data of Vehicle Yaw Rate Compensated'];
FIH_Read_VehYawComp_W_Actl.Return = DataDict.CSReturn;
FIH_Read_VehYawComp_W_Actl.Return.Type = 'None';
FIH_Read_VehYawComp_W_Actl.Return.Min = [];
FIH_Read_VehYawComp_W_Actl.Return.Max = [];
FIH_Read_VehYawComp_W_Actl.Return.TestTolerance = [];

% FIH_Read_VehYawComp_W_Actl.Return.Type = dt.u16;
% FIH_Read_VehYawComp_W_Actl.Description = [...
%   'It provides data of Vehicle Yaw Rate Compensated to FIH function'];


FIH_Read_VehYaw_W_Actl = DataDict.SrvRunnable;
FIH_Read_VehYaw_W_Actl.Context = 'NonRte';
FIH_Read_VehYaw_W_Actl.Description = [...
  'Server Runnable to provide data of Vehicle Yaw Rate'];
FIH_Read_VehYaw_W_Actl.Return = DataDict.CSReturn;
FIH_Read_VehYaw_W_Actl.Return.Type = 'None';
FIH_Read_VehYaw_W_Actl.Return.Min = [];
FIH_Read_VehYaw_W_Actl.Return.Max = [];
FIH_Read_VehYaw_W_Actl.Return.TestTolerance = [];

% FIH_Read_VehYaw_W_Actl.Return.Type = dt.u16;


FIH_Read_Veh_V_ActlBrk = DataDict.SrvRunnable;
FIH_Read_Veh_V_ActlBrk.Context = 'NonRte';
FIH_Read_Veh_V_ActlBrk.Description = [...
  'Server Runnable to provide data of Vehicle Speed'];
FIH_Read_Veh_V_ActlBrk.Return = DataDict.CSReturn;
FIH_Read_Veh_V_ActlBrk.Return.Type = 'None';
FIH_Read_Veh_V_ActlBrk.Return.Min = [];
FIH_Read_Veh_V_ActlBrk.Return.Max = [];
FIH_Read_Veh_V_ActlBrk.Return.TestTolerance = [];

% FIH_Read_Veh_V_ActlBrk.Return.Type = dt.u16;


FIH_Read_WhlDirFl_D_Actl = DataDict.SrvRunnable;
FIH_Read_WhlDirFl_D_Actl.Context = 'NonRte';
FIH_Read_WhlDirFl_D_Actl.Description = [...
  'Server Runnable to provide data of Front Left Wheel Direction'];
FIH_Read_WhlDirFl_D_Actl.Return = DataDict.CSReturn;
FIH_Read_WhlDirFl_D_Actl.Return.Type = 'None';
FIH_Read_WhlDirFl_D_Actl.Return.Min = [];
FIH_Read_WhlDirFl_D_Actl.Return.Max = [];
FIH_Read_WhlDirFl_D_Actl.Return.TestTolerance = [];

% FIH_Read_WhlDirFl_D_Actl.Return.Type = dt.u08;


FIH_Read_WhlDirFr_D_Actl = DataDict.SrvRunnable;
FIH_Read_WhlDirFr_D_Actl.Context = 'NonRte';
FIH_Read_WhlDirFr_D_Actl.Description = [...
  'Server Runnable to provide data of Front Right Wheel Direction'];
FIH_Read_WhlDirFr_D_Actl.Return = DataDict.CSReturn;
FIH_Read_WhlDirFr_D_Actl.Return.Type = 'None';
FIH_Read_WhlDirFr_D_Actl.Return.Min = [];
FIH_Read_WhlDirFr_D_Actl.Return.Max = [];
FIH_Read_WhlDirFr_D_Actl.Return.TestTolerance = [];
% FIH_Read_WhlDirFr_D_Actl.Return.Type = dt.u08;


FIH_Read_WhlDirRl_D_Actl = DataDict.SrvRunnable;
FIH_Read_WhlDirRl_D_Actl.Context = 'NonRte';
FIH_Read_WhlDirRl_D_Actl.Description = [...
  'Server Runnable to provide data of Rear Left Wheel Direction'];
FIH_Read_WhlDirRl_D_Actl.Return = DataDict.CSReturn;
FIH_Read_WhlDirRl_D_Actl.Return.Type = 'None';
FIH_Read_WhlDirRl_D_Actl.Return.Min = [];
FIH_Read_WhlDirRl_D_Actl.Return.Max = [];
FIH_Read_WhlDirRl_D_Actl.Return.TestTolerance = [];
% FIH_Read_WhlDirRl_D_Actl.Return.Type = dt.u08;


FIH_Read_WhlDirRr_D_Actl = DataDict.SrvRunnable;
FIH_Read_WhlDirRr_D_Actl.Context = 'NonRte';
FIH_Read_WhlDirRr_D_Actl.Description = [...
  'Server Runnable to provide data of Rear Right Wheel Direction'];
FIH_Read_WhlDirRr_D_Actl.Return = DataDict.CSReturn;
FIH_Read_WhlDirRr_D_Actl.Return.Type = 'None';
FIH_Read_WhlDirRr_D_Actl.Return.Min = [];
FIH_Read_WhlDirRr_D_Actl.Return.Max = [];
FIH_Read_WhlDirRr_D_Actl.Return.TestTolerance = [];
% FIH_Read_WhlDirRr_D_Actl.Return.Type = dt.u08;


FIH_Read_WhlFl_W_Meas = DataDict.SrvRunnable;
FIH_Read_WhlFl_W_Meas.Context = 'NonRte';
FIH_Read_WhlFl_W_Meas.Description = [...
  'Server Runnable to provide data of Front Left Wheel Speed'];
FIH_Read_WhlFl_W_Meas.Return = DataDict.CSReturn;
FIH_Read_WhlFl_W_Meas.Return.Type = 'None';
FIH_Read_WhlFl_W_Meas.Return.Min = [];
FIH_Read_WhlFl_W_Meas.Return.Max = [];
FIH_Read_WhlFl_W_Meas.Return.TestTolerance = [];
% FIH_Read_WhlFl_W_Meas.Return.Type = dt.u16;


FIH_Read_WhlFr_W_Meas = DataDict.SrvRunnable;
FIH_Read_WhlFr_W_Meas.Context = 'NonRte';
FIH_Read_WhlFr_W_Meas.Description = [...
  'Server Runnable to provide data of Front Right Wheel Speed'];
FIH_Read_WhlFr_W_Meas.Return = DataDict.CSReturn;
FIH_Read_WhlFr_W_Meas.Return.Type = 'None';
FIH_Read_WhlFr_W_Meas.Return.Min = [];
FIH_Read_WhlFr_W_Meas.Return.Max = [];
FIH_Read_WhlFr_W_Meas.Return.TestTolerance = [];
% FIH_Read_WhlFr_W_Meas.Return.Type = dt.u16;


FIH_Read_WhlRl_W_Meas = DataDict.SrvRunnable;
FIH_Read_WhlRl_W_Meas.Context = 'NonRte';
FIH_Read_WhlRl_W_Meas.Description = [...
  'Server Runnable to provide data of Rear Left Wheel Speed'];
FIH_Read_WhlRl_W_Meas.Return = DataDict.CSReturn;
FIH_Read_WhlRl_W_Meas.Return.Type = 'None';
FIH_Read_WhlRl_W_Meas.Return.Min = [];
FIH_Read_WhlRl_W_Meas.Return.Max = [];
FIH_Read_WhlRl_W_Meas.Return.TestTolerance = [];
% FIH_Read_WhlRl_W_Meas.Return.Type = dt.u16;


FIH_Read_WhlRr_W_Meas = DataDict.SrvRunnable;
FIH_Read_WhlRr_W_Meas.Context = 'NonRte';
FIH_Read_WhlRr_W_Meas.Description = [...
  'Server Runnable to provide data of Rear Right Wheel Speed'];
FIH_Read_WhlRr_W_Meas.Return = DataDict.CSReturn;
FIH_Read_WhlRr_W_Meas.Return.Type = 'None';
FIH_Read_WhlRr_W_Meas.Return.Min = [];
FIH_Read_WhlRr_W_Meas.Return.Max = [];
FIH_Read_WhlRr_W_Meas.Return.TestTolerance = [];
% FIH_Read_WhlRr_W_Meas.Return.Type = dt.u16;


FIH_Read_Whl_Fl_Roll_Cnt = DataDict.SrvRunnable;
FIH_Read_Whl_Fl_Roll_Cnt.Context = 'NonRte';
FIH_Read_Whl_Fl_Roll_Cnt.Description = [...
  'Server Runnable to provide data of Front Left Wheel Rolling Count'];
FIH_Read_Whl_Fl_Roll_Cnt.Return = DataDict.CSReturn;
FIH_Read_Whl_Fl_Roll_Cnt.Return.Type = 'None';
FIH_Read_Whl_Fl_Roll_Cnt.Return.Min = [];
FIH_Read_Whl_Fl_Roll_Cnt.Return.Max = [];
FIH_Read_Whl_Fl_Roll_Cnt.Return.TestTolerance = [];
% FIH_Read_Whl_Fl_Roll_Cnt.Return.Type = dt.u08;


FIH_Read_Whl_Fr_Roll_Cnt = DataDict.SrvRunnable;
FIH_Read_Whl_Fr_Roll_Cnt.Context = 'NonRte';
FIH_Read_Whl_Fr_Roll_Cnt.Description = [...
  'Server Runnable to provide data of Front Right Wheel Rolling Count'];
FIH_Read_Whl_Fr_Roll_Cnt.Return = DataDict.CSReturn;
FIH_Read_Whl_Fr_Roll_Cnt.Return.Type = 'None';
FIH_Read_Whl_Fr_Roll_Cnt.Return.Min = [];
FIH_Read_Whl_Fr_Roll_Cnt.Return.Max = [];
FIH_Read_Whl_Fr_Roll_Cnt.Return.TestTolerance = [];
% FIH_Read_Whl_Fr_Roll_Cnt.Return.Type = dt.u08;


FIH_Read_Whl_Rl_Roll_Cnt = DataDict.SrvRunnable;
FIH_Read_Whl_Rl_Roll_Cnt.Context = 'NonRte';
FIH_Read_Whl_Rl_Roll_Cnt.Description = [...
  'Server Runnable to provide data of Rear Left Rolling Count'];
FIH_Read_Whl_Rl_Roll_Cnt.Return = DataDict.CSReturn;
FIH_Read_Whl_Rl_Roll_Cnt.Return.Type = 'None';
FIH_Read_Whl_Rl_Roll_Cnt.Return.Min = [];
FIH_Read_Whl_Rl_Roll_Cnt.Return.Max = [];
FIH_Read_Whl_Rl_Roll_Cnt.Return.TestTolerance = [];
% FIH_Read_Whl_Rl_Roll_Cnt.Return.Type = dt.u08;


FIH_Read_Whl_Rr_Roll_Cnt = DataDict.SrvRunnable;
FIH_Read_Whl_Rr_Roll_Cnt.Context = 'NonRte';
FIH_Read_Whl_Rr_Roll_Cnt.Description = [...
  'Server Runnable to provide data of Rear Right Rolling Count'];
FIH_Read_Whl_Rr_Roll_Cnt.Return = DataDict.CSReturn;
FIH_Read_Whl_Rr_Roll_Cnt.Return.Type = 'None';
FIH_Read_Whl_Rr_Roll_Cnt.Return.Min = [];
FIH_Read_Whl_Rr_Roll_Cnt.Return.Max = [];
FIH_Read_Whl_Rr_Roll_Cnt.Return.TestTolerance = [];
% FIH_Read_Whl_Rr_Roll_Cnt.Return.Type = dt.u08;


FIH_Read_YawStabilityIndex = DataDict.SrvRunnable;
FIH_Read_YawStabilityIndex.Context = 'NonRte';
FIH_Read_YawStabilityIndex.Description = [...
  'Server Runnable to provide data of Yaw Stability'];
FIH_Read_YawStabilityIndex.Return = DataDict.CSReturn;
FIH_Read_YawStabilityIndex.Return.Type = 'None';
FIH_Read_YawStabilityIndex.Return.Min = [];
FIH_Read_YawStabilityIndex.Return.Max = [];
FIH_Read_YawStabilityIndex.Return.TestTolerance = [];
% FIH_Read_YawStabilityIndex.Return.Type = dt.u16;


%%-------------------------------------------------------------------
%% Input Signal Diagnostics
%%-------------------------------------------------------------------

FIH_Read_Signal_Status = DataDict.SrvRunnable;
FIH_Read_Signal_Status.Context = 'Rte';
FIH_Read_Signal_Status.Description = [...
  'Server Runnable for FIH_Val1_Config'];
FIH_Read_Signal_Status.Return = DataDict.CSReturn;
FIH_Read_Signal_Status.Return.Type = 'None';
FIH_Read_Signal_Status.Return.Min = [];
FIH_Read_Signal_Status.Return.Max = [];
FIH_Read_Signal_Status.Return.TestTolerance = [];
% FIH_Read_Signal_Status.Return.Type = dt.u32;


FIH_Read_Signal_Status2 = DataDict.SrvRunnable;
FIH_Read_Signal_Status2.Context = 'Rte';
FIH_Read_Signal_Status2.Description = [...
  'Server Runnable for FIH_Val2_Config'];
FIH_Read_Signal_Status2.Return = DataDict.CSReturn;
FIH_Read_Signal_Status2.Return.Type = 'None';
FIH_Read_Signal_Status2.Return.Min = [];
FIH_Read_Signal_Status2.Return.Max = [];
FIH_Read_Signal_Status2.Return.TestTolerance = [];
% FIH_Read_Signal_Status2.Return.Type = dt.u32;

%%-----------------------------------------------------------------
%% Read for Pass Thru Signals Diagnostics
%%-----------------------------------------------------------------

FIH_Read_Signal_Status_PassThru = DataDict.SrvRunnable;
FIH_Read_Signal_Status_PassThru.Context = 'Rte';
FIH_Read_Signal_Status_PassThru.Description = [...
  'Server Runnable for FIH_PassVal_Config'];
FIH_Read_Signal_Status_PassThru.Return = DataDict.CSReturn;
FIH_Read_Signal_Status_PassThru.Return.Type = 'None';
FIH_Read_Signal_Status_PassThru.Return.Min = [];
FIH_Read_Signal_Status_PassThru.Return.Max = [];
FIH_Read_Signal_Status_PassThru.Return.TestTolerance = [];
% FIH_Read_Signal_Status_PassThru.Return.Type = dt.u08;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition  

EcuId = DataDict.IpSignal;
EcuId.LongName = 'ECU Identifier';
EcuId.Description = [...
  'This signal is useed to send infomation of all client server to FIH'];
EcuId.DocUnits = 'Cnt';
EcuId.EngDT = dt.u08;
EcuId.EngInit = 0;
EcuId.EngMin = 0;
EcuId.EngMax = 3;
EcuId.ReadIn = {'FordBlaBoxIfCmnInit1', 'FordBlaBoxIfCmnPer1'};
EcuId.ReadType = 'Rte';
%%-------------------------------------------------------------------
%% Input Signal Definitions - Read from BASE EPS
%%-------------------------------------------------------------------

ActvParkAssiTqFild = DataDict.IpSignal;
ActvParkAssiTqFild.LongName = 'Active Park Assist Torque Filtered';
ActvParkAssiTqFild.Description = [...
  'This signal is used to return infomation of Filtered assist torque to ' ...
  'FIH'];
ActvParkAssiTqFild.DocUnits = 'HwNwtMtr';
ActvParkAssiTqFild.EngDT = dt.float32;
ActvParkAssiTqFild.EngInit = 0;
ActvParkAssiTqFild.EngMin = -8.8;
ActvParkAssiTqFild.EngMax = 8.8;
ActvParkAssiTqFild.ReadIn = {'FIH_Read_APA_Torque_Filtered'};
ActvParkAssiTqFild.ReadType = 'Rte';


EngTqClass = DataDict.IpSignal;
EngTqClass.LongName = 'Engine Torque Class';
EngTqClass.Description = [...
  'This signal is used to return infomation of Engine Torque Class to FIH' ...
  ''];
EngTqClass.DocUnits = 'Cnt';
EngTqClass.EngDT = dt.u08;
EngTqClass.EngInit = 0;
EngTqClass.EngMin = 0;
EngTqClass.EngMax = 255;
EngTqClass.ReadIn = {'FIH_Read_EngineSize'};
EngTqClass.ReadType = 'Rte';


% ExtAgCtrlStsInt = DataDict.IpSignal;
% ExtAgCtrlStsInt.LongName = 'External Angle Control Status Internal';
% ExtAgCtrlStsInt.Description = [...
  % 'Status of Internal External Angle Control'];
% ExtAgCtrlStsInt.DocUnits = 'Cnt';
% ExtAgCtrlStsInt.EngDT = dt.lgc;
% ExtAgCtrlStsInt.EngInit = FordVehSAPPAgCtrl1Sts1.FORDVEHSAPPAGCTRLSTS1_CLSD;
% ExtAgCtrlStsInt.EngMin = FordVehSAPPAgCtrl1Sts1.FORDVEHSAPPAGCTRLSTS1_CLSD;
% ExtAgCtrlStsInt.EngMax = FordVehSAPPAgCtrl1Sts1.FORDVEHSAPPAGCTRLSTS1_FLT;
% ExtAgCtrlStsInt.ReadIn = {'FIH_Read_TBA_EAC_Status'};
% ExtAgCtrlStsInt.ReadType = 'Rte';


FordAppldFinalMotTq = DataDict.IpSignal;
FordAppldFinalMotTq.LongName = 'Ford Applied Final Motor Torque';
FordAppldFinalMotTq.Description = [...
  'This signal is used to return infomation of Applied Final Motor Torque' ...
  ''];
FordAppldFinalMotTq.DocUnits = 'HwNwtMtr';
FordAppldFinalMotTq.EngDT = dt.float32;
FordAppldFinalMotTq.EngInit = 0;
FordAppldFinalMotTq.EngMin = -8388608;
FordAppldFinalMotTq.EngMax = 8388607.996;
FordAppldFinalMotTq.ReadIn = {'FIH_Read_EPS_Final_Motor_Tq_App'};
FordAppldFinalMotTq.ReadType = 'Rte';


FordBoostCrvAssiTq = DataDict.IpSignal;
FordBoostCrvAssiTq.LongName = 'Ford Boost Curve Assist Torque';
FordBoostCrvAssiTq.Description = [...
  'This signal is used to return infomation of assist torque to FIH'];
FordBoostCrvAssiTq.DocUnits = 'HwNwtMtr';
FordBoostCrvAssiTq.EngDT = dt.s8p7;
FordBoostCrvAssiTq.EngInit = 0;
FordBoostCrvAssiTq.EngMin = -256;
FordBoostCrvAssiTq.EngMax = 255.98;
FordBoostCrvAssiTq.ReadIn = {'FIH_Read_EPS_Assist_Torque'};
FordBoostCrvAssiTq.ReadType = 'Rte';


FordBoostCrvInpTq = DataDict.IpSignal;
FordBoostCrvInpTq.LongName = 'Ford Boost Curve Input Torque';
FordBoostCrvInpTq.Description = [...
  'This signal is used to return infomation of input torque to FIH'];
FordBoostCrvInpTq.DocUnits = 'HwNwtMtr';
FordBoostCrvInpTq.EngDT = dt.s5p10;
FordBoostCrvInpTq.EngInit = 0;
FordBoostCrvInpTq.EngMin = -32;
FordBoostCrvInpTq.EngMax = 31.999;
FordBoostCrvInpTq.ReadIn = {'FIH_Read_EPS_InputTorqueFilt'};
FordBoostCrvInpTq.ReadType = 'Rte';


FordCmpdHwPosn = DataDict.IpSignal;
FordCmpdHwPosn.LongName = 'Ford Compensated Handwheel Position';
FordCmpdHwPosn.Description = [...
  'This signal is used to return infomation of Compensated Handwheel Posi' ...
  'tion to FIH'];
FordCmpdHwPosn.DocUnits = 'HwDeg';
FordCmpdHwPosn.EngDT = dt.float32;
FordCmpdHwPosn.EngInit = 0;
FordCmpdHwPosn.EngMin = -65535;
FordCmpdHwPosn.EngMax = 65535;
FordCmpdHwPosn.ReadIn = {'FIH_Read_EPS_SteeringAngle'};
FordCmpdHwPosn.ReadType = 'Rte';


FordCmpdHwPosnQlyFac = DataDict.IpSignal;
FordCmpdHwPosnQlyFac.LongName = 'Ford Compensated Handwheel Position Quality Factor';
FordCmpdHwPosnQlyFac.Description = [...
  'This signal is used to return infomation of Compensated Handwheel Posi' ...
  'tion Quality Factor to FIH'];
% FordCmpdHwPosnQlyFac.DocUnits = 'Cnt';
% FordCmpdHwPosnQlyFac.EngDT = enum.Ford_StePinCompAnEst_D_Qf;
% FordCmpdHwPosnQlyFac.EngInit = Ford_StePinCompAnEst_D_Qf.Cx0_Faulty;
% FordCmpdHwPosnQlyFac.EngMin = Ford_StePinCompAnEst_D_Qf.Cx0_Faulty;
% FordCmpdHwPosnQlyFac.EngMax = Ford_StePinCompAnEst_D_Qf.Cx3_OK;
FordCmpdHwPosnQlyFac.DocUnits = 'Cnt';
FordCmpdHwPosnQlyFac.EngDT = dt.u08;
FordCmpdHwPosnQlyFac.EngInit = 0;
FordCmpdHwPosnQlyFac.EngMin = 0;
FordCmpdHwPosnQlyFac.EngMax = 255;
FordCmpdHwPosnQlyFac.ReadIn = {'FIH_Read_EPS_CompSPA_QF'};
FordCmpdHwPosnQlyFac.ReadType = 'Rte';



% FordEpsSysSt = DataDict.IpSignal;
% FordEpsSysSt.LongName = 'Ford EPS System State';
% FordEpsSysSt.Description = [...
  % 'This signal is used to return infomation of System State to FIH'];
% FordEpsSysSt.DocUnits = 'Cnt';
% FordEpsSysSt.EngDT = enum.FordEpsSysSt1;
% FordEpsSysSt.EngInit = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
% FordEpsSysSt.EngMin = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
% FordEpsSysSt.EngMax = FordEpsSysSt1.FORDEPSSYSST_EPS_PWRDWN;
% FordEpsSysSt.ReadIn = {'FIH_Read_EPSSystemState'};
% FordEpsSysSt.ReadType = 'Rte';


FordInpTqRaw = DataDict.IpSignal;
FordInpTqRaw.LongName = 'Ford Input Torque Raw';
FordInpTqRaw.Description = [...
  'This signal is used to return infomation of Input Torque Raw value to ' ...
  'FIH'];
FordInpTqRaw.DocUnits = 'HwNwtMtr';
FordInpTqRaw.EngDT = dt.s5p10;
FordInpTqRaw.EngInit = 0;
FordInpTqRaw.EngMin = -32;
FordInpTqRaw.EngMax = 31.999;
FordInpTqRaw.ReadIn = {'FIH_Read_EPS_InputTorqueRaw'};
FordInpTqRaw.ReadType = 'Rte';


FordMaxAsscTq = DataDict.IpSignal;
FordMaxAsscTq.LongName = 'Ford Maximum Assistance Torque';
FordMaxAsscTq.Description = [...
  'This signal is used to return value of Maximum Assistance Torque to FI' ...
  'H'];
FordMaxAsscTq.DocUnits = 'Perc';
FordMaxAsscTq.EngDT = dt.float32;
FordMaxAsscTq.EngInit = 0;
FordMaxAsscTq.EngMin = 0.0;
FordMaxAsscTq.EngMax = 100.0;
FordMaxAsscTq.ReadIn = {'FIH_Read_MaxAssistanceTorque'};
FordMaxAsscTq.ReadType = 'Rte';


FordRelHwPosn = DataDict.IpSignal;
FordRelHwPosn.LongName = 'Ford Relative Handwheel Position';
FordRelHwPosn.Description = [...
  'This signal is used to return value of Relative Handwheel Position to ' ...
  'FIH'];
FordRelHwPosn.DocUnits = 'HwDeg';
FordRelHwPosn.EngDT = dt.float32;
FordRelHwPosn.EngInit = 0;
FordRelHwPosn.EngMin = -65535;
FordRelHwPosn.EngMax = 65535;
FordRelHwPosn.ReadIn = {'FIH_Read_EPS_Rel_SteeringAngle'};
FordRelHwPosn.ReadType = 'Rte';


FordReqdFinalMotTq = DataDict.IpSignal;
FordReqdFinalMotTq.LongName = 'Ford Requested Final Motor Torque';
FordReqdFinalMotTq.Description = [...
  'This signal is used to return value of Requested Final Motor Torque to' ...
  ' FIH'];
FordReqdFinalMotTq.DocUnits = 'HwNwtMtr';
FordReqdFinalMotTq.EngDT = dt.float32;
FordReqdFinalMotTq.EngInit = 0;
FordReqdFinalMotTq.EngMin = -8388608;
FordReqdFinalMotTq.EngMax = 8388607.996;
FordReqdFinalMotTq.ReadIn = {'FIH_Read_EPS_Final_Motor_Tq_Rq'};
FordReqdFinalMotTq.ReadType = 'Rte';


FordVehSpd = DataDict.IpSignal;
FordVehSpd.LongName = 'Ford Vehicle Speed';
FordVehSpd.Description = [...
  'This signal is used to return value of Vehicle Speed to FIH'];
FordVehSpd.DocUnits = 'Kph';
FordVehSpd.EngDT = dt.float32;
FordVehSpd.EngInit = 0;
FordVehSpd.EngMin = 0;
FordVehSpd.EngMax = 511;
FordVehSpd.ReadIn = {'FIH_Read_EPS_VehicleSpeed_Raw'};
FordVehSpd.ReadType = 'Rte';


FordVehTireCircum = DataDict.IpSignal;
FordVehTireCircum.LongName = 'Ford Vehicle Tire Circumference';
FordVehTireCircum.Description = [...
  'This signal is used to return value of Tire Circumference to FIH'];
FordVehTireCircum.DocUnits = 'MilliMtr';
FordVehTireCircum.EngDT = dt.float32;
FordVehTireCircum.EngInit = 0;
FordVehTireCircum.EngMin = 0;
FordVehTireCircum.EngMax = 7500.0;
FordVehTireCircum.ReadIn = {'FIH_Read_TireCircumference'};
FordVehTireCircum.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = [...
  'This signal is used to return infomation of Handwheel Velocity to FIH'];
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'FIH_Read_EPS_ColumnVelocity'};
HwVel.ReadType = 'Rte';


IntAgCtrlSt = DataDict.IpSignal;
IntAgCtrlSt.LongName = 'Internal Angle Control State';
IntAgCtrlSt.Description = [...
  'This signal is used to return infomation of Internal Angle Control Sta' ...
  'teto FIH'];
IntAgCtrlSt.DocUnits = 'Cnt';
IntAgCtrlSt.EngDT = dt.u08;
IntAgCtrlSt.EngInit = 0;
IntAgCtrlSt.EngMin = 0;
IntAgCtrlSt.EngMax = 255;
IntAgCtrlSt.ReadIn = {'FIH_Read_AngleControlState'};
IntAgCtrlSt.ReadType = 'Rte';


RackToPinionRat = DataDict.IpSignal;
RackToPinionRat.LongName = 'Rack To Pinion Ratio';
RackToPinionRat.Description = [...
  'This signal is used to return value of Rack To Pinion Ratio to FIH'];
RackToPinionRat.DocUnits = 'Cnt';
RackToPinionRat.EngDT = dt.u8p8;
RackToPinionRat.EngInit = 0;
RackToPinionRat.EngMin = 0;
RackToPinionRat.EngMax = 255.99;
RackToPinionRat.ReadIn = {'FIH_Read_RackPinionRatio'};
RackToPinionRat.ReadType = 'Rte';


SelnDrvgModSteerModReq = DataDict.IpSignal;
SelnDrvgModSteerModReq.LongName = 'Selection Driving Mode Steering Mode Request';
SelnDrvgModSteerModReq.Description = [...
  'This signal is used to return value of Selective Driving Mode Steering' ...
  ' Mode to FIH'];
SelnDrvgModSteerModReq.DocUnits = 'Cnt';
SelnDrvgModSteerModReq.EngDT = dt.u08;
SelnDrvgModSteerModReq.EngInit = 0;
SelnDrvgModSteerModReq.EngMin = 0;
SelnDrvgModSteerModReq.EngMax = 255;
SelnDrvgModSteerModReq.ReadIn = {'FIH_Read_EPS_Personalization'};
SelnDrvgModSteerModReq.ReadType = 'Rte';


SemiAutParlParkAgCtrlSts1 = DataDict.IpSignal;
SemiAutParlParkAgCtrlSts1.LongName = 'Semi Automatic Parallel Park Angle Control Status 1';
SemiAutParlParkAgCtrlSts1.Description = [...
  'This signal is used to return boolean value of Semi Automatic Parallel' ...
  ' Park Angle Control Status 1 to FIH'];
SemiAutParlParkAgCtrlSts1.DocUnits = 'Cnt';
SemiAutParlParkAgCtrlSts1.EngDT = dt.u08;
SemiAutParlParkAgCtrlSts1.EngInit = 0;
SemiAutParlParkAgCtrlSts1.EngMin = 0;
SemiAutParlParkAgCtrlSts1.EngMax = 255;
SemiAutParlParkAgCtrlSts1.ReadIn = {'FIH_Read_SAPPAngleControlStat1'};
SemiAutParlParkAgCtrlSts1.ReadType = 'Rte';


SemiAutParlParkAgCtrlSts2 = DataDict.IpSignal;
SemiAutParlParkAgCtrlSts2.LongName = 'Semi Automatic Parallel Park Angle Control Status 2';
SemiAutParlParkAgCtrlSts2.Description = [...
  'This signal is used to return boolean value of Semi Automatic Parallel' ...
  ' Park Angle Control Status 2 to FIH'];
SemiAutParlParkAgCtrlSts2.DocUnits = 'Cnt';
SemiAutParlParkAgCtrlSts2.EngDT = dt.lgc;
SemiAutParlParkAgCtrlSts2.EngInit = 0;
SemiAutParlParkAgCtrlSts2.EngMin = 0;
SemiAutParlParkAgCtrlSts2.EngMax = 1;
SemiAutParlParkAgCtrlSts2.ReadIn = {'FIH_Read_SAPPAngleControlStat2'};
SemiAutParlParkAgCtrlSts2.ReadType = 'Rte';


SemiAutParlParkAgCtrlSts3 = DataDict.IpSignal;
SemiAutParlParkAgCtrlSts3.LongName = 'Semi Automatic Parallel Park Angle Control Status 3';
SemiAutParlParkAgCtrlSts3.Description = [...
  'This signal is used to return boolean value of Semi Automatic Parallel' ...
  ' Park Angle Control Status 3 to FIH'];
SemiAutParlParkAgCtrlSts3.DocUnits = 'Cnt';
SemiAutParlParkAgCtrlSts3.EngDT = dt.lgc;
SemiAutParlParkAgCtrlSts3.EngInit = 0;
SemiAutParlParkAgCtrlSts3.EngMin = 0;
SemiAutParlParkAgCtrlSts3.EngMax = 1;
SemiAutParlParkAgCtrlSts3.ReadIn = {'FIH_Read_SAPPAngleControlStat3'};
SemiAutParlParkAgCtrlSts3.ReadType = 'Rte';


SemiAutParlParkAgCtrlSts4 = DataDict.IpSignal;
SemiAutParlParkAgCtrlSts4.LongName = 'Semi Automatic Parallel Park Angle Control Status 4';
SemiAutParlParkAgCtrlSts4.Description = [...
  'This signal is used to return boolean value of Semi Automatic Parallel' ...
  ' Park Angle Control Status 4 to FIH'];
SemiAutParlParkAgCtrlSts4.DocUnits = 'Cnt';
SemiAutParlParkAgCtrlSts4.EngDT = dt.lgc;
SemiAutParlParkAgCtrlSts4.EngInit = 0;
SemiAutParlParkAgCtrlSts4.EngMin = 0;
SemiAutParlParkAgCtrlSts4.EngMax = 1;
SemiAutParlParkAgCtrlSts4.ReadIn = {'FIH_Read_SAPPAngleControlStat4'};
SemiAutParlParkAgCtrlSts4.ReadType = 'Rte';


SemiAutParlParkAgCtrlSts5 = DataDict.IpSignal;
SemiAutParlParkAgCtrlSts5.LongName = 'Semi Automatic Parallel Park Angle Control Status 5';
SemiAutParlParkAgCtrlSts5.Description = [...
  'This signal is used to return boolean value of Semi Automatic Parallel' ...
  ' Park Angle Control Status 5 to FIH'];
SemiAutParlParkAgCtrlSts5.DocUnits = 'Cnt';
SemiAutParlParkAgCtrlSts5.EngDT = dt.lgc;
SemiAutParlParkAgCtrlSts5.EngInit = 0;
SemiAutParlParkAgCtrlSts5.EngMin = 0;
SemiAutParlParkAgCtrlSts5.EngMax = 1;
SemiAutParlParkAgCtrlSts5.ReadIn = {'FIH_Read_SAPPAngleControlStat5'};
SemiAutParlParkAgCtrlSts5.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = [...
  'This signal is used to return infomation of Vehicle Speed to FIH'];
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'FIH_Read_EPS_VehicleSpeed'};
VehSpd.ReadType = 'Rte';

%%----------------------------------------------------------------------
%% Input Signal Definitions - Read from HS-CAN
%%----------------------------------------------------------------------

FordEvasSteerAssiEnaReq = DataDict.IpSignal;
FordEvasSteerAssiEnaReq.LongName = 'Ford Evasive Steering Assist Enable Request';
FordEvasSteerAssiEnaReq.Description = [...
  'This signal is used to return infomation of ESA Enable Request to FIH'];
FordEvasSteerAssiEnaReq.DocUnits = 'Cnt';
FordEvasSteerAssiEnaReq.EngDT = dt.u08;
FordEvasSteerAssiEnaReq.EngInit = 0;
FordEvasSteerAssiEnaReq.EngMin = 0;
FordEvasSteerAssiEnaReq.EngMax = 255;
FordEvasSteerAssiEnaReq.ReadIn = {'FIH_Read_EsaEnbl_D_Rq'};
FordEvasSteerAssiEnaReq.ReadType = 'Rte';


FordTrlrAidHitchAgRate = DataDict.IpSignal;
FordTrlrAidHitchAgRate.LongName = 'Ford Trailer Aid Hitch Angle Rate';
FordTrlrAidHitchAgRate.Description = [...
  'This signal is used to return infomation of Trailer Hitch Angle Rate t' ...
  'o FIH'];
FordTrlrAidHitchAgRate.DocUnits = 'Cnt';
FordTrlrAidHitchAgRate.EngDT = dt.u16;
FordTrlrAidHitchAgRate.EngInit = 0;
FordTrlrAidHitchAgRate.EngMin = 0;
FordTrlrAidHitchAgRate.EngMax = 65535;
FordTrlrAidHitchAgRate.ReadIn = {'FIH_Read_TrlrAid_AngleRate'};
FordTrlrAidHitchAgRate.ReadType = 'Rte';


FordVehAbsActv = DataDict.IpSignal;
FordVehAbsActv.LongName = 'Ford Vehicle Antilock Braking System Active';
FordVehAbsActv.Description = [...
  'This signal is used to return infomation of ABS Active to FIH'];
FordVehAbsActv.DocUnits = 'Cnt';
FordVehAbsActv.EngDT = dt.u08;
FordVehAbsActv.EngInit = 0;
FordVehAbsActv.EngMin = 0;
FordVehAbsActv.EngMax = 255;
FordVehAbsActv.ReadIn = {'FIH_Read_AbsActv_B_Actl'};
FordVehAbsActv.ReadType = 'Rte';


% FordVehAccrPedlPosnStsQlyFacRaw = DataDict.IpSignal;
% FordVehAccrPedlPosnStsQlyFacRaw.LongName = 'Ford Vehicle Accelerator Pedal Position Status Quality Factor';
% FordVehAccrPedlPosnStsQlyFacRaw.Description = [...
  % 'This signal is used to return infomation of Accelerator Pedal Position' ...
  % ' Status Quality Factor to FIH'];
% FordVehAccrPedlPosnStsQlyFacRaw.DocUnits = 'Cnt';
% FordVehAccrPedlPosnStsQlyFacRaw.EngDT = dt.u16;
% FordVehAccrPedlPosnStsQlyFacRaw.EngInit = 0;
% FordVehAccrPedlPosnStsQlyFacRaw.EngMin = 0;
% FordVehAccrPedlPosnStsQlyFacRaw.EngMax = 65535;
% FordVehAccrPedlPosnStsQlyFacRaw.ReadIn = {'FIH_Read_ApedPosPcActl_D_Qf'};
% FordVehAccrPedlPosnStsQlyFacRaw.ReadType = 'Rte';


FordVehAccrPedlPosnStsRaw = DataDict.IpSignal;
FordVehAccrPedlPosnStsRaw.LongName = 'Ford Vehicle Accelerator Pedal Position Status';
FordVehAccrPedlPosnStsRaw.Description = [...
  'This signal is used to return infomation of Accelerator Pedal Position' ...
  ' Status to FIH'];
FordVehAccrPedlPosnStsRaw.DocUnits = 'Cnt';
FordVehAccrPedlPosnStsRaw.EngDT = dt.u16;
FordVehAccrPedlPosnStsRaw.EngInit = 0;
FordVehAccrPedlPosnStsRaw.EngMin = 0;
FordVehAccrPedlPosnStsRaw.EngMax = 65535;
FordVehAccrPedlPosnStsRaw.ReadIn = {'FIH_Read_ApedPos_Pc_ActlArb'};
FordVehAccrPedlPosnStsRaw.ReadType = 'Rte';


FordVehActBrkTqRaw = DataDict.IpSignal;
FordVehActBrkTqRaw.LongName = 'Ford Vehicle Actual Brake Torque';
FordVehActBrkTqRaw.Description = [...
  'This signal is used to return infomation of Actual Brake Torque to FIH' ...
  ''];
FordVehActBrkTqRaw.DocUnits = 'Cnt';
FordVehActBrkTqRaw.EngDT = dt.u16;
FordVehActBrkTqRaw.EngInit = 0;
FordVehActBrkTqRaw.EngMin = 0;
FordVehActBrkTqRaw.EngMax = 65535;
FordVehActBrkTqRaw.ReadIn = {'FIH_Read_BrkTot_Tq_Actl'};
FordVehActBrkTqRaw.ReadType = 'Rte';


FordVehBlaBoxInp1HiPart = DataDict.IpSignal;
FordVehBlaBoxInp1HiPart.LongName = 'Ford Vehicle Black Box Input 1 High Part';
FordVehBlaBoxInp1HiPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 1 High Part to FIH'];
FordVehBlaBoxInp1HiPart.DocUnits = 'Cnt';
FordVehBlaBoxInp1HiPart.EngDT = dt.u32;
FordVehBlaBoxInp1HiPart.EngInit = 0;
FordVehBlaBoxInp1HiPart.EngMin = 0;
FordVehBlaBoxInp1HiPart.EngMax = 4294967295;
FordVehBlaBoxInp1HiPart.ReadIn = {'FIH_Read_FIH_Msg_In_1_High'};
FordVehBlaBoxInp1HiPart.ReadType = 'Rte';


FordVehBlaBoxInp1LoPart = DataDict.IpSignal;
FordVehBlaBoxInp1LoPart.LongName = 'Ford Vehicle Black Box Input 1 Low Part';
FordVehBlaBoxInp1LoPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 1 Low Part to FIH'];
FordVehBlaBoxInp1LoPart.DocUnits = 'Cnt';
FordVehBlaBoxInp1LoPart.EngDT = dt.u32;
FordVehBlaBoxInp1LoPart.EngInit = 0;
FordVehBlaBoxInp1LoPart.EngMin = 0;
FordVehBlaBoxInp1LoPart.EngMax = 4294967295;
FordVehBlaBoxInp1LoPart.ReadIn = {'FIH_Read_FIH_Msg_In_1_Low'};
FordVehBlaBoxInp1LoPart.ReadType = 'Rte';


FordVehBlaBoxInp2HiPart = DataDict.IpSignal;
FordVehBlaBoxInp2HiPart.LongName = 'Ford Vehicle Black Box Input 2 High Part';
FordVehBlaBoxInp2HiPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 2 High Part to FIH'];
FordVehBlaBoxInp2HiPart.DocUnits = 'Cnt';
FordVehBlaBoxInp2HiPart.EngDT = dt.u32;
FordVehBlaBoxInp2HiPart.EngInit = 0;
FordVehBlaBoxInp2HiPart.EngMin = 0;
FordVehBlaBoxInp2HiPart.EngMax = 4294967295;
FordVehBlaBoxInp2HiPart.ReadIn = {'FIH_Read_FIH_Msg_In_2_High'};
FordVehBlaBoxInp2HiPart.ReadType = 'Rte';


FordVehBlaBoxInp2LoPart = DataDict.IpSignal;
FordVehBlaBoxInp2LoPart.LongName = 'Ford Vehicle Black Box Input 2 Low Part';
FordVehBlaBoxInp2LoPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 2 Low Part to FIH'];
FordVehBlaBoxInp2LoPart.DocUnits = 'Cnt';
FordVehBlaBoxInp2LoPart.EngDT = dt.u32;
FordVehBlaBoxInp2LoPart.EngInit = 0;
FordVehBlaBoxInp2LoPart.EngMin = 0;
FordVehBlaBoxInp2LoPart.EngMax = 4294967295;
FordVehBlaBoxInp2LoPart.ReadIn = {'FIH_Read_FIH_Msg_In_2_Low'};
FordVehBlaBoxInp2LoPart.ReadType = 'Rte';


FordVehBlaBoxInp3HiPart = DataDict.IpSignal;
FordVehBlaBoxInp3HiPart.LongName = 'Ford Vehicle Black Box Input 3 High Part';
FordVehBlaBoxInp3HiPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 3 High Part to FIH'];
FordVehBlaBoxInp3HiPart.DocUnits = 'Cnt';
FordVehBlaBoxInp3HiPart.EngDT = dt.u32;
FordVehBlaBoxInp3HiPart.EngInit = 0;
FordVehBlaBoxInp3HiPart.EngMin = 0;
FordVehBlaBoxInp3HiPart.EngMax = 4294967295;
FordVehBlaBoxInp3HiPart.ReadIn = {'FIH_Read_FIH_Msg_In_3_High'};
FordVehBlaBoxInp3HiPart.ReadType = 'Rte';


FordVehBlaBoxInp3LoPart = DataDict.IpSignal;
FordVehBlaBoxInp3LoPart.LongName = 'Ford Vehicle Black Box Input 3 Low Part';
FordVehBlaBoxInp3LoPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 3 Low Part to FIH'];
FordVehBlaBoxInp3LoPart.DocUnits = 'Cnt';
FordVehBlaBoxInp3LoPart.EngDT = dt.u32;
FordVehBlaBoxInp3LoPart.EngInit = 0;
FordVehBlaBoxInp3LoPart.EngMin = 0;
FordVehBlaBoxInp3LoPart.EngMax = 4294967295;
FordVehBlaBoxInp3LoPart.ReadIn = {'FIH_Read_FIH_Msg_In_3_Low'};
FordVehBlaBoxInp3LoPart.ReadType = 'Rte';


FordVehBlaBoxInp4HiPart = DataDict.IpSignal;
FordVehBlaBoxInp4HiPart.LongName = 'Ford Vehicle Black Box Input 4 High Part';
FordVehBlaBoxInp4HiPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 4 High Part to FIH'];
FordVehBlaBoxInp4HiPart.DocUnits = 'Cnt';
FordVehBlaBoxInp4HiPart.EngDT = dt.u32;
FordVehBlaBoxInp4HiPart.EngInit = 0;
FordVehBlaBoxInp4HiPart.EngMin = 0;
FordVehBlaBoxInp4HiPart.EngMax = 4294967295;
FordVehBlaBoxInp4HiPart.ReadIn = {'FIH_Read_FIH_Msg_In_4_High'};
FordVehBlaBoxInp4HiPart.ReadType = 'Rte';


FordVehBlaBoxInp4LoPart = DataDict.IpSignal;
FordVehBlaBoxInp4LoPart.LongName = 'Ford Vehicle Black Box Input 4 Low Part';
FordVehBlaBoxInp4LoPart.Description = [...
  'This signal is used to return infomation of Ford Vehicle BB Message In' ...
  'put 4 Low Part to FIH'];
FordVehBlaBoxInp4LoPart.DocUnits = 'Cnt';
FordVehBlaBoxInp4LoPart.EngDT = dt.u32;
FordVehBlaBoxInp4LoPart.EngInit = 0;
FordVehBlaBoxInp4LoPart.EngMin = 0;
FordVehBlaBoxInp4LoPart.EngMax = 4294967295;
FordVehBlaBoxInp4LoPart.ReadIn = {'FIH_Read_FIH_Msg_In_4_Low'};
FordVehBlaBoxInp4LoPart.ReadType = 'Rte';


FordVehBrkPedlAppld = DataDict.IpSignal;
FordVehBrkPedlAppld.LongName = 'Ford Vehicle Brake Pedal Applied';
FordVehBrkPedlAppld.Description = [...
  'This signal is used to return infomation of Brake Pedal Applied to FIH' ...
  ''];
FordVehBrkPedlAppld.DocUnits = 'Cnt';
FordVehBrkPedlAppld.EngDT = dt.u08;
FordVehBrkPedlAppld.EngInit = 0;
FordVehBrkPedlAppld.EngMin = 0;
FordVehBrkPedlAppld.EngMax = 255;
FordVehBrkPedlAppld.ReadIn = {'FIH_Read_BpedDrvAppl_Actl'};
FordVehBrkPedlAppld.ReadType = 'Rte';


FordVehBrkPedlAppldQlyFac = DataDict.IpSignal;
FordVehBrkPedlAppldQlyFac.LongName = 'Ford Vehicle Brake Pedal Applied Quality Factor';
FordVehBrkPedlAppldQlyFac.Description = [...
  'This signal is used to return infomation of Brake Pedal Applied Qualit' ...
  'y Factor to FIH'];
FordVehBrkPedlAppldQlyFac.DocUnits = 'Cnt';
FordVehBrkPedlAppldQlyFac.EngDT = dt.u08;
FordVehBrkPedlAppldQlyFac.EngInit = 0;
FordVehBrkPedlAppldQlyFac.EngMin = 0;
FordVehBrkPedlAppldQlyFac.EngMax = 255;
FordVehBrkPedlAppldQlyFac.ReadIn = {'FIH_Read_BpedDrvAppl_QF'};
FordVehBrkPedlAppldQlyFac.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgDenied = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgDenied.LongName = 'Ford Vehicle Collision Mitigation By Braking Denied';
FordVehCllsnMtgtnByBrkgDenied.Description = [...
  'This signal is used to return infomation of Collision Mitigation By Br' ...
  'aking Denied to FIH'];
FordVehCllsnMtgtnByBrkgDenied.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgDenied.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgDenied.EngInit = 0;
FordVehCllsnMtgtnByBrkgDenied.EngMin = 0;
FordVehCllsnMtgtnByBrkgDenied.EngMax = 255;
FordVehCllsnMtgtnByBrkgDenied.ReadIn = {'FIH_Read_CmbbDeny_B_ActlBrk'};
FordVehCllsnMtgtnByBrkgDenied.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgDisad = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgDisad.LongName = 'Ford Vehicle Collision Mitigation By Braking Disabled';
FordVehCllsnMtgtnByBrkgDisad.Description = [...
  'This signal is used to return infomation of Collision Mitigation By Br' ...
  'aking Disabled to FIH'];
FordVehCllsnMtgtnByBrkgDisad.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgDisad.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgDisad.EngInit = 0;
FordVehCllsnMtgtnByBrkgDisad.EngMin = 0;
FordVehCllsnMtgtnByBrkgDisad.EngMax = 255;
FordVehCllsnMtgtnByBrkgDisad.ReadIn = {'FIH_Read_CmbbBrkDis_B_Actl'};
FordVehCllsnMtgtnByBrkgDisad.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgLatDstRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgLatDstRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Lateral Distance';
FordVehCllsnMtgtnByBrkgLatDstRaw.Description = [...
  'This signal is used to return infomation of Lateral Distance to FIH'];
FordVehCllsnMtgtnByBrkgLatDstRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLatDstRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgLatDstRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgLatDstRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgLatDstRaw.EngMax = 65535;
FordVehCllsnMtgtnByBrkgLatDstRaw.ReadIn = {'FIH_Read_CmbbObjDistLat_L_Actl'};
FordVehCllsnMtgtnByBrkgLatDstRaw.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgLgtDstRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgLgtDstRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Longitudinal Distance';
FordVehCllsnMtgtnByBrkgLgtDstRaw.Description = [...
  'This signal is used to return infomation of Longitudinal Distance to F' ...
  'IH'];
FordVehCllsnMtgtnByBrkgLgtDstRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgLgtDstRaw.EngMax = 65535;
FordVehCllsnMtgtnByBrkgLgtDstRaw.ReadIn = {'FIH_Read_CmbbObjDistLong_L_Actl'};
FordVehCllsnMtgtnByBrkgLgtDstRaw.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Object Data Confidence Level';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.Description = [...
  'This signal is used to return infomation of Object Data Confidence Lev' ...
  'el to FIH'];
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.EngMax = 255;
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.ReadIn = {'FIH_Read_CmbbObjConfdnc_D_Stat'};
FordVehCllsnMtgtnByBrkgObjDataConfLvlRaw.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgObjTypClassnRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Object Type Classification';
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.Description = [...
  'This signal is used to return infomation of Object Type Classification' ...
  ' to FIH'];
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.EngMax = 255;
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.ReadIn = {'FIH_Read_CmbbObjClass_D_Stat'};
FordVehCllsnMtgtnByBrkgObjTypClassnRaw.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgRelLatVelRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Lateral Velocity';
FordVehCllsnMtgtnByBrkgRelLatVelRaw.Description = [...
  'This signal is used to return infomation of Relative Lateral Velocity ' ...
  'to FIH'];
FordVehCllsnMtgtnByBrkgRelLatVelRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.EngMax = 65535;
FordVehCllsnMtgtnByBrkgRelLatVelRaw.ReadIn = {'FIH_Read_CmbbObjRelLat_V_Actl'};
FordVehCllsnMtgtnByBrkgRelLatVelRaw.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgRelLgtVelRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Relative Longitudinal Velocity';
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.Description = [...
  'This signal is used to return infomation of Relative Longitudinal Velo' ...
  'city to FIH'];
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngDT = dt.u16;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.EngMax = 65535;
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.ReadIn = {'FIH_Read_CmbbObjRelLong_V_Actl'};
FordVehCllsnMtgtnByBrkgRelLgtVelRaw.ReadType = 'Rte';


FordVehCllsnMtgtnByBrkgTiToCllsnRaw = DataDict.IpSignal;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.LongName = 'Ford Vehicle Collision Mitigation By Braking Time To Collision';
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.Description = [...
  'This signal is used to return infomation of Time To Collision to FIH'];
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.DocUnits = 'Cnt';
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngDT = dt.u08;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngInit = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngMin = 0;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.EngMax = 255;
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.ReadIn = {'FIH_Read_CmbbObjColl_T_Actl'};
FordVehCllsnMtgtnByBrkgTiToCllsnRaw.ReadType = 'Rte';


FordVehEngSpdRaw = DataDict.IpSignal;
FordVehEngSpdRaw.LongName = 'Ford Vehicle Engine Speed';
FordVehEngSpdRaw.Description = [...
  'This signal is used to return infomation of Engine Speed to FIH'];
FordVehEngSpdRaw.DocUnits = 'Cnt';
FordVehEngSpdRaw.EngDT = dt.u16;
FordVehEngSpdRaw.EngInit = 0;
FordVehEngSpdRaw.EngMin = 0;
FordVehEngSpdRaw.EngMax = 65535;
FordVehEngSpdRaw.ReadIn = {'FIH_Read_EngAout_N_Actl'};
FordVehEngSpdRaw.ReadType = 'Rte';


FordVehEscActv = DataDict.IpSignal;
FordVehEscActv.LongName = 'Ford Vehicle Electronic Stability Control Active';
FordVehEscActv.Description = [...
  'This signal is used to return infomation of ESC Active to FIH'];
FordVehEscActv.DocUnits = 'Cnt';
FordVehEscActv.EngDT = dt.u08;
FordVehEscActv.EngInit = 0;
FordVehEscActv.EngMin = 0;
FordVehEscActv.EngMax = 255;
FordVehEscActv.ReadIn = {'FIH_Read_StabCtlBrkActv_B_Actl'};
FordVehEscActv.ReadType = 'Rte';


FordVehEvasSteerAssiReq = DataDict.IpSignal;
FordVehEvasSteerAssiReq.LongName = 'Ford Vehicle Evasive Steering Assist Request';
FordVehEvasSteerAssiReq.Description = [...
  'This signal is used to return infomation of Requested ESA to FIH'];
FordVehEvasSteerAssiReq.DocUnits = 'Cnt';
FordVehEvasSteerAssiReq.EngDT = dt.u08;
FordVehEvasSteerAssiReq.EngInit = 0;
FordVehEvasSteerAssiReq.EngMin = 0;
FordVehEvasSteerAssiReq.EngMax = 255;
FordVehEvasSteerAssiReq.ReadIn = {'FIH_Read_EsaOn_B_Rq'};
FordVehEvasSteerAssiReq.ReadType = 'Rte';


FordVehFrntLeWhlDirRaw = DataDict.IpSignal;
FordVehFrntLeWhlDirRaw.LongName = 'Ford Vehicle Front Left Wheel Direction';
FordVehFrntLeWhlDirRaw.Description = [...
  'This signal is used to return infomation of Front Left Wheel Direction' ...
  ' to FIH'];
FordVehFrntLeWhlDirRaw.DocUnits = 'Cnt';
FordVehFrntLeWhlDirRaw.EngDT = dt.u08;
FordVehFrntLeWhlDirRaw.EngInit = 0;
FordVehFrntLeWhlDirRaw.EngMin = 0;
FordVehFrntLeWhlDirRaw.EngMax = 255;
FordVehFrntLeWhlDirRaw.ReadIn = {'FIH_Read_WhlDirFl_D_Actl'};
FordVehFrntLeWhlDirRaw.ReadType = 'Rte';


FordVehFrntLeWhlRollgCntr = DataDict.IpSignal;
FordVehFrntLeWhlRollgCntr.LongName = 'Ford Vehicle Front Left Wheel Rolling Counter';
FordVehFrntLeWhlRollgCntr.Description = [...
  'This signal is used to return infomation of Front Left Wheel Rolling C' ...
  'ount to FIH'];
FordVehFrntLeWhlRollgCntr.DocUnits = 'Cnt';
FordVehFrntLeWhlRollgCntr.EngDT = dt.u08;
FordVehFrntLeWhlRollgCntr.EngInit = 0;
FordVehFrntLeWhlRollgCntr.EngMin = 0;
FordVehFrntLeWhlRollgCntr.EngMax = 255;
FordVehFrntLeWhlRollgCntr.ReadIn = {'FIH_Read_Whl_Fl_Roll_Cnt'};
FordVehFrntLeWhlRollgCntr.ReadType = 'Rte';


FordVehFrntLeWhlSpdRaw = DataDict.IpSignal;
FordVehFrntLeWhlSpdRaw.LongName = 'Ford Vehicle Front Left Wheel Speed';
FordVehFrntLeWhlSpdRaw.Description = [...
  'This signal is used to return infomation of Front Left Wheel Speed to ' ...
  'FIH'];
FordVehFrntLeWhlSpdRaw.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdRaw.EngDT = dt.u16;
FordVehFrntLeWhlSpdRaw.EngInit = 0;
FordVehFrntLeWhlSpdRaw.EngMin = 0;
FordVehFrntLeWhlSpdRaw.EngMax = 65535;
FordVehFrntLeWhlSpdRaw.ReadIn = {'FIH_Read_WhlFl_W_Meas'};
FordVehFrntLeWhlSpdRaw.ReadType = 'Rte';


FordVehFrntRiWhlDirRaw = DataDict.IpSignal;
FordVehFrntRiWhlDirRaw.LongName = 'Ford Vehicle Front Right Wheel Direction';
FordVehFrntRiWhlDirRaw.Description = [...
  'This signal is used to return infomation of Front Right Wheel Directio' ...
  'n to FIH'];
FordVehFrntRiWhlDirRaw.DocUnits = 'Cnt';
FordVehFrntRiWhlDirRaw.EngDT = dt.u08;
FordVehFrntRiWhlDirRaw.EngInit = 0;
FordVehFrntRiWhlDirRaw.EngMin = 0;
FordVehFrntRiWhlDirRaw.EngMax = 255;
FordVehFrntRiWhlDirRaw.ReadIn = {'FIH_Read_WhlDirFr_D_Actl'};
FordVehFrntRiWhlDirRaw.ReadType = 'Rte';


FordVehFrntRiWhlRollgCntr = DataDict.IpSignal;
FordVehFrntRiWhlRollgCntr.LongName = 'Ford Vehicle Front Right Wheel Rolling Counter';
FordVehFrntRiWhlRollgCntr.Description = [...
  'This signal is used to return infomation of Front Right Wheel Rolling ' ...
  'Count to FIH'];
FordVehFrntRiWhlRollgCntr.DocUnits = 'Cnt';
FordVehFrntRiWhlRollgCntr.EngDT = dt.u08;
FordVehFrntRiWhlRollgCntr.EngInit = 0;
FordVehFrntRiWhlRollgCntr.EngMin = 0;
FordVehFrntRiWhlRollgCntr.EngMax = 255;
FordVehFrntRiWhlRollgCntr.ReadIn = {'FIH_Read_Whl_Fr_Roll_Cnt'};
FordVehFrntRiWhlRollgCntr.ReadType = 'Rte';


FordVehFrntRiWhlSpdRaw = DataDict.IpSignal;
FordVehFrntRiWhlSpdRaw.LongName = 'Ford Vehicle Front Right Wheel Speed';
FordVehFrntRiWhlSpdRaw.Description = [...
  'This signal is used to return infomation of Front Right Wheel Speed to' ...
  ' FIH'];
FordVehFrntRiWhlSpdRaw.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdRaw.EngDT = dt.u16;
FordVehFrntRiWhlSpdRaw.EngInit = 0;
FordVehFrntRiWhlSpdRaw.EngMin = 0;
FordVehFrntRiWhlSpdRaw.EngMax = 65535;
FordVehFrntRiWhlSpdRaw.ReadIn = {'FIH_Read_WhlFr_W_Meas'};
FordVehFrntRiWhlSpdRaw.ReadType = 'Rte';


FordVehGearLvrPosn = DataDict.IpSignal;
FordVehGearLvrPosn.LongName = 'Ford Vehicle Gear Lever Position';
FordVehGearLvrPosn.Description = [...
  'This signal is used to return infomation of Gear Lever Position to FIH' ...
  ''];
FordVehGearLvrPosn.DocUnits = 'Cnt';
FordVehGearLvrPosn.EngDT = dt.u08;
FordVehGearLvrPosn.EngInit = 0;
FordVehGearLvrPosn.EngMin = 0;
FordVehGearLvrPosn.EngMax = 255;
FordVehGearLvrPosn.ReadIn = {'FIH_Read_GearLvrPos_D_Actl'};
FordVehGearLvrPosn.ReadType = 'Rte';


FordVehGearPosnRaw = DataDict.IpSignal;
FordVehGearPosnRaw.LongName = 'Ford Vehicle Gear Position';
FordVehGearPosnRaw.Description = [...
  'This signal is used to return infomation of Transmission Gear Position' ...
  ' to FIH'];
FordVehGearPosnRaw.DocUnits = 'Cnt';
FordVehGearPosnRaw.EngDT = dt.u08;
FordVehGearPosnRaw.EngInit = 0;
FordVehGearPosnRaw.EngMin = 0;
FordVehGearPosnRaw.EngMax = 255;
FordVehGearPosnRaw.ReadIn = {'FIH_Read_GearPosition'};
FordVehGearPosnRaw.ReadType = 'Rte';


FordVehGearRvsStsRaw = DataDict.IpSignal;
FordVehGearRvsStsRaw.LongName = 'Ford Vehicle Gear Reverse Status';
FordVehGearRvsStsRaw.Description = [...
  'This signal is used to return infomation of Vehicle In Reverse to FIH'];
FordVehGearRvsStsRaw.DocUnits = 'Cnt';
FordVehGearRvsStsRaw.EngDT = dt.u08;
FordVehGearRvsStsRaw.EngInit = 0;
FordVehGearRvsStsRaw.EngMin = 0;
FordVehGearRvsStsRaw.EngMax = 255;
FordVehGearRvsStsRaw.ReadIn = {'FIH_Read_GearRvrse_D_Actl'};
FordVehGearRvsStsRaw.ReadType = 'Rte';


FordVehIgnSts = DataDict.IpSignal;
FordVehIgnSts.LongName = 'Ford Vehicle Ignition Status';
FordVehIgnSts.Description = [...
  'This signal is used to return infomation of CAN Ignition Status to FIH' ...
  ''];
FordVehIgnSts.DocUnits = 'Cnt';
FordVehIgnSts.EngDT = dt.u08;
FordVehIgnSts.EngInit = 0;
FordVehIgnSts.EngMin = 0;
FordVehIgnSts.EngMax = 255;
FordVehIgnSts.ReadIn = {'FIH_Read_Ignition_Status'};
FordVehIgnSts.ReadType = 'Rte';


FordVehLaneDetnWarnInten = DataDict.IpSignal;
FordVehLaneDetnWarnInten.LongName = 'Ford Vehicle Lane Detection Warning Intensity';
FordVehLaneDetnWarnInten.Description = [...
  'This signal is used to return infomation of LDW Intensity to FIH'];
FordVehLaneDetnWarnInten.DocUnits = 'Cnt';
FordVehLaneDetnWarnInten.EngDT = dt.u08;
FordVehLaneDetnWarnInten.EngInit = 0;
FordVehLaneDetnWarnInten.EngMin = 0;
FordVehLaneDetnWarnInten.EngMax = 255;
FordVehLaneDetnWarnInten.ReadIn = {'FIH_Read_LdwActvIntns_D_Req'};
FordVehLaneDetnWarnInten.ReadType = 'Rte';


FordVehLaneDetnWarnSts = DataDict.IpSignal;
FordVehLaneDetnWarnSts.LongName = 'Ford Vehicle Lane Detection Warning Status';
FordVehLaneDetnWarnSts.Description = [...
  'This signal is used to return infomation of LDW Status to FIH'];
FordVehLaneDetnWarnSts.DocUnits = 'Cnt';
FordVehLaneDetnWarnSts.EngDT = dt.u08;
FordVehLaneDetnWarnSts.EngInit = 0;
FordVehLaneDetnWarnSts.EngMin = 0;
FordVehLaneDetnWarnSts.EngMax = 255;
FordVehLaneDetnWarnSts.ReadIn = {'FIH_Read_LdwActvStats_D_Req'};
FordVehLaneDetnWarnSts.ReadType = 'Rte';


FordVehLaneKeepSysCrvtRaw = DataDict.IpSignal;
FordVehLaneKeepSysCrvtRaw.LongName = 'Ford Vehicle LKS Curvature';
FordVehLaneKeepSysCrvtRaw.Description = [...
  'This signal is used to return infomation of LKS Curvature to FIH'];
FordVehLaneKeepSysCrvtRaw.DocUnits = 'Cnt';
FordVehLaneKeepSysCrvtRaw.EngDT = dt.u16;
FordVehLaneKeepSysCrvtRaw.EngInit = 0;
FordVehLaneKeepSysCrvtRaw.EngMin = 0;
FordVehLaneKeepSysCrvtRaw.EngMax = 65535;
FordVehLaneKeepSysCrvtRaw.ReadIn = {'FIH_Read_LaCurvature_No_Calc'};
FordVehLaneKeepSysCrvtRaw.ReadType = 'Rte';


FordVehLaneKeepSysRampTyp = DataDict.IpSignal;
FordVehLaneKeepSysRampTyp.LongName = 'Ford Vehicle LKS Ramp Type';
FordVehLaneKeepSysRampTyp.Description = [...
  'This signal is used to return infomation of LKS Ramp Type to FIH'];
FordVehLaneKeepSysRampTyp.DocUnits = 'Cnt';
FordVehLaneKeepSysRampTyp.EngDT = dt.u08;
FordVehLaneKeepSysRampTyp.EngInit = 0;
FordVehLaneKeepSysRampTyp.EngMin = 0;
FordVehLaneKeepSysRampTyp.EngMax = 255;
FordVehLaneKeepSysRampTyp.ReadIn = {'FIH_Read_LaRampType_B_Req'};
FordVehLaneKeepSysRampTyp.ReadType = 'Rte';


FordVehLaneKeepSysReqdAg = DataDict.IpSignal;
FordVehLaneKeepSysReqdAg.LongName = 'Ford Vehicle LKS Requested Angle';
FordVehLaneKeepSysReqdAg.Description = [...
  'This signal is used to return infomation of LKS Requested Angle to FIH' ...
  ''];
FordVehLaneKeepSysReqdAg.DocUnits = 'Cnt';
FordVehLaneKeepSysReqdAg.EngDT = dt.u16;
FordVehLaneKeepSysReqdAg.EngInit = 0;
FordVehLaneKeepSysReqdAg.EngMin = 0;
FordVehLaneKeepSysReqdAg.EngMax = 65535;
FordVehLaneKeepSysReqdAg.ReadIn = {'FIH_Read_LaRefAng_No_Req'};
FordVehLaneKeepSysReqdAg.ReadType = 'Rte';


FordVehLaneKeepSysSts = DataDict.IpSignal;
FordVehLaneKeepSysSts.LongName = 'Ford Vehicle Lane Keep System Status';
FordVehLaneKeepSysSts.Description = [...
  'This signal is used to return infomation of LKA Status to FIH'];
FordVehLaneKeepSysSts.DocUnits = 'Cnt';
FordVehLaneKeepSysSts.EngDT = dt.u08;
FordVehLaneKeepSysSts.EngInit = 0;
FordVehLaneKeepSysSts.EngMin = 0;
FordVehLaneKeepSysSts.EngMax = 255;
FordVehLaneKeepSysSts.ReadIn = {'FIH_Read_LkaActvStats_D_Req'};
FordVehLaneKeepSysSts.ReadType = 'Rte';


FordVehLatACmpdRaw = DataDict.IpSignal;
FordVehLatACmpdRaw.LongName = 'Ford Vehicle Lateral Acceleration Compensated';
FordVehLatACmpdRaw.Description = [...
  'This signal is used to return infomation of Vehicle Lateral Accelerati' ...
  'on Compensated to FIH'];
FordVehLatACmpdRaw.DocUnits = 'Cnt';
FordVehLatACmpdRaw.EngDT = dt.u16;
FordVehLatACmpdRaw.EngInit = 0;
FordVehLatACmpdRaw.EngMin = 0;
FordVehLatACmpdRaw.EngMax = 65535;
FordVehLatACmpdRaw.ReadIn = {'FIH_Read_VehLatComp_A_Actl'};
FordVehLatACmpdRaw.ReadType = 'Rte';


FordVehLatCtrlCrvtRateRaw = DataDict.IpSignal;
FordVehLatCtrlCrvtRateRaw.LongName = 'Ford Vehicle Lateral Control Curvature Rate';
FordVehLatCtrlCrvtRateRaw.Description = [...
  'This signal is used to return infomation of Lateral Control Curvature ' ...
  'Rate to FIH'];
FordVehLatCtrlCrvtRateRaw.DocUnits = 'Cnt';
FordVehLatCtrlCrvtRateRaw.EngDT = dt.u16;
FordVehLatCtrlCrvtRateRaw.EngInit = 0;
FordVehLatCtrlCrvtRateRaw.EngMin = 0;
FordVehLatCtrlCrvtRateRaw.EngMax = 65535;
FordVehLatCtrlCrvtRateRaw.ReadIn = {'FIH_Read_LatCtlCurv_NoRate_Actl'};
FordVehLatCtrlCrvtRateRaw.ReadType = 'Rte';


FordVehLatCtrlCrvtRaw = DataDict.IpSignal;
FordVehLatCtrlCrvtRaw.LongName = 'Ford Vehicle Lateral Control Curvature';
FordVehLatCtrlCrvtRaw.Description = [...
  'This signal is used to return infomation of Lateral Control Curvature ' ...
  'to FIH'];
FordVehLatCtrlCrvtRaw.DocUnits = 'Cnt';
FordVehLatCtrlCrvtRaw.EngDT = dt.u16;
FordVehLatCtrlCrvtRaw.EngInit = 0;
FordVehLatCtrlCrvtRaw.EngMin = 0;
FordVehLatCtrlCrvtRaw.EngMax = 65535;
FordVehLatCtrlCrvtRaw.ReadIn = {'FIH_Read_LatCtlCurv_No_Actl'};
FordVehLatCtrlCrvtRaw.ReadType = 'Rte';


FordVehLatCtrlHandsOffDetnTqStimlsReq = DataDict.IpSignal;
FordVehLatCtrlHandsOffDetnTqStimlsReq.LongName = 'Ford Vehicle Lateral Control Hands Off Detection Torque Stimulus Request';
FordVehLatCtrlHandsOffDetnTqStimlsReq.Description = [...
  'This signal is used to return infomation of Lateral Control Hands Off ' ...
  'Detection Torque Stimulus Request to FIH'];
FordVehLatCtrlHandsOffDetnTqStimlsReq.DocUnits = 'Cnt';
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngDT = dt.u08;
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngInit = 0;
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngMin = 0;
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngMax = 255;
FordVehLatCtrlHandsOffDetnTqStimlsReq.ReadIn = {'FIH_Read_HandsOffCnfm_B_Rq'};
FordVehLatCtrlHandsOffDetnTqStimlsReq.ReadType = 'Rte';


FordVehLatCtrlPahOffsRaw = DataDict.IpSignal;
FordVehLatCtrlPahOffsRaw.LongName = 'Ford Vehicle Lateral Control Path Offset';
FordVehLatCtrlPahOffsRaw.Description = [...
  'This signal is used to return infomation of Lateral Control Pah Offset' ...
  ' to FIH'];
FordVehLatCtrlPahOffsRaw.DocUnits = 'Cnt';
FordVehLatCtrlPahOffsRaw.EngDT = dt.u16;
FordVehLatCtrlPahOffsRaw.EngInit = 0;
FordVehLatCtrlPahOffsRaw.EngMin = 0;
FordVehLatCtrlPahOffsRaw.EngMax = 65535;
FordVehLatCtrlPahOffsRaw.ReadIn = {'FIH_Read_LatCtlPathOffst_L_Actl'};
FordVehLatCtrlPahOffsRaw.ReadType = 'Rte';


FordVehLatCtrlPahRaw = DataDict.IpSignal;
FordVehLatCtrlPahRaw.LongName = 'Ford Vehicle Lateral Control Path';
FordVehLatCtrlPahRaw.Description = [...
  'This signal is used to return infomation of Lateral Control Path to FI' ...
  'H'];
FordVehLatCtrlPahRaw.DocUnits = 'Cnt';
FordVehLatCtrlPahRaw.EngDT = dt.u16;
FordVehLatCtrlPahRaw.EngInit = 0;
FordVehLatCtrlPahRaw.EngMin = 0;
FordVehLatCtrlPahRaw.EngMax = 65535;
FordVehLatCtrlPahRaw.ReadIn = {'FIH_Read_LatCtlPath_An_Actl'};
FordVehLatCtrlPahRaw.ReadType = 'Rte';


FordVehLatCtrlPrcsn = DataDict.IpSignal;
FordVehLatCtrlPrcsn.LongName = 'Ford Vehicle Lateral Control Precision';
FordVehLatCtrlPrcsn.Description = [...
  'This signal is used to return infomation of Lateral Control Precision ' ...
  'to FIH'];
FordVehLatCtrlPrcsn.DocUnits = 'Cnt';
FordVehLatCtrlPrcsn.EngDT = dt.u08;
FordVehLatCtrlPrcsn.EngInit = 0;
FordVehLatCtrlPrcsn.EngMin = 0;
FordVehLatCtrlPrcsn.EngMax = 255;
FordVehLatCtrlPrcsn.ReadIn = {'FIH_Read_LatCtlPrecision_D_Rq'};
FordVehLatCtrlPrcsn.ReadType = 'Rte';


FordVehLatCtrlRampTyp = DataDict.IpSignal;
FordVehLatCtrlRampTyp.LongName = 'Ford Vehicle Lateral Control Ramp Type';
FordVehLatCtrlRampTyp.Description = [...
  'This signal is used to return infomation of Lateral Control Ramp Type ' ...
  'to FIH'];
FordVehLatCtrlRampTyp.DocUnits = 'Cnt';
FordVehLatCtrlRampTyp.EngDT = dt.u08;
FordVehLatCtrlRampTyp.EngInit = 0;
FordVehLatCtrlRampTyp.EngMin = 0;
FordVehLatCtrlRampTyp.EngMax = 255;
FordVehLatCtrlRampTyp.ReadIn = {'FIH_Read_LatCtlRampType_D_Rq'};
FordVehLatCtrlRampTyp.ReadType = 'Rte';


FordVehLatCtrlReq = DataDict.IpSignal;
FordVehLatCtrlReq.LongName = 'Ford Vehicle Lateral Control Request';
FordVehLatCtrlReq.Description = [...
  'This signal is used to return infomation of Lateral Control Request to' ...
  ' FIH'];
FordVehLatCtrlReq.DocUnits = 'Cnt';
FordVehLatCtrlReq.EngDT = dt.u08;
FordVehLatCtrlReq.EngInit = 0;
FordVehLatCtrlReq.EngMin = 0;
FordVehLatCtrlReq.EngMax = 255;
FordVehLatCtrlReq.ReadIn = {'FIH_Read_LatCtl_D_Rq'};
FordVehLatCtrlReq.ReadType = 'Rte';


FordVehLatCtrlRingMax = DataDict.IpSignal;
FordVehLatCtrlRingMax.LongName = 'Ford Vehicle Lateral Control Range Maximum';
FordVehLatCtrlRingMax.Description = [...
  'This signal is used to return infomation of Lateral Control Range Max ' ...
  'to FIH'];
FordVehLatCtrlRingMax.DocUnits = 'Cnt';
FordVehLatCtrlRingMax.EngDT = dt.u08;
FordVehLatCtrlRingMax.EngInit = 0;
FordVehLatCtrlRingMax.EngMin = 0;
FordVehLatCtrlRingMax.EngMax = 255;
FordVehLatCtrlRingMax.ReadIn = {'FIH_Read_LatCtlRangeMax'};
FordVehLatCtrlRingMax.ReadType = 'Rte';


FordVehLgtACmpdRaw = DataDict.IpSignal;
FordVehLgtACmpdRaw.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated';
FordVehLgtACmpdRaw.Description = [...
  'This signal is used to return infomation of Vehicle Longitudinal Accel' ...
  'eration Compensated to FIH'];
FordVehLgtACmpdRaw.DocUnits = 'Cnt';
FordVehLgtACmpdRaw.EngDT = dt.u16;
FordVehLgtACmpdRaw.EngInit = 0;
FordVehLgtACmpdRaw.EngMin = 0;
FordVehLgtACmpdRaw.EngMax = 65535;
FordVehLgtACmpdRaw.ReadIn = {'FIH_Read_VehLongComp_A_Actl'};
FordVehLgtACmpdRaw.ReadType = 'Rte';


FordVehLoSpdMtnCtrlBrkSprtStsRaw = DataDict.IpSignal;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.LongName = 'Ford Vehicle LSMC Brake Support Status';
FordVehLoSpdMtnCtrlBrkSprtStsRaw.Description = [...
  'This signal is used to return infomation of LSMC Brake Support Status ' ...
  'to FIH'];
FordVehLoSpdMtnCtrlBrkSprtStsRaw.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngDT = dt.u08;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngInit = 0;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.EngMax = 255;
FordVehLoSpdMtnCtrlBrkSprtStsRaw.ReadIn = {'FIH_Read_LsmcBrkDecel_D_Stat'};
FordVehLoSpdMtnCtrlBrkSprtStsRaw.ReadType = 'Rte';


FordVehParkAidModlSysSt = DataDict.IpSignal;
FordVehParkAidModlSysSt.LongName = 'Ford Vehicle PAM System State';
FordVehParkAidModlSysSt.Description = [...
  'This signal is used to return infomation of PAM System State to FIH'];
FordVehParkAidModlSysSt.DocUnits = 'Cnt';
FordVehParkAidModlSysSt.EngDT = dt.u08;
FordVehParkAidModlSysSt.EngInit = 0;
FordVehParkAidModlSysSt.EngMin = 0;
FordVehParkAidModlSysSt.EngMax = 255;
FordVehParkAidModlSysSt.ReadIn = {'FIH_Read_SAPPStatusCoding'};
FordVehParkAidModlSysSt.ReadType = 'Rte';


FordVehPrpnWhlTqRaw = DataDict.IpSignal;
FordVehPrpnWhlTqRaw.LongName = 'Ford Vehicle Propulsion Wheel Torque';
FordVehPrpnWhlTqRaw.Description = [...
  'This signal is used to return infomation of Propulsion Wheel Torque to' ...
  ' FIH'];
FordVehPrpnWhlTqRaw.DocUnits = 'Cnt';
FordVehPrpnWhlTqRaw.EngDT = dt.u16;
FordVehPrpnWhlTqRaw.EngInit = 0;
FordVehPrpnWhlTqRaw.EngMin = 0;
FordVehPrpnWhlTqRaw.EngMax = 65535;
FordVehPrpnWhlTqRaw.ReadIn = {'FIH_Read_PrplWhlTot2_Tq_Actl'};
FordVehPrpnWhlTqRaw.ReadType = 'Rte';


FordVehReLeWhlDirRaw = DataDict.IpSignal;
FordVehReLeWhlDirRaw.LongName = 'Ford Vehicle Rear Left Wheel Direction';
FordVehReLeWhlDirRaw.Description = [...
  'This signal is used to return infomation of Rear Left Wheel Direction ' ...
  'to FIH'];
FordVehReLeWhlDirRaw.DocUnits = 'Cnt';
FordVehReLeWhlDirRaw.EngDT = dt.u08;
FordVehReLeWhlDirRaw.EngInit = 0;
FordVehReLeWhlDirRaw.EngMin = 0;
FordVehReLeWhlDirRaw.EngMax = 255;
FordVehReLeWhlDirRaw.ReadIn = {'FIH_Read_WhlDirRl_D_Actl'};
FordVehReLeWhlDirRaw.ReadType = 'Rte';


FordVehReLeWhlRollgCntr = DataDict.IpSignal;
FordVehReLeWhlRollgCntr.LongName = 'Ford Vehicle Rear Left Wheel Rolling Counter';
FordVehReLeWhlRollgCntr.Description = [...
  'This signal is used to return infomation of Rear Left Wheel Rolling Co' ...
  'unt to FIH'];
FordVehReLeWhlRollgCntr.DocUnits = 'Cnt';
FordVehReLeWhlRollgCntr.EngDT = dt.u08;
FordVehReLeWhlRollgCntr.EngInit = 0;
FordVehReLeWhlRollgCntr.EngMin = 0;
FordVehReLeWhlRollgCntr.EngMax = 255;
FordVehReLeWhlRollgCntr.ReadIn = {'FIH_Read_Whl_Rl_Roll_Cnt'};
FordVehReLeWhlRollgCntr.ReadType = 'Rte';


FordVehReLeWhlSpdRaw = DataDict.IpSignal;
FordVehReLeWhlSpdRaw.LongName = 'Ford Vehicle Rear Left Wheel Speed';
FordVehReLeWhlSpdRaw.Description = [...
  'This signal is used to return infomation of Rear Left Wheel Speed to F' ...
  'IH'];
FordVehReLeWhlSpdRaw.DocUnits = 'Cnt';
FordVehReLeWhlSpdRaw.EngDT = dt.u16;
FordVehReLeWhlSpdRaw.EngInit = 0;
FordVehReLeWhlSpdRaw.EngMin = 0;
FordVehReLeWhlSpdRaw.EngMax = 65535;
FordVehReLeWhlSpdRaw.ReadIn = {'FIH_Read_WhlRl_W_Meas'};
FordVehReLeWhlSpdRaw.ReadType = 'Rte';


FordVehReRiWhlDirRaw = DataDict.IpSignal;
FordVehReRiWhlDirRaw.LongName = 'Ford Vehicle Rear Right Wheel Direction';
FordVehReRiWhlDirRaw.Description = [...
  'This signal is used to return infomation of Rear Right Wheel Direction' ...
  ' to FIH'];
FordVehReRiWhlDirRaw.DocUnits = 'Cnt';
FordVehReRiWhlDirRaw.EngDT = dt.u08;
FordVehReRiWhlDirRaw.EngInit = 0;
FordVehReRiWhlDirRaw.EngMin = 0;
FordVehReRiWhlDirRaw.EngMax = 255;
FordVehReRiWhlDirRaw.ReadIn = {'FIH_Read_WhlDirRr_D_Actl'};
FordVehReRiWhlDirRaw.ReadType = 'Rte';


FordVehReRiWhlRollgCntr = DataDict.IpSignal;
FordVehReRiWhlRollgCntr.LongName = 'Ford Vehicle Rear Right Wheel Rolling Counter';
FordVehReRiWhlRollgCntr.Description = [...
  'This signal is used to return infomation of Rear Right Wheel Rolling C' ...
  'ount to FIH'];
FordVehReRiWhlRollgCntr.DocUnits = 'Cnt';
FordVehReRiWhlRollgCntr.EngDT = dt.u08;
FordVehReRiWhlRollgCntr.EngInit = 0;
FordVehReRiWhlRollgCntr.EngMin = 0;
FordVehReRiWhlRollgCntr.EngMax = 255;
FordVehReRiWhlRollgCntr.ReadIn = {'FIH_Read_Whl_Rr_Roll_Cnt'};
FordVehReRiWhlRollgCntr.ReadType = 'Rte';


FordVehReRiWhlSpdRaw = DataDict.IpSignal;
FordVehReRiWhlSpdRaw.LongName = 'Ford Vehicle Rear Right Wheel Speed';
FordVehReRiWhlSpdRaw.Description = [...
  'This signal is used to return infomation of Rear Right Wheel Speed to ' ...
  'FIH'];
FordVehReRiWhlSpdRaw.DocUnits = 'Cnt';
FordVehReRiWhlSpdRaw.EngDT = dt.u16;
FordVehReRiWhlSpdRaw.EngInit = 0;
FordVehReRiWhlSpdRaw.EngMin = 0;
FordVehReRiWhlSpdRaw.EngMax = 65535;
FordVehReRiWhlSpdRaw.ReadIn = {'FIH_Read_WhlRr_W_Meas'};
FordVehReRiWhlSpdRaw.ReadType = 'Rte';


FordVehSpdBrkModlRaw = DataDict.IpSignal;
FordVehSpdBrkModlRaw.LongName = 'Ford Vehicle Speed Brake Module';
FordVehSpdBrkModlRaw.Description = [...
  'This signal is used to return infomation of Vehicle Speed to FIH'];
FordVehSpdBrkModlRaw.DocUnits = 'Kph';
FordVehSpdBrkModlRaw.EngDT = dt.u16;
FordVehSpdBrkModlRaw.EngInit = 0;
FordVehSpdBrkModlRaw.EngMin = 0;
FordVehSpdBrkModlRaw.EngMax = 511;
FordVehSpdBrkModlRaw.ReadIn = {'FIH_Read_Veh_V_ActlBrk'};
FordVehSpdBrkModlRaw.ReadType = 'Rte';


FordVehSpdOverGndRaw = DataDict.IpSignal;
FordVehSpdOverGndRaw.LongName = 'Ford Vehicle Speed Over Ground';
FordVehSpdOverGndRaw.Description = [...
  'This signal is used to return infomation of Vehicle Speed Over Ground ' ...
  'to FIH'];
FordVehSpdOverGndRaw.DocUnits = 'Cnt';
FordVehSpdOverGndRaw.EngDT = dt.u16;
FordVehSpdOverGndRaw.EngInit = 0;
FordVehSpdOverGndRaw.EngMin = 0;
FordVehSpdOverGndRaw.EngMax = 65535;
FordVehSpdOverGndRaw.ReadIn = {'FIH_Read_VehOverGnd_V_Est'};
FordVehSpdOverGndRaw.ReadType = 'Rte';


FordVehSteerPinionAgOffsRaw = DataDict.IpSignal;
FordVehSteerPinionAgOffsRaw.LongName = 'Ford Vehicle Steering Pinion Angle Offset';
FordVehSteerPinionAgOffsRaw.Description = [...
  'This signal is used to return infomation of ABS ESC SPA Offset to FIH'];
FordVehSteerPinionAgOffsRaw.DocUnits = 'Cnt';
FordVehSteerPinionAgOffsRaw.EngDT = dt.u16;
FordVehSteerPinionAgOffsRaw.EngInit = 0;
FordVehSteerPinionAgOffsRaw.EngMin = 0;
FordVehSteerPinionAgOffsRaw.EngMax = 65535;
FordVehSteerPinionAgOffsRaw.ReadIn = {'FIH_Read_StePinOffst_An_Est'};
FordVehSteerPinionAgOffsRaw.ReadType = 'Rte';


FordVehSteerPinionOffsStsRaw = DataDict.IpSignal;
FordVehSteerPinionOffsStsRaw.LongName = 'Ford Vehicle Steering Pinion Offset Status';
FordVehSteerPinionOffsStsRaw.Description = [...
  'This signal is used to return infomation of SPA Offset Status to FIH'];
FordVehSteerPinionOffsStsRaw.DocUnits = 'Cnt';
FordVehSteerPinionOffsStsRaw.EngDT = dt.u08;
FordVehSteerPinionOffsStsRaw.EngInit = 0;
FordVehSteerPinionOffsStsRaw.EngMin = 0;
FordVehSteerPinionOffsStsRaw.EngMax = 255;
FordVehSteerPinionOffsStsRaw.ReadIn = {'FIH_Read_StePinOffst_D_Stat'};
FordVehSteerPinionOffsStsRaw.ReadType = 'Rte';


FordVehTrlrAgOffsDirRaw = DataDict.IpSignal;
FordVehTrlrAgOffsDirRaw.LongName = 'Ford Vehicle Trailer Angle Offset Direction';
FordVehTrlrAgOffsDirRaw.Description = [...
  'This signal is used to return infomation of Trailer Aid Hitch Angle Me' ...
  'mory Magnitude Data to FIH'];
FordVehTrlrAgOffsDirRaw.DocUnits = 'Cnt';
FordVehTrlrAgOffsDirRaw.EngDT = dt.u08;
FordVehTrlrAgOffsDirRaw.EngInit = 0;
FordVehTrlrAgOffsDirRaw.EngMin = 0;
FordVehTrlrAgOffsDirRaw.EngMax = 255;
FordVehTrlrAgOffsDirRaw.ReadIn = {'FIH_Read_TrlrAnOffstDir_Mem'};
FordVehTrlrAgOffsDirRaw.ReadType = 'Rte';


FordVehTrlrAidAcqSts = DataDict.IpSignal;
FordVehTrlrAidAcqSts.LongName = 'Ford Vehicle Trailer Aid Acquire Status';
FordVehTrlrAidAcqSts.Description = [...
  'This signal is used to return infomation of Trailer Aid Acquire FIH TA' ...
  'D ID Status to FIH'];
FordVehTrlrAidAcqSts.DocUnits = 'Cnt';
FordVehTrlrAidAcqSts.EngDT = dt.u08;
FordVehTrlrAidAcqSts.EngInit = 0;
FordVehTrlrAidAcqSts.EngMin = 0;
FordVehTrlrAidAcqSts.EngMax = 255;
FordVehTrlrAidAcqSts.ReadIn = {'FIH_Read_TrlrTrgtAcquire'};
FordVehTrlrAidAcqSts.ReadType = 'Rte';


FordVehTrlrAidAvlRaw = DataDict.IpSignal;
FordVehTrlrAidAvlRaw.LongName = 'Ford Vehicle Trailer Aid Available';
FordVehTrlrAidAvlRaw.Description = [...
  'This signal is used to return infomation of Trailer Aid Available to F' ...
  'IH'];
FordVehTrlrAidAvlRaw.DocUnits = 'Cnt';
FordVehTrlrAidAvlRaw.EngDT = dt.u08;
FordVehTrlrAidAvlRaw.EngInit = 0;
FordVehTrlrAidAvlRaw.EngMin = 0;
FordVehTrlrAidAvlRaw.EngMax = 255;
FordVehTrlrAidAvlRaw.ReadIn = {'FIH_Read_VehVTrlrAid_B_Avail'};
FordVehTrlrAidAvlRaw.ReadType = 'Rte';


FordVehTrlrAidCnclReq = DataDict.IpSignal;
FordVehTrlrAidCnclReq.LongName = 'Ford Vehicle Trailer Aid Cancel Request';
FordVehTrlrAidCnclReq.Description = [...
  'This signal is used to return infomation of Trailer Aid Cancel Request' ...
  ' to FIH'];
FordVehTrlrAidCnclReq.DocUnits = 'Cnt';
FordVehTrlrAidCnclReq.EngDT = dt.u08;
FordVehTrlrAidCnclReq.EngInit = 0;
FordVehTrlrAidCnclReq.EngMin = 0;
FordVehTrlrAidCnclReq.EngMax = 255;
FordVehTrlrAidCnclReq.ReadIn = {'FIH_Read_TrlrAidCancl_B_Rq'};
FordVehTrlrAidCnclReq.ReadType = 'Rte';


FordVehTrlrAidHitchAg = DataDict.IpSignal;
FordVehTrlrAidHitchAg.LongName = 'Ford Vehicle Trailer Aid Hitch Angle';
FordVehTrlrAidHitchAg.Description = [...
  'This signal is used to return infomation of Trailer Aid Hitch Angle to' ...
  ' FIH'];
FordVehTrlrAidHitchAg.DocUnits = 'Cnt';
FordVehTrlrAidHitchAg.EngDT = dt.u16;
FordVehTrlrAidHitchAg.EngInit = 0;
FordVehTrlrAidHitchAg.EngMin = 0;
FordVehTrlrAidHitchAg.EngMax = 65535;
FordVehTrlrAidHitchAg.ReadIn = {'FIH_Read_TrlrAid_Angle'};
FordVehTrlrAidHitchAg.ReadType = 'Rte';


FordVehTrlrAidIdnNrRaw = DataDict.IpSignal;
FordVehTrlrAidIdnNrRaw.LongName = 'Ford Vehicle Trailer Aid Identification Number';
FordVehTrlrAidIdnNrRaw.Description = [...
  'This signal is used to return infomation of Trailer Aid Identification' ...
  ' Number to FIH'];
FordVehTrlrAidIdnNrRaw.DocUnits = 'Cnt';
FordVehTrlrAidIdnNrRaw.EngDT = dt.u08;
FordVehTrlrAidIdnNrRaw.EngInit = 0;
FordVehTrlrAidIdnNrRaw.EngMin = 0;
FordVehTrlrAidIdnNrRaw.EngMax = 255;
FordVehTrlrAidIdnNrRaw.ReadIn = {'FIH_Read_TrlrId_No_Actl'};
FordVehTrlrAidIdnNrRaw.ReadType = 'Rte';


FordVehTrlrAidIdnVal = DataDict.IpSignal;
FordVehTrlrAidIdnVal.LongName = 'Ford Vehicle Trailer Aid Identification Value';
FordVehTrlrAidIdnVal.Description = [...
  'This signal is used to return infomation of Trailer ID Value to FIH'];
FordVehTrlrAidIdnVal.DocUnits = 'Cnt';
FordVehTrlrAidIdnVal.EngDT = dt.u08;
FordVehTrlrAidIdnVal.EngInit = 0;
FordVehTrlrAidIdnVal.EngMin = 0;
FordVehTrlrAidIdnVal.EngMax = 255;
FordVehTrlrAidIdnVal.ReadIn = {'FIH_Read_TrlrAidTrgtId'};
FordVehTrlrAidIdnVal.ReadType = 'Rte';


FordVehTrlrAidKnobBtn = DataDict.IpSignal;
FordVehTrlrAidKnobBtn.LongName = 'Ford Vehicle Trailer Aid Knob Button';
FordVehTrlrAidKnobBtn.Description = [...
  'This signal is used to return infomation of Trailer Aid Knob Button to' ...
  ' FIH'];
FordVehTrlrAidKnobBtn.DocUnits = 'Cnt';
FordVehTrlrAidKnobBtn.EngDT = dt.u08;
FordVehTrlrAidKnobBtn.EngInit = 0;
FordVehTrlrAidKnobBtn.EngMin = 0;
FordVehTrlrAidKnobBtn.EngMax = 255;
FordVehTrlrAidKnobBtn.ReadIn = {'FIH_Read_TrlrAidSwtch_D_RqDrv'};
FordVehTrlrAidKnobBtn.ReadType = 'Rte';


FordVehTrlrAidKnobPosn = DataDict.IpSignal;
FordVehTrlrAidKnobPosn.LongName = 'Ford Vehicle Trailer Aid Knob Position';
FordVehTrlrAidKnobPosn.Description = [...
  'This signal is used to return infomation of Trailer Aid Knob Position ' ...
  'to FIH'];
FordVehTrlrAidKnobPosn.DocUnits = 'Cnt';
FordVehTrlrAidKnobPosn.EngDT = dt.u16;
FordVehTrlrAidKnobPosn.EngInit = 0;
FordVehTrlrAidKnobPosn.EngMin = 0;
FordVehTrlrAidKnobPosn.EngMax = 65535;
FordVehTrlrAidKnobPosn.ReadIn = {'FIH_Read_TrlrAidCtl_U_RqDrv'};
FordVehTrlrAidKnobPosn.ReadType = 'Rte';


FordVehTrlrAidModReq = DataDict.IpSignal;
FordVehTrlrAidModReq.LongName = 'Ford Vehicle Trailer Aid Mode Request';
FordVehTrlrAidModReq.Description = [...
  'This signal is used to return infomation of Trailer Aid Mode Request t' ...
  'o FIH'];
FordVehTrlrAidModReq.DocUnits = 'Cnt';
FordVehTrlrAidModReq.EngDT = dt.u08;
FordVehTrlrAidModReq.EngInit = 0;
FordVehTrlrAidModReq.EngMin = 0;
FordVehTrlrAidModReq.EngMax = 255;
FordVehTrlrAidModReq.ReadIn = {'FIH_Read_TrlrAid_Mode_Rq'};
FordVehTrlrAidModReq.ReadType = 'Rte';


FordVehTrlrAidSetUpRaw = DataDict.IpSignal;
FordVehTrlrAidSetUpRaw.LongName = 'Ford Vehicle Trailer Aid Setup Request';
FordVehTrlrAidSetUpRaw.Description = [...
  'This signal is used to return infomation of Trailer Aid Setup Request ' ...
  'to FIH'];
FordVehTrlrAidSetUpRaw.DocUnits = 'Cnt';
FordVehTrlrAidSetUpRaw.EngDT = dt.u08;
FordVehTrlrAidSetUpRaw.EngInit = 0;
FordVehTrlrAidSetUpRaw.EngMin = 0;
FordVehTrlrAidSetUpRaw.EngMax = 255;
FordVehTrlrAidSetUpRaw.ReadIn = {'FIH_Read_TrlrAidSetup_Rq'};
FordVehTrlrAidSetUpRaw.ReadType = 'Rte';


FordVehTrlrAidTrakgSt = DataDict.IpSignal;
FordVehTrlrAidTrakgSt.LongName = 'Ford Vehicle Trailer Aid Tracking State';
FordVehTrlrAidTrakgSt.Description = [...
  'This signal is used to return infomation of Trailer Aid Tracking State' ...
  ' to FIH'];
FordVehTrlrAidTrakgSt.DocUnits = 'Cnt';
FordVehTrlrAidTrakgSt.EngDT = dt.u08;
FordVehTrlrAidTrakgSt.EngInit = 0;
FordVehTrlrAidTrakgSt.EngMin = 0;
FordVehTrlrAidTrakgSt.EngMax = 255;
FordVehTrlrAidTrakgSt.ReadIn = {'FIH_Read_TrlrAid_D2_Stat'};
FordVehTrlrAidTrakgSt.ReadType = 'Rte';


FordVehTrlrAidTrlrRvsGuidcSts = DataDict.IpSignal;
FordVehTrlrAidTrlrRvsGuidcSts.LongName = 'Ford Vehicle Trailer Aid Trailer Reverse Guidance Status';
FordVehTrlrAidTrlrRvsGuidcSts.Description = [...
  'This signal is used to return infomation of Trailer Reverse Guidance S' ...
  'tatus to FIH'];
FordVehTrlrAidTrlrRvsGuidcSts.DocUnits = 'Cnt';
FordVehTrlrAidTrlrRvsGuidcSts.EngDT = dt.u08;
FordVehTrlrAidTrlrRvsGuidcSts.EngInit = 0;
FordVehTrlrAidTrlrRvsGuidcSts.EngMin = 0;
FordVehTrlrAidTrlrRvsGuidcSts.EngMax = 3;
FordVehTrlrAidTrlrRvsGuidcSts.ReadIn = {'FIH_Read_TrlrRvrseOn_Stat'};
FordVehTrlrAidTrlrRvsGuidcSts.ReadType = 'Rte';


FordVehTrlrAxleToBmpRaw = DataDict.IpSignal;
FordVehTrlrAxleToBmpRaw.LongName = 'Ford Vehicle Trailer Axle To Bumper';
FordVehTrlrAxleToBmpRaw.Description = [...
  'This signal is used to return infomation of Trailer Axle To Bumper to ' ...
  'FIH'];
FordVehTrlrAxleToBmpRaw.DocUnits = 'Cnt';
FordVehTrlrAxleToBmpRaw.EngDT = dt.u16;
FordVehTrlrAxleToBmpRaw.EngInit = 0;
FordVehTrlrAxleToBmpRaw.EngMin = 0;
FordVehTrlrAxleToBmpRaw.EngMax = 65535;
FordVehTrlrAxleToBmpRaw.ReadIn = {'FIH_Read_TrlrAxleToBmpr_L_Actl'};
FordVehTrlrAxleToBmpRaw.ReadType = 'Rte';


FordVehTrlrBallToAxle = DataDict.IpSignal;
FordVehTrlrBallToAxle.LongName = 'Ford Vehicle Trailer Ball To Axle';
FordVehTrlrBallToAxle.Description = [...
  'This signal is used to return infomation of Trailer Ball To Axle to FI' ...
  'H'];
FordVehTrlrBallToAxle.DocUnits = 'Cnt';
FordVehTrlrBallToAxle.EngDT = dt.u08;
FordVehTrlrBallToAxle.EngInit = 0;
FordVehTrlrBallToAxle.EngMin = 0;
FordVehTrlrBallToAxle.EngMax = 255;
FordVehTrlrBallToAxle.ReadIn = {'FIH_Read_HitchToVehAxle'};
FordVehTrlrBallToAxle.ReadType = 'Rte';


FordVehTrlrBrkCnctnStsRaw = DataDict.IpSignal;
FordVehTrlrBrkCnctnStsRaw.LongName = 'Ford Vehicle Trailer Brake Connection Status';
FordVehTrlrBrkCnctnStsRaw.Description = [...
  'This signal is used to return infomation of Trailer Brake Connection S' ...
  'tatus to FIH'];
FordVehTrlrBrkCnctnStsRaw.DocUnits = 'Cnt';
FordVehTrlrBrkCnctnStsRaw.EngDT = dt.u08;
FordVehTrlrBrkCnctnStsRaw.EngInit = 0;
FordVehTrlrBrkCnctnStsRaw.EngMin = 0;
FordVehTrlrBrkCnctnStsRaw.EngMax = 255;
FordVehTrlrBrkCnctnStsRaw.ReadIn = {'FIH_Read_TrlrBrkActCnnct_B_Actl'};
FordVehTrlrBrkCnctnStsRaw.ReadType = 'Rte';


FordVehTrlrEnaReqRaw = DataDict.IpSignal;
FordVehTrlrEnaReqRaw.LongName = 'Ford Vehicle Trailer Enable Request';
FordVehTrlrEnaReqRaw.Description = [...
  'This signal is used to return infomation of Trailer Aid On Request to ' ...
  'FIH'];
FordVehTrlrEnaReqRaw.DocUnits = 'Cnt';
FordVehTrlrEnaReqRaw.EngDT = dt.u08;
FordVehTrlrEnaReqRaw.EngInit = 0;
FordVehTrlrEnaReqRaw.EngMin = 0;
FordVehTrlrEnaReqRaw.EngMax = 255;
FordVehTrlrEnaReqRaw.ReadIn = {'FIH_Read_TrlrAidEnbl_D2_Rq'};
FordVehTrlrEnaReqRaw.ReadType = 'Rte';


FordVehTrlrHitchAgRateRaw = DataDict.IpSignal;
FordVehTrlrHitchAgRateRaw.LongName = 'Ford Vehicle Trailer Hitch Angle Rate';
FordVehTrlrHitchAgRateRaw.Description = [...
  'This signal is used to return information of Trailer Hitch Angle Rate ' ...
  'to FIH'];
FordVehTrlrHitchAgRateRaw.DocUnits = 'Cnt';
FordVehTrlrHitchAgRateRaw.EngDT = dt.u16;
FordVehTrlrHitchAgRateRaw.EngInit = 0;
FordVehTrlrHitchAgRateRaw.EngMin = 0;
FordVehTrlrHitchAgRateRaw.EngMax = 65535;
FordVehTrlrHitchAgRateRaw.ReadIn = {'FIH_Read_TrlrHitYaw_AnRate'};
FordVehTrlrHitchAgRateRaw.ReadType = 'Rte';


FordVehTrlrHitchYawAgRaw = DataDict.IpSignal;
FordVehTrlrHitchYawAgRaw.LongName = 'Ford Vehicle Trailer Hitch Yaw Angle';
FordVehTrlrHitchYawAgRaw.Description = [...
  'This signal is used to return infomation of Trailer Hitch Angle to FIH' ...
  ''];
FordVehTrlrHitchYawAgRaw.DocUnits = 'Cnt';
FordVehTrlrHitchYawAgRaw.EngDT = dt.u16;
FordVehTrlrHitchYawAgRaw.EngInit = 0;
FordVehTrlrHitchYawAgRaw.EngMin = 0;
FordVehTrlrHitchYawAgRaw.EngMax = 65535;
FordVehTrlrHitchYawAgRaw.ReadIn = {'FIH_Read_TrlrHitchYaw_An'};
FordVehTrlrHitchYawAgRaw.ReadType = 'Rte';


FordVehTrlrHitchYawSts = DataDict.IpSignal;
FordVehTrlrHitchYawSts.LongName = 'Ford Vehicle Trailer Hitch Yaw Status';
FordVehTrlrHitchYawSts.Description = [...
  'This signal is used to return infomation of Vehicle Trailer Hitch Yaw ' ...
  'Status to FIH'];
FordVehTrlrHitchYawSts.DocUnits = 'Cnt';
FordVehTrlrHitchYawSts.EngDT = dt.u08;
FordVehTrlrHitchYawSts.EngInit = 0;
FordVehTrlrHitchYawSts.EngMin = 0;
FordVehTrlrHitchYawSts.EngMax = 255;
FordVehTrlrHitchYawSts.ReadIn = {'FIH_Read_TrlrHitchYaw_Stat'};
FordVehTrlrHitchYawSts.ReadType = 'Rte';


FordVehTrlrIdnTypRaw = DataDict.IpSignal;
FordVehTrlrIdnTypRaw.LongName = 'Ford Vehicle Trailer Identification Type';
FordVehTrlrIdnTypRaw.Description = [...
  'This signal is used to return infomation of Trailer Type to FIH'];
FordVehTrlrIdnTypRaw.DocUnits = 'Cnt';
FordVehTrlrIdnTypRaw.EngDT = dt.u16;
FordVehTrlrIdnTypRaw.EngInit = 0;
FordVehTrlrIdnTypRaw.EngMin = 0;
FordVehTrlrIdnTypRaw.EngMax = 65535;
FordVehTrlrIdnTypRaw.ReadIn = {'FIH_Read_TrlrIdType_Stat'};
FordVehTrlrIdnTypRaw.ReadType = 'Rte';


FordVehTrlrLampCnctnStsRaw = DataDict.IpSignal;
FordVehTrlrLampCnctnStsRaw.LongName = 'Ford Vehicle Trailer Lamp Connection Status';
FordVehTrlrLampCnctnStsRaw.Description = [...
  'This signal is used to return infomation of Trailer Lamp Connection St' ...
  'atus to FIH'];
FordVehTrlrLampCnctnStsRaw.DocUnits = 'Cnt';
FordVehTrlrLampCnctnStsRaw.EngDT = dt.u08;
FordVehTrlrLampCnctnStsRaw.EngInit = 0;
FordVehTrlrLampCnctnStsRaw.EngMin = 0;
FordVehTrlrLampCnctnStsRaw.EngMax = 1;
FordVehTrlrLampCnctnStsRaw.ReadIn = {'FIH_Read_TrlrLampCnnct_B_Actl'};
FordVehTrlrLampCnctnStsRaw.ReadType = 'Rte';


FordVehTrlrRvsCnclReqRaw = DataDict.IpSignal;
FordVehTrlrRvsCnclReqRaw.LongName = 'Ford Vehicle Trailer Reverse Cancel Request';
FordVehTrlrRvsCnclReqRaw.Description = [...
  'This signal is used to return infomation of Trailer Reverse Cancel Req' ...
  'uest to FIH'];
FordVehTrlrRvsCnclReqRaw.DocUnits = 'Cnt';
FordVehTrlrRvsCnclReqRaw.EngDT = dt.u08;
FordVehTrlrRvsCnclReqRaw.EngInit = 0;
FordVehTrlrRvsCnclReqRaw.EngMin = 0;
FordVehTrlrRvsCnclReqRaw.EngMax = 255;
FordVehTrlrRvsCnclReqRaw.ReadIn = {'FIH_Read_TrlrRvrseCancl_Rq'};
FordVehTrlrRvsCnclReqRaw.ReadType = 'Rte';


FordVehTrlrRvsEnaRaw = DataDict.IpSignal;
FordVehTrlrRvsEnaRaw.LongName = 'Ford Vehicle Trailer Reverse Enable';
FordVehTrlrRvsEnaRaw.Description = [...
  'This signal is used to return infomation of Trailer Reverse Enable to ' ...
  'FIH'];
FordVehTrlrRvsEnaRaw.DocUnits = 'Cnt';
FordVehTrlrRvsEnaRaw.EngDT = dt.u08;
FordVehTrlrRvsEnaRaw.EngInit = 0;
FordVehTrlrRvsEnaRaw.EngMin = 0;
FordVehTrlrRvsEnaRaw.EngMax = 255;
FordVehTrlrRvsEnaRaw.ReadIn = {'FIH_Read_TrlrRvrseEnbl'};
FordVehTrlrRvsEnaRaw.ReadType = 'Rte';


FordVehTrlrRvsMsgTxtReqRaw = DataDict.IpSignal;
FordVehTrlrRvsMsgTxtReqRaw.LongName = 'Ford Vehicle Trailer Reverse Message Text Request';
FordVehTrlrRvsMsgTxtReqRaw.Description = [...
  'This signal is used to return infomation of Trailer Reverse Message Te' ...
  'xt Request to FIH'];
FordVehTrlrRvsMsgTxtReqRaw.DocUnits = 'Cnt';
FordVehTrlrRvsMsgTxtReqRaw.EngDT = dt.u08;
FordVehTrlrRvsMsgTxtReqRaw.EngInit = 0;
FordVehTrlrRvsMsgTxtReqRaw.EngMin = 0;
FordVehTrlrRvsMsgTxtReqRaw.EngMax = 255;
FordVehTrlrRvsMsgTxtReqRaw.ReadIn = {'FIH_Read_TrlrRvrseMsgTxt'};
FordVehTrlrRvsMsgTxtReqRaw.ReadType = 'Rte';


FordVehTrlrYawRateQlyFac = DataDict.IpSignal;
FordVehTrlrYawRateQlyFac.LongName = 'Ford Trailer Trailer Yaw Rate Quality Factor';
FordVehTrlrYawRateQlyFac.Description = [...
  'This signal is used to return infomation of Trailer Yaw Rate Quality F' ...
  'actor to FIH'];
FordVehTrlrYawRateQlyFac.DocUnits = 'Cnt';
FordVehTrlrYawRateQlyFac.EngDT = dt.u08;
FordVehTrlrYawRateQlyFac.EngInit = 0;
FordVehTrlrYawRateQlyFac.EngMin = 0;
FordVehTrlrYawRateQlyFac.EngMax = 3;
FordVehTrlrYawRateQlyFac.ReadIn = {'FIH_Read_TrlrYaw_W_Qf'};
FordVehTrlrYawRateQlyFac.ReadType = 'Rte';


FordVehTrlrYawRateRaw = DataDict.IpSignal;
FordVehTrlrYawRateRaw.LongName = 'Ford Vehicle Trailer Yaw Rate';
FordVehTrlrYawRateRaw.Description = [...
  'This signal is used to return infomation of Trailer Yaw Rate Actual to' ...
  ' FIH'];
FordVehTrlrYawRateRaw.DocUnits = 'Cnt';
FordVehTrlrYawRateRaw.EngDT = dt.u16;
FordVehTrlrYawRateRaw.EngInit = 0;
FordVehTrlrYawRateRaw.EngMin = 0;
FordVehTrlrYawRateRaw.EngMax = 65535;
FordVehTrlrYawRateRaw.ReadIn = {'FIH_Read_TrlrYaw_W'};
FordVehTrlrYawRateRaw.ReadType = 'Rte';


FordVehTrsmDesGearRaw = DataDict.IpSignal;
FordVehTrsmDesGearRaw.LongName = 'Ford Vehicle Transmission Desired Gear';
FordVehTrsmDesGearRaw.Description = [...
  'This signal is used to return infomation of Transmission Desired Gear ' ...
  'Shift to FIH'];
FordVehTrsmDesGearRaw.DocUnits = 'Cnt';
FordVehTrsmDesGearRaw.EngDT = dt.u08;
FordVehTrsmDesGearRaw.EngInit = 0;
FordVehTrsmDesGearRaw.EngMin = 0;
FordVehTrsmDesGearRaw.EngMax = 255;
FordVehTrsmDesGearRaw.ReadIn = {'FIH_Read_TrnRng'};
FordVehTrsmDesGearRaw.ReadType = 'Rte';


FordVehTurnSigSwtStsRaw = DataDict.IpSignal;
FordVehTurnSigSwtStsRaw.LongName = 'Ford Vehicle Turn Signal Switch Status';
FordVehTurnSigSwtStsRaw.Description = [...
  'This signal is used to return infomation of Turn Signal Switch Status ' ...
  'to FIH'];
FordVehTurnSigSwtStsRaw.DocUnits = 'Cnt';
FordVehTurnSigSwtStsRaw.EngDT = dt.u08;
FordVehTurnSigSwtStsRaw.EngInit = 0;
FordVehTurnSigSwtStsRaw.EngMin = 0;
FordVehTurnSigSwtStsRaw.EngMax = 255;
FordVehTurnSigSwtStsRaw.ReadIn = {'FIH_Read_TurnLghtSwtch_D_Stat'};
FordVehTurnSigSwtStsRaw.ReadType = 'Rte';


FordVehVertACmpdRaw = DataDict.IpSignal;
FordVehVertACmpdRaw.LongName = 'Ford Vehicle Vertical Acceleration Rate Compensated';
FordVehVertACmpdRaw.Description = [...
  'This signal is used to return infomation of Vehicle Vertical Accelerat' ...
  'ion Rate Compensated to FIH'];
FordVehVertACmpdRaw.DocUnits = 'Cnt';
FordVehVertACmpdRaw.EngDT = dt.u16;
FordVehVertACmpdRaw.EngInit = 0;
FordVehVertACmpdRaw.EngMin = 0;
FordVehVertACmpdRaw.EngMax = 65535;
FordVehVertACmpdRaw.ReadIn = {'FIH_Read_VehVertComp'};
FordVehVertACmpdRaw.ReadType = 'Rte';


FordVehYawRateCmpdRaw = DataDict.IpSignal;
FordVehYawRateCmpdRaw.LongName = 'Ford Vehicle Yaw Rate Compensated';
FordVehYawRateCmpdRaw.Description = [...
  'This signal is used to return infomation of Vehicle Yaw Rate Compensat' ...
  'ed to FIH'];
FordVehYawRateCmpdRaw.DocUnits = 'Cnt';
FordVehYawRateCmpdRaw.EngDT = dt.u16;
FordVehYawRateCmpdRaw.EngInit = 0;
FordVehYawRateCmpdRaw.EngMin = 0;
FordVehYawRateCmpdRaw.EngMax = 65535;
FordVehYawRateCmpdRaw.ReadIn = {'FIH_Read_VehYawComp_W_Actl'};
FordVehYawRateCmpdRaw.ReadType = 'Rte';


FordVehYawRateRaw = DataDict.IpSignal;
FordVehYawRateRaw.LongName = 'Ford Vehicle Yaw Rate';
FordVehYawRateRaw.Description = [...
  'This signal is used to return infomation of Vehicle Yaw Rate to FIH'];
FordVehYawRateRaw.DocUnits = 'Cnt';
FordVehYawRateRaw.EngDT = dt.u16;
FordVehYawRateRaw.EngInit = 0;
FordVehYawRateRaw.EngMin = 0;
FordVehYawRateRaw.EngMax = 65535;
FordVehYawRateRaw.ReadIn = {'FIH_Read_VehYaw_W_Actl'};
FordVehYawRateRaw.ReadType = 'Rte';


FordVehYawStabyRaw = DataDict.IpSignal;
FordVehYawStabyRaw.LongName = 'Ford Vehicle Yaw Stability';
FordVehYawStabyRaw.Description = [...
  'This signal is used to return infomation of Yaw Stability to FIH'];
FordVehYawStabyRaw.DocUnits = 'Cnt';
FordVehYawStabyRaw.EngDT = dt.u16;
FordVehYawStabyRaw.EngInit = 0;
FordVehYawStabyRaw.EngMin = 0;
FordVehYawStabyRaw.EngMax = 65535;
FordVehYawStabyRaw.ReadIn = {'FIH_Read_YawStabilityIndex'};
FordVehYawStabyRaw.ReadType = 'Rte';


FordYawRateSnsrIdHi = DataDict.IpSignal;
FordYawRateSnsrIdHi.LongName = 'Ford Yaw Rate Sensor Id High';
FordYawRateSnsrIdHi.Description = [...
  'This signal is used to return infomation of Yaw Rate Sensor Id High to' ...
  ' FIH'];
FordYawRateSnsrIdHi.DocUnits = 'Cnt';
FordYawRateSnsrIdHi.EngDT = dt.u32;
FordYawRateSnsrIdHi.EngInit = 0;
FordYawRateSnsrIdHi.EngMin = 0;
FordYawRateSnsrIdHi.EngMax = 4294967295;
FordYawRateSnsrIdHi.ReadIn = {'FIH_Read_TrlrSnsId_High'};
FordYawRateSnsrIdHi.ReadType = 'Rte';


FordYawRateSnsrIdLo = DataDict.IpSignal;
FordYawRateSnsrIdLo.LongName = 'Ford Yaw Rate Sensor Id Low';
FordYawRateSnsrIdLo.Description = [...
  'This signal is used to return infomation of Yaw Rate Sensor Id Low to ' ...
  'FIH'];
FordYawRateSnsrIdLo.DocUnits = 'Cnt';
FordYawRateSnsrIdLo.EngDT = dt.u32;
FordYawRateSnsrIdLo.EngInit = 0;
FordYawRateSnsrIdLo.EngMin = 0;
FordYawRateSnsrIdLo.EngMax = 4294967295;
FordYawRateSnsrIdLo.ReadIn = {'FIH_Read_TrlrSnsId_Low'};
FordYawRateSnsrIdLo.ReadType = 'Rte';

%%---------------------------------------------------------------------
%% Input Signal Definitions - Input Signal Diagnostics and Read for PassThru
%%signal diagnostics
%%---------------------------------------------------------------------

FordMsgInp1Vld = DataDict.IpSignal;
FordMsgInp1Vld.LongName = 'FIH Message Input 1 Valid';
FordMsgInp1Vld.Description = [...
  'This signal is used to return infomation of FIH Message Input 1 Valid'];
FordMsgInp1Vld.DocUnits = 'Cnt';
FordMsgInp1Vld.EngDT = dt.lgc;
FordMsgInp1Vld.EngInit = 0;
FordMsgInp1Vld.EngMin = 0;
FordMsgInp1Vld.EngMax = 1;
FordMsgInp1Vld.ReadIn = {'FIH_Read_Signal_Status_PassThru'};
FordMsgInp1Vld.ReadType = 'Rte';


FordMsgInp2Vld = DataDict.IpSignal;
FordMsgInp2Vld.LongName = 'FIH Message Input 2 Valid';
FordMsgInp2Vld.Description = [...
  'This signal is used to return infomation of FIH Message Input 2 Valid'];
FordMsgInp2Vld.DocUnits = 'Cnt';
FordMsgInp2Vld.EngDT = dt.lgc;
FordMsgInp2Vld.EngInit = 0;
FordMsgInp2Vld.EngMin = 0;
FordMsgInp2Vld.EngMax = 1;
FordMsgInp2Vld.ReadIn = {'FIH_Read_Signal_Status_PassThru'};
FordMsgInp2Vld.ReadType = 'Rte';


FordMsgInp3Vld = DataDict.IpSignal;
FordMsgInp3Vld.LongName = 'FIH Message Input 3 Valid';
FordMsgInp3Vld.Description = [...
  'This signal is used to return infomation of FIH Message Input 3 Valid'];
FordMsgInp3Vld.DocUnits = 'Cnt';
FordMsgInp3Vld.EngDT = dt.lgc;
FordMsgInp3Vld.EngInit = 0;
FordMsgInp3Vld.EngMin = 0;
FordMsgInp3Vld.EngMax = 1;
FordMsgInp3Vld.ReadIn = {'FIH_Read_Signal_Status_PassThru'};
FordMsgInp3Vld.ReadType = 'Rte';


FordMsgInp4Vld = DataDict.IpSignal;
FordMsgInp4Vld.LongName = 'FIH Message Input 4 Valid';
FordMsgInp4Vld.Description = [...
  'This signal is used to return infomation of FIH Message Input 4 Valid'];
FordMsgInp4Vld.DocUnits = 'Cnt';
FordMsgInp4Vld.EngDT = dt.lgc;
FordMsgInp4Vld.EngInit = 0;
FordMsgInp4Vld.EngMin = 0;
FordMsgInp4Vld.EngMax = 1;
FordMsgInp4Vld.ReadIn = {'FIH_Read_Signal_Status_PassThru'};
FordMsgInp4Vld.ReadType = 'Rte';


FildVehSpdVld = DataDict.IpSignal;
FildVehSpdVld.LongName = 'Filtered Vehicle Speed Valid';
FildVehSpdVld.Description = [...
  'This signal is used to return infomation of Filtered Vehicle Speed Val' ...
  'id'];
FildVehSpdVld.DocUnits = 'Cnt';
FildVehSpdVld.EngDT = dt.lgc;
FildVehSpdVld.EngInit = 0;
FildVehSpdVld.EngMin = 0;
FildVehSpdVld.EngMax = 1;
FildVehSpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FildVehSpdVld.ReadType = 'Rte';


FordAppldFinalMotTqVld = DataDict.IpSignal;
FordAppldFinalMotTqVld.LongName = 'Ford Applied Final Motor Torque Valid';
FordAppldFinalMotTqVld.Description = [...
  'This signal is used to return infomation of Ford Applied Final Motor T' ...
  'orque Valid'];
FordAppldFinalMotTqVld.DocUnits = 'Cnt';
FordAppldFinalMotTqVld.EngDT = dt.lgc;
FordAppldFinalMotTqVld.EngInit = 0;
FordAppldFinalMotTqVld.EngMin = 0;
FordAppldFinalMotTqVld.EngMax = 1;
FordAppldFinalMotTqVld.ReadIn = {'FIH_Read_Signal_Status'};
FordAppldFinalMotTqVld.ReadType = 'Rte';


FordHwVelVld = DataDict.IpSignal;
FordHwVelVld.LongName = 'Ford Handwheel Velocity Valid';
FordHwVelVld.Description = [...
  'This signal is used to return infomation of Ford Handwheel Velocity Va' ...
  'lid'];
FordHwVelVld.DocUnits = 'Cnt';
FordHwVelVld.EngDT = dt.lgc;
FordHwVelVld.EngInit = 0;
FordHwVelVld.EngMin = 0;
FordHwVelVld.EngMax = 1;
FordHwVelVld.ReadIn = {'FIH_Read_Signal_Status'};
FordHwVelVld.ReadType = 'Rte';


FordInpTqRawVld = DataDict.IpSignal;
FordInpTqRawVld.LongName = 'Ford Input Torque Raw Valid';
FordInpTqRawVld.Description = [...
  'This signal is used to return infomation of Ford vInput Torque Raw Val' ...
  'id'];
FordInpTqRawVld.DocUnits = 'Cnt';
FordInpTqRawVld.EngDT = dt.lgc;
FordInpTqRawVld.EngInit = 0;
FordInpTqRawVld.EngMin = 0;
FordInpTqRawVld.EngMax = 1;
FordInpTqRawVld.ReadIn = {'FIH_Read_Signal_Status'};
FordInpTqRawVld.ReadType = 'Rte';


FordRelHwPosnVld = DataDict.IpSignal;
FordRelHwPosnVld.LongName = 'Ford Vehicle Relative Handwheel Position Valid';
FordRelHwPosnVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Relative Hand' ...
  'wheel Position Valid'];
FordRelHwPosnVld.DocUnits = 'Cnt';
FordRelHwPosnVld.EngDT = dt.lgc;
FordRelHwPosnVld.EngInit = 0;
FordRelHwPosnVld.EngMin = 0;
FordRelHwPosnVld.EngMax = 1;
FordRelHwPosnVld.ReadIn = {'FIH_Read_Signal_Status'};
FordRelHwPosnVld.ReadType = 'Rte';


FordVehAbsEscStsVld = DataDict.IpSignal;
FordVehAbsEscStsVld.LongName = 'Ford Vehicle Antilock Braking System ESC Status Valid';
FordVehAbsEscStsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Antilock Brak' ...
  'ing System ESC Status Valid'];
FordVehAbsEscStsVld.DocUnits = 'Cnt';
FordVehAbsEscStsVld.EngDT = dt.lgc;
FordVehAbsEscStsVld.EngInit = 0;
FordVehAbsEscStsVld.EngMin = 0;
FordVehAbsEscStsVld.EngMax = 1;
FordVehAbsEscStsVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehAbsEscStsVld.ReadType = 'Rte';


FordVehAccrPedlPosnStsVld = DataDict.IpSignal;
FordVehAccrPedlPosnStsVld.LongName = 'Ford Vehicle Accelerator Pedal Position Status Valid';
FordVehAccrPedlPosnStsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Accelerator P' ...
  'edal Position Status Valid'];
FordVehAccrPedlPosnStsVld.DocUnits = 'Cnt';
FordVehAccrPedlPosnStsVld.EngDT = dt.lgc;
FordVehAccrPedlPosnStsVld.EngInit = 0;
FordVehAccrPedlPosnStsVld.EngMin = 0;
FordVehAccrPedlPosnStsVld.EngMax = 1;
FordVehAccrPedlPosnStsVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehAccrPedlPosnStsVld.ReadType = 'Rte';


FordVehBrkPedlVld = DataDict.IpSignal;
FordVehBrkPedlVld.LongName = 'Ford Vehicle Brake Pedal Valid';
FordVehBrkPedlVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Brake Pedal V' ...
  'alid'];
FordVehBrkPedlVld.DocUnits = 'Cnt';
FordVehBrkPedlVld.EngDT = dt.lgc;
FordVehBrkPedlVld.EngInit = 0;
FordVehBrkPedlVld.EngMin = 0;
FordVehBrkPedlVld.EngMax = 1;
FordVehBrkPedlVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehBrkPedlVld.ReadType = 'Rte';


FordVehBrkTqVld = DataDict.IpSignal;
FordVehBrkTqVld.LongName = 'Ford Vehicle Brake Torque Valid';
FordVehBrkTqVld.Description = [...
  'This signal is used to return infomation of Brake Torque Valid'];
FordVehBrkTqVld.DocUnits = 'Cnt';
FordVehBrkTqVld.EngDT = dt.lgc;
FordVehBrkTqVld.EngInit = 0;
FordVehBrkTqVld.EngMin = 0;
FordVehBrkTqVld.EngMax = 1;
FordVehBrkTqVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehBrkTqVld.ReadType = 'Rte';


FordVehEngSpdVld = DataDict.IpSignal;
FordVehEngSpdVld.LongName = 'Ford Vehicle Engine Speed Valid';
FordVehEngSpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Engine Speed ' ...
  'Valid'];
FordVehEngSpdVld.DocUnits = 'Cnt';
FordVehEngSpdVld.EngDT = dt.lgc;
FordVehEngSpdVld.EngInit = 0;
FordVehEngSpdVld.EngMin = 0;
FordVehEngSpdVld.EngMax = 1;
FordVehEngSpdVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehEngSpdVld.ReadType = 'Rte';


FordVehEvasSteerAssiImgProcrModlAVld = DataDict.IpSignal;
FordVehEvasSteerAssiImgProcrModlAVld.LongName = 'Ford Vehicle Evasive Steering Assist Image Processor Module A Valid';
FordVehEvasSteerAssiImgProcrModlAVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Evasive Steer' ...
  'ing Assist Image Processor Module A Valid'];
FordVehEvasSteerAssiImgProcrModlAVld.DocUnits = 'Cnt';
FordVehEvasSteerAssiImgProcrModlAVld.EngDT = dt.lgc;
FordVehEvasSteerAssiImgProcrModlAVld.EngInit = 0;
FordVehEvasSteerAssiImgProcrModlAVld.EngMin = 0;
FordVehEvasSteerAssiImgProcrModlAVld.EngMax = 1;
FordVehEvasSteerAssiImgProcrModlAVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehEvasSteerAssiImgProcrModlAVld.ReadType = 'Rte';


FordVehEvasSteerAssiReqVld = DataDict.IpSignal;
FordVehEvasSteerAssiReqVld.LongName = 'Ford Vehicle Evasive Steering Assist Request Valid';
FordVehEvasSteerAssiReqVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Evasive Steer' ...
  'ing Assist Request Valid'];
FordVehEvasSteerAssiReqVld.DocUnits = 'Cnt';
FordVehEvasSteerAssiReqVld.EngDT = dt.lgc;
FordVehEvasSteerAssiReqVld.EngInit = 0;
FordVehEvasSteerAssiReqVld.EngMin = 0;
FordVehEvasSteerAssiReqVld.EngMax = 1;
FordVehEvasSteerAssiReqVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehEvasSteerAssiReqVld.ReadType = 'Rte';


FordVehFrntLeWhlCntrDirVld = DataDict.IpSignal;
FordVehFrntLeWhlCntrDirVld.LongName = 'Ford Vehicle Front Left Wheel Counter Direction Valid';
FordVehFrntLeWhlCntrDirVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Front Left Wh' ...
  'eel Counter Direction Valid'];
FordVehFrntLeWhlCntrDirVld.DocUnits = 'Cnt';
FordVehFrntLeWhlCntrDirVld.EngDT = dt.lgc;
FordVehFrntLeWhlCntrDirVld.EngInit = 0;
FordVehFrntLeWhlCntrDirVld.EngMin = 0;
FordVehFrntLeWhlCntrDirVld.EngMax = 1;
FordVehFrntLeWhlCntrDirVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehFrntLeWhlCntrDirVld.ReadType = 'Rte';


FordVehFrntLeWhlSpdVld = DataDict.IpSignal;
FordVehFrntLeWhlSpdVld.LongName = 'Ford Vehicle Front Left Wheel Speed Valid';
FordVehFrntLeWhlSpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Front Left Wh' ...
  'eel Speed Valid'];
FordVehFrntLeWhlSpdVld.DocUnits = 'Cnt';
FordVehFrntLeWhlSpdVld.EngDT = dt.lgc;
FordVehFrntLeWhlSpdVld.EngInit = 0;
FordVehFrntLeWhlSpdVld.EngMin = 0;
FordVehFrntLeWhlSpdVld.EngMax = 1;
FordVehFrntLeWhlSpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehFrntLeWhlSpdVld.ReadType = 'Rte';


FordVehFrntRiWhlCntrDirVld = DataDict.IpSignal;
FordVehFrntRiWhlCntrDirVld.LongName = 'Ford Vehicle Front Right Wheel Counter Direction Valid';
FordVehFrntRiWhlCntrDirVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Front Right W' ...
  'heel Counter Direction Valid'];
FordVehFrntRiWhlCntrDirVld.DocUnits = 'Cnt';
FordVehFrntRiWhlCntrDirVld.EngDT = dt.lgc;
FordVehFrntRiWhlCntrDirVld.EngInit = 0;
FordVehFrntRiWhlCntrDirVld.EngMin = 0;
FordVehFrntRiWhlCntrDirVld.EngMax = 1;
FordVehFrntRiWhlCntrDirVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehFrntRiWhlCntrDirVld.ReadType = 'Rte';


FordVehFrntRiWhlSpdVld = DataDict.IpSignal;
FordVehFrntRiWhlSpdVld.LongName = 'Ford Vehicle Front Right Wheel Speed Valid';
FordVehFrntRiWhlSpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Front Right W' ...
  'heel Speed Valid'];
FordVehFrntRiWhlSpdVld.DocUnits = 'Cnt';
FordVehFrntRiWhlSpdVld.EngDT = dt.lgc;
FordVehFrntRiWhlSpdVld.EngInit = 0;
FordVehFrntRiWhlSpdVld.EngMin = 0;
FordVehFrntRiWhlSpdVld.EngMax = 1;
FordVehFrntRiWhlSpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehFrntRiWhlSpdVld.ReadType = 'Rte';


FordVehGearLvrPosnVldInt = DataDict.IpSignal;
FordVehGearLvrPosnVldInt.LongName = 'Ford Vehicle Gear Lever Position Valid Internal';
FordVehGearLvrPosnVldInt.Description = [...
  'This signal is used to return infomation of Ford Vehicle Gear Lever Po' ...
  'sition Valid Internal'];
FordVehGearLvrPosnVldInt.DocUnits = 'Cnt';
FordVehGearLvrPosnVldInt.EngDT = dt.lgc;
FordVehGearLvrPosnVldInt.EngInit = 0;
FordVehGearLvrPosnVldInt.EngMin = 0;
FordVehGearLvrPosnVldInt.EngMax = 1;
FordVehGearLvrPosnVldInt.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehGearLvrPosnVldInt.ReadType = 'Rte';


FordVehGearRvsStsVld = DataDict.IpSignal;
FordVehGearRvsStsVld.LongName = 'Ford Vehicle Gear Reverse Status Valid';
FordVehGearRvsStsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Gear Reverse ' ...
  'Status Valid'];
FordVehGearRvsStsVld.DocUnits = 'Cnt';
FordVehGearRvsStsVld.EngDT = dt.lgc;
FordVehGearRvsStsVld.EngInit = 0;
FordVehGearRvsStsVld.EngMin = 0;
FordVehGearRvsStsVld.EngMax = 1;
FordVehGearRvsStsVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehGearRvsStsVld.ReadType = 'Rte';


FordVehIgnStsVld = DataDict.IpSignal;
FordVehIgnStsVld.LongName = 'Ford Vehicle Ignition Status Valid';
FordVehIgnStsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Ignition Stat' ...
  'us Valid'];
FordVehIgnStsVld.DocUnits = 'Cnt';
FordVehIgnStsVld.EngDT = dt.lgc;
FordVehIgnStsVld.EngInit = 0;
FordVehIgnStsVld.EngMin = 0;
FordVehIgnStsVld.EngMax = 1;
FordVehIgnStsVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehIgnStsVld.ReadType = 'Rte';


FordVehLaneAssiImgProcgModlAVld = DataDict.IpSignal;
FordVehLaneAssiImgProcgModlAVld.LongName = 'Ford Vehicle Lane Assist Image Processing Module A Valid';
FordVehLaneAssiImgProcgModlAVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Lane Assist I' ...
  'mage Processing Module A Valid'];
FordVehLaneAssiImgProcgModlAVld.DocUnits = 'Cnt';
FordVehLaneAssiImgProcgModlAVld.EngDT = dt.lgc;
FordVehLaneAssiImgProcgModlAVld.EngInit = 0;
FordVehLaneAssiImgProcgModlAVld.EngMin = 0;
FordVehLaneAssiImgProcgModlAVld.EngMax = 1;
FordVehLaneAssiImgProcgModlAVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehLaneAssiImgProcgModlAVld.ReadType = 'Rte';


FordVehLatACmpdVld = DataDict.IpSignal;
FordVehLatACmpdVld.LongName = 'Ford Vehicle Lateral Acceleration Compensated Valid';
FordVehLatACmpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Lateral Accel' ...
  'eration Compensated Valid'];
FordVehLatACmpdVld.DocUnits = 'Cnt';
FordVehLatACmpdVld.EngDT = dt.lgc;
FordVehLatACmpdVld.EngInit = 0;
FordVehLatACmpdVld.EngMin = 0;
FordVehLatACmpdVld.EngMax = 1;
FordVehLatACmpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehLatACmpdVld.ReadType = 'Rte';


FordVehLatCtrlImgProcrModlAVld = DataDict.IpSignal;
FordVehLatCtrlImgProcrModlAVld.LongName = 'Ford Vehicle Lane Assist Image Processor Module A Valid';
FordVehLatCtrlImgProcrModlAVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Lane Assist I' ...
  'mage Processor Module A Valid'];
FordVehLatCtrlImgProcrModlAVld.DocUnits = 'Cnt';
FordVehLatCtrlImgProcrModlAVld.EngDT = dt.lgc;
FordVehLatCtrlImgProcrModlAVld.EngInit = 0;
FordVehLatCtrlImgProcrModlAVld.EngMin = 0;
FordVehLatCtrlImgProcrModlAVld.EngMax = 1;
FordVehLatCtrlImgProcrModlAVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehLatCtrlImgProcrModlAVld.ReadType = 'Rte';


FordVehLgtACmpdVld = DataDict.IpSignal;
FordVehLgtACmpdVld.LongName = 'Ford Vehicle Longitudinal Acceleration Compensated Valid';
FordVehLgtACmpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Longitudinal ' ...
  'Acceleration Compensated Valid'];
FordVehLgtACmpdVld.DocUnits = 'Cnt';
FordVehLgtACmpdVld.EngDT = dt.lgc;
FordVehLgtACmpdVld.EngInit = 0;
FordVehLgtACmpdVld.EngMin = 0;
FordVehLgtACmpdVld.EngMax = 1;
FordVehLgtACmpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehLgtACmpdVld.ReadType = 'Rte';


FordVehLoSpdMtnCtrlBrkSprtVld = DataDict.IpSignal;
FordVehLoSpdMtnCtrlBrkSprtVld.LongName = 'Ford Vehicle Low Speed Motion Control Brake Support Valid';
FordVehLoSpdMtnCtrlBrkSprtVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Low Speed Mot' ...
  'ion Control Brake Support Valid'];
FordVehLoSpdMtnCtrlBrkSprtVld.DocUnits = 'Cnt';
FordVehLoSpdMtnCtrlBrkSprtVld.EngDT = dt.lgc;
FordVehLoSpdMtnCtrlBrkSprtVld.EngInit = 0;
FordVehLoSpdMtnCtrlBrkSprtVld.EngMin = 0;
FordVehLoSpdMtnCtrlBrkSprtVld.EngMax = 1;
FordVehLoSpdMtnCtrlBrkSprtVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehLoSpdMtnCtrlBrkSprtVld.ReadType = 'Rte';


FordVehParkAidModlStsVld = DataDict.IpSignal;
FordVehParkAidModlStsVld.LongName = 'Ford Vehicle Park Aid Module Status Valid';
FordVehParkAidModlStsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Park Aid Modu' ...
  'le Status Valid'];
FordVehParkAidModlStsVld.DocUnits = 'Cnt';
FordVehParkAidModlStsVld.EngDT = dt.lgc;
FordVehParkAidModlStsVld.EngInit = 0;
FordVehParkAidModlStsVld.EngMin = 0;
FordVehParkAidModlStsVld.EngMax = 1;
FordVehParkAidModlStsVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehParkAidModlStsVld.ReadType = 'Rte';


FordVehPrpnWhlTqVld = DataDict.IpSignal;
FordVehPrpnWhlTqVld.LongName = 'Ford Vehicle Propulsion Wheel Torque Valid';
FordVehPrpnWhlTqVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Propulsion Wh' ...
  'eel Torque Valid'];
FordVehPrpnWhlTqVld.DocUnits = 'Cnt';
FordVehPrpnWhlTqVld.EngDT = dt.lgc;
FordVehPrpnWhlTqVld.EngInit = 0;
FordVehPrpnWhlTqVld.EngMin = 0;
FordVehPrpnWhlTqVld.EngMax = 1;
FordVehPrpnWhlTqVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehPrpnWhlTqVld.ReadType = 'Rte';


FordVehReLeWhlCntrDirVld = DataDict.IpSignal;
FordVehReLeWhlCntrDirVld.LongName = 'Ford Vehicle Rear Left Wheel Counter Direction Valid';
FordVehReLeWhlCntrDirVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Rear Left Whe' ...
  'el Counter Direction Valid'];
FordVehReLeWhlCntrDirVld.DocUnits = 'Cnt';
FordVehReLeWhlCntrDirVld.EngDT = dt.lgc;
FordVehReLeWhlCntrDirVld.EngInit = 0;
FordVehReLeWhlCntrDirVld.EngMin = 0;
FordVehReLeWhlCntrDirVld.EngMax = 1;
FordVehReLeWhlCntrDirVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehReLeWhlCntrDirVld.ReadType = 'Rte';


FordVehReLeWhlSpdVld = DataDict.IpSignal;
FordVehReLeWhlSpdVld.LongName = 'Ford Vehicle Rear Left Wheel Speed Valid';
FordVehReLeWhlSpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Rear Left Whe' ...
  'el Speed Valid'];
FordVehReLeWhlSpdVld.DocUnits = 'Cnt';
FordVehReLeWhlSpdVld.EngDT = dt.lgc;
FordVehReLeWhlSpdVld.EngInit = 0;
FordVehReLeWhlSpdVld.EngMin = 0;
FordVehReLeWhlSpdVld.EngMax = 1;
FordVehReLeWhlSpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehReLeWhlSpdVld.ReadType = 'Rte';


FordVehReRiWhlCntrDirVld = DataDict.IpSignal;
FordVehReRiWhlCntrDirVld.LongName = 'Ford Vehicle Rear Right Wheel Counter Direction Valid';
FordVehReRiWhlCntrDirVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Rear Right Wh' ...
  'eel Counter Direction Valid'];
FordVehReRiWhlCntrDirVld.DocUnits = 'Cnt';
FordVehReRiWhlCntrDirVld.EngDT = dt.lgc;
FordVehReRiWhlCntrDirVld.EngInit = 0;
FordVehReRiWhlCntrDirVld.EngMin = 0;
FordVehReRiWhlCntrDirVld.EngMax = 1;
FordVehReRiWhlCntrDirVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehReRiWhlCntrDirVld.ReadType = 'Rte';


FordVehReRiWhlSpdVld = DataDict.IpSignal;
FordVehReRiWhlSpdVld.LongName = 'Ford Vehicle Rear Right Wheel Speed Valid';
FordVehReRiWhlSpdVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Rear Right Wh' ...
  'eel Speed Valid'];
FordVehReRiWhlSpdVld.DocUnits = 'Cnt';
FordVehReRiWhlSpdVld.EngDT = dt.lgc;
FordVehReRiWhlSpdVld.EngInit = 0;
FordVehReRiWhlSpdVld.EngMin = 0;
FordVehReRiWhlSpdVld.EngMax = 1;
FordVehReRiWhlSpdVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehReRiWhlSpdVld.ReadType = 'Rte';


FordVehSelDrvModChassisVld = DataDict.IpSignal;
FordVehSelDrvModChassisVld.LongName = 'Ford Vehicle Select Drive Mode Chassis Valid';
FordVehSelDrvModChassisVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Select Drive ' ...
  'Mode Chassis Valid'];
FordVehSelDrvModChassisVld.DocUnits = 'Cnt';
FordVehSelDrvModChassisVld.EngDT = dt.lgc;
FordVehSelDrvModChassisVld.EngInit = 0;
FordVehSelDrvModChassisVld.EngMin = 0;
FordVehSelDrvModChassisVld.EngMax = 1;
FordVehSelDrvModChassisVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehSelDrvModChassisVld.ReadType = 'Rte';


FordVehSpdOverGndVld = DataDict.IpSignal;
FordVehSpdOverGndVld.LongName = 'Ford Vehicle Speed Over Ground Valid';
FordVehSpdOverGndVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Speed Over Gr' ...
  'ound Valid'];
FordVehSpdOverGndVld.DocUnits = 'Cnt';
FordVehSpdOverGndVld.EngDT = dt.lgc;
FordVehSpdOverGndVld.EngInit = 0;
FordVehSpdOverGndVld.EngMin = 0;
FordVehSpdOverGndVld.EngMax = 1;
FordVehSpdOverGndVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehSpdOverGndVld.ReadType = 'Rte';


FordVehSteerPinionAgOffsVld = DataDict.IpSignal;
FordVehSteerPinionAgOffsVld.LongName = 'Ford Vehicle Steering Pinion Angle Offset Valid';
FordVehSteerPinionAgOffsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Steering Pini' ...
  'on Angle Offset Valid'];
FordVehSteerPinionAgOffsVld.DocUnits = 'Cnt';
FordVehSteerPinionAgOffsVld.EngDT = dt.lgc;
FordVehSteerPinionAgOffsVld.EngInit = 0;
FordVehSteerPinionAgOffsVld.EngMin = 0;
FordVehSteerPinionAgOffsVld.EngMax = 1;
FordVehSteerPinionAgOffsVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehSteerPinionAgOffsVld.ReadType = 'Rte';


FordVehTrlrAidCnclReqVld = DataDict.IpSignal;
FordVehTrlrAidCnclReqVld.LongName = 'Ford Vehicle Trailer Aid Cancel Request Valid';
FordVehTrlrAidCnclReqVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Aid C' ...
  'ancel Request Valid'];
FordVehTrlrAidCnclReqVld.DocUnits = 'Cnt';
FordVehTrlrAidCnclReqVld.EngDT = dt.lgc;
FordVehTrlrAidCnclReqVld.EngInit = 0;
FordVehTrlrAidCnclReqVld.EngMin = 0;
FordVehTrlrAidCnclReqVld.EngMax = 1;
FordVehTrlrAidCnclReqVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrAidCnclReqVld.ReadType = 'Rte';


FordVehTrlrAidKnobPosnVld = DataDict.IpSignal;
FordVehTrlrAidKnobPosnVld.LongName = 'Ford Vehicle Trailer Aid Knob Position Valid';
FordVehTrlrAidKnobPosnVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Aid K' ...
  'nob Position Valid'];
FordVehTrlrAidKnobPosnVld.DocUnits = 'Cnt';
FordVehTrlrAidKnobPosnVld.EngDT = dt.lgc;
FordVehTrlrAidKnobPosnVld.EngInit = 0;
FordVehTrlrAidKnobPosnVld.EngMin = 0;
FordVehTrlrAidKnobPosnVld.EngMax = 1;
FordVehTrlrAidKnobPosnVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrAidKnobPosnVld.ReadType = 'Rte';


FordVehTrlrAidKnobStsVld = DataDict.IpSignal;
FordVehTrlrAidKnobStsVld.LongName = 'Ford Vehicle Trailer Aid Knob Status Valid';
FordVehTrlrAidKnobStsVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Aid K' ...
  'nob Status Valid'];
FordVehTrlrAidKnobStsVld.DocUnits = 'Cnt';
FordVehTrlrAidKnobStsVld.EngDT = dt.lgc;
FordVehTrlrAidKnobStsVld.EngInit = 0;
FordVehTrlrAidKnobStsVld.EngMin = 0;
FordVehTrlrAidKnobStsVld.EngMax = 1;
FordVehTrlrAidKnobStsVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrAidKnobStsVld.ReadType = 'Rte';


FordVehTrlrAidModReqVld = DataDict.IpSignal;
FordVehTrlrAidModReqVld.LongName = 'Ford Vehicle Trailer Aid Mode Request Valid';
FordVehTrlrAidModReqVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Aid M' ...
  'ode Request Valid'];
FordVehTrlrAidModReqVld.DocUnits = 'Cnt';
FordVehTrlrAidModReqVld.EngDT = dt.lgc;
FordVehTrlrAidModReqVld.EngInit = 0;
FordVehTrlrAidModReqVld.EngMin = 0;
FordVehTrlrAidModReqVld.EngMax = 1;
FordVehTrlrAidModReqVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrAidModReqVld.ReadType = 'Rte';


FordVehTrlrAidTrakgStVld = DataDict.IpSignal;
FordVehTrlrAidTrakgStVld.LongName = 'Ford Vehicle Trailer Aid Tracking State Valid';
FordVehTrlrAidTrakgStVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Aid T' ...
  'racking State Valid'];
FordVehTrlrAidTrakgStVld.DocUnits = 'Cnt';
FordVehTrlrAidTrakgStVld.EngDT = dt.lgc;
FordVehTrlrAidTrakgStVld.EngInit = 0;
FordVehTrlrAidTrakgStVld.EngMin = 0;
FordVehTrlrAidTrakgStVld.EngMax = 1;
FordVehTrlrAidTrakgStVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrAidTrakgStVld.ReadType = 'Rte';


FordVehTrlrBackupAssiAvlVld = DataDict.IpSignal;
FordVehTrlrBackupAssiAvlVld.LongName = 'Ford Vehicle Trailer Backup Assist Available Valid';
FordVehTrlrBackupAssiAvlVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Backu' ...
  'p Assist Available Valid'];
FordVehTrlrBackupAssiAvlVld.DocUnits = 'Cnt';
FordVehTrlrBackupAssiAvlVld.EngDT = dt.lgc;
FordVehTrlrBackupAssiAvlVld.EngInit = 0;
FordVehTrlrBackupAssiAvlVld.EngMin = 0;
FordVehTrlrBackupAssiAvlVld.EngMax = 1;
FordVehTrlrBackupAssiAvlVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrBackupAssiAvlVld.ReadType = 'Rte';


FordVehTrlrBackupAssiMeasVld = DataDict.IpSignal;
FordVehTrlrBackupAssiMeasVld.LongName = 'Ford Vehicle Trailer Backup Assist Measurment Valid';
FordVehTrlrBackupAssiMeasVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Backu' ...
  'p Assist Measurment Valid'];
FordVehTrlrBackupAssiMeasVld.DocUnits = 'Cnt';
FordVehTrlrBackupAssiMeasVld.EngDT = dt.lgc;
FordVehTrlrBackupAssiMeasVld.EngInit = 0;
FordVehTrlrBackupAssiMeasVld.EngMin = 0;
FordVehTrlrBackupAssiMeasVld.EngMax = 1;
FordVehTrlrBackupAssiMeasVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrBackupAssiMeasVld.ReadType = 'Rte';


FordVehTrlrHitchAgVld = DataDict.IpSignal;
FordVehTrlrHitchAgVld.LongName = 'Ford Vehicle Trailer Hitch Angle Valid';
FordVehTrlrHitchAgVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Hitch' ...
  ' Angle Valid'];
FordVehTrlrHitchAgVld.DocUnits = 'Cnt';
FordVehTrlrHitchAgVld.EngDT = dt.lgc;
FordVehTrlrHitchAgVld.EngInit = 0;
FordVehTrlrHitchAgVld.EngMin = 0;
FordVehTrlrHitchAgVld.EngMax = 1;
FordVehTrlrHitchAgVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrHitchAgVld.ReadType = 'Rte';


FordVehTrlrHitchRateVld = DataDict.IpSignal;
FordVehTrlrHitchRateVld.LongName = 'Ford Vehicle Trailer Hitch Rate Valid';
FordVehTrlrHitchRateVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Hitch' ...
  ' Rate Valid'];
FordVehTrlrHitchRateVld.DocUnits = 'Cnt';
FordVehTrlrHitchRateVld.EngDT = dt.lgc;
FordVehTrlrHitchRateVld.EngInit = 0;
FordVehTrlrHitchRateVld.EngMin = 0;
FordVehTrlrHitchRateVld.EngMax = 1;
FordVehTrlrHitchRateVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrHitchRateVld.ReadType = 'Rte';


FordVehTrlrTarVld = DataDict.IpSignal;
FordVehTrlrTarVld.LongName = 'Ford Vehicle Trailer Target Valid';
FordVehTrlrTarVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Trailer Targe' ...
  't Valid'];
FordVehTrlrTarVld.DocUnits = 'Cnt';
FordVehTrlrTarVld.EngDT = dt.lgc;
FordVehTrlrTarVld.EngInit = 0;
FordVehTrlrTarVld.EngMin = 0;
FordVehTrlrTarVld.EngMax = 1;
FordVehTrlrTarVld.ReadIn = {'FIH_Read_Signal_Status2'};
FordVehTrlrTarVld.ReadType = 'Rte';


FordVehTurnSigVld = DataDict.IpSignal;
FordVehTurnSigVld.LongName = 'Ford Vehicle Turn Signal Valid';
FordVehTurnSigVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Turn Signal V' ...
  'alid'];
FordVehTurnSigVld.DocUnits = 'Cnt';
FordVehTurnSigVld.EngDT = dt.lgc;
FordVehTurnSigVld.EngInit = 0;
FordVehTurnSigVld.EngMin = 0;
FordVehTurnSigVld.EngMax = 1;
FordVehTurnSigVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehTurnSigVld.ReadType = 'Rte';


FordVehYawRateRawVld = DataDict.IpSignal;
FordVehYawRateRawVld.LongName = 'Ford Vehicle Yaw Rate Raw Valid';
FordVehYawRateRawVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Yaw Rate Raw ' ...
  'Valid'];
FordVehYawRateRawVld.DocUnits = 'Cnt';
FordVehYawRateRawVld.EngDT = dt.lgc;
FordVehYawRateRawVld.EngInit = 0;
FordVehYawRateRawVld.EngMin = 0;
FordVehYawRateRawVld.EngMax = 1;
FordVehYawRateRawVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehYawRateRawVld.ReadType = 'Rte';


FordVehYawRateVld = DataDict.IpSignal;
FordVehYawRateVld.LongName = 'Ford Vehicle Yaw Rate Valid';
FordVehYawRateVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Yaw Rate Vali' ...
  'd'];
FordVehYawRateVld.DocUnits = 'Cnt';
FordVehYawRateVld.EngDT = dt.lgc;
FordVehYawRateVld.EngInit = 0;
FordVehYawRateVld.EngMin = 0;
FordVehYawRateVld.EngMax = 1;
FordVehYawRateVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehYawRateVld.ReadType = 'Rte';


FordVehYawStabyVld = DataDict.IpSignal;
FordVehYawStabyVld.LongName = 'Ford Vehicle Yaw Stability Valid';
FordVehYawStabyVld.Description = [...
  'This signal is used to return infomation of Ford Vehicle Yaw Stability' ...
  ' Valid'];
FordVehYawStabyVld.DocUnits = 'Cnt';
FordVehYawStabyVld.EngDT = dt.lgc;
FordVehYawStabyVld.EngInit = 0;
FordVehYawStabyVld.EngMin = 0;
FordVehYawStabyVld.EngMax = 1;
FordVehYawStabyVld.ReadIn = {'FIH_Read_Signal_Status'};
FordVehYawStabyVld.ReadType = 'Rte';


TrlrBackupAssiEnaVld = DataDict.IpSignal;
TrlrBackupAssiEnaVld.LongName = 'Trailer Backup Assist Enable Valid';
TrlrBackupAssiEnaVld.Description = [...
  'This signal is used to return infomation of Trailer Backup Assist Enab' ...
  'le Valid'];
TrlrBackupAssiEnaVld.DocUnits = 'Cnt';
TrlrBackupAssiEnaVld.EngDT = dt.lgc;
TrlrBackupAssiEnaVld.EngInit = 0;
TrlrBackupAssiEnaVld.EngMin = 0;
TrlrBackupAssiEnaVld.EngMax = 1;
TrlrBackupAssiEnaVld.ReadIn = {'FIH_Read_Signal_Status2'};
TrlrBackupAssiEnaVld.ReadType = 'Rte';


TrlrBackupAssiRvsVld = DataDict.IpSignal;
TrlrBackupAssiRvsVld.LongName = 'Trailer Backup Assist Reverse Valid';
TrlrBackupAssiRvsVld.Description = [...
  'This signal is used to return infomation of Trailer Backup Assist Reve' ...
  'rse Valid'];
TrlrBackupAssiRvsVld.DocUnits = 'Cnt';
TrlrBackupAssiRvsVld.EngDT = dt.lgc;
TrlrBackupAssiRvsVld.EngInit = 0;
TrlrBackupAssiRvsVld.EngMin = 0;
TrlrBackupAssiRvsVld.EngMax = 1;
TrlrBackupAssiRvsVld.ReadIn = {'FIH_Read_Signal_Status2'};
TrlrBackupAssiRvsVld.ReadType = 'Rte';


TrlrBackupAssiYawRateVld = DataDict.IpSignal;
TrlrBackupAssiYawRateVld.LongName = 'Trailer Backup Assist Yaw Rate Valid';
TrlrBackupAssiYawRateVld.Description = [...
  'This signal is used to return infomation of Trailer Backup Assist Yaw ' ...
  'Rate Valid'];
TrlrBackupAssiYawRateVld.DocUnits = 'Cnt';
TrlrBackupAssiYawRateVld.EngDT = dt.lgc;
TrlrBackupAssiYawRateVld.EngInit = 0;
TrlrBackupAssiYawRateVld.EngMin = 0;
TrlrBackupAssiYawRateVld.EngMax = 1;
TrlrBackupAssiYawRateVld.ReadIn = {'FIH_Read_Signal_Status2'};
TrlrBackupAssiYawRateVld.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = [...
  'This signal is used to return infomation of Vehicle Speed Valid'];
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'FIH_Read_Signal_Status'};
VehSpdVld.ReadType = 'Rte';


VertAVld = DataDict.IpSignal;
VertAVld.LongName = 'Vertical Acceleration Valid';
VertAVld.Description = [...
  'This signal is used to return infomation of Vertical Acceleration Vali' ...
  'd'];
VertAVld.DocUnits = 'Cnt';
VertAVld.EngDT = dt.lgc;
VertAVld.EngInit = 0;
VertAVld.EngMin = 0;
VertAVld.EngMax = 1;
VertAVld.ReadIn = {'FIH_Read_Signal_Status'};
VertAVld.ReadType = 'Rte';

%%---------------------------------------------------------------------
%% Input Signal Definitions - Ford In-House Features Enable/Disable via DID
%%----------------------------------------------------------------------

FordActvNiblCtrlEnad = DataDict.IpSignal;
FordActvNiblCtrlEnad.LongName = 'Ford Active Nibble Control Enabled';
FordActvNiblCtrlEnad.Description = [...
  'This signal is used to return the requested information of Ford Active' ...
  ' Nibble Control Enabled to the FIH software'];
FordActvNiblCtrlEnad.DocUnits = 'Cnt';
FordActvNiblCtrlEnad.EngDT = dt.lgc;
FordActvNiblCtrlEnad.EngInit = 0;
FordActvNiblCtrlEnad.EngMin = 0;
FordActvNiblCtrlEnad.EngMax = 1;
FordActvNiblCtrlEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordActvNiblCtrlEnad.ReadType = 'Rte';


FordBrkPlsRejctnEnad = DataDict.IpSignal;
FordBrkPlsRejctnEnad.LongName = 'Ford Brake Pulse Rejection Enabled';
FordBrkPlsRejctnEnad.Description = [...
  'This signal is used to return the requested information of Ford Brake ' ...
  'Pulse Rejection Enabled to the FIH software'];
FordBrkPlsRejctnEnad.DocUnits = 'Cnt';
FordBrkPlsRejctnEnad.EngDT = dt.lgc;
FordBrkPlsRejctnEnad.EngInit = 0;
FordBrkPlsRejctnEnad.EngMin = 0;
FordBrkPlsRejctnEnad.EngMax = 1;
FordBrkPlsRejctnEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordBrkPlsRejctnEnad.ReadType = 'Rte';

FordEvasSteerAssiEnad = DataDict.IpSignal;
FordEvasSteerAssiEnad.LongName = 'Ford Evasive Steering Assist Enabled';
FordEvasSteerAssiEnad.Description = [...
  'This signal is used to return the requested information of Ford Evasiv' ...
  'e Steering Assist Enabled to the FIH software'];
FordEvasSteerAssiEnad.DocUnits = 'Cnt';
FordEvasSteerAssiEnad.EngDT = dt.lgc;
FordEvasSteerAssiEnad.EngInit = 0;
FordEvasSteerAssiEnad.EngMin = 0;
FordEvasSteerAssiEnad.EngMax = 1;
FordEvasSteerAssiEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordEvasSteerAssiEnad.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Ford Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'This signal is used to return the requested information of Ford Lane C' ...
  'entering Assist Enabled to the FIH software'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 0;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordLaneCentrAssiEnad.ReadType = 'Rte';

FordLaneDprtrWarnEnad = DataDict.IpSignal;
FordLaneDprtrWarnEnad.LongName = 'Ford Lane Departure Warning Enabled';
FordLaneDprtrWarnEnad.Description = [...
  'This signal is used to return the requested information of Ford Lane D' ...
  'eparture Warning Enabled to the FIH software'];
FordLaneDprtrWarnEnad.DocUnits = 'Cnt';
FordLaneDprtrWarnEnad.EngDT = dt.lgc;
FordLaneDprtrWarnEnad.EngInit = 0;
FordLaneDprtrWarnEnad.EngMin = 0;
FordLaneDprtrWarnEnad.EngMax = 1;
FordLaneDprtrWarnEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordLaneDprtrWarnEnad.ReadType = 'Rte';

FordLaneKeepAssiEnad = DataDict.IpSignal;
FordLaneKeepAssiEnad.LongName = 'Ford Lane Keep Assist Enabled';
FordLaneKeepAssiEnad.Description = [...
  'This signal is used to return the requested information of Ford Lane K' ...
  'eeping Assist Enabled to the FIH software'];
FordLaneKeepAssiEnad.DocUnits = 'Cnt';
FordLaneKeepAssiEnad.EngDT = dt.lgc;
FordLaneKeepAssiEnad.EngInit = 0;
FordLaneKeepAssiEnad.EngMin = 0;
FordLaneKeepAssiEnad.EngMax = 1;
FordLaneKeepAssiEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordLaneKeepAssiEnad.ReadType = 'Rte';

FordPullDriftCmpEnad = DataDict.IpSignal;
FordPullDriftCmpEnad.LongName = 'Ford Pull Drift Compensation Enabled';
FordPullDriftCmpEnad.Description = [...
  'This signal is used to return the requested information of Ford Pull D' ...
  'rift Compensation Enabled to the FIH software'];
FordPullDriftCmpEnad.DocUnits = 'Cnt';
FordPullDriftCmpEnad.EngDT = dt.lgc;
FordPullDriftCmpEnad.EngInit = 0;
FordPullDriftCmpEnad.EngMin = 0;
FordPullDriftCmpEnad.EngMax = 1;
FordPullDriftCmpEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordPullDriftCmpEnad.ReadType = 'Rte';

FordResrchFctEnad = DataDict.IpSignal;
FordResrchFctEnad.LongName = 'Ford Research Function Enabled';
FordResrchFctEnad.Description = [...
  'This signal is used to return the requested information of Ford Resear' ...
  'ch Function Enabled to the FIH software'];
FordResrchFctEnad.DocUnits = 'Cnt';
FordResrchFctEnad.EngDT = dt.lgc;
FordResrchFctEnad.EngInit = 0;
FordResrchFctEnad.EngMin = 0;
FordResrchFctEnad.EngMax = 1;
FordResrchFctEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordResrchFctEnad.ReadType = 'Rte';

FordTqSteerCmpEnad = DataDict.IpSignal;
FordTqSteerCmpEnad.LongName = 'Ford Torque Steer Compensation Enabled';
FordTqSteerCmpEnad.Description = [...
  'This signal is used to return the requested information of Ford Torque' ...
  ' Steer Compensation Enabled to the FIH software'];
FordTqSteerCmpEnad.DocUnits = 'Cnt';
FordTqSteerCmpEnad.EngDT = dt.lgc;
FordTqSteerCmpEnad.EngInit = 0;
FordTqSteerCmpEnad.EngMin = 0;
FordTqSteerCmpEnad.EngMax = 1;
FordTqSteerCmpEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordTqSteerCmpEnad.ReadType = 'Rte';


FordTrfcJamAssiEnad = DataDict.IpSignal;
FordTrfcJamAssiEnad.LongName = 'Ford Traffic Jam Assist Enabled';
FordTrfcJamAssiEnad.Description = [...
  'This signal is used to return the requested information of Ford Traffi' ...
  'c Jam Assist Enabled to the FIH software'];
FordTrfcJamAssiEnad.DocUnits = 'Cnt';
FordTrfcJamAssiEnad.EngDT = dt.lgc;
FordTrfcJamAssiEnad.EngInit = 0;
FordTrfcJamAssiEnad.EngMin = 0;
FordTrfcJamAssiEnad.EngMax = 1;
FordTrfcJamAssiEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordTrfcJamAssiEnad.ReadType = 'Rte';


FordTrlrBackupAssi5WhlEnad = DataDict.IpSignal;
FordTrlrBackupAssi5WhlEnad.LongName = 'Ford Trailer Backup Assist 5 Wheel Enabled';
FordTrlrBackupAssi5WhlEnad.Description = [...
  'This signal is used to return the requested information of Ford Traile' ...
  'r Backup Assist 5 Wheel Enabled to the FIH software'];
FordTrlrBackupAssi5WhlEnad.DocUnits = 'Cnt';
FordTrlrBackupAssi5WhlEnad.EngDT = dt.lgc;
FordTrlrBackupAssi5WhlEnad.EngInit = 0;
FordTrlrBackupAssi5WhlEnad.EngMin = 0;
FordTrlrBackupAssi5WhlEnad.EngMax = 1;
FordTrlrBackupAssi5WhlEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordTrlrBackupAssi5WhlEnad.ReadType = 'Rte';


FordTrlrBackupAssiEnad = DataDict.IpSignal;
FordTrlrBackupAssiEnad.LongName = 'Ford Trailer Backup Assist Enabled';
FordTrlrBackupAssiEnad.Description = [...
  'This signal is used to return the requested information of Ford Traile' ...
  'r Backup Assist Enabled to the FIH software'];
FordTrlrBackupAssiEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiEnad.EngDT = dt.lgc;
FordTrlrBackupAssiEnad.EngInit = 0;
FordTrlrBackupAssiEnad.EngMin = 0;
FordTrlrBackupAssiEnad.EngMax = 1;
FordTrlrBackupAssiEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordTrlrBackupAssiEnad.ReadType = 'Rte';

FordTrlrBackupAssiTrigEnad = DataDict.IpSignal;
FordTrlrBackupAssiTrigEnad.LongName = 'Ford Trailer Backup Assist Temperature Resistance Trigger Enabled';
FordTrlrBackupAssiTrigEnad.Description = [...
  'This signal is used to return the requested information of Ford Traile' ...
  'r Backup Assist Temperature Resistance Trigger Enabled to the FIH soft' ...
  'ware'];
FordTrlrBackupAssiTrigEnad.DocUnits = 'Cnt';
FordTrlrBackupAssiTrigEnad.EngDT = dt.lgc;
FordTrlrBackupAssiTrigEnad.EngInit = 0;
FordTrlrBackupAssiTrigEnad.EngMin = 0;
FordTrlrBackupAssiTrigEnad.EngMax = 1;
FordTrlrBackupAssiTrigEnad.ReadIn = {'FIH_Read_FIH_EoL_Config'};
FordTrlrBackupAssiTrigEnad.ReadType = 'Rte';





%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordBlaBoxIfCmnVehWhlBas = DataDict.Calibration;
FordBlaBoxIfCmnVehWhlBas.LongName = 'Ford Vehicle Wheel Base';
FordBlaBoxIfCmnVehWhlBas.Description = [...
  'Used to call FIH_Read_WheelBase'];
FordBlaBoxIfCmnVehWhlBas.DocUnits = 'Cnt';
FordBlaBoxIfCmnVehWhlBas.EngDT = dt.u16;
FordBlaBoxIfCmnVehWhlBas.EngVal = 3099;
FordBlaBoxIfCmnVehWhlBas.EngMin = 0;
FordBlaBoxIfCmnVehWhlBas.EngMax = 65535;
FordBlaBoxIfCmnVehWhlBas.Cardinality = 'Cmn';
FordBlaBoxIfCmnVehWhlBas.CustomerVisible = false;
FordBlaBoxIfCmnVehWhlBas.Online = false;
FordBlaBoxIfCmnVehWhlBas.Impact = 'H';
FordBlaBoxIfCmnVehWhlBas.TuningOwner = 'CSE';
FordBlaBoxIfCmnVehWhlBas.GraphLink = {''};
FordBlaBoxIfCmnVehWhlBas.Monotony = 'None';
FordBlaBoxIfCmnVehWhlBas.MaxGrad = 0;
FordBlaBoxIfCmnVehWhlBas.PortName = 'FordBlaBoxIfCmnVehWhlBas';

FordBlaBoxIfCmnVehSteerRat = DataDict.Calibration;
FordBlaBoxIfCmnVehSteerRat.LongName = 'Ford Vehicle Steering Ratio';
FordBlaBoxIfCmnVehSteerRat.Description = [...
  'Used to call FIH_Read_VehicleSteeringRatio'];
FordBlaBoxIfCmnVehSteerRat.DocUnits = 'Uls';
FordBlaBoxIfCmnVehSteerRat.EngDT = dt.u8p8;
FordBlaBoxIfCmnVehSteerRat.EngVal = 0;
FordBlaBoxIfCmnVehSteerRat.EngMin = 0;
FordBlaBoxIfCmnVehSteerRat.EngMax = 255.99;
FordBlaBoxIfCmnVehSteerRat.Cardinality = 'Cmn';
FordBlaBoxIfCmnVehSteerRat.CustomerVisible = false;
FordBlaBoxIfCmnVehSteerRat.Online = false;
FordBlaBoxIfCmnVehSteerRat.Impact = 'H';
FordBlaBoxIfCmnVehSteerRat.TuningOwner = 'CSE';
FordBlaBoxIfCmnVehSteerRat.GraphLink = {''};
FordBlaBoxIfCmnVehSteerRat.Monotony = 'None';
FordBlaBoxIfCmnVehSteerRat.MaxGrad = 0;
FordBlaBoxIfCmnVehSteerRat.PortName = 'FordBlaBoxIfCmnVehSteerRat';
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

%% From Base EPS

ECUID1_CNT_U08 = DataDict.Constant;
ECUID1_CNT_U08.LongName = 'Ecu Identifier 1';
ECUID1_CNT_U08.Description = 'Element of Ecu Identifier';
ECUID1_CNT_U08.DocUnits = 'Cnt';
ECUID1_CNT_U08.EngDT = dt.u08;
ECUID1_CNT_U08.EngVal = 1;
ECUID1_CNT_U08.Define = 'Local';

%% From Input Signal Diagnostics and PassThru signal diagnostics

FIHMSGINP1VLDBIT0_CNT_U08 = DataDict.Constant;
FIHMSGINP1VLDBIT0_CNT_U08.LongName = 'FIH Message Input 1 Valid Bit 0';
FIHMSGINP1VLDBIT0_CNT_U08.Description = [...
  'Used to Set 0th Bit of FIH_PassVal_Config'];
FIHMSGINP1VLDBIT0_CNT_U08.DocUnits = 'Cnt';
FIHMSGINP1VLDBIT0_CNT_U08.EngDT = dt.u08;
FIHMSGINP1VLDBIT0_CNT_U08.EngVal = 1;
FIHMSGINP1VLDBIT0_CNT_U08.Define = 'Local';


FIHMSGINP2VLDBIT1_CNT_U08 = DataDict.Constant;
FIHMSGINP2VLDBIT1_CNT_U08.LongName = 'FIH Message Input 2 Valid Bit 1';
FIHMSGINP2VLDBIT1_CNT_U08.Description = [...
  'Used to Set 1st Bit of FIH_PassVal_Config'];
FIHMSGINP2VLDBIT1_CNT_U08.DocUnits = 'Cnt';
FIHMSGINP2VLDBIT1_CNT_U08.EngDT = dt.u08;
FIHMSGINP2VLDBIT1_CNT_U08.EngVal = 2;
FIHMSGINP2VLDBIT1_CNT_U08.Define = 'Local';


FIHMSGINP3VLDBIT2_CNT_U08 = DataDict.Constant;
FIHMSGINP3VLDBIT2_CNT_U08.LongName = 'FIH Message Input 3 Valid Bit 2';
FIHMSGINP3VLDBIT2_CNT_U08.Description = [...
  'Used to Set 2nd Bit of FIH_PassVal_Config'];
FIHMSGINP3VLDBIT2_CNT_U08.DocUnits = 'Cnt';
FIHMSGINP3VLDBIT2_CNT_U08.EngDT = dt.u08;
FIHMSGINP3VLDBIT2_CNT_U08.EngVal = 4;
FIHMSGINP3VLDBIT2_CNT_U08.Define = 'Local';


FIHMSGINP4VLDBIT3_CNT_U08 = DataDict.Constant;
FIHMSGINP4VLDBIT3_CNT_U08.LongName = 'FIH Message Input 4 Valid Bit 3';
FIHMSGINP4VLDBIT3_CNT_U08.Description = [...
  'Used to Set 3rd Bit of FIH_PassVal_Config'];
FIHMSGINP4VLDBIT3_CNT_U08.DocUnits = 'Cnt';
FIHMSGINP4VLDBIT3_CNT_U08.EngDT = dt.u08;
FIHMSGINP4VLDBIT3_CNT_U08.EngVal = 8;
FIHMSGINP4VLDBIT3_CNT_U08.Define = 'Local';


FIHPASSVALCFGINVLDBIT_CNT_U08 = DataDict.Constant;
FIHPASSVALCFGINVLDBIT_CNT_U08.LongName = 'FIH Pass Value Configuration Invalid Bit for FIH_PassVal_Config';
FIHPASSVALCFGINVLDBIT_CNT_U08.Description = [...
  'Used to signify that the respective feature is invalid'];
FIHPASSVALCFGINVLDBIT_CNT_U08.DocUnits = 'Cnt';
FIHPASSVALCFGINVLDBIT_CNT_U08.EngDT = dt.u08;
FIHPASSVALCFGINVLDBIT_CNT_U08.EngVal = 0;
FIHPASSVALCFGINVLDBIT_CNT_U08.Define = 'Local';


FIHVALCFGBIT0_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT0_CNT_U32.LongName = 'FIH Value Configuration Bit 0';
FIHVALCFGBIT0_CNT_U32.Description = 'Used to Set 0th Bit';
FIHVALCFGBIT0_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT0_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT0_CNT_U32.EngVal = 1;
FIHVALCFGBIT0_CNT_U32.Define = 'Local';


FIHVALCFGBIT10_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT10_CNT_U32.LongName = 'FIH Value Configuration Bit 10';
FIHVALCFGBIT10_CNT_U32.Description = 'Used to Set 10th Bit';
FIHVALCFGBIT10_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT10_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT10_CNT_U32.EngVal = 1024;
FIHVALCFGBIT10_CNT_U32.Define = 'Local';


FIHVALCFGBIT11_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT11_CNT_U32.LongName = 'FIH Value Configuration Bit 11';
FIHVALCFGBIT11_CNT_U32.Description = 'Used to Set 11th Bit';
FIHVALCFGBIT11_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT11_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT11_CNT_U32.EngVal = 2048;
FIHVALCFGBIT11_CNT_U32.Define = 'Local';


FIHVALCFGBIT12_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT12_CNT_U32.LongName = 'FIH Value Configuration Bit 12';
FIHVALCFGBIT12_CNT_U32.Description = 'Used to Set 12th Bit';
FIHVALCFGBIT12_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT12_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT12_CNT_U32.EngVal = 4096;
FIHVALCFGBIT12_CNT_U32.Define = 'Local';


FIHVALCFGBIT13_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT13_CNT_U32.LongName = 'FIH Value Configuration Bit 13';
FIHVALCFGBIT13_CNT_U32.Description = 'Used to Set 13th Bit';
FIHVALCFGBIT13_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT13_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT13_CNT_U32.EngVal = 8192;
FIHVALCFGBIT13_CNT_U32.Define = 'Local';


FIHVALCFGBIT14_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT14_CNT_U32.LongName = 'FIH Value Configuration Bit 14';
FIHVALCFGBIT14_CNT_U32.Description = 'Used to Set 14th Bit';
FIHVALCFGBIT14_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT14_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT14_CNT_U32.EngVal = 16384;
FIHVALCFGBIT14_CNT_U32.Define = 'Local';


FIHVALCFGBIT15_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT15_CNT_U32.LongName = 'FIH Value Configuration Bit 15';
FIHVALCFGBIT15_CNT_U32.Description = 'Used to Set 15th Bit';
FIHVALCFGBIT15_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT15_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT15_CNT_U32.EngVal = 32768;
FIHVALCFGBIT15_CNT_U32.Define = 'Local';


FIHVALCFGBIT16_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT16_CNT_U32.LongName = 'FIH Value Configuration Bit 16';
FIHVALCFGBIT16_CNT_U32.Description = 'Used to Set 16th Bit';
FIHVALCFGBIT16_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT16_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT16_CNT_U32.EngVal = 65536;
FIHVALCFGBIT16_CNT_U32.Define = 'Local';


FIHVALCFGBIT17_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT17_CNT_U32.LongName = 'FIH Value Configuration Bit 17';
FIHVALCFGBIT17_CNT_U32.Description = 'Used to Set 17th Bit';
FIHVALCFGBIT17_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT17_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT17_CNT_U32.EngVal = 131072;
FIHVALCFGBIT17_CNT_U32.Define = 'Local';


FIHVALCFGBIT18_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT18_CNT_U32.LongName = 'FIH Value Configuration Bit 18';
FIHVALCFGBIT18_CNT_U32.Description = 'Used to Set 18th Bit';
FIHVALCFGBIT18_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT18_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT18_CNT_U32.EngVal = 262144;
FIHVALCFGBIT18_CNT_U32.Define = 'Local';


FIHVALCFGBIT19_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT19_CNT_U32.LongName = 'FIH Value Configuration Bit 19';
FIHVALCFGBIT19_CNT_U32.Description = 'Used to Set 19th Bit';
FIHVALCFGBIT19_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT19_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT19_CNT_U32.EngVal = 524288;
FIHVALCFGBIT19_CNT_U32.Define = 'Local';


FIHVALCFGBIT1_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT1_CNT_U32.LongName = 'FIH Value Configuration Bit 1';
FIHVALCFGBIT1_CNT_U32.Description = 'Used to Set 1st Bit';
FIHVALCFGBIT1_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT1_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT1_CNT_U32.EngVal = 2;
FIHVALCFGBIT1_CNT_U32.Define = 'Local';


FIHVALCFGBIT20_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT20_CNT_U32.LongName = 'FIH Value Configuration Bit 20';
FIHVALCFGBIT20_CNT_U32.Description = 'Used to Set 20th Bit';
FIHVALCFGBIT20_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT20_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT20_CNT_U32.EngVal = 1048576;
FIHVALCFGBIT20_CNT_U32.Define = 'Local';


FIHVALCFGBIT21_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT21_CNT_U32.LongName = 'FIH Value Configuration Bit 21';
FIHVALCFGBIT21_CNT_U32.Description = 'Used to Set 21st Bit';
FIHVALCFGBIT21_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT21_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT21_CNT_U32.EngVal = 2097152;
FIHVALCFGBIT21_CNT_U32.Define = 'Local';


FIHVALCFGBIT22_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT22_CNT_U32.LongName = 'FIH Value Configuration Bit 22';
FIHVALCFGBIT22_CNT_U32.Description = 'Used to Set 22nd Bit';
FIHVALCFGBIT22_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT22_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT22_CNT_U32.EngVal = 4194304;
FIHVALCFGBIT22_CNT_U32.Define = 'Local';


FIHVALCFGBIT23_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT23_CNT_U32.LongName = 'FIH Value Configuration Bit 23';
FIHVALCFGBIT23_CNT_U32.Description = 'Used to Set 23rd Bit';
FIHVALCFGBIT23_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT23_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT23_CNT_U32.EngVal = 8388608;
FIHVALCFGBIT23_CNT_U32.Define = 'Local';


FIHVALCFGBIT24_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT24_CNT_U32.LongName = 'FIH Value Configuration Bit 24';
FIHVALCFGBIT24_CNT_U32.Description = 'Used to Set 24th Bit';
FIHVALCFGBIT24_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT24_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT24_CNT_U32.EngVal = 16777216;
FIHVALCFGBIT24_CNT_U32.Define = 'Local';


FIHVALCFGBIT25_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT25_CNT_U32.LongName = 'FIH Value Configuration Bit 25';
FIHVALCFGBIT25_CNT_U32.Description = 'Used to Set 25th Bit';
FIHVALCFGBIT25_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT25_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT25_CNT_U32.EngVal = 33554432;
FIHVALCFGBIT25_CNT_U32.Define = 'Local';


FIHVALCFGBIT26_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT26_CNT_U32.LongName = 'FIH Value Configuration Bit 26';
FIHVALCFGBIT26_CNT_U32.Description = 'Used to Set 26th Bit';
FIHVALCFGBIT26_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT26_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT26_CNT_U32.EngVal = 67108864;
FIHVALCFGBIT26_CNT_U32.Define = 'Local';


FIHVALCFGBIT27_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT27_CNT_U32.LongName = 'FIH Value Configuration Bit 27';
FIHVALCFGBIT27_CNT_U32.Description = 'Used to Set 27th Bit';
FIHVALCFGBIT27_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT27_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT27_CNT_U32.EngVal = 134217728;
FIHVALCFGBIT27_CNT_U32.Define = 'Local';


FIHVALCFGBIT28_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT28_CNT_U32.LongName = 'FIH Value Configuration Bit 28';
FIHVALCFGBIT28_CNT_U32.Description = 'Used to Set 28th Bit';
FIHVALCFGBIT28_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT28_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT28_CNT_U32.EngVal = 268435456;
FIHVALCFGBIT28_CNT_U32.Define = 'Local';


FIHVALCFGBIT29_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT29_CNT_U32.LongName = 'FIH Value Configuration Bit 29';
FIHVALCFGBIT29_CNT_U32.Description = 'Used to Set 29th Bit';
FIHVALCFGBIT29_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT29_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT29_CNT_U32.EngVal = 536870912;
FIHVALCFGBIT29_CNT_U32.Define = 'Local';


FIHVALCFGBIT2_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT2_CNT_U32.LongName = 'FIH Value Configuration Bit 2';
FIHVALCFGBIT2_CNT_U32.Description = 'Used to Set 2nd Bit';
FIHVALCFGBIT2_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT2_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT2_CNT_U32.EngVal = 4;
FIHVALCFGBIT2_CNT_U32.Define = 'Local';


FIHVALCFGBIT30_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT30_CNT_U32.LongName = 'FIH Value Configuration Bit 30';
FIHVALCFGBIT30_CNT_U32.Description = 'Used to Set 30th Bit';
FIHVALCFGBIT30_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT30_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT30_CNT_U32.EngVal = 1073741824;
FIHVALCFGBIT30_CNT_U32.Define = 'Local';


FIHVALCFGBIT31_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT31_CNT_U32.LongName = 'FIH Value Configuration Bit 31';
FIHVALCFGBIT31_CNT_U32.Description = 'Used to Set 31st Bit';
FIHVALCFGBIT31_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT31_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT31_CNT_U32.EngVal = 2147483648;
FIHVALCFGBIT31_CNT_U32.Define = 'Local';


FIHVALCFGBIT3_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT3_CNT_U32.LongName = 'FIH Value Configuration Bit 3';
FIHVALCFGBIT3_CNT_U32.Description = 'Used to Set 3rd Bit';
FIHVALCFGBIT3_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT3_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT3_CNT_U32.EngVal = 8;
FIHVALCFGBIT3_CNT_U32.Define = 'Local';


FIHVALCFGBIT4_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT4_CNT_U32.LongName = 'FIH Value Configuration Bit 4';
FIHVALCFGBIT4_CNT_U32.Description = 'Used to Set 4th Bit';
FIHVALCFGBIT4_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT4_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT4_CNT_U32.EngVal = 16;
FIHVALCFGBIT4_CNT_U32.Define = 'Local';


FIHVALCFGBIT5_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT5_CNT_U32.LongName = 'FIH Value Configuration Bit 5';
FIHVALCFGBIT5_CNT_U32.Description = 'Used to Set 5th Bit';
FIHVALCFGBIT5_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT5_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT5_CNT_U32.EngVal = 32;
FIHVALCFGBIT5_CNT_U32.Define = 'Local';


FIHVALCFGBIT6_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT6_CNT_U32.LongName = 'FIH Value Configuration Bit 6';
FIHVALCFGBIT6_CNT_U32.Description = 'Used to Set 6th Bit';
FIHVALCFGBIT6_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT6_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT6_CNT_U32.EngVal = 64;
FIHVALCFGBIT6_CNT_U32.Define = 'Local';


FIHVALCFGBIT7_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT7_CNT_U32.LongName = 'FIH Value Configuration Bit 7';
FIHVALCFGBIT7_CNT_U32.Description = 'Used to Set 7th Bit';
FIHVALCFGBIT7_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT7_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT7_CNT_U32.EngVal = 128;
FIHVALCFGBIT7_CNT_U32.Define = 'Local';


FIHVALCFGBIT8_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT8_CNT_U32.LongName = 'FIH Value Configuration Bit 8';
FIHVALCFGBIT8_CNT_U32.Description = 'Used to Set 8th Bit';
FIHVALCFGBIT8_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT8_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT8_CNT_U32.EngVal = 256;
FIHVALCFGBIT8_CNT_U32.Define = 'Local';


FIHVALCFGBIT9_CNT_U32 = DataDict.Constant;
FIHVALCFGBIT9_CNT_U32.LongName = 'FIH Value Configuration Bit 9';
FIHVALCFGBIT9_CNT_U32.Description = 'Used to Set 9th Bit';
FIHVALCFGBIT9_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGBIT9_CNT_U32.EngDT = dt.u32;
FIHVALCFGBIT9_CNT_U32.EngVal = 512;
FIHVALCFGBIT9_CNT_U32.Define = 'Local';


FIHVALCFGINVLDBIT_CNT_U32 = DataDict.Constant;
FIHVALCFGINVLDBIT_CNT_U32.LongName = 'FIH Value Configuration Invalid Bit';
FIHVALCFGINVLDBIT_CNT_U32.Description = [...
  'Used to signify that the respective feature is invalid'];
FIHVALCFGINVLDBIT_CNT_U32.DocUnits = 'Cnt';
FIHVALCFGINVLDBIT_CNT_U32.EngDT = dt.u32;
FIHVALCFGINVLDBIT_CNT_U32.EngVal = 0;
FIHVALCFGINVLDBIT_CNT_U32.Define = 'Local';





%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
