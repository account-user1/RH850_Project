%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 08-Sep-2017 13:18:41       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES200B = DataDict.FDD;
ES200B.Version = '2.1.X';
ES200B.LongName = 'Current Measurement';
ES200B.ShoName  = 'CurrMeas';
ES200B.DesignASIL = 'D';
ES200B.Description = [...
  'The Current Measurement function is responsible for measuring the moto' ...
  'r phase currents used as feedback by the Motor Control FDD. Three moto' ...
  'r phase currents are measured using three low-side shunt resistors and' ...
  ' three integrated differential amplifier circuitry for each motor. The' ...
  'n measured currents are transformed into direct (D) and quadrature (Q)' ...
  ' axes currents using the combined Clarke/Park transform.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
CurrMeasInit1 = DataDict.Runnable;
CurrMeasInit1.Context = 'Rte';
CurrMeasInit1.TimeStep = 0;
CurrMeasInit1.Description = 'None';

CurrMeasPer1 = DataDict.Runnable;
CurrMeasPer1.Context = 'Rte';
CurrMeasPer1.TimeStep = 0.002;
CurrMeasPer1.Description = 'None';

CurrMeasPer2 = DataDict.Runnable;
CurrMeasPer2.Context = 'NonRte';
CurrMeasPer2.TimeStep = 'MotorControlx2';
CurrMeasPer2.Description = 'None';

CurrMeasPer3 = DataDict.Runnable;
CurrMeasPer3.Context = 'Rte';
CurrMeasPer3.TimeStep = 0.002;
CurrMeasPer3.Description = 'None';

CurrMeasEolGainReq = DataDict.SrvRunnable;
CurrMeasEolGainReq.Context = 'Rte';
CurrMeasEolGainReq.Description = 'None';
CurrMeasEolGainReq.Return = DataDict.CSReturn;
CurrMeasEolGainReq.Return.Type = 'None';
CurrMeasEolGainReq.Return.Min = [];
CurrMeasEolGainReq.Return.Max = [];
CurrMeasEolGainReq.Return.TestTolerance = [];

CurrMeasEolGainStsReq = DataDict.SrvRunnable;
CurrMeasEolGainStsReq.Context = 'Rte';
CurrMeasEolGainStsReq.Description = 'None';
CurrMeasEolGainStsReq.Return = DataDict.CSReturn;
CurrMeasEolGainStsReq.Return.Type = 'None';
CurrMeasEolGainStsReq.Return.Min = [];
CurrMeasEolGainStsReq.Return.Max = [];
CurrMeasEolGainStsReq.Return.TestTolerance = [];
CurrMeasEolGainStsReq.Arguments(1) = DataDict.CSArguments;
CurrMeasEolGainStsReq.Arguments(1).Name = 'CurrMeasEolGainSt';
CurrMeasEolGainStsReq.Arguments(1).EngDT = dt.u08;
CurrMeasEolGainStsReq.Arguments(1).EngMin = 0;
CurrMeasEolGainStsReq.Arguments(1).EngMax = 64;
CurrMeasEolGainStsReq.Arguments(1).TestTolerance = 0;
CurrMeasEolGainStsReq.Arguments(1).Units = 'Cnt';
CurrMeasEolGainStsReq.Arguments(1).Direction = 'Out';
CurrMeasEolGainStsReq.Arguments(1).InitRowCol = [1  1];
CurrMeasEolGainStsReq.Arguments(1).Description = 'None';

CurrMeasEolOffsReq = DataDict.SrvRunnable;
CurrMeasEolOffsReq.Context = 'Rte';
CurrMeasEolOffsReq.Description = 'None';
CurrMeasEolOffsReq.Return = DataDict.CSReturn;
CurrMeasEolOffsReq.Return.Type = 'None';
CurrMeasEolOffsReq.Return.Min = [];
CurrMeasEolOffsReq.Return.Max = [];
CurrMeasEolOffsReq.Return.TestTolerance = [];

CurrMeasEolOffsStsReq = DataDict.SrvRunnable;
CurrMeasEolOffsStsReq.Context = 'Rte';
CurrMeasEolOffsStsReq.Description = 'None';
CurrMeasEolOffsStsReq.Return = DataDict.CSReturn;
CurrMeasEolOffsStsReq.Return.Type = 'None';
CurrMeasEolOffsStsReq.Return.Min = [];
CurrMeasEolOffsStsReq.Return.Max = [];
CurrMeasEolOffsStsReq.Return.TestTolerance = [];
CurrMeasEolOffsStsReq.Arguments(1) = DataDict.CSArguments;
CurrMeasEolOffsStsReq.Arguments(1).Name = 'CurrMeasEolOffsSt';
CurrMeasEolOffsStsReq.Arguments(1).EngDT = dt.u08;
CurrMeasEolOffsStsReq.Arguments(1).EngMin = 0;
CurrMeasEolOffsStsReq.Arguments(1).EngMax = 64;
CurrMeasEolOffsStsReq.Arguments(1).TestTolerance = 0;
CurrMeasEolOffsStsReq.Arguments(1).Units = 'Cnt';
CurrMeasEolOffsStsReq.Arguments(1).Direction = 'Out';
CurrMeasEolOffsStsReq.Arguments(1).InitRowCol = [1  1];
CurrMeasEolOffsStsReq.Arguments(1).Description = 'None';

CurrMeasGainReadReqSngIvtr = DataDict.SrvRunnable;
CurrMeasGainReadReqSngIvtr.Context = 'Rte';
CurrMeasGainReadReqSngIvtr.Description = 'None';
CurrMeasGainReadReqSngIvtr.Return = DataDict.CSReturn;
CurrMeasGainReadReqSngIvtr.Return.Type = 'None';
CurrMeasGainReadReqSngIvtr.Return.Min = [];
CurrMeasGainReadReqSngIvtr.Return.Max = [];
CurrMeasGainReadReqSngIvtr.Return.TestTolerance = [];
CurrMeasGainReadReqSngIvtr.Arguments(1) = DataDict.CSArguments;
CurrMeasGainReadReqSngIvtr.Arguments(1).Name = 'CurrMeasMotCurrGainA';
CurrMeasGainReadReqSngIvtr.Arguments(1).EngDT = dt.float32;
CurrMeasGainReadReqSngIvtr.Arguments(1).EngMin = 0;
CurrMeasGainReadReqSngIvtr.Arguments(1).EngMax = 100;
CurrMeasGainReadReqSngIvtr.Arguments(1).TestTolerance = 1;
CurrMeasGainReadReqSngIvtr.Arguments(1).Units = 'AmprPerVolt';
CurrMeasGainReadReqSngIvtr.Arguments(1).Direction = 'Out';
CurrMeasGainReadReqSngIvtr.Arguments(1).InitRowCol = [1  1];
CurrMeasGainReadReqSngIvtr.Arguments(1).Description = 'None';
CurrMeasGainReadReqSngIvtr.Arguments(2) = DataDict.CSArguments;
CurrMeasGainReadReqSngIvtr.Arguments(2).Name = 'CurrMeasMotCurrGainB';
CurrMeasGainReadReqSngIvtr.Arguments(2).EngDT = dt.float32;
CurrMeasGainReadReqSngIvtr.Arguments(2).EngMin = 0;
CurrMeasGainReadReqSngIvtr.Arguments(2).EngMax = 100;
CurrMeasGainReadReqSngIvtr.Arguments(2).TestTolerance = 1;
CurrMeasGainReadReqSngIvtr.Arguments(2).Units = 'AmprPerVolt';
CurrMeasGainReadReqSngIvtr.Arguments(2).Direction = 'Out';
CurrMeasGainReadReqSngIvtr.Arguments(2).InitRowCol = [1  1];
CurrMeasGainReadReqSngIvtr.Arguments(2).Description = 'None';
CurrMeasGainReadReqSngIvtr.Arguments(3) = DataDict.CSArguments;
CurrMeasGainReadReqSngIvtr.Arguments(3).Name = 'CurrMeasMotCurrGainC';
CurrMeasGainReadReqSngIvtr.Arguments(3).EngDT = dt.float32;
CurrMeasGainReadReqSngIvtr.Arguments(3).EngMin = 0;
CurrMeasGainReadReqSngIvtr.Arguments(3).EngMax = 100;
CurrMeasGainReadReqSngIvtr.Arguments(3).TestTolerance = 1;
CurrMeasGainReadReqSngIvtr.Arguments(3).Units = 'AmprPerVolt';
CurrMeasGainReadReqSngIvtr.Arguments(3).Direction = 'Out';
CurrMeasGainReadReqSngIvtr.Arguments(3).InitRowCol = [1  1];
CurrMeasGainReadReqSngIvtr.Arguments(3).Description = 'None';

CurrMeasGainWrReqSngIvtr = DataDict.SrvRunnable;
CurrMeasGainWrReqSngIvtr.Context = 'Rte';
CurrMeasGainWrReqSngIvtr.Description = 'None';
CurrMeasGainWrReqSngIvtr.Return = DataDict.CSReturn;
CurrMeasGainWrReqSngIvtr.Return.Type = 'None';
CurrMeasGainWrReqSngIvtr.Return.Min = [];
CurrMeasGainWrReqSngIvtr.Return.Max = [];
CurrMeasGainWrReqSngIvtr.Return.TestTolerance = [];
CurrMeasGainWrReqSngIvtr.Arguments(1) = DataDict.CSArguments;
CurrMeasGainWrReqSngIvtr.Arguments(1).Name = 'CurrMeasMotCurrGainA';
CurrMeasGainWrReqSngIvtr.Arguments(1).EngDT = dt.float32;
CurrMeasGainWrReqSngIvtr.Arguments(1).EngMin = 0;
CurrMeasGainWrReqSngIvtr.Arguments(1).EngMax = 120;
CurrMeasGainWrReqSngIvtr.Arguments(1).Units = 'AmprPerVolt';
CurrMeasGainWrReqSngIvtr.Arguments(1).Direction = 'In';
CurrMeasGainWrReqSngIvtr.Arguments(1).InitRowCol = [1  1];
CurrMeasGainWrReqSngIvtr.Arguments(1).Description = 'None';
CurrMeasGainWrReqSngIvtr.Arguments(2) = DataDict.CSArguments;
CurrMeasGainWrReqSngIvtr.Arguments(2).Name = 'CurrMeasMotCurrGainB';
CurrMeasGainWrReqSngIvtr.Arguments(2).EngDT = dt.float32;
CurrMeasGainWrReqSngIvtr.Arguments(2).EngMin = 0;
CurrMeasGainWrReqSngIvtr.Arguments(2).EngMax = 120;
CurrMeasGainWrReqSngIvtr.Arguments(2).Units = 'AmprPerVolt';
CurrMeasGainWrReqSngIvtr.Arguments(2).Direction = 'In';
CurrMeasGainWrReqSngIvtr.Arguments(2).InitRowCol = [1  1];
CurrMeasGainWrReqSngIvtr.Arguments(2).Description = 'None';
CurrMeasGainWrReqSngIvtr.Arguments(3) = DataDict.CSArguments;
CurrMeasGainWrReqSngIvtr.Arguments(3).Name = 'CurrMeasMotCurrGainC';
CurrMeasGainWrReqSngIvtr.Arguments(3).EngDT = dt.float32;
CurrMeasGainWrReqSngIvtr.Arguments(3).EngMin = 0;
CurrMeasGainWrReqSngIvtr.Arguments(3).EngMax = 120;
CurrMeasGainWrReqSngIvtr.Arguments(3).Units = 'AmprPerVolt';
CurrMeasGainWrReqSngIvtr.Arguments(3).Direction = 'In';
CurrMeasGainWrReqSngIvtr.Arguments(3).InitRowCol = [1  1];
CurrMeasGainWrReqSngIvtr.Arguments(3).Description = 'None';
CurrMeasGainWrReqSngIvtr.Arguments(4) = DataDict.CSArguments;
CurrMeasGainWrReqSngIvtr.Arguments(4).Name = 'CurrMeasGainWrReqSts';
CurrMeasGainWrReqSngIvtr.Arguments(4).EngDT = dt.u08;
CurrMeasGainWrReqSngIvtr.Arguments(4).EngMin = 0;
CurrMeasGainWrReqSngIvtr.Arguments(4).EngMax = 1;
CurrMeasGainWrReqSngIvtr.Arguments(4).TestTolerance = 0;
CurrMeasGainWrReqSngIvtr.Arguments(4).Units = 'Cnt';
CurrMeasGainWrReqSngIvtr.Arguments(4).Direction = 'Out';
CurrMeasGainWrReqSngIvtr.Arguments(4).InitRowCol = [1  1];
CurrMeasGainWrReqSngIvtr.Arguments(4).Description = 'None';

CurrMeasOffsReadReqSngIvtr = DataDict.SrvRunnable;
CurrMeasOffsReadReqSngIvtr.Context = 'Rte';
CurrMeasOffsReadReqSngIvtr.Description = 'None';
CurrMeasOffsReadReqSngIvtr.Return = DataDict.CSReturn;
CurrMeasOffsReadReqSngIvtr.Return.Type = 'None';
CurrMeasOffsReadReqSngIvtr.Return.Min = [];
CurrMeasOffsReadReqSngIvtr.Return.Max = [];
CurrMeasOffsReadReqSngIvtr.Return.TestTolerance = [];
CurrMeasOffsReadReqSngIvtr.Arguments(1) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(1).Name = 'CurrMeasEolOffsHiBrdgVltg';
CurrMeasOffsReadReqSngIvtr.Arguments(1).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(1).EngMin = 0;
CurrMeasOffsReadReqSngIvtr.Arguments(1).EngMax = 1892865;
CurrMeasOffsReadReqSngIvtr.Arguments(1).TestTolerance = 1000;
CurrMeasOffsReadReqSngIvtr.Arguments(1).Units = 'VoltNanoSec';
CurrMeasOffsReadReqSngIvtr.Arguments(1).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(1).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(1).Description = 'None';
CurrMeasOffsReadReqSngIvtr.Arguments(2) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(2).Name = 'CurrMeasMotCurrOffsDifA';
CurrMeasOffsReadReqSngIvtr.Arguments(2).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(2).EngMin = -1;
CurrMeasOffsReadReqSngIvtr.Arguments(2).EngMax = 1;
CurrMeasOffsReadReqSngIvtr.Arguments(2).TestTolerance = 0.1;
CurrMeasOffsReadReqSngIvtr.Arguments(2).Units = 'Volt';
CurrMeasOffsReadReqSngIvtr.Arguments(2).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(2).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(2).Description = 'None';
CurrMeasOffsReadReqSngIvtr.Arguments(3) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(3).Name = 'CurrMeasMotCurrOffsDifB';
CurrMeasOffsReadReqSngIvtr.Arguments(3).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(3).EngMin = -1;
CurrMeasOffsReadReqSngIvtr.Arguments(3).EngMax = 1;
CurrMeasOffsReadReqSngIvtr.Arguments(3).TestTolerance = 0.1;
CurrMeasOffsReadReqSngIvtr.Arguments(3).Units = 'Volt';
CurrMeasOffsReadReqSngIvtr.Arguments(3).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(3).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(3).Description = 'None';
CurrMeasOffsReadReqSngIvtr.Arguments(4) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(4).Name = 'CurrMeasMotCurrOffsDifC';
CurrMeasOffsReadReqSngIvtr.Arguments(4).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(4).EngMin = -1;
CurrMeasOffsReadReqSngIvtr.Arguments(4).EngMax = 1;
CurrMeasOffsReadReqSngIvtr.Arguments(4).TestTolerance = 0.1;
CurrMeasOffsReadReqSngIvtr.Arguments(4).Units = 'Volt';
CurrMeasOffsReadReqSngIvtr.Arguments(4).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(4).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(4).Description = 'None';
CurrMeasOffsReadReqSngIvtr.Arguments(5) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(5).Name = 'CurrMeasMotCurrOffsLoAvrgA';
CurrMeasOffsReadReqSngIvtr.Arguments(5).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(5).EngMin = 2;
CurrMeasOffsReadReqSngIvtr.Arguments(5).EngMax = 2.8;
CurrMeasOffsReadReqSngIvtr.Arguments(5).TestTolerance = 0.1;
CurrMeasOffsReadReqSngIvtr.Arguments(5).Units = 'Volt';
CurrMeasOffsReadReqSngIvtr.Arguments(5).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(5).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(5).Description = 'None';
CurrMeasOffsReadReqSngIvtr.Arguments(6) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(6).Name = 'CurrMeasMotCurrOffsLoAvrgB';
CurrMeasOffsReadReqSngIvtr.Arguments(6).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(6).EngMin = 2;
CurrMeasOffsReadReqSngIvtr.Arguments(6).EngMax = 2.8;
CurrMeasOffsReadReqSngIvtr.Arguments(6).TestTolerance = 0.1;
CurrMeasOffsReadReqSngIvtr.Arguments(6).Units = 'Volt';
CurrMeasOffsReadReqSngIvtr.Arguments(6).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(6).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(6).Description = 'None';
CurrMeasOffsReadReqSngIvtr.Arguments(7) = DataDict.CSArguments;
CurrMeasOffsReadReqSngIvtr.Arguments(7).Name = 'CurrMeasMotCurrOffsLoAvrgC';
CurrMeasOffsReadReqSngIvtr.Arguments(7).EngDT = dt.float32;
CurrMeasOffsReadReqSngIvtr.Arguments(7).EngMin = 2;
CurrMeasOffsReadReqSngIvtr.Arguments(7).EngMax = 2.8;
CurrMeasOffsReadReqSngIvtr.Arguments(7).TestTolerance = 0.1;
CurrMeasOffsReadReqSngIvtr.Arguments(7).Units = 'Volt';
CurrMeasOffsReadReqSngIvtr.Arguments(7).Direction = 'Out';
CurrMeasOffsReadReqSngIvtr.Arguments(7).InitRowCol = [1  1];
CurrMeasOffsReadReqSngIvtr.Arguments(7).Description = 'None';

CurrMeasOffsWrReqSngIvtr = DataDict.SrvRunnable;
CurrMeasOffsWrReqSngIvtr.Context = 'Rte';
CurrMeasOffsWrReqSngIvtr.Description = 'None';
CurrMeasOffsWrReqSngIvtr.Return = DataDict.CSReturn;
CurrMeasOffsWrReqSngIvtr.Return.Type = 'None';
CurrMeasOffsWrReqSngIvtr.Return.Min = [];
CurrMeasOffsWrReqSngIvtr.Return.Max = [];
CurrMeasOffsWrReqSngIvtr.Return.TestTolerance = [];
CurrMeasOffsWrReqSngIvtr.Arguments(1) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(1).Name = 'CurrMeasEolOffsHiBrdgVltg';
CurrMeasOffsWrReqSngIvtr.Arguments(1).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(1).EngMin = 0;
CurrMeasOffsWrReqSngIvtr.Arguments(1).EngMax = 1892865;
CurrMeasOffsWrReqSngIvtr.Arguments(1).Units = 'VoltNanoSec';
CurrMeasOffsWrReqSngIvtr.Arguments(1).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(1).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(1).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(2) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(2).Name = 'CurrMeasMotCurrOffsDifA';
CurrMeasOffsWrReqSngIvtr.Arguments(2).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(2).EngMin = -1;
CurrMeasOffsWrReqSngIvtr.Arguments(2).EngMax = 1;
CurrMeasOffsWrReqSngIvtr.Arguments(2).Units = 'Volt';
CurrMeasOffsWrReqSngIvtr.Arguments(2).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(2).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(2).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(3) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(3).Name = 'CurrMeasMotCurrOffsDifB';
CurrMeasOffsWrReqSngIvtr.Arguments(3).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(3).EngMin = -1;
CurrMeasOffsWrReqSngIvtr.Arguments(3).EngMax = 1;
CurrMeasOffsWrReqSngIvtr.Arguments(3).Units = 'Volt';
CurrMeasOffsWrReqSngIvtr.Arguments(3).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(3).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(3).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(4) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(4).Name = 'CurrMeasMotCurrOffsDifC';
CurrMeasOffsWrReqSngIvtr.Arguments(4).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(4).EngMin = -1;
CurrMeasOffsWrReqSngIvtr.Arguments(4).EngMax = 1;
CurrMeasOffsWrReqSngIvtr.Arguments(4).Units = 'Volt';
CurrMeasOffsWrReqSngIvtr.Arguments(4).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(4).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(4).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(5) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(5).Name = 'CurrMeasMotCurrOffsLoAvrgA';
CurrMeasOffsWrReqSngIvtr.Arguments(5).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(5).EngMin = 0;
CurrMeasOffsWrReqSngIvtr.Arguments(5).EngMax = 2.8;
CurrMeasOffsWrReqSngIvtr.Arguments(5).Units = 'Volt';
CurrMeasOffsWrReqSngIvtr.Arguments(5).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(5).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(5).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(6) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(6).Name = 'CurrMeasMotCurrOffsLoAvrgB';
CurrMeasOffsWrReqSngIvtr.Arguments(6).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(6).EngMin = 0;
CurrMeasOffsWrReqSngIvtr.Arguments(6).EngMax = 2.8;
CurrMeasOffsWrReqSngIvtr.Arguments(6).Units = 'Volt';
CurrMeasOffsWrReqSngIvtr.Arguments(6).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(6).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(6).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(7) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(7).Name = 'CurrMeasMotCurrOffsLoAvrgC';
CurrMeasOffsWrReqSngIvtr.Arguments(7).EngDT = dt.float32;
CurrMeasOffsWrReqSngIvtr.Arguments(7).EngMin = 0;
CurrMeasOffsWrReqSngIvtr.Arguments(7).EngMax = 2.8;
CurrMeasOffsWrReqSngIvtr.Arguments(7).Units = 'Volt';
CurrMeasOffsWrReqSngIvtr.Arguments(7).Direction = 'In';
CurrMeasOffsWrReqSngIvtr.Arguments(7).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(7).Description = 'None';
CurrMeasOffsWrReqSngIvtr.Arguments(8) = DataDict.CSArguments;
CurrMeasOffsWrReqSngIvtr.Arguments(8).Name = 'CurrMeasOffsWrReqSts';
CurrMeasOffsWrReqSngIvtr.Arguments(8).EngDT = dt.u08;
CurrMeasOffsWrReqSngIvtr.Arguments(8).EngMin = 0;
CurrMeasOffsWrReqSngIvtr.Arguments(8).EngMax = 1;
CurrMeasOffsWrReqSngIvtr.Arguments(8).TestTolerance = 0;
CurrMeasOffsWrReqSngIvtr.Arguments(8).Units = 'Cnt';
CurrMeasOffsWrReqSngIvtr.Arguments(8).Direction = 'Out';
CurrMeasOffsWrReqSngIvtr.Arguments(8).InitRowCol = [1  1];
CurrMeasOffsWrReqSngIvtr.Arguments(8).Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CurrMeasEolGainCalSetABC_GetErrorStatus = DataDict.Client;
CurrMeasEolGainCalSetABC_GetErrorStatus.CallLocation = {'CurrMeasInit1'};
CurrMeasEolGainCalSetABC_GetErrorStatus.Description = [...
  'Client to get NVM error status for current measurement end of line dat' ...
  'a'];
CurrMeasEolGainCalSetABC_GetErrorStatus.Return = DataDict.CSReturn;
CurrMeasEolGainCalSetABC_GetErrorStatus.Return.Type = 'Standard';
CurrMeasEolGainCalSetABC_GetErrorStatus.Return.Min = 0;
CurrMeasEolGainCalSetABC_GetErrorStatus.Return.Max = 1;
CurrMeasEolGainCalSetABC_GetErrorStatus.Return.TestTolerance = 0;
CurrMeasEolGainCalSetABC_GetErrorStatus.Return.Description = 'Return perameters ';
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).EngDT = dt.u08;
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).EngMin = 0;
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).EngMax = 255;
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).TestTolerance = 0;
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).Units = 'Cnt';
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).Direction = 'Out';
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
CurrMeasEolGainCalSetABC_GetErrorStatus.Arguments(1).Description = [...
  'Polarity for requested error status result'];


CurrMeasEolGainCalSetABC_SetRamBlockStatus = DataDict.Client;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.CallLocation = {'CurrMeasPer1','CurrMeasGainWrReqSngIvtr'};
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Description = 'None';
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Return = DataDict.CSReturn;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Return.Type = 'Standard';
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Return.Min = 0;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Return.Max = 1;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Return.TestTolerance = 0;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Return.Description = 'None';
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).EngMin = 0;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).EngMax = 1;
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).Direction = 'In';
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
CurrMeasEolGainCalSetABC_SetRamBlockStatus.Arguments(1).Description = 'None';


CurrMeasEolOffsCalSetABC_GetErrorStatus = DataDict.Client;
CurrMeasEolOffsCalSetABC_GetErrorStatus.CallLocation = {'CurrMeasInit1'};
CurrMeasEolOffsCalSetABC_GetErrorStatus.Description = [...
  'Client to get NVM error status for current measurement end of line dat' ...
  'a'];
CurrMeasEolOffsCalSetABC_GetErrorStatus.Return = DataDict.CSReturn;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Return.Type = 'Standard';
CurrMeasEolOffsCalSetABC_GetErrorStatus.Return.Min = 0;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Return.Max = 1;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Return.TestTolerance = 0;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Return.Description = 'Return perameters ';
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).EngDT = dt.u08;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).EngMin = 0;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).EngMax = 255;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).TestTolerance = 0;
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).Units = 'Cnt';
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).Direction = 'Out';
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
CurrMeasEolOffsCalSetABC_GetErrorStatus.Arguments(1).Description = [...
  'Polarity for requested error status result'];


CurrMeasEolOffsCalSetABC_SetRamBlockStatus = DataDict.Client;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.CallLocation = {'CurrMeasPer1','CurrMeasOffsWrReqSngIvtr'};
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Description = 'None';
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Return = DataDict.CSReturn;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Return.Type = 'Standard';
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Return.Min = 0;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Return.Max = 1;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Return.TestTolerance = 0;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Return.Description = 'None';
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).EngMin = 0;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).EngMax = 1;
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).Direction = 'In';
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
CurrMeasEolOffsCalSetABC_SetRamBlockStatus.Arguments(1).Description = 'None';


FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'CurrMeasPer2'};
FltInj_f32.Description = [...
  'FltInj_f32 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.(The SigPah_Arg signal of the FltInj_f32 server runnable has a specia' ...
  'l unit test consideration (MIL, SIL, PIL) that the range called out in' ...
  ' the data dictionary should only be used for defining "input" vectors,' ...
  ' and the range check that is normally done on the "output" is skipped ' ...
  'in this special instance.)'];
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).TestTolerance = 63;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_f32 runnable is trigger' ...
  'ed.'];
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = [...
  'It determines whether FltInj_f32 runnable is triggered.'];


FltInj_u08 = DataDict.Client;
FltInj_u08.CallLocation = {'CurrMeasPer2'};
FltInj_u08.Description = [...
  'FltInj_u08 runnable determines whether to overwrite the SigPah signal ' ...
  'with a new value calculated from path gain and path offset calculation' ...
  '.'];
FltInj_u08.Return = DataDict.CSReturn;
FltInj_u08.Return.Type = 'None';
FltInj_u08.Return.Min = [];
FltInj_u08.Return.Max = [];
FltInj_u08.Return.TestTolerance = [];
FltInj_u08.Arguments(1) = DataDict.CSArguments;
FltInj_u08.Arguments(1).Name = 'SigPah';
FltInj_u08.Arguments(1).EngDT = dt.u08;
FltInj_u08.Arguments(1).EngMin = 0;
FltInj_u08.Arguments(1).EngMax = 255;
FltInj_u08.Arguments(1).TestTolerance = 0;
FltInj_u08.Arguments(1).Units = 'Uls';
FltInj_u08.Arguments(1).Direction = 'InOut';
FltInj_u08.Arguments(1).InitRowCol = [1  1];
FltInj_u08.Arguments(1).Description = [...
  'It is the actual value to be written if FltInj_u08 runnable is trigger' ...
  'ed.'];
FltInj_u08.Arguments(2) = DataDict.CSArguments;
FltInj_u08.Arguments(2).Name = 'LocnKey';
FltInj_u08.Arguments(2).EngDT = dt.u16;
FltInj_u08.Arguments(2).EngMin = 0;
FltInj_u08.Arguments(2).EngMax = 65535;
FltInj_u08.Arguments(2).Units = 'Cnt';
FltInj_u08.Arguments(2).Direction = 'In';
FltInj_u08.Arguments(2).InitRowCol = [1  1];
FltInj_u08.Arguments(2).Description = [...
  'It determines whether FltInj_u08 runnable is triggered.'];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'CurrMeasPer2'};
GetNtcQlfrSts.Description = 'None';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'None';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'None';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'CurrMeasPer1','CurrMeasPer3'};
SetNtcSts.Description = 'None';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'None';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'None';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'None';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'None';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'None';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'CurrMeasPer1'};
BrdgVltg.ReadType = 'Rte';


DiagcStsIvtr1Inactv = DataDict.IpSignal;
DiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
DiagcStsIvtr1Inactv.Description = 'None';
DiagcStsIvtr1Inactv.DocUnits = 'Cnt';
DiagcStsIvtr1Inactv.EngDT = dt.lgc;
DiagcStsIvtr1Inactv.EngInit = 0;
DiagcStsIvtr1Inactv.EngMin = 0;
DiagcStsIvtr1Inactv.EngMax = 1;
DiagcStsIvtr1Inactv.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
DiagcStsIvtr1Inactv.ReadType = 'Rte';


MotCtrlBrdgVltg = DataDict.IpSignal;
MotCtrlBrdgVltg.LongName = 'Bridge Voltage';
MotCtrlBrdgVltg.Description = 'None';
MotCtrlBrdgVltg.DocUnits = 'Volt';
MotCtrlBrdgVltg.EngDT = dt.float32;
MotCtrlBrdgVltg.EngInit = 6;
MotCtrlBrdgVltg.EngMin = 6;
MotCtrlBrdgVltg.EngMax = 26.5;
MotCtrlBrdgVltg.ReadIn = {'CurrMeasPer2'};
MotCtrlBrdgVltg.ReadType = 'NonRte';


MotCtrlCurrMeasWrmIninTestCmpl = DataDict.IpSignal;
MotCtrlCurrMeasWrmIninTestCmpl.LongName = 'Motor Control Current/I Measure Warm Initialization Test Complete';
MotCtrlCurrMeasWrmIninTestCmpl.Description = 'None';
MotCtrlCurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
MotCtrlCurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
MotCtrlCurrMeasWrmIninTestCmpl.EngInit = 0;
MotCtrlCurrMeasWrmIninTestCmpl.EngMin = 0;
MotCtrlCurrMeasWrmIninTestCmpl.EngMax = 1;
MotCtrlCurrMeasWrmIninTestCmpl.ReadIn = {'CurrMeasPer2'};
MotCtrlCurrMeasWrmIninTestCmpl.ReadType = 'NonRte';


MotCtrlDiagcStsIvtr1Inactv = DataDict.IpSignal;
MotCtrlDiagcStsIvtr1Inactv.LongName = 'Diagnostic Status Inverter 1 Inactive';
MotCtrlDiagcStsIvtr1Inactv.Description = 'None';
MotCtrlDiagcStsIvtr1Inactv.DocUnits = 'Cnt';
MotCtrlDiagcStsIvtr1Inactv.EngDT = dt.lgc;
MotCtrlDiagcStsIvtr1Inactv.EngInit = 0;
MotCtrlDiagcStsIvtr1Inactv.EngMin = 0;
MotCtrlDiagcStsIvtr1Inactv.EngMax = 1;
MotCtrlDiagcStsIvtr1Inactv.ReadIn = {'CurrMeasPer2'};
MotCtrlDiagcStsIvtr1Inactv.ReadType = 'NonRte';


MotCtrlEcuTFild = DataDict.IpSignal;
MotCtrlEcuTFild.LongName = 'Controller Temperature Filtered';
MotCtrlEcuTFild.Description = 'None';
MotCtrlEcuTFild.DocUnits = 'DegCgrd';
MotCtrlEcuTFild.EngDT = dt.float32;
MotCtrlEcuTFild.EngInit = 25;
MotCtrlEcuTFild.EngMin = -50;
MotCtrlEcuTFild.EngMax = 150;
MotCtrlEcuTFild.ReadIn = {'CurrMeasPer2'};
MotCtrlEcuTFild.ReadType = 'NonRte';


MotCtrlMotAgElec = DataDict.IpSignal;
MotCtrlMotAgElec.LongName = 'Motor Angle Electrical Corrected';
MotCtrlMotAgElec.Description = 'None';
MotCtrlMotAgElec.DocUnits = 'MotRevElec';
MotCtrlMotAgElec.EngDT = dt.u0p16;
MotCtrlMotAgElec.EngInit = 0;
MotCtrlMotAgElec.EngMin = 0;
MotCtrlMotAgElec.EngMax = 0.9999847412;
MotCtrlMotAgElec.ReadIn = {'CurrMeasPer2'};
MotCtrlMotAgElec.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyA = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyA.LongName = 'Motor Current Adc Valley A';
MotCtrlMotCurrAdcVlyA.Description = 'None';
MotCtrlMotCurrAdcVlyA.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyA.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyA.EngInit = 0;
MotCtrlMotCurrAdcVlyA.EngMin = 0;
MotCtrlMotCurrAdcVlyA.EngMax = 5;
MotCtrlMotCurrAdcVlyA.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyA.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyAAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyAAdcFaild.LongName = 'Motor Current Adc Valley A Adc Failed';
MotCtrlMotCurrAdcVlyAAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyAAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyAAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyAAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyAAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyAAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyAAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyAAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyB = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyB.LongName = 'Motor Current Adc Valley B';
MotCtrlMotCurrAdcVlyB.Description = 'None';
MotCtrlMotCurrAdcVlyB.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyB.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyB.EngInit = 0;
MotCtrlMotCurrAdcVlyB.EngMin = 0;
MotCtrlMotCurrAdcVlyB.EngMax = 5;
MotCtrlMotCurrAdcVlyB.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyB.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyBAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyBAdcFaild.LongName = 'Motor Current Adc Valley B Adc Failed';
MotCtrlMotCurrAdcVlyBAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyBAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyBAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyBAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyBAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyBAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyBAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyBAdcFaild.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyC = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyC.LongName = 'Motor Current Adc Valley C';
MotCtrlMotCurrAdcVlyC.Description = 'None';
MotCtrlMotCurrAdcVlyC.DocUnits = 'Volt';
MotCtrlMotCurrAdcVlyC.EngDT = dt.float32;
MotCtrlMotCurrAdcVlyC.EngInit = 0;
MotCtrlMotCurrAdcVlyC.EngMin = 0;
MotCtrlMotCurrAdcVlyC.EngMax = 5;
MotCtrlMotCurrAdcVlyC.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyC.ReadType = 'NonRte';


MotCtrlMotCurrAdcVlyCAdcFaild = DataDict.IpSignal;
MotCtrlMotCurrAdcVlyCAdcFaild.LongName = 'Motor Current Adc Valley C Adc Failed';
MotCtrlMotCurrAdcVlyCAdcFaild.Description = 'None';
MotCtrlMotCurrAdcVlyCAdcFaild.DocUnits = 'Uls';
MotCtrlMotCurrAdcVlyCAdcFaild.EngDT = dt.lgc;
MotCtrlMotCurrAdcVlyCAdcFaild.EngInit = 0;
MotCtrlMotCurrAdcVlyCAdcFaild.EngMin = 0;
MotCtrlMotCurrAdcVlyCAdcFaild.EngMax = 1;
MotCtrlMotCurrAdcVlyCAdcFaild.ReadIn = {'CurrMeasPer2'};
MotCtrlMotCurrAdcVlyCAdcFaild.ReadType = 'NonRte';


MotCtrlMotElecMeclPolarity = DataDict.IpSignal;
MotCtrlMotElecMeclPolarity.LongName = 'Motor Electro-Mechanical Polarity';
MotCtrlMotElecMeclPolarity.Description = 'None';
MotCtrlMotElecMeclPolarity.DocUnits = 'Uls';
MotCtrlMotElecMeclPolarity.EngDT = dt.s08;
MotCtrlMotElecMeclPolarity.EngInit = 1;
MotCtrlMotElecMeclPolarity.EngMin = -1;
MotCtrlMotElecMeclPolarity.EngMax = 1;
MotCtrlMotElecMeclPolarity.ReadIn = {'CurrMeasPer2'};
MotCtrlMotElecMeclPolarity.ReadType = 'NonRte';


MotCtrlMotVelMrf = DataDict.IpSignal;
MotCtrlMotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotCtrlMotVelMrf.Description = 'None';
MotCtrlMotVelMrf.DocUnits = 'MotRadPerSec';
MotCtrlMotVelMrf.EngDT = dt.float32;
MotCtrlMotVelMrf.EngInit = 0;
MotCtrlMotVelMrf.EngMin = -1350;
MotCtrlMotVelMrf.EngMax = 1350;
MotCtrlMotVelMrf.ReadIn = {'CurrMeasPer2'};
MotCtrlMotVelMrf.ReadType = 'NonRte';


MotCtrlPhaOnTiA = DataDict.IpSignal;
MotCtrlPhaOnTiA.LongName = 'Phase a on Time';
MotCtrlPhaOnTiA.Description = 'None';
MotCtrlPhaOnTiA.DocUnits = 'NanoSec';
MotCtrlPhaOnTiA.EngDT = dt.u32;
MotCtrlPhaOnTiA.EngInit = 0;
MotCtrlPhaOnTiA.EngMin = 0;
MotCtrlPhaOnTiA.EngMax = 71429;
MotCtrlPhaOnTiA.ReadIn = {'CurrMeasPer2'};
MotCtrlPhaOnTiA.ReadType = 'NonRte';


MotCtrlPhaOnTiB = DataDict.IpSignal;
MotCtrlPhaOnTiB.LongName = 'Phase B on Time';
MotCtrlPhaOnTiB.Description = 'None';
MotCtrlPhaOnTiB.DocUnits = 'NanoSec';
MotCtrlPhaOnTiB.EngDT = dt.u32;
MotCtrlPhaOnTiB.EngInit = 0;
MotCtrlPhaOnTiB.EngMin = 0;
MotCtrlPhaOnTiB.EngMax = 71429;
MotCtrlPhaOnTiB.ReadIn = {'CurrMeasPer2'};
MotCtrlPhaOnTiB.ReadType = 'NonRte';


MotCtrlPhaOnTiC = DataDict.IpSignal;
MotCtrlPhaOnTiC.LongName = 'Phase C on Time';
MotCtrlPhaOnTiC.Description = 'None';
MotCtrlPhaOnTiC.DocUnits = 'NanoSec';
MotCtrlPhaOnTiC.EngDT = dt.u32;
MotCtrlPhaOnTiC.EngInit = 0;
MotCtrlPhaOnTiC.EngMin = 0;
MotCtrlPhaOnTiC.EngMax = 71429;
MotCtrlPhaOnTiC.ReadIn = {'CurrMeasPer2'};
MotCtrlPhaOnTiC.ReadType = 'NonRte';


MotCtrlPwmPerd = DataDict.IpSignal;
MotCtrlPwmPerd.LongName = 'PWM Period';
MotCtrlPwmPerd.Description = 'None';
MotCtrlPwmPerd.DocUnits = 'NanoSec';
MotCtrlPwmPerd.EngDT = dt.u32;
MotCtrlPwmPerd.EngInit = 62500;
MotCtrlPwmPerd.EngMin = 55555;
MotCtrlPwmPerd.EngMax = 71429;
MotCtrlPwmPerd.ReadIn = {'CurrMeasPer2'};
MotCtrlPwmPerd.ReadType = 'NonRte';


MotCtrlSysSt = DataDict.IpSignal;
MotCtrlSysSt.LongName = 'System State';
MotCtrlSysSt.Description = 'None';
MotCtrlSysSt.DocUnits = 'Cnt';
MotCtrlSysSt.EngDT = enum.SysSt1;
MotCtrlSysSt.EngInit = SysSt1.SYSST_WRMININ;
MotCtrlSysSt.EngMin = SysSt1.SYSST_DI;
MotCtrlSysSt.EngMax = SysSt1.SYSST_WRMININ;
MotCtrlSysSt.ReadIn = {'CurrMeasPer2'};
MotCtrlSysSt.ReadType = 'NonRte';


MotCurrAdcVlyA = DataDict.IpSignal;
MotCurrAdcVlyA.LongName = 'Motor Current Adc Valley A';
MotCurrAdcVlyA.Description = 'None';
MotCurrAdcVlyA.DocUnits = 'Volt';
MotCurrAdcVlyA.EngDT = dt.float32;
MotCurrAdcVlyA.EngInit = 0;
MotCurrAdcVlyA.EngMin = 0;
MotCurrAdcVlyA.EngMax = 5;
MotCurrAdcVlyA.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyA.ReadType = 'Rte';


MotCurrAdcVlyB = DataDict.IpSignal;
MotCurrAdcVlyB.LongName = 'Motor Current Adc Valley B';
MotCurrAdcVlyB.Description = 'None';
MotCurrAdcVlyB.DocUnits = 'Volt';
MotCurrAdcVlyB.EngDT = dt.float32;
MotCurrAdcVlyB.EngInit = 0;
MotCurrAdcVlyB.EngMin = 0;
MotCurrAdcVlyB.EngMax = 5;
MotCurrAdcVlyB.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyB.ReadType = 'Rte';


MotCurrAdcVlyC = DataDict.IpSignal;
MotCurrAdcVlyC.LongName = 'Motor Current Adc Valley C';
MotCurrAdcVlyC.Description = 'None';
MotCurrAdcVlyC.DocUnits = 'Volt';
MotCurrAdcVlyC.EngDT = dt.float32;
MotCurrAdcVlyC.EngInit = 0;
MotCurrAdcVlyC.EngMin = 0;
MotCurrAdcVlyC.EngMax = 5;
MotCurrAdcVlyC.ReadIn = {'CurrMeasPer1','CurrMeasPer3'};
MotCurrAdcVlyC.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity Motor Reference Frame';
MotVelMrf.Description = 'None';
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'CurrMeasPer1'};
MotVelMrf.ReadType = 'Rte';


Ntc5DErrCnt = DataDict.IpSignal;
Ntc5DErrCnt.LongName = 'NTC 5D Error Count';
Ntc5DErrCnt.Description = 'None';
Ntc5DErrCnt.DocUnits = 'Cnt';
Ntc5DErrCnt.EngDT = dt.u16;
Ntc5DErrCnt.EngInit = 0;
Ntc5DErrCnt.EngMin = 0;
Ntc5DErrCnt.EngMax = 65535;
Ntc5DErrCnt.ReadIn = {'CurrMeasPer3'};
Ntc5DErrCnt.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = 'None';
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 255;
StrtUpSt.ReadIn = {'CurrMeasPer3'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'None';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'CurrMeasPer3'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'None';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'CurrMeasPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Validity';
VehSpdVld.Description = 'None';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'CurrMeasPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
CurrMeasWrmIninTestCmpl = DataDict.OpSignal;
CurrMeasWrmIninTestCmpl.LongName = 'Current Measurement Warm Init Test Complete';
CurrMeasWrmIninTestCmpl.Description = 'Warm Init Test Complete Flag';
CurrMeasWrmIninTestCmpl.DocUnits = 'Cnt';
CurrMeasWrmIninTestCmpl.SwcShoName = 'CurrMeas';
CurrMeasWrmIninTestCmpl.EngDT = dt.lgc;
CurrMeasWrmIninTestCmpl.EngInit = 0;
CurrMeasWrmIninTestCmpl.EngMin = 0;
CurrMeasWrmIninTestCmpl.EngMax = 1;
CurrMeasWrmIninTestCmpl.TestTolerance = 0;
CurrMeasWrmIninTestCmpl.WrittenIn = {'CurrMeasPer3'};
CurrMeasWrmIninTestCmpl.WriteType = 'Rte';


MotCtrlCurrMeasMotAgCorrd = DataDict.OpSignal;
MotCtrlCurrMeasMotAgCorrd.LongName = 'Motor Current Motor Angle Corrected';
MotCtrlCurrMeasMotAgCorrd.Description = [...
  'Corrected motor position in radian ranging from -2pi to +2pi to conver' ...
  't from phase to phase signal to phase to neutral signal after compensa' ...
  'ting the motor position sensor delay.'];
MotCtrlCurrMeasMotAgCorrd.DocUnits = 'MotRad';
MotCtrlCurrMeasMotAgCorrd.SwcShoName = 'CurrMeas';
MotCtrlCurrMeasMotAgCorrd.EngDT = dt.float32;
MotCtrlCurrMeasMotAgCorrd.EngInit = 0;
MotCtrlCurrMeasMotAgCorrd.EngMin = -6.2832;
MotCtrlCurrMeasMotAgCorrd.EngMax = 6.2832;
MotCtrlCurrMeasMotAgCorrd.TestTolerance = 1e-07;
MotCtrlCurrMeasMotAgCorrd.WrittenIn = {'CurrMeasPer2'};
MotCtrlCurrMeasMotAgCorrd.WriteType = 'NonRte';


MotCtrlMotCurrCorrdA = DataDict.OpSignal;
MotCtrlMotCurrCorrdA.LongName = 'Current Measurement Motor Current Corrected A';
MotCtrlMotCurrCorrdA.Description = 'Corrected Motor Current A';
MotCtrlMotCurrCorrdA.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdA.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdA.EngDT = dt.float32;
MotCtrlMotCurrCorrdA.EngInit = 0;
MotCtrlMotCurrCorrdA.EngMin = -200;
MotCtrlMotCurrCorrdA.EngMax = 200;
MotCtrlMotCurrCorrdA.TestTolerance = 0.01;
MotCtrlMotCurrCorrdA.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdA.WriteType = 'NonRte';


MotCtrlMotCurrCorrdB = DataDict.OpSignal;
MotCtrlMotCurrCorrdB.LongName = 'Corrected Motor Current B';
MotCtrlMotCurrCorrdB.Description = 'Corrected Motor Current B';
MotCtrlMotCurrCorrdB.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdB.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdB.EngDT = dt.float32;
MotCtrlMotCurrCorrdB.EngInit = 0;
MotCtrlMotCurrCorrdB.EngMin = -200;
MotCtrlMotCurrCorrdB.EngMax = 200;
MotCtrlMotCurrCorrdB.TestTolerance = 0.01;
MotCtrlMotCurrCorrdB.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdB.WriteType = 'NonRte';


MotCtrlMotCurrCorrdC = DataDict.OpSignal;
MotCtrlMotCurrCorrdC.LongName = 'Corrected Motor Current C';
MotCtrlMotCurrCorrdC.Description = 'Corrected Motor Current C';
MotCtrlMotCurrCorrdC.DocUnits = 'Ampr';
MotCtrlMotCurrCorrdC.SwcShoName = 'CurrMeas';
MotCtrlMotCurrCorrdC.EngDT = dt.float32;
MotCtrlMotCurrCorrdC.EngInit = 0;
MotCtrlMotCurrCorrdC.EngMin = -200;
MotCtrlMotCurrCorrdC.EngMax = 200;
MotCtrlMotCurrCorrdC.TestTolerance = 0.01;
MotCtrlMotCurrCorrdC.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrCorrdC.WriteType = 'NonRte';


MotCtrlMotCurrRollgCntr1 = DataDict.OpSignal;
MotCtrlMotCurrRollgCntr1.LongName = 'Motor Current Rolling Counter 1';
MotCtrlMotCurrRollgCntr1.Description = 'Motor Current Rolling Counter 1';
MotCtrlMotCurrRollgCntr1.DocUnits = 'Cnt';
MotCtrlMotCurrRollgCntr1.SwcShoName = 'CurrMeas';
MotCtrlMotCurrRollgCntr1.EngDT = dt.u08;
MotCtrlMotCurrRollgCntr1.EngInit = 0;
MotCtrlMotCurrRollgCntr1.EngMin = 0;
MotCtrlMotCurrRollgCntr1.EngMax = 255;
MotCtrlMotCurrRollgCntr1.TestTolerance = 0;
MotCtrlMotCurrRollgCntr1.WrittenIn = {'CurrMeasPer2'};
MotCtrlMotCurrRollgCntr1.WriteType = 'NonRte';


MotCtrlNtc5DErrCnt = DataDict.OpSignal;
MotCtrlNtc5DErrCnt.LongName = 'Motor Control NTC 5D Error Count';
MotCtrlNtc5DErrCnt.Description = 'Motor Control NTC 5D Error Count';
MotCtrlNtc5DErrCnt.DocUnits = 'Cnt';
MotCtrlNtc5DErrCnt.SwcShoName = 'CurrMeas';
MotCtrlNtc5DErrCnt.EngDT = dt.u16;
MotCtrlNtc5DErrCnt.EngInit = 0;
MotCtrlNtc5DErrCnt.EngMin = 0;
MotCtrlNtc5DErrCnt.EngMax = 65535;
MotCtrlNtc5DErrCnt.TestTolerance = 1;
MotCtrlNtc5DErrCnt.WrittenIn = {'CurrMeasPer2'};
MotCtrlNtc5DErrCnt.WriteType = 'NonRte';


MotCurrEolCalSt = DataDict.OpSignal;
MotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCurrEolCalSt.Description = [...
  'Motor Current EOL Cal states which are input to the Timer system sub-f' ...
  'unction'];
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.SwcShoName = 'CurrMeas';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalSt.TestTolerance = 0;
MotCurrEolCalSt.WrittenIn = {'CurrMeasPer1'};
MotCurrEolCalSt.WriteType = 'Rte';


MotCurrQlfr1 = DataDict.OpSignal;
MotCurrQlfr1.LongName = 'Motor Current Qualifier 1';
MotCurrQlfr1.Description = 'Motor Current Qualifier 1';
MotCurrQlfr1.DocUnits = 'Cnt';
MotCurrQlfr1.SwcShoName = 'CurrMeas';
MotCurrQlfr1.EngDT = enum.SigQlfr1;
MotCurrQlfr1.EngInit = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr1.EngMin = SigQlfr1.SIGQLFR_NORES;
MotCurrQlfr1.EngMax = SigQlfr1.SIGQLFR_FAILD;
MotCurrQlfr1.TestTolerance = 0;
MotCurrQlfr1.WrittenIn = {'CurrMeasPer3'};
MotCurrQlfr1.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
CurrMeasEolFixdPwmPerd = DataDict.Calibration;
CurrMeasEolFixdPwmPerd.LongName = 'MotCurrEolFixdPwmPerd';
CurrMeasEolFixdPwmPerd.Description = 'Motor Current EOL Fixed PWM Period';
CurrMeasEolFixdPwmPerd.DocUnits = 'NanoSec';
CurrMeasEolFixdPwmPerd.EngDT = dt.u32;
CurrMeasEolFixdPwmPerd.EngVal = 62500;
CurrMeasEolFixdPwmPerd.EngMin = 55555;
CurrMeasEolFixdPwmPerd.EngMax = 71429;
CurrMeasEolFixdPwmPerd.Cardinality = 'Cmn';
CurrMeasEolFixdPwmPerd.CustomerVisible = false;
CurrMeasEolFixdPwmPerd.Online = false;
CurrMeasEolFixdPwmPerd.Impact = 'M';
CurrMeasEolFixdPwmPerd.TuningOwner = 'FDD';
CurrMeasEolFixdPwmPerd.GraphLink = {''};
CurrMeasEolFixdPwmPerd.Monotony = 'None';
CurrMeasEolFixdPwmPerd.MaxGrad = 0;
CurrMeasEolFixdPwmPerd.PortName = 'CurrMeasEolFixdPwmPerd';


CurrMeasEolGainMax = DataDict.Calibration;
CurrMeasEolGainMax.LongName = 'MotCurrEolGainMax';
CurrMeasEolGainMax.Description = 'Motor Current EOL Gain Max';
CurrMeasEolGainMax.DocUnits = 'AmprPerVolt';
CurrMeasEolGainMax.EngDT = dt.float32;
CurrMeasEolGainMax.EngVal = 76;
CurrMeasEolGainMax.EngMin = 20;
CurrMeasEolGainMax.EngMax = 100;
CurrMeasEolGainMax.Cardinality = 'Cmn';
CurrMeasEolGainMax.CustomerVisible = false;
CurrMeasEolGainMax.Online = false;
CurrMeasEolGainMax.Impact = 'H';
CurrMeasEolGainMax.TuningOwner = 'FDD';
CurrMeasEolGainMax.GraphLink = {''};
CurrMeasEolGainMax.Monotony = 'None';
CurrMeasEolGainMax.MaxGrad = 0;
CurrMeasEolGainMax.PortName = 'CurrMeasEolGainMax';


CurrMeasEolGainMin = DataDict.Calibration;
CurrMeasEolGainMin.LongName = 'MotCurrEolGainMin';
CurrMeasEolGainMin.Description = 'Motor Current EOL Gain Min';
CurrMeasEolGainMin.DocUnits = 'AmprPerVolt';
CurrMeasEolGainMin.EngDT = dt.float32;
CurrMeasEolGainMin.EngVal = 56;
CurrMeasEolGainMin.EngMin = 20;
CurrMeasEolGainMin.EngMax = 100;
CurrMeasEolGainMin.Cardinality = 'Cmn';
CurrMeasEolGainMin.CustomerVisible = false;
CurrMeasEolGainMin.Online = false;
CurrMeasEolGainMin.Impact = 'H';
CurrMeasEolGainMin.TuningOwner = 'FDD';
CurrMeasEolGainMin.GraphLink = {''};
CurrMeasEolGainMin.Monotony = 'None';
CurrMeasEolGainMin.MaxGrad = 0;
CurrMeasEolGainMin.PortName = 'CurrMeasEolGainMin';


CurrMeasEolGainNom = DataDict.Calibration;
CurrMeasEolGainNom.LongName = 'Current Measurement End of Line Gain Nominal';
CurrMeasEolGainNom.Description = 'Nominal gain used if NVM is corrupt';
CurrMeasEolGainNom.DocUnits = 'AmprPerVolt';
CurrMeasEolGainNom.EngDT = dt.float32;
CurrMeasEolGainNom.EngVal = 66.66;
CurrMeasEolGainNom.EngMin = 20;
CurrMeasEolGainNom.EngMax = 100;
CurrMeasEolGainNom.Cardinality = 'Cmn';
CurrMeasEolGainNom.CustomerVisible = false;
CurrMeasEolGainNom.Online = false;
CurrMeasEolGainNom.Impact = 'M';
CurrMeasEolGainNom.TuningOwner = 'FDD';
CurrMeasEolGainNom.GraphLink = {''};
CurrMeasEolGainNom.Monotony = 'None';
CurrMeasEolGainNom.MaxGrad = 0;
CurrMeasEolGainNom.PortName = 'CurrMeasEolGainNom';


CurrMeasEolGainNrOfSample = DataDict.Calibration;
CurrMeasEolGainNrOfSample.LongName = 'Curr Gain Number of Sample';
CurrMeasEolGainNrOfSample.Description = 'Curr Gain Number of Sample';
CurrMeasEolGainNrOfSample.DocUnits = 'Cnt';
CurrMeasEolGainNrOfSample.EngDT = dt.u16;
CurrMeasEolGainNrOfSample.EngVal = 5;
CurrMeasEolGainNrOfSample.EngMin = 1;
CurrMeasEolGainNrOfSample.EngMax = 1000;
CurrMeasEolGainNrOfSample.Cardinality = 'Cmn';
CurrMeasEolGainNrOfSample.CustomerVisible = false;
CurrMeasEolGainNrOfSample.Online = false;
CurrMeasEolGainNrOfSample.Impact = 'L';
CurrMeasEolGainNrOfSample.TuningOwner = 'FDD';
CurrMeasEolGainNrOfSample.GraphLink = {''};
CurrMeasEolGainNrOfSample.Monotony = 'None';
CurrMeasEolGainNrOfSample.MaxGrad = 0;
CurrMeasEolGainNrOfSample.PortName = 'CurrMeasEolGainNrOfSample';


CurrMeasEolGainNumer = DataDict.Calibration;
CurrMeasEolGainNumer.LongName = 'MotCurrEolGainNumer';
CurrMeasEolGainNumer.Description = 'Motor Current EOL Gain Numerator';
CurrMeasEolGainNumer.DocUnits = 'Ampr';
CurrMeasEolGainNumer.EngDT = dt.float32;
CurrMeasEolGainNumer.EngVal = 45;
CurrMeasEolGainNumer.EngMin = 10;
CurrMeasEolGainNumer.EngMax = 100;
CurrMeasEolGainNumer.Cardinality = 'Cmn';
CurrMeasEolGainNumer.CustomerVisible = false;
CurrMeasEolGainNumer.Online = false;
CurrMeasEolGainNumer.Impact = 'H';
CurrMeasEolGainNumer.TuningOwner = 'FDD';
CurrMeasEolGainNumer.GraphLink = {''};
CurrMeasEolGainNumer.Monotony = 'None';
CurrMeasEolGainNumer.MaxGrad = 0;
CurrMeasEolGainNumer.PortName = 'CurrMeasEolGainNumer';


CurrMeasEolMaxMotVel = DataDict.Calibration;
CurrMeasEolMaxMotVel.LongName = 'Max Allowed Mot Vel';
CurrMeasEolMaxMotVel.Description = [...
  'Maximum allowed motor velocity that produces a Bemf insufficient to ca' ...
  'use current flow during measurement'];
CurrMeasEolMaxMotVel.DocUnits = 'MotRadPerSec';
CurrMeasEolMaxMotVel.EngDT = dt.float32;
CurrMeasEolMaxMotVel.EngVal = 16;
CurrMeasEolMaxMotVel.EngMin = 0;
CurrMeasEolMaxMotVel.EngMax = 1350;
CurrMeasEolMaxMotVel.Cardinality = 'Cmn';
CurrMeasEolMaxMotVel.CustomerVisible = false;
CurrMeasEolMaxMotVel.Online = false;
CurrMeasEolMaxMotVel.Impact = 'M';
CurrMeasEolMaxMotVel.TuningOwner = 'FDD';
CurrMeasEolMaxMotVel.GraphLink = {''};
CurrMeasEolMaxMotVel.Monotony = 'None';
CurrMeasEolMaxMotVel.MaxGrad = 0;
CurrMeasEolMaxMotVel.PortName = 'CurrMeasEolMaxMotVel';


CurrMeasEolOffsHiBrdgVltgMin = DataDict.Calibration;
CurrMeasEolOffsHiBrdgVltgMin.LongName = 'Motor Current EOL Offset High Bridge Voltage Minimum';
CurrMeasEolOffsHiBrdgVltgMin.Description = [...
  'This cal is used as the range limits for the Current Offset Bridge Vol' ...
  'tage write service, as well asused in logic for initializing motor cur' ...
  'rent offset values. EOL Battery voltage times the differencebetween Hi' ...
  'ComOffset and LowCo mOffset; Min = 0 ; Max = 26.5V * 71429 (0.8-0.1); ' ...
  'Default = 6V * 62500 (0.8-0.1)'];
CurrMeasEolOffsHiBrdgVltgMin.DocUnits = 'VoltNanoSec';
CurrMeasEolOffsHiBrdgVltgMin.EngDT = dt.float32;
CurrMeasEolOffsHiBrdgVltgMin.EngVal = 262500;
CurrMeasEolOffsHiBrdgVltgMin.EngMin = 233330;
CurrMeasEolOffsHiBrdgVltgMin.EngMax = 1325008;
CurrMeasEolOffsHiBrdgVltgMin.Cardinality = 'Cmn';
CurrMeasEolOffsHiBrdgVltgMin.CustomerVisible = false;
CurrMeasEolOffsHiBrdgVltgMin.Online = false;
CurrMeasEolOffsHiBrdgVltgMin.Impact = 'M';
CurrMeasEolOffsHiBrdgVltgMin.TuningOwner = 'FDD';
CurrMeasEolOffsHiBrdgVltgMin.GraphLink = {''};
CurrMeasEolOffsHiBrdgVltgMin.Monotony = 'None';
CurrMeasEolOffsHiBrdgVltgMin.MaxGrad = 999;
CurrMeasEolOffsHiBrdgVltgMin.PortName = 'CurrMeasEolOffsHiBrdgVltgMin';


CurrMeasEolOffsHiCmuOffs = DataDict.Calibration;
CurrMeasEolOffsHiCmuOffs.LongName = 'Current Measurement Eol Offset High Commutation Offset';
CurrMeasEolOffsHiCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];
CurrMeasEolOffsHiCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsHiCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsHiCmuOffs.EngVal = 50000;
CurrMeasEolOffsHiCmuOffs.EngMin = 35715;
CurrMeasEolOffsHiCmuOffs.EngMax = 71429;
CurrMeasEolOffsHiCmuOffs.Cardinality = 'Cmn';
CurrMeasEolOffsHiCmuOffs.CustomerVisible = false;
CurrMeasEolOffsHiCmuOffs.Online = false;
CurrMeasEolOffsHiCmuOffs.Impact = 'H';
CurrMeasEolOffsHiCmuOffs.TuningOwner = 'FDD';
CurrMeasEolOffsHiCmuOffs.GraphLink = {''};
CurrMeasEolOffsHiCmuOffs.Monotony = 'None';
CurrMeasEolOffsHiCmuOffs.MaxGrad = 0;
CurrMeasEolOffsHiCmuOffs.PortName = 'CurrMeasEolOffsHiCmuOffs';


CurrMeasEolOffsLoCmuOffs = DataDict.Calibration;
CurrMeasEolOffsLoCmuOffs.LongName = 'CurrMeasEolOffsLoCmuOffs';
CurrMeasEolOffsLoCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];
CurrMeasEolOffsLoCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsLoCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsLoCmuOffs.EngVal = 6250;
CurrMeasEolOffsLoCmuOffs.EngMin = 0;
CurrMeasEolOffsLoCmuOffs.EngMax = 35714;
CurrMeasEolOffsLoCmuOffs.Cardinality = 'Cmn';
CurrMeasEolOffsLoCmuOffs.CustomerVisible = false;
CurrMeasEolOffsLoCmuOffs.Online = false;
CurrMeasEolOffsLoCmuOffs.Impact = 'H';
CurrMeasEolOffsLoCmuOffs.TuningOwner = 'FDD';
CurrMeasEolOffsLoCmuOffs.GraphLink = {''};
CurrMeasEolOffsLoCmuOffs.Monotony = 'None';
CurrMeasEolOffsLoCmuOffs.MaxGrad = 0;
CurrMeasEolOffsLoCmuOffs.PortName = 'CurrMeasEolOffsLoCmuOffs';


CurrMeasEolOffsMax = DataDict.Calibration;
CurrMeasEolOffsMax.LongName = 'MotCurrEolOffsMax';
CurrMeasEolOffsMax.Description = 'Motor Current EOL Offset Max';
CurrMeasEolOffsMax.DocUnits = 'Volt';
CurrMeasEolOffsMax.EngDT = dt.float32;
CurrMeasEolOffsMax.EngVal = 2.8;
CurrMeasEolOffsMax.EngMin = 2.6;
CurrMeasEolOffsMax.EngMax = 2.8;
CurrMeasEolOffsMax.Cardinality = 'Cmn';
CurrMeasEolOffsMax.CustomerVisible = false;
CurrMeasEolOffsMax.Online = false;
CurrMeasEolOffsMax.Impact = 'H';
CurrMeasEolOffsMax.TuningOwner = 'FDD';
CurrMeasEolOffsMax.GraphLink = {''};
CurrMeasEolOffsMax.Monotony = 'None';
CurrMeasEolOffsMax.MaxGrad = 0;
CurrMeasEolOffsMax.PortName = 'CurrMeasEolOffsMax';


CurrMeasEolOffsMin = DataDict.Calibration;
CurrMeasEolOffsMin.LongName = 'MotCurrEolOffsMin';
CurrMeasEolOffsMin.Description = 'Motor Current EOL Offset Min';
CurrMeasEolOffsMin.DocUnits = 'Volt';
CurrMeasEolOffsMin.EngDT = dt.float32;
CurrMeasEolOffsMin.EngVal = 2.3;
CurrMeasEolOffsMin.EngMin = 2;
CurrMeasEolOffsMin.EngMax = 2.3;
CurrMeasEolOffsMin.Cardinality = 'Cmn';
CurrMeasEolOffsMin.CustomerVisible = false;
CurrMeasEolOffsMin.Online = false;
CurrMeasEolOffsMin.Impact = 'H';
CurrMeasEolOffsMin.TuningOwner = 'FDD';
CurrMeasEolOffsMin.GraphLink = {''};
CurrMeasEolOffsMin.Monotony = 'None';
CurrMeasEolOffsMin.MaxGrad = 0;
CurrMeasEolOffsMin.PortName = 'CurrMeasEolOffsMin';


CurrMeasEolOffsNom = DataDict.Calibration;
CurrMeasEolOffsNom.LongName = 'Current Measurement End of Line Offset Nominal';
CurrMeasEolOffsNom.Description = 'Nominal offset used if NVM is corrupt';
CurrMeasEolOffsNom.DocUnits = 'Volt';
CurrMeasEolOffsNom.EngDT = dt.float32;
CurrMeasEolOffsNom.EngVal = 2.5;
CurrMeasEolOffsNom.EngMin = 1.5;
CurrMeasEolOffsNom.EngMax = 3;
CurrMeasEolOffsNom.Cardinality = 'Cmn';
CurrMeasEolOffsNom.CustomerVisible = false;
CurrMeasEolOffsNom.Online = false;
CurrMeasEolOffsNom.Impact = 'M';
CurrMeasEolOffsNom.TuningOwner = 'FDD';
CurrMeasEolOffsNom.GraphLink = {''};
CurrMeasEolOffsNom.Monotony = 'None';
CurrMeasEolOffsNom.MaxGrad = 0;
CurrMeasEolOffsNom.PortName = 'CurrMeasEolOffsNom';


CurrMeasEolOffsNrOfSample = DataDict.Calibration;
CurrMeasEolOffsNrOfSample.LongName = 'Curr Offset Number of Sample';
CurrMeasEolOffsNrOfSample.Description = 'Curr Offset Number of Sample';
CurrMeasEolOffsNrOfSample.DocUnits = 'Cnt';
CurrMeasEolOffsNrOfSample.EngDT = dt.u16;
CurrMeasEolOffsNrOfSample.EngVal = 20;
CurrMeasEolOffsNrOfSample.EngMin = 1;
CurrMeasEolOffsNrOfSample.EngMax = 10000;
CurrMeasEolOffsNrOfSample.Cardinality = 'Cmn';
CurrMeasEolOffsNrOfSample.CustomerVisible = false;
CurrMeasEolOffsNrOfSample.Online = false;
CurrMeasEolOffsNrOfSample.Impact = 'L';
CurrMeasEolOffsNrOfSample.TuningOwner = 'FDD';
CurrMeasEolOffsNrOfSample.GraphLink = {''};
CurrMeasEolOffsNrOfSample.Monotony = 'None';
CurrMeasEolOffsNrOfSample.MaxGrad = 0;
CurrMeasEolOffsNrOfSample.PortName = 'CurrMeasEolOffsNrOfSample';


CurrMeasEolTranCntrThd = DataDict.Calibration;
CurrMeasEolTranCntrThd.LongName = 'Current Measurement Eol Transition Counter Threshold';
CurrMeasEolTranCntrThd.Description = [...
  'Current Measurement Eol Transition Counter Threshold'];
CurrMeasEolTranCntrThd.DocUnits = 'Cnt';
CurrMeasEolTranCntrThd.EngDT = dt.u08;
CurrMeasEolTranCntrThd.EngVal = 5;
CurrMeasEolTranCntrThd.EngMin = 0;
CurrMeasEolTranCntrThd.EngMax = 255;
CurrMeasEolTranCntrThd.Cardinality = 'Cmn';
CurrMeasEolTranCntrThd.CustomerVisible = false;
CurrMeasEolTranCntrThd.Online = false;
CurrMeasEolTranCntrThd.Impact = 'M';
CurrMeasEolTranCntrThd.TuningOwner = 'FDD';
CurrMeasEolTranCntrThd.GraphLink = {''};
CurrMeasEolTranCntrThd.Monotony = 'None';
CurrMeasEolTranCntrThd.MaxGrad = 999;
CurrMeasEolTranCntrThd.PortName = 'CurrMeasEolTranCntrThd';


CurrMeasMinRqrdPhaOnTi = DataDict.Calibration;
CurrMeasMinRqrdPhaOnTi.LongName = 'Current Measurement Minimum Required Phase on Time';
CurrMeasMinRqrdPhaOnTi.Description = [...
  'Minimum time required to sample six phase'];
CurrMeasMinRqrdPhaOnTi.DocUnits = 'NanoSec';
CurrMeasMinRqrdPhaOnTi.EngDT = dt.u32;
CurrMeasMinRqrdPhaOnTi.EngVal = 11000;
CurrMeasMinRqrdPhaOnTi.EngMin = 10000;
CurrMeasMinRqrdPhaOnTi.EngMax = 65535;
CurrMeasMinRqrdPhaOnTi.Cardinality = 'Cmn';
CurrMeasMinRqrdPhaOnTi.CustomerVisible = false;
CurrMeasMinRqrdPhaOnTi.Online = false;
CurrMeasMinRqrdPhaOnTi.Impact = 'M';
CurrMeasMinRqrdPhaOnTi.TuningOwner = 'FDD';
CurrMeasMinRqrdPhaOnTi.GraphLink = {''};
CurrMeasMinRqrdPhaOnTi.Monotony = 'None';
CurrMeasMinRqrdPhaOnTi.MaxGrad = 999;
CurrMeasMinRqrdPhaOnTi.PortName = 'CurrMeasMinRqrdPhaOnTi';


CurrMeasMotAgCompuDly = DataDict.Calibration;
CurrMeasMotAgCompuDly.LongName = 'CurrMeasMotAgCompuDly';
CurrMeasMotAgCompuDly.Description = [...
  'Motor Current Motor Angle Computation Delay'];
CurrMeasMotAgCompuDly.DocUnits = 'NanoSec';
CurrMeasMotAgCompuDly.EngDT = dt.u32;
CurrMeasMotAgCompuDly.EngVal = 30000;
CurrMeasMotAgCompuDly.EngMin = 0;
CurrMeasMotAgCompuDly.EngMax = 30000;
CurrMeasMotAgCompuDly.Cardinality = 'Cmn';
CurrMeasMotAgCompuDly.CustomerVisible = false;
CurrMeasMotAgCompuDly.Online = false;
CurrMeasMotAgCompuDly.Impact = 'M';
CurrMeasMotAgCompuDly.TuningOwner = 'FDD';
CurrMeasMotAgCompuDly.GraphLink = {''};
CurrMeasMotAgCompuDly.Monotony = 'None';
CurrMeasMotAgCompuDly.MaxGrad = 0;
CurrMeasMotAgCompuDly.PortName = 'CurrMeasMotAgCompuDly';


CurrMeasMotCurrAdcVlyWrmIninMax = DataDict.Calibration;
CurrMeasMotCurrAdcVlyWrmIninMax.LongName = 'Current Measurement Motor Current Adc Valley Warm Init Max';
CurrMeasMotCurrAdcVlyWrmIninMax.Description = [...
  'Current Measurement Motor Current Adc Valley Warm Init Max'];
CurrMeasMotCurrAdcVlyWrmIninMax.DocUnits = 'Volt';
CurrMeasMotCurrAdcVlyWrmIninMax.EngDT = dt.float32;
CurrMeasMotCurrAdcVlyWrmIninMax.EngVal = 3;
CurrMeasMotCurrAdcVlyWrmIninMax.EngMin = 0.3;
CurrMeasMotCurrAdcVlyWrmIninMax.EngMax = 4.8;
CurrMeasMotCurrAdcVlyWrmIninMax.Cardinality = 'Cmn';
CurrMeasMotCurrAdcVlyWrmIninMax.CustomerVisible = false;
CurrMeasMotCurrAdcVlyWrmIninMax.Online = false;
CurrMeasMotCurrAdcVlyWrmIninMax.Impact = 'M';
CurrMeasMotCurrAdcVlyWrmIninMax.TuningOwner = 'FDD';
CurrMeasMotCurrAdcVlyWrmIninMax.GraphLink = {''};
CurrMeasMotCurrAdcVlyWrmIninMax.Monotony = 'None';
CurrMeasMotCurrAdcVlyWrmIninMax.MaxGrad = 999;
CurrMeasMotCurrAdcVlyWrmIninMax.PortName = 'CurrMeasMotCurrAdcVlyWrmIninMax';


CurrMeasMotCurrAdcVlyWrmIninMin = DataDict.Calibration;
CurrMeasMotCurrAdcVlyWrmIninMin.LongName = 'Current Measurement Motor Current Adc Valley Warm Init Min';
CurrMeasMotCurrAdcVlyWrmIninMin.Description = [...
  'Current Measurement Motor Current Adc Valley Warm Init Min'];
CurrMeasMotCurrAdcVlyWrmIninMin.DocUnits = 'Volt';
CurrMeasMotCurrAdcVlyWrmIninMin.EngDT = dt.float32;
CurrMeasMotCurrAdcVlyWrmIninMin.EngVal = 2;
CurrMeasMotCurrAdcVlyWrmIninMin.EngMin = 0.3;
CurrMeasMotCurrAdcVlyWrmIninMin.EngMax = 4.8;
CurrMeasMotCurrAdcVlyWrmIninMin.Cardinality = 'Cmn';
CurrMeasMotCurrAdcVlyWrmIninMin.CustomerVisible = false;
CurrMeasMotCurrAdcVlyWrmIninMin.Online = false;
CurrMeasMotCurrAdcVlyWrmIninMin.Impact = 'M';
CurrMeasMotCurrAdcVlyWrmIninMin.TuningOwner = 'FDD';
CurrMeasMotCurrAdcVlyWrmIninMin.GraphLink = {''};
CurrMeasMotCurrAdcVlyWrmIninMin.Monotony = 'None';
CurrMeasMotCurrAdcVlyWrmIninMin.MaxGrad = 999;
CurrMeasMotCurrAdcVlyWrmIninMin.PortName = 'CurrMeasMotCurrAdcVlyWrmIninMin';


CurrMeasNtc0x05DFailStep = DataDict.Calibration;
CurrMeasNtc0x05DFailStep.LongName = 'Current Measurement Ntc 5D Fail Step';
CurrMeasNtc0x05DFailStep.Description = [...
  'Current Measurement Ntc 5D Fail Step'];
CurrMeasNtc0x05DFailStep.DocUnits = 'Cnt';
CurrMeasNtc0x05DFailStep.EngDT = dt.u16;
CurrMeasNtc0x05DFailStep.EngVal = 16384;
CurrMeasNtc0x05DFailStep.EngMin = 0;
CurrMeasNtc0x05DFailStep.EngMax = 65535;
CurrMeasNtc0x05DFailStep.Cardinality = 'Cmn';
CurrMeasNtc0x05DFailStep.CustomerVisible = false;
CurrMeasNtc0x05DFailStep.Online = false;
CurrMeasNtc0x05DFailStep.Impact = 'M';
CurrMeasNtc0x05DFailStep.TuningOwner = 'FDD';
CurrMeasNtc0x05DFailStep.GraphLink = {''};
CurrMeasNtc0x05DFailStep.Monotony = 'None';
CurrMeasNtc0x05DFailStep.MaxGrad = 0;
CurrMeasNtc0x05DFailStep.PortName = 'CurrMeasNtc0x05DFailStep';


CurrMeasNtc0x05DPassStep = DataDict.Calibration;
CurrMeasNtc0x05DPassStep.LongName = 'Current Measurement Ntc 5D Pass Step';
CurrMeasNtc0x05DPassStep.Description = [...
  'Current Measurement Ntc 5D Pass Step'];
CurrMeasNtc0x05DPassStep.DocUnits = 'Cnt';
CurrMeasNtc0x05DPassStep.EngDT = dt.u16;
CurrMeasNtc0x05DPassStep.EngVal = 16384;
CurrMeasNtc0x05DPassStep.EngMin = 0;
CurrMeasNtc0x05DPassStep.EngMax = 65535;
CurrMeasNtc0x05DPassStep.Cardinality = 'Cmn';
CurrMeasNtc0x05DPassStep.CustomerVisible = false;
CurrMeasNtc0x05DPassStep.Online = false;
CurrMeasNtc0x05DPassStep.Impact = 'M';
CurrMeasNtc0x05DPassStep.TuningOwner = 'FDD';
CurrMeasNtc0x05DPassStep.GraphLink = {''};
CurrMeasNtc0x05DPassStep.Monotony = 'None';
CurrMeasNtc0x05DPassStep.MaxGrad = 0;
CurrMeasNtc0x05DPassStep.PortName = 'CurrMeasNtc0x05DPassStep';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
SysGlbPrmMotPoleCnt = DataDict.ImprtdCal;
SysGlbPrmMotPoleCnt.DocUnits = 'Cnt';
SysGlbPrmMotPoleCnt.EngDT = dt.u08;
SysGlbPrmMotPoleCnt.EngVal = 6;
SysGlbPrmMotPoleCnt.EngMin = 2;
SysGlbPrmMotPoleCnt.EngMax = 12;
SysGlbPrmMotPoleCnt.PortName = 'SysGlbPrmMotPoleCnt';
SysGlbPrmMotPoleCnt.Description = 'None';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
CurrMeasEolGainCalSetABC = DataDict.NVM;
CurrMeasEolGainCalSetABC.LongName = 'Current Measurement EOL Gain Calibration Set ABC';
CurrMeasEolGainCalSetABC.Description = [...
  'Current Measurement EOL Gain Calibration Set'];
CurrMeasEolGainCalSetABC.DocUnits = 'Cnt';
CurrMeasEolGainCalSetABC.EngDT = struct.CurrMeasEolGainCal3PhaRec1;
CurrMeasEolGainCalSetABC.EngInit = [struct('CurrMeasMotCurrEolGainA',66.66,'CurrMeasMotCurrEolGainB',66.66,'CurrMeasMotCurrEolGainC',66.66)];
CurrMeasEolGainCalSetABC.EngMin = [struct('CurrMeasMotCurrEolGainA',0,'CurrMeasMotCurrEolGainB',0,'CurrMeasMotCurrEolGainC',0)];
CurrMeasEolGainCalSetABC.EngMax = [struct('CurrMeasMotCurrEolGainA',100,'CurrMeasMotCurrEolGainB',100,'CurrMeasMotCurrEolGainC',100)];
CurrMeasEolGainCalSetABC.CustomerVisible = false;
CurrMeasEolGainCalSetABC.Impact = 'H';
CurrMeasEolGainCalSetABC.TuningOwner = 'FDD';
CurrMeasEolGainCalSetABC.InitRowCol = [1  1];


CurrMeasEolOffsCalSetABC = DataDict.NVM;
CurrMeasEolOffsCalSetABC.LongName = 'Current Measurement EOL Offset Calibration Set';
CurrMeasEolOffsCalSetABC.Description = [...
  'Current Measurement EOL Offset Calibration Set'];
CurrMeasEolOffsCalSetABC.DocUnits = 'Cnt';
CurrMeasEolOffsCalSetABC.EngDT = struct.CurrMeasEolOffsCal3PhaRec1;
CurrMeasEolOffsCalSetABC.EngInit = [struct('CurrMeasEolOffsHiBrdgVltg',700000,'CurrMeasMotCurrEolOffsDifA',0,'CurrMeasMotCurrEolOffsDifB',0,'CurrMeasMotCurrEolOffsDifC',0,'CurrMeasMotCurrOffsLoAvrgA',2.5,'CurrMeasMotCurrOffsLoAvrgB',2.5,'CurrMeasMotCurrOffsLoAvrgC',2.5)];
CurrMeasEolOffsCalSetABC.EngMin = [struct('CurrMeasEolOffsHiBrdgVltg',0,'CurrMeasMotCurrEolOffsDifA',-1,'CurrMeasMotCurrEolOffsDifB',-1,'CurrMeasMotCurrEolOffsDifC',-1,'CurrMeasMotCurrOffsLoAvrgA',0,'CurrMeasMotCurrOffsLoAvrgB',0,'CurrMeasMotCurrOffsLoAvrgC',0)];
CurrMeasEolOffsCalSetABC.EngMax = [struct('CurrMeasEolOffsHiBrdgVltg',1892865,'CurrMeasMotCurrEolOffsDifA',1,'CurrMeasMotCurrEolOffsDifB',1,'CurrMeasMotCurrEolOffsDifC',1,'CurrMeasMotCurrOffsLoAvrgA',2.8,'CurrMeasMotCurrOffsLoAvrgB',2.8,'CurrMeasMotCurrOffsLoAvrgC',2.8)];
CurrMeasEolOffsCalSetABC.CustomerVisible = false;
CurrMeasEolOffsCalSetABC.Impact = 'H';
CurrMeasEolOffsCalSetABC.TuningOwner = 'FDD';
CurrMeasEolOffsCalSetABC.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
BrdgVltgSumPrev = DataDict.PIM;
BrdgVltgSumPrev.LongName = 'Current Measurement Bridge Voltage Summation Previous';
BrdgVltgSumPrev.Description = [...
  'BrdgVltgSumPrev is a summation of N number of input signal BrdgVltg.  ' ...
  'In use it is expected that Rte_Pim_BrdgVltgSumPrev initializes to 0 an' ...
  'd then gets the value of BrdgVltg added to it over a number of iterati' ...
  'ons defined by the calibration CurrMeasEolOffsNrOfSample'];
BrdgVltgSumPrev.DocUnits = 'Volt';
BrdgVltgSumPrev.EngDT = dt.float32;
BrdgVltgSumPrev.EngMin = 0;
BrdgVltgSumPrev.EngMax = 265000;
BrdgVltgSumPrev.InitRowCol = [1  1];


EolGainSts = DataDict.PIM;
EolGainSts.LongName = 'Eol Gain Status';
EolGainSts.Description = 'Eol Gain Status';
EolGainSts.DocUnits = 'Cnt';
EolGainSts.EngDT = dt.u08;
EolGainSts.EngMin = 0;
EolGainSts.EngMax = 64;
EolGainSts.InitRowCol = [1  1];


EolGainTranCntrPrev = DataDict.PIM;
EolGainTranCntrPrev.LongName = 'Current/I Measurement EOL Gain Transition Counter Previous';
EolGainTranCntrPrev.Description = [...
  'Current/I Measurement EOL Transition Counter Previous'];
EolGainTranCntrPrev.DocUnits = 'Cnt';
EolGainTranCntrPrev.EngDT = dt.u08;
EolGainTranCntrPrev.EngMin = 0;
EolGainTranCntrPrev.EngMax = 255;
EolGainTranCntrPrev.InitRowCol = [1  1];


EolOffsHiBrdgVltg = DataDict.PIM;
EolOffsHiBrdgVltg.LongName = 'EOL Offset High Commutation Bridge Voltage';
EolOffsHiBrdgVltg.Description = [...
  'EolOffsHiBrdgVltg is a function of BrdgVltgAvrg and calibrations CurrM' ...
  'easEolOffsHiCmuOffs and CurrMeasEolOffsLoCmuOffs Battery voltage multi' ...
  'plied by HiComOffset at EOL Offset routineMinimum value = 6 * (35715 -' ...
  ' 35714) = 6; Maximum value = 26.5*(71429 - 0) = 1,892,868.5'];
EolOffsHiBrdgVltg.DocUnits = 'VoltNanoSec';
EolOffsHiBrdgVltg.EngDT = dt.float32;
EolOffsHiBrdgVltg.EngMin = 0;
EolOffsHiBrdgVltg.EngMax = 1892865;
EolOffsHiBrdgVltg.InitRowCol = [1  1];


EolOffsSts = DataDict.PIM;
EolOffsSts.LongName = 'Eol Offset Status';
EolOffsSts.Description = 'Eol Offset Status';
EolOffsSts.DocUnits = 'Cnt';
EolOffsSts.EngDT = dt.u08;
EolOffsSts.EngMin = 0;
EolOffsSts.EngMax = 64;
EolOffsSts.InitRowCol = [1  1];


EolOffsTranCntrPrev = DataDict.PIM;
EolOffsTranCntrPrev.LongName = 'Current/I Measurement EOL Offset Transition Counter Previous';
EolOffsTranCntrPrev.Description = [...
  'Current/I Measurement EOL Transition Counter Previous'];
EolOffsTranCntrPrev.DocUnits = 'Cnt';
EolOffsTranCntrPrev.EngDT = dt.u08;
EolOffsTranCntrPrev.EngMin = 0;
EolOffsTranCntrPrev.EngMax = 255;
EolOffsTranCntrPrev.InitRowCol = [1  1];


GainEolAvrgCntrPrev = DataDict.PIM;
GainEolAvrgCntrPrev.LongName = 'Current Measurement Eol Average Counter Previous';
GainEolAvrgCntrPrev.Description = [...
  'Current Measurement Eol Average Counter Previous'];
GainEolAvrgCntrPrev.DocUnits = 'Cnt';
GainEolAvrgCntrPrev.EngDT = dt.u16;
GainEolAvrgCntrPrev.EngMin = 0;
GainEolAvrgCntrPrev.EngMax = 10000;
GainEolAvrgCntrPrev.InitRowCol = [1  1];


MotCtrlNtc5DErrCntPrev = DataDict.PIM;
MotCtrlNtc5DErrCntPrev.LongName = 'Motor Control Ntc 5D Error Counter Previous';
MotCtrlNtc5DErrCntPrev.Description = [...
  'Motor Control Ntc 5D Error Counter Previous used at 125us'];
MotCtrlNtc5DErrCntPrev.DocUnits = 'Cnt';
MotCtrlNtc5DErrCntPrev.EngDT = dt.u16;
MotCtrlNtc5DErrCntPrev.EngMin = 0;
MotCtrlNtc5DErrCntPrev.EngMax = 65535;
MotCtrlNtc5DErrCntPrev.InitRowCol = [1  1];


MotCurrEolCalStPrev = DataDict.PIM;
MotCurrEolCalStPrev.LongName = 'Current Measurement Motor Current Eol Cal State Previous';
MotCurrEolCalStPrev.Description = [...
  'Current Measurement Motor Current Eol Cal State Previous'];
MotCurrEolCalStPrev.DocUnits = 'Cnt';
MotCurrEolCalStPrev.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalStPrev.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalStPrev.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalStPrev.InitRowCol = [1  1];


MotCurrEolGainA = DataDict.PIM;
MotCurrEolGainA.LongName = 'Motor Current EOL Gain A';
MotCurrEolGainA.Description = 'Motor Current EOL Gain A';
MotCurrEolGainA.DocUnits = 'AmprPerVolt';
MotCurrEolGainA.EngDT = dt.float32;
MotCurrEolGainA.EngMin = 0;
MotCurrEolGainA.EngMax = 840000000;
MotCurrEolGainA.InitRowCol = [1  1];


MotCurrEolGainB = DataDict.PIM;
MotCurrEolGainB.LongName = 'Motor Current EOL Gain B';
MotCurrEolGainB.Description = 'Motor Current EOL Gain B';
MotCurrEolGainB.DocUnits = 'AmprPerVolt';
MotCurrEolGainB.EngDT = dt.float32;
MotCurrEolGainB.EngMin = 0;
MotCurrEolGainB.EngMax = 840000000;
MotCurrEolGainB.InitRowCol = [1  1];


MotCurrEolGainC = DataDict.PIM;
MotCurrEolGainC.LongName = 'Motor Current EOL Gain C';
MotCurrEolGainC.Description = 'Motor Current EOL Gain C';
MotCurrEolGainC.DocUnits = 'AmprPerVolt';
MotCurrEolGainC.EngDT = dt.float32;
MotCurrEolGainC.EngMin = 0;
MotCurrEolGainC.EngMax = 840000000;
MotCurrEolGainC.InitRowCol = [1  1];


MotCurrEolOffsProcFlg = DataDict.PIM;
MotCurrEolOffsProcFlg.LongName = 'Motor Current Eol Offset Process Flag';
MotCurrEolOffsProcFlg.Description = [...
  'Motor Current Eol Offset Process Flag'];
MotCurrEolOffsProcFlg.DocUnits = 'Cnt';
MotCurrEolOffsProcFlg.EngDT = dt.lgc;
MotCurrEolOffsProcFlg.EngMin = 0;
MotCurrEolOffsProcFlg.EngMax = 1;
MotCurrEolOffsProcFlg.InitRowCol = [1  1];


MotCurrOffsDeltaA = DataDict.PIM;
MotCurrOffsDeltaA.LongName = 'Motor Current Offset Delta A';
MotCurrOffsDeltaA.Description = 'Motor Current Offset Delta A';
MotCurrOffsDeltaA.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaA.EngDT = dt.float32;
MotCurrOffsDeltaA.EngMin = -1;
MotCurrOffsDeltaA.EngMax = 1;
MotCurrOffsDeltaA.InitRowCol = [1  1];


MotCurrOffsDeltaB = DataDict.PIM;
MotCurrOffsDeltaB.LongName = 'Motor Current Offset Delta B';
MotCurrOffsDeltaB.Description = 'Motor Current Offset Delta B';
MotCurrOffsDeltaB.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaB.EngDT = dt.float32;
MotCurrOffsDeltaB.EngMin = -1;
MotCurrOffsDeltaB.EngMax = 1;
MotCurrOffsDeltaB.InitRowCol = [1  1];


MotCurrOffsDeltaC = DataDict.PIM;
MotCurrOffsDeltaC.LongName = 'Motor Current Offset Delta C';
MotCurrOffsDeltaC.Description = 'Motor Current Offset Delta C';
MotCurrOffsDeltaC.DocUnits = 'VoltNanoSecPerVolt';
MotCurrOffsDeltaC.EngDT = dt.float32;
MotCurrOffsDeltaC.EngMin = -1;
MotCurrOffsDeltaC.EngMax = 1;
MotCurrOffsDeltaC.InitRowCol = [1  1];


MotCurrOffsHiAvrgA = DataDict.PIM;
MotCurrOffsHiAvrgA.LongName = 'Motor Current Offset Hi Average A';
MotCurrOffsHiAvrgA.Description = 'Motor Current Offset Hi Average A';
MotCurrOffsHiAvrgA.DocUnits = 'Volt';
MotCurrOffsHiAvrgA.EngDT = dt.float32;
MotCurrOffsHiAvrgA.EngMin = 0;
MotCurrOffsHiAvrgA.EngMax = 5;
MotCurrOffsHiAvrgA.InitRowCol = [1  1];


MotCurrOffsHiAvrgB = DataDict.PIM;
MotCurrOffsHiAvrgB.LongName = 'Motor Current Offset Hi Average B';
MotCurrOffsHiAvrgB.Description = 'Motor Current Offset Hi Average B';
MotCurrOffsHiAvrgB.DocUnits = 'Volt';
MotCurrOffsHiAvrgB.EngDT = dt.float32;
MotCurrOffsHiAvrgB.EngMin = 0;
MotCurrOffsHiAvrgB.EngMax = 5;
MotCurrOffsHiAvrgB.InitRowCol = [1  1];


MotCurrOffsHiAvrgC = DataDict.PIM;
MotCurrOffsHiAvrgC.LongName = 'Motor Current Offset Hi Average C';
MotCurrOffsHiAvrgC.Description = 'Motor Current Offset Hi Average C';
MotCurrOffsHiAvrgC.DocUnits = 'Volt';
MotCurrOffsHiAvrgC.EngDT = dt.float32;
MotCurrOffsHiAvrgC.EngMin = 0;
MotCurrOffsHiAvrgC.EngMax = 5;
MotCurrOffsHiAvrgC.InitRowCol = [1  1];


MotCurrOffsLoAvrgA = DataDict.PIM;
MotCurrOffsLoAvrgA.LongName = 'Motor Current Offset Low Average A';
MotCurrOffsLoAvrgA.Description = 'Motor Current Offset Low Average A';
MotCurrOffsLoAvrgA.DocUnits = 'Volt';
MotCurrOffsLoAvrgA.EngDT = dt.float32;
MotCurrOffsLoAvrgA.EngMin = 0;
MotCurrOffsLoAvrgA.EngMax = 5;
MotCurrOffsLoAvrgA.InitRowCol = [1  1];


MotCurrOffsLoAvrgB = DataDict.PIM;
MotCurrOffsLoAvrgB.LongName = 'Motor Current Offset Low Average B';
MotCurrOffsLoAvrgB.Description = 'Motor Current Offset Low Average B';
MotCurrOffsLoAvrgB.DocUnits = 'Volt';
MotCurrOffsLoAvrgB.EngDT = dt.float32;
MotCurrOffsLoAvrgB.EngMin = 0;
MotCurrOffsLoAvrgB.EngMax = 5;
MotCurrOffsLoAvrgB.InitRowCol = [1  1];


MotCurrOffsLoAvrgC = DataDict.PIM;
MotCurrOffsLoAvrgC.LongName = 'Motor Current Offset Low Average C';
MotCurrOffsLoAvrgC.Description = 'Motor Current Offset Low Average C';
MotCurrOffsLoAvrgC.DocUnits = 'Volt';
MotCurrOffsLoAvrgC.EngDT = dt.float32;
MotCurrOffsLoAvrgC.EngMin = 0;
MotCurrOffsLoAvrgC.EngMax = 5;
MotCurrOffsLoAvrgC.InitRowCol = [1  1];


MotCurrOffsZeroAvrgA = DataDict.PIM;
MotCurrOffsZeroAvrgA.LongName = 'Motor Current Offset Zero Average A';
MotCurrOffsZeroAvrgA.Description = [...
  'Motor Current Offset Zero Average A'];
MotCurrOffsZeroAvrgA.DocUnits = 'Volt';
MotCurrOffsZeroAvrgA.EngDT = dt.float32;
MotCurrOffsZeroAvrgA.EngMin = 0;
MotCurrOffsZeroAvrgA.EngMax = 5;
MotCurrOffsZeroAvrgA.InitRowCol = [1  1];


MotCurrOffsZeroAvrgB = DataDict.PIM;
MotCurrOffsZeroAvrgB.LongName = 'Motor Current Offset Zero Average B';
MotCurrOffsZeroAvrgB.Description = [...
  'Motor Current Offset Zero Average B'];
MotCurrOffsZeroAvrgB.DocUnits = 'Volt';
MotCurrOffsZeroAvrgB.EngDT = dt.float32;
MotCurrOffsZeroAvrgB.EngMin = 0;
MotCurrOffsZeroAvrgB.EngMax = 5;
MotCurrOffsZeroAvrgB.InitRowCol = [1  1];


MotCurrOffsZeroAvrgC = DataDict.PIM;
MotCurrOffsZeroAvrgC.LongName = 'Motor Current Offset Zero Average C';
MotCurrOffsZeroAvrgC.Description = [...
  'Motor Current Offset Zero Average C'];
MotCurrOffsZeroAvrgC.DocUnits = 'Volt';
MotCurrOffsZeroAvrgC.EngDT = dt.float32;
MotCurrOffsZeroAvrgC.EngMin = 0;
MotCurrOffsZeroAvrgC.EngMax = 5;
MotCurrOffsZeroAvrgC.InitRowCol = [1  1];


MotCurrRollgCnt1Prev = DataDict.PIM;
MotCurrRollgCnt1Prev.LongName = 'Current Measurement Motor Current Rolling Counter 1 Prev';
MotCurrRollgCnt1Prev.Description = [...
  'Current Measurement Motor Current Rolling Counter 1 Prev'];
MotCurrRollgCnt1Prev.DocUnits = 'Cnt';
MotCurrRollgCnt1Prev.EngDT = dt.u08;
MotCurrRollgCnt1Prev.EngMin = 0;
MotCurrRollgCnt1Prev.EngMax = 255;
MotCurrRollgCnt1Prev.InitRowCol = [1  1];


MotCurrSumAPrev = DataDict.PIM;
MotCurrSumAPrev.LongName = 'Current Measurement Motor Current Phase a Summation Previous';
MotCurrSumAPrev.Description = [...
  'MotCurrSumAPrev is a summation of N number of MotCtrlMotCurrAdcVly mea' ...
  'surements.  In use it is expected that Rte_Pim_MotCurrSumPrev initiali' ...
  'zes to 0 and then gets the value of MotCtrlMotCurrAdcVly added to it o' ...
  'ver a number of iterations defined by the calibration CurrMeasEolOffsN' ...
  'rOfSample'];
MotCurrSumAPrev.DocUnits = 'Volt';
MotCurrSumAPrev.EngDT = dt.float32;
MotCurrSumAPrev.EngMin = 0;
MotCurrSumAPrev.EngMax = 50000;
MotCurrSumAPrev.InitRowCol = [1  1];


MotCurrSumBPrev = DataDict.PIM;
MotCurrSumBPrev.LongName = 'Current Measurement Motor Current Phase B Summation Previous';
MotCurrSumBPrev.Description = [...
  'Current Measurement Motor Current Phase b Summation Previous'];
MotCurrSumBPrev.DocUnits = 'Volt';
MotCurrSumBPrev.EngDT = dt.float32;
MotCurrSumBPrev.EngMin = 0;
MotCurrSumBPrev.EngMax = 50000;
MotCurrSumBPrev.InitRowCol = [1  1];


MotCurrSumCPrev = DataDict.PIM;
MotCurrSumCPrev.LongName = 'Current Measurement Motor Current Phase C Summation Previous';
MotCurrSumCPrev.Description = [...
  'Current Measurement Motor Current Phase c Summation Previous'];
MotCurrSumCPrev.DocUnits = 'Volt';
MotCurrSumCPrev.EngDT = dt.float32;
MotCurrSumCPrev.EngMin = 0;
MotCurrSumCPrev.EngMax = 50000;
MotCurrSumCPrev.InitRowCol = [1  1];


Ntc5DErrCnt2MilliSecPrev = DataDict.PIM;
Ntc5DErrCnt2MilliSecPrev.LongName = 'Motor Control Ntc 5D Error Counter 2ms Previous';
Ntc5DErrCnt2MilliSecPrev.Description = [...
  'Motor Control Ntc 5D Error Counter 2ms Previous'];
Ntc5DErrCnt2MilliSecPrev.DocUnits = 'Cnt';
Ntc5DErrCnt2MilliSecPrev.EngDT = dt.u16;
Ntc5DErrCnt2MilliSecPrev.EngMin = 0;
Ntc5DErrCnt2MilliSecPrev.EngMax = 65535;
Ntc5DErrCnt2MilliSecPrev.InitRowCol = [1  1];


OffsEolAvrgCntrPrev = DataDict.PIM;
OffsEolAvrgCntrPrev.LongName = 'Current Measurement Eol Average Counter Previous';
OffsEolAvrgCntrPrev.Description = [...
  'Current Measurement Eol Average Counter Previous'];
OffsEolAvrgCntrPrev.DocUnits = 'Cnt';
OffsEolAvrgCntrPrev.EngDT = dt.u16;
OffsEolAvrgCntrPrev.EngMin = 0;
OffsEolAvrgCntrPrev.EngMax = 10000;
OffsEolAvrgCntrPrev.InitRowCol = [1  1];


PhaOnTiErrCntPrev = DataDict.PIM;
PhaOnTiErrCntPrev.LongName = 'Current Measurement Phase on Time Error Count';
PhaOnTiErrCntPrev.Description = [...
  'Current Measurement Phase On Time Error Count'];
PhaOnTiErrCntPrev.DocUnits = 'Cnt';
PhaOnTiErrCntPrev.EngDT = dt.u16;
PhaOnTiErrCntPrev.EngMin = 0;
PhaOnTiErrCntPrev.EngMax = 65535;
PhaOnTiErrCntPrev.InitRowCol = [1  1];


TmpMotCurrAdcVlySum1Prev = DataDict.PIM;
TmpMotCurrAdcVlySum1Prev.LongName = 'Temporary Motor Current Phase 1 Adc Valley Summation Previous';
TmpMotCurrAdcVlySum1Prev.Description = [...
  'Temporary Motor Current Phase 1 Adc Valley Summation Previous'];
TmpMotCurrAdcVlySum1Prev.DocUnits = 'Volt';
TmpMotCurrAdcVlySum1Prev.EngDT = dt.float32;
TmpMotCurrAdcVlySum1Prev.EngMin = 0;
TmpMotCurrAdcVlySum1Prev.EngMax = 5000;
TmpMotCurrAdcVlySum1Prev.InitRowCol = [1  1];


WrmIninTestCmplPrev = DataDict.PIM;
WrmIninTestCmplPrev.LongName = 'Current Measurement Warm Init Test Complete Previous';
WrmIninTestCmplPrev.Description = [...
  'Current Measurement Warm Init Test Complete Previous'];
WrmIninTestCmplPrev.DocUnits = 'Cnt';
WrmIninTestCmplPrev.EngDT = dt.lgc;
WrmIninTestCmplPrev.EngMin = 0;
WrmIninTestCmplPrev.EngMax = 1;
WrmIninTestCmplPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2PI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_2PI_ULS_F32.LongName = '2 times pi';
ARCHGLBPRM_2PI_ULS_F32.Description = '2 times pi';
ARCHGLBPRM_2PI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_2PI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_2PI_ULS_F32.EngVal = 6.2831853;
ARCHGLBPRM_2PI_ULS_F32.Define = 'Global';


ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


DEGREES30_MOTRAD_F32 = DataDict.Constant;
DEGREES30_MOTRAD_F32.LongName = '30 Degree';
DEGREES30_MOTRAD_F32.Description = '30 Degree in Radian';
DEGREES30_MOTRAD_F32.DocUnits = 'MotRad';
DEGREES30_MOTRAD_F32.EngDT = dt.float32;
DEGREES30_MOTRAD_F32.EngVal = 0.5236;
DEGREES30_MOTRAD_F32.Define = 'Local';


DIFOFFSRNGCHKMAX_VOLT_F32 = DataDict.Constant;
DIFOFFSRNGCHKMAX_VOLT_F32.LongName = 'Offset Range Check Maximum';
DIFOFFSRNGCHKMAX_VOLT_F32.Description = 'Offset Range Check Maximum';
DIFOFFSRNGCHKMAX_VOLT_F32.DocUnits = 'Volt';
DIFOFFSRNGCHKMAX_VOLT_F32.EngDT = dt.float32;
DIFOFFSRNGCHKMAX_VOLT_F32.EngVal = 1;
DIFOFFSRNGCHKMAX_VOLT_F32.Define = 'Local';


ELECGLBPRM_IVTRCNT_CNT_U08 = DataDict.ConfigParam;
ELECGLBPRM_IVTRCNT_CNT_U08.LongName = 'Inverter Count';
ELECGLBPRM_IVTRCNT_CNT_U08.Description = 'Number of Inverters';
ELECGLBPRM_IVTRCNT_CNT_U08.IsBuildPrm = false;
ELECGLBPRM_IVTRCNT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_IVTRCNT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_IVTRCNT_CNT_U08.EngVal = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMin = 1;
ELECGLBPRM_IVTRCNT_CNT_U08.EngMax = 2;
ELECGLBPRM_IVTRCNT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.LongName = 'StartUp State - Current Measurement WarmInit Initialization Start';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Description = [...
  'Indication to start Current Measurement WarmInit Initialization '];
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.EngVal = 100;
ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08.Define = 'Global';


FLTINJ_CURRMEAS_MOTCURRCORRDA = DataDict.Constant;
FLTINJ_CURRMEAS_MOTCURRCORRDA.LongName = 'Fault Injection Current Measure Motor Current a Corrected';
FLTINJ_CURRMEAS_MOTCURRCORRDA.Description = [...
  'Output signal of Current Measurement function'];
FLTINJ_CURRMEAS_MOTCURRCORRDA.DocUnits = 'Uls';
FLTINJ_CURRMEAS_MOTCURRCORRDA.EngDT = dt.u16;
FLTINJ_CURRMEAS_MOTCURRCORRDA.EngVal = 29;
FLTINJ_CURRMEAS_MOTCURRCORRDA.Define = 'Global';


FLTINJ_CURRMEAS_TESTOK = DataDict.Constant;
FLTINJ_CURRMEAS_TESTOK.LongName = 'Fault Injection Current Measure Test OK';
FLTINJ_CURRMEAS_TESTOK.Description = [...
  'Fault Injection Current Measure Test OK Constant'];
FLTINJ_CURRMEAS_TESTOK.DocUnits = 'Uls';
FLTINJ_CURRMEAS_TESTOK.EngDT = dt.u16;
FLTINJ_CURRMEAS_TESTOK.EngVal = 30;
FLTINJ_CURRMEAS_TESTOK.Define = 'Global';


MAXCURRCORRD_AMPR_F32 = DataDict.Constant;
MAXCURRCORRD_AMPR_F32.LongName = 'Max Current Corrected';
MAXCURRCORRD_AMPR_F32.Description = 'Max Current Corrected';
MAXCURRCORRD_AMPR_F32.DocUnits = 'Ampr';
MAXCURRCORRD_AMPR_F32.EngDT = dt.float32;
MAXCURRCORRD_AMPR_F32.EngVal = 200;
MAXCURRCORRD_AMPR_F32.Define = 'Local';


PHAONTIABCOK_CNT_U08 = DataDict.Constant;
PHAONTIABCOK_CNT_U08.LongName = 'Phase on time ABC OK';
PHAONTIABCOK_CNT_U08.Description = [...
  'Phase on times for phases A, B and C meet minimum phase on time criter' ...
  'ia'];
PHAONTIABCOK_CNT_U08.DocUnits = 'Cnt';
PHAONTIABCOK_CNT_U08.EngDT = dt.u08;
PHAONTIABCOK_CNT_U08.EngVal = 7;
PHAONTIABCOK_CNT_U08.Define = 'Local';


PHAONTIABOK_CNT_U08 = DataDict.Constant;
PHAONTIABOK_CNT_U08.LongName = 'Phase on time AB OK';
PHAONTIABOK_CNT_U08.Description = [...
  'Phase on times for phases A and B meet minimum phase on time criteria'];
PHAONTIABOK_CNT_U08.DocUnits = 'Cnt';
PHAONTIABOK_CNT_U08.EngDT = dt.u08;
PHAONTIABOK_CNT_U08.EngVal = 6;
PHAONTIABOK_CNT_U08.Define = 'Local';


PHAONTIACOK_CNT_U08 = DataDict.Constant;
PHAONTIACOK_CNT_U08.LongName = 'Phase on time AC OK';
PHAONTIACOK_CNT_U08.Description = [...
  'Phase on times for phases A and C meet minimum phase on time criteria'];
PHAONTIACOK_CNT_U08.DocUnits = 'Cnt';
PHAONTIACOK_CNT_U08.EngDT = dt.u08;
PHAONTIACOK_CNT_U08.EngVal = 5;
PHAONTIACOK_CNT_U08.Define = 'Local';


PHAONTIBCOK_CNT_U08 = DataDict.Constant;
PHAONTIBCOK_CNT_U08.LongName = 'Phase on time BC OK';
PHAONTIBCOK_CNT_U08.Description = [...
  'Phase on times for phases B and C meet minimum phase on time criteria'];
PHAONTIBCOK_CNT_U08.DocUnits = 'Cnt';
PHAONTIBCOK_CNT_U08.EngDT = dt.u08;
PHAONTIBCOK_CNT_U08.EngVal = 3;
PHAONTIBCOK_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
EolGainOutOfRng = DataDict.NTC;
EolGainOutOfRng.NtcNr = NtcNr1.NTCNR_0X1ED;
EolGainOutOfRng.NtcTyp = 'None';
EolGainOutOfRng.LongName = 'Current/I Measurement EOL Gain Out Of Range';
EolGainOutOfRng.Description = 'Current/I Measurement EOL Gain Out Of Range';
EolGainOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
EolGainOutOfRng.NtcStInfo.Bit0Descr = 'Phase A, B, C EOL Calculated Gains are Out Of Range';
EolGainOutOfRng.NtcStInfo.Bit1Descr = 'Unused';
EolGainOutOfRng.NtcStInfo.Bit2Descr = 'VehSpd, VehSpdVld, condition not met';
EolGainOutOfRng.NtcStInfo.Bit3Descr = 'MotVelMrf condition not met';
EolGainOutOfRng.NtcStInfo.Bit4Descr = 'DiagcStsIvtr1Inactv is TRUE';
EolGainOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
EolGainOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
EolGainOutOfRng.NtcStInfo.Bit7Descr = 'Unused';
EolGainOutOfRng.NtcStsLockdThisIgnCyc = 0;


EolOffsOutOfRng = DataDict.NTC;
EolOffsOutOfRng.NtcNr = NtcNr1.NTCNR_0X1EC;
EolOffsOutOfRng.NtcTyp = 'None';
EolOffsOutOfRng.LongName = 'Current/I Measurement EOL Offset Out Of Range';
EolOffsOutOfRng.Description = 'Current/I Measurement EOL Offset Out Of Range';
EolOffsOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
EolOffsOutOfRng.NtcStInfo.Bit0Descr = 'Phase A, B, C EOL Calculated Offsets are Out Of Range';
EolOffsOutOfRng.NtcStInfo.Bit1Descr = 'Unused';
EolOffsOutOfRng.NtcStInfo.Bit2Descr = 'VehSpd, VehSpdVld, condition not met';
EolOffsOutOfRng.NtcStInfo.Bit3Descr = 'MotVelMrf condition not met';
EolOffsOutOfRng.NtcStInfo.Bit4Descr = 'DiagcStsIvtr1Inactv is TRUE';
EolOffsOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
EolOffsOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
EolOffsOutOfRng.NtcStInfo.Bit7Descr = 'Unused';
EolOffsOutOfRng.NtcStsLockdThisIgnCyc = 0;


PhaABCMeasdOutOfRng = DataDict.NTC;
PhaABCMeasdOutOfRng.NtcNr = NtcNr1.NTCNR_0X05D;
PhaABCMeasdOutOfRng.NtcTyp = 'Deb';
PhaABCMeasdOutOfRng.LongName = 'Current/I Measurement Phase A B C Measured Out Of Range';
PhaABCMeasdOutOfRng.Description = 'Current/I Measurement Phase A B C Measured Out Of Range';
PhaABCMeasdOutOfRng.NtcStInfo = DataDict.NtcStInfoBitPacked;
PhaABCMeasdOutOfRng.NtcStInfo.Bit0Descr = 'Phase A B C Measured Out Of Range during start-up test';
PhaABCMeasdOutOfRng.NtcStInfo.Bit1Descr = 'Phase A B C Measured Out Of Range at WARMINIT';
PhaABCMeasdOutOfRng.NtcStInfo.Bit2Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit3Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit4Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit5Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit6Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStInfo.Bit7Descr = 'Unused';
PhaABCMeasdOutOfRng.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
