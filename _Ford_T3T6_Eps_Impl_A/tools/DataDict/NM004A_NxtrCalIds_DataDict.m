%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 21-Jun-2015 12:59:58       %
%                                  Created with tool release: 2.10.0     %
%%-----------------------------------------------------------------------%

NM004A = DataDict.FDD;
NM004A.Version = '1.0.X';
NM004A.LongName = 'Nexteer Calibration Identifications';
NM004A.ShoName  = 'NxtrCalIds';
NM004A.DesignASIL = '';
NM004A.Description = [...
  'Calibration section identification and description cals/services'];
NM001A.Ntc = ...
	{};
NM001A.Dependencies = ...
	{};


%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
NxtrCalIdsInit = DataDict.Runnable;
NxtrCalIdsInit.TimeStep = 0;


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
NxtrCalIdsCal0DevlpRelNr = DataDict.Calibration;
NxtrCalIdsCal0DevlpRelNr.LongName = 'Calibration 0 Development Release Number';
NxtrCalIdsCal0DevlpRelNr.Description = ['Release number from eCal.net indicating the eCal.net id for cal set 0.'];
NxtrCalIdsCal0DevlpRelNr.DocUnits = 'Cnt';
NxtrCalIdsCal0DevlpRelNr.EngDT = dt.u32;
NxtrCalIdsCal0DevlpRelNr.EngVal = 0;
NxtrCalIdsCal0DevlpRelNr.EngMin = 0;
NxtrCalIdsCal0DevlpRelNr.EngMax = 4294967295;
NxtrCalIdsCal0DevlpRelNr.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal0DevlpRelNr.Cardinality = 'N';
NxtrCalIdsCal0DevlpRelNr.CustomerVisible = false;
NxtrCalIdsCal0DevlpRelNr.Online = false;
NxtrCalIdsCal0DevlpRelNr.Impact = 'L';
NxtrCalIdsCal0DevlpRelNr.TuningOwner = 'EPDT';
NxtrCalIdsCal0DevlpRelNr.GraphLink = '';
NxtrCalIdsCal0DevlpRelNr.Monotony = 'None';
NxtrCalIdsCal0DevlpRelNr.MaxGrad = 999;
NxtrCalIdsCal0DevlpRelNr.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal0DevlpRelNr';


NxtrCalIdsCal0DevlpVers = DataDict.Calibration;
NxtrCalIdsCal0DevlpVers.LongName = 'Calibration 0 Development Version';
NxtrCalIdsCal0DevlpVers.Description = ['Cal set version number used during development to distinguish between versions.'];
NxtrCalIdsCal0DevlpVers.DocUnits = 'Cnt';
NxtrCalIdsCal0DevlpVers.EngDT = dt.u08;
NxtrCalIdsCal0DevlpVers.EngVal = 0;
NxtrCalIdsCal0DevlpVers.EngMin = 0;
NxtrCalIdsCal0DevlpVers.EngMax = 255;
NxtrCalIdsCal0DevlpVers.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal0DevlpVers.Cardinality = 'N';
NxtrCalIdsCal0DevlpVers.CustomerVisible = false;
NxtrCalIdsCal0DevlpVers.Online = false;
NxtrCalIdsCal0DevlpVers.Impact = 'L';
NxtrCalIdsCal0DevlpVers.TuningOwner = 'EPDT';
NxtrCalIdsCal0DevlpVers.GraphLink = '';
NxtrCalIdsCal0DevlpVers.Monotony = 'None';
NxtrCalIdsCal0DevlpVers.MaxGrad = 999;
NxtrCalIdsCal0DevlpVers.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal0DevlpVers';


NxtrCalIdsCal0DevlpAuthor = DataDict.Calibration;
NxtrCalIdsCal0DevlpAuthor.LongName = 'Calibration 0 Development Author';
NxtrCalIdsCal0DevlpAuthor.Description = ['Cal set author ID used during development to provide traceability.'];
NxtrCalIdsCal0DevlpAuthor.DocUnits = 'Cnt';
NxtrCalIdsCal0DevlpAuthor.EngDT = dt.u08;
NxtrCalIdsCal0DevlpAuthor.EngVal = [0 0 0 0 0 0];
NxtrCalIdsCal0DevlpAuthor.EngMin = 0;
NxtrCalIdsCal0DevlpAuthor.EngMax = 127;
NxtrCalIdsCal0DevlpAuthor.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal0DevlpAuthor.Cardinality = 'N';
NxtrCalIdsCal0DevlpAuthor.CustomerVisible = false;
NxtrCalIdsCal0DevlpAuthor.Online = false;
NxtrCalIdsCal0DevlpAuthor.Impact = 'L';
NxtrCalIdsCal0DevlpAuthor.TuningOwner = 'EPDT';
NxtrCalIdsCal0DevlpAuthor.GraphLink = '';
NxtrCalIdsCal0DevlpAuthor.Monotony = 'None';
NxtrCalIdsCal0DevlpAuthor.MaxGrad = 999;
NxtrCalIdsCal0DevlpAuthor.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal0DevlpAuthor';


NxtrCalIdsCal0DevlpDesc = DataDict.Calibration;
NxtrCalIdsCal0DevlpDesc.LongName = 'Calibration 0 Development Description';
NxtrCalIdsCal0DevlpDesc.Description = ['ASCII text used during development to provide a textual description of the cal set or changes that have been made to it.  This field is intended to be totally free-form and primarily for human use.'];
NxtrCalIdsCal0DevlpDesc.DocUnits = 'Cnt';
NxtrCalIdsCal0DevlpDesc.EngDT = dt.u08;
NxtrCalIdsCal0DevlpDesc.EngVal = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];
NxtrCalIdsCal0DevlpDesc.EngMin = 0;
NxtrCalIdsCal0DevlpDesc.EngMax = 127;
NxtrCalIdsCal0DevlpDesc.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal0DevlpDesc.Cardinality = 'N';
NxtrCalIdsCal0DevlpDesc.CustomerVisible = false;
NxtrCalIdsCal0DevlpDesc.Online = false;
NxtrCalIdsCal0DevlpDesc.Impact = 'L';
NxtrCalIdsCal0DevlpDesc.TuningOwner = 'EPDT';
NxtrCalIdsCal0DevlpDesc.GraphLink = '';
NxtrCalIdsCal0DevlpDesc.Monotony = 'None';
NxtrCalIdsCal0DevlpDesc.MaxGrad = 999;
NxtrCalIdsCal0DevlpDesc.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal0DevlpDesc';


NxtrCalIdsCal0DevlpRelSt = DataDict.Calibration;
NxtrCalIdsCal0DevlpRelSt.LongName = 'Calibration 0 Development Release State';
NxtrCalIdsCal0DevlpRelSt.Description = ['Release status for the cal set.  Really an enumerated value indicating DEFAULT (0x00), OPEN (0x01), CLOSED (0x02), VERIFY (0x03), LOCKED (0x04), SUBMITTED (0x05), RELEASED (0x06), or DEVELOPMENT (0xFF).'];
NxtrCalIdsCal0DevlpRelSt.DocUnits = 'Cnt';
NxtrCalIdsCal0DevlpRelSt.EngDT = dt.u08;
NxtrCalIdsCal0DevlpRelSt.EngVal = 0;
NxtrCalIdsCal0DevlpRelSt.EngMin = 0;
NxtrCalIdsCal0DevlpRelSt.EngMax = 255;
NxtrCalIdsCal0DevlpRelSt.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal0DevlpRelSt.Cardinality = 'N';
NxtrCalIdsCal0DevlpRelSt.CustomerVisible = false;
NxtrCalIdsCal0DevlpRelSt.Online = false;
NxtrCalIdsCal0DevlpRelSt.Impact = 'L';
NxtrCalIdsCal0DevlpRelSt.TuningOwner = 'EPDT';
NxtrCalIdsCal0DevlpRelSt.GraphLink = '';
NxtrCalIdsCal0DevlpRelSt.Monotony = 'None';
NxtrCalIdsCal0DevlpRelSt.MaxGrad = 999;
NxtrCalIdsCal0DevlpRelSt.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal0DevlpRelSt';


NxtrCalIdsCal0DevlpTiStamp = DataDict.Calibration;
NxtrCalIdsCal0DevlpTiStamp.LongName = 'Calibration 0 Development Time Stamp';
NxtrCalIdsCal0DevlpTiStamp.Description = ['UNIX format timestamp as number of seconds elapsed since January 1 1970 00:00:00 represented as a 32-bit integer.  This timestamp is updated when cals are merged with the binary.'];
NxtrCalIdsCal0DevlpTiStamp.DocUnits = 'Cnt';
NxtrCalIdsCal0DevlpTiStamp.EngDT = dt.u32;
NxtrCalIdsCal0DevlpTiStamp.EngVal = 0;
NxtrCalIdsCal0DevlpTiStamp.EngMin = 0;
NxtrCalIdsCal0DevlpTiStamp.EngMax = 4294967295;
NxtrCalIdsCal0DevlpTiStamp.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal0DevlpTiStamp.Cardinality = 'N';
NxtrCalIdsCal0DevlpTiStamp.CustomerVisible = false;
NxtrCalIdsCal0DevlpTiStamp.Online = false;
NxtrCalIdsCal0DevlpTiStamp.Impact = 'L';
NxtrCalIdsCal0DevlpTiStamp.TuningOwner = 'EPDT';
NxtrCalIdsCal0DevlpTiStamp.GraphLink = '';
NxtrCalIdsCal0DevlpTiStamp.Monotony = 'None';
NxtrCalIdsCal0DevlpTiStamp.MaxGrad = 999;
NxtrCalIdsCal0DevlpTiStamp.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal0DevlpTiStamp';



NxtrCalIdsCal1DevlpRelNr = DataDict.Calibration;
NxtrCalIdsCal1DevlpRelNr.LongName = 'Calibration 1 Development Release Number';
NxtrCalIdsCal1DevlpRelNr.Description = ['Release number from eCal.net indicating the eCal.net id for cal set 1.'];
NxtrCalIdsCal1DevlpRelNr.DocUnits = 'Cnt';
NxtrCalIdsCal1DevlpRelNr.EngDT = dt.u32;
NxtrCalIdsCal1DevlpRelNr.EngVal = 0;
NxtrCalIdsCal1DevlpRelNr.EngMin = 0;
NxtrCalIdsCal1DevlpRelNr.EngMax = 4294967295;
NxtrCalIdsCal1DevlpRelNr.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal1DevlpRelNr.Cardinality = 'N';
NxtrCalIdsCal1DevlpRelNr.CustomerVisible = false;
NxtrCalIdsCal1DevlpRelNr.Online = false;
NxtrCalIdsCal1DevlpRelNr.Impact = 'L';
NxtrCalIdsCal1DevlpRelNr.TuningOwner = 'EPDT';
NxtrCalIdsCal1DevlpRelNr.GraphLink = '';
NxtrCalIdsCal1DevlpRelNr.Monotony = 'None';
NxtrCalIdsCal1DevlpRelNr.MaxGrad = 999;
NxtrCalIdsCal1DevlpRelNr.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal1DevlpRelNr';


NxtrCalIdsCal1DevlpVers = DataDict.Calibration;
NxtrCalIdsCal1DevlpVers.LongName = 'Calibration 1 Development Version';
NxtrCalIdsCal1DevlpVers.Description = ['Cal set version number used during development to distinguish between versions.'];
NxtrCalIdsCal1DevlpVers.DocUnits = 'Cnt';
NxtrCalIdsCal1DevlpVers.EngDT = dt.u08;
NxtrCalIdsCal1DevlpVers.EngVal = 0;
NxtrCalIdsCal1DevlpVers.EngMin = 0;
NxtrCalIdsCal1DevlpVers.EngMax = 255;
NxtrCalIdsCal1DevlpVers.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal1DevlpVers.Cardinality = 'N';
NxtrCalIdsCal1DevlpVers.CustomerVisible = false;
NxtrCalIdsCal1DevlpVers.Online = false;
NxtrCalIdsCal1DevlpVers.Impact = 'L';
NxtrCalIdsCal1DevlpVers.TuningOwner = 'EPDT';
NxtrCalIdsCal1DevlpVers.GraphLink = '';
NxtrCalIdsCal1DevlpVers.Monotony = 'None';
NxtrCalIdsCal1DevlpVers.MaxGrad = 999;
NxtrCalIdsCal1DevlpVers.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal1DevlpVers';


NxtrCalIdsCal1DevlpAuthor = DataDict.Calibration;
NxtrCalIdsCal1DevlpAuthor.LongName = 'Calibration 1 Development Author';
NxtrCalIdsCal1DevlpAuthor.Description = ['Cal set author ID used during development to provide traceability.'];
NxtrCalIdsCal1DevlpAuthor.DocUnits = 'Cnt';
NxtrCalIdsCal1DevlpAuthor.EngDT = dt.u08;
NxtrCalIdsCal1DevlpAuthor.EngVal = [0 0 0 0 0 0];
NxtrCalIdsCal1DevlpAuthor.EngMin = 0;
NxtrCalIdsCal1DevlpAuthor.EngMax = 127;
NxtrCalIdsCal1DevlpAuthor.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal1DevlpAuthor.Cardinality = 'N';
NxtrCalIdsCal1DevlpAuthor.CustomerVisible = false;
NxtrCalIdsCal1DevlpAuthor.Online = false;
NxtrCalIdsCal1DevlpAuthor.Impact = 'L';
NxtrCalIdsCal1DevlpAuthor.TuningOwner = 'EPDT';
NxtrCalIdsCal1DevlpAuthor.GraphLink = '';
NxtrCalIdsCal1DevlpAuthor.Monotony = 'None';
NxtrCalIdsCal1DevlpAuthor.MaxGrad = 999;
NxtrCalIdsCal1DevlpAuthor.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal1DevlpAuthor';


NxtrCalIdsCal1DevlpDesc = DataDict.Calibration;
NxtrCalIdsCal1DevlpDesc.LongName = 'Calibration 1 Development Description';
NxtrCalIdsCal1DevlpDesc.Description = ['ASCII text used during development to provide a textual description of the cal set or changes that have been made to it.  This field is intended to be totally free-form and primarily for human use.'];
NxtrCalIdsCal1DevlpDesc.DocUnits = 'Cnt';
NxtrCalIdsCal1DevlpDesc.EngDT = dt.u08;
NxtrCalIdsCal1DevlpDesc.EngVal = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];
NxtrCalIdsCal1DevlpDesc.EngMin = 0;
NxtrCalIdsCal1DevlpDesc.EngMax = 127;
NxtrCalIdsCal1DevlpDesc.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal1DevlpDesc.Cardinality = 'N';
NxtrCalIdsCal1DevlpDesc.CustomerVisible = false;
NxtrCalIdsCal1DevlpDesc.Online = false;
NxtrCalIdsCal1DevlpDesc.Impact = 'L';
NxtrCalIdsCal1DevlpDesc.TuningOwner = 'EPDT';
NxtrCalIdsCal1DevlpDesc.GraphLink = '';
NxtrCalIdsCal1DevlpDesc.Monotony = 'None';
NxtrCalIdsCal1DevlpDesc.MaxGrad = 999;
NxtrCalIdsCal1DevlpDesc.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal1DevlpDesc';


NxtrCalIdsCal1DevlpRelSt = DataDict.Calibration;
NxtrCalIdsCal1DevlpRelSt.LongName = 'Calibration 1 Development Release State';
NxtrCalIdsCal1DevlpRelSt.Description = ['Release status for the cal set.  Really an enumerated value indicating DEFAULT (0x00), OPEN (0x01), CLOSED (0x02), VERIFY (0x03), LOCKED (0x04), SUBMITTED (0x05), RELEASED (0x06), or DEVELOPMENT (0xFF).'];
NxtrCalIdsCal1DevlpRelSt.DocUnits = 'Cnt';
NxtrCalIdsCal1DevlpRelSt.EngDT = dt.u08;
NxtrCalIdsCal1DevlpRelSt.EngVal = 0;
NxtrCalIdsCal1DevlpRelSt.EngMin = 0;
NxtrCalIdsCal1DevlpRelSt.EngMax = 255;
NxtrCalIdsCal1DevlpRelSt.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal1DevlpRelSt.Cardinality = 'N';
NxtrCalIdsCal1DevlpRelSt.CustomerVisible = false;
NxtrCalIdsCal1DevlpRelSt.Online = false;
NxtrCalIdsCal1DevlpRelSt.Impact = 'L';
NxtrCalIdsCal1DevlpRelSt.TuningOwner = 'EPDT';
NxtrCalIdsCal1DevlpRelSt.GraphLink = '';
NxtrCalIdsCal1DevlpRelSt.Monotony = 'None';
NxtrCalIdsCal1DevlpRelSt.MaxGrad = 999;
NxtrCalIdsCal1DevlpRelSt.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal1DevlpRelSt';


NxtrCalIdsCal1DevlpTiStamp = DataDict.Calibration;
NxtrCalIdsCal1DevlpTiStamp.LongName = 'Calibration 1 Development Time Stamp';
NxtrCalIdsCal1DevlpTiStamp.Description = ['UNIX format timestamp as number of seconds elapsed since January 1 1970 00:00:00 represented as a 32-bit integer.  This timestamp is updated when cals are merged with the binary.'];
NxtrCalIdsCal1DevlpTiStamp.DocUnits = 'Cnt';
NxtrCalIdsCal1DevlpTiStamp.EngDT = dt.u32;
NxtrCalIdsCal1DevlpTiStamp.EngVal = 0;
NxtrCalIdsCal1DevlpTiStamp.EngMin = 0;
NxtrCalIdsCal1DevlpTiStamp.EngMax = 4294967295;
NxtrCalIdsCal1DevlpTiStamp.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal1DevlpTiStamp.Cardinality = 'N';
NxtrCalIdsCal1DevlpTiStamp.CustomerVisible = false;
NxtrCalIdsCal1DevlpTiStamp.Online = false;
NxtrCalIdsCal1DevlpTiStamp.Impact = 'L';
NxtrCalIdsCal1DevlpTiStamp.TuningOwner = 'EPDT';
NxtrCalIdsCal1DevlpTiStamp.GraphLink = '';
NxtrCalIdsCal1DevlpTiStamp.Monotony = 'None';
NxtrCalIdsCal1DevlpTiStamp.MaxGrad = 999;
NxtrCalIdsCal1DevlpTiStamp.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal1DevlpTiStamp';



NxtrCalIdsCal2DevlpRelNr = DataDict.Calibration;
NxtrCalIdsCal2DevlpRelNr.LongName = 'Calibration 2 Development Release Number';
NxtrCalIdsCal2DevlpRelNr.Description = ['Release number from eCal.net indicating the eCal.net id for cal set 2.'];
NxtrCalIdsCal2DevlpRelNr.DocUnits = 'Cnt';
NxtrCalIdsCal2DevlpRelNr.EngDT = dt.u32;
NxtrCalIdsCal2DevlpRelNr.EngVal = 0;
NxtrCalIdsCal2DevlpRelNr.EngMin = 0;
NxtrCalIdsCal2DevlpRelNr.EngMax = 4294967295;
NxtrCalIdsCal2DevlpRelNr.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal2DevlpRelNr.Cardinality = 'N';
NxtrCalIdsCal2DevlpRelNr.CustomerVisible = false;
NxtrCalIdsCal2DevlpRelNr.Online = false;
NxtrCalIdsCal2DevlpRelNr.Impact = 'L';
NxtrCalIdsCal2DevlpRelNr.TuningOwner = 'EPDT';
NxtrCalIdsCal2DevlpRelNr.GraphLink = '';
NxtrCalIdsCal2DevlpRelNr.Monotony = 'None';
NxtrCalIdsCal2DevlpRelNr.MaxGrad = 999;
NxtrCalIdsCal2DevlpRelNr.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal2DevlpRelNr';


NxtrCalIdsCal2DevlpVers = DataDict.Calibration;
NxtrCalIdsCal2DevlpVers.LongName = 'Calibration 2 Development Version';
NxtrCalIdsCal2DevlpVers.Description = ['Cal set version number used during development to distinguish between versions.'];
NxtrCalIdsCal2DevlpVers.DocUnits = 'Cnt';
NxtrCalIdsCal2DevlpVers.EngDT = dt.u08;
NxtrCalIdsCal2DevlpVers.EngVal = 0;
NxtrCalIdsCal2DevlpVers.EngMin = 0;
NxtrCalIdsCal2DevlpVers.EngMax = 255;
NxtrCalIdsCal2DevlpVers.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal2DevlpVers.Cardinality = 'N';
NxtrCalIdsCal2DevlpVers.CustomerVisible = false;
NxtrCalIdsCal2DevlpVers.Online = false;
NxtrCalIdsCal2DevlpVers.Impact = 'L';
NxtrCalIdsCal2DevlpVers.TuningOwner = 'EPDT';
NxtrCalIdsCal2DevlpVers.GraphLink = '';
NxtrCalIdsCal2DevlpVers.Monotony = 'None';
NxtrCalIdsCal2DevlpVers.MaxGrad = 999;
NxtrCalIdsCal2DevlpVers.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal2DevlpVers';


NxtrCalIdsCal2DevlpAuthor = DataDict.Calibration;
NxtrCalIdsCal2DevlpAuthor.LongName = 'Calibration 2 Development Author';
NxtrCalIdsCal2DevlpAuthor.Description = ['Cal set author ID used during development to provide traceability.'];
NxtrCalIdsCal2DevlpAuthor.DocUnits = 'Cnt';
NxtrCalIdsCal2DevlpAuthor.EngDT = dt.u08;
NxtrCalIdsCal2DevlpAuthor.EngVal = [0 0 0 0 0 0];
NxtrCalIdsCal2DevlpAuthor.EngMin = 0;
NxtrCalIdsCal2DevlpAuthor.EngMax = 127;
NxtrCalIdsCal2DevlpAuthor.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal2DevlpAuthor.Cardinality = 'N';
NxtrCalIdsCal2DevlpAuthor.CustomerVisible = false;
NxtrCalIdsCal2DevlpAuthor.Online = false;
NxtrCalIdsCal2DevlpAuthor.Impact = 'L';
NxtrCalIdsCal2DevlpAuthor.TuningOwner = 'EPDT';
NxtrCalIdsCal2DevlpAuthor.GraphLink = '';
NxtrCalIdsCal2DevlpAuthor.Monotony = 'None';
NxtrCalIdsCal2DevlpAuthor.MaxGrad = 999;
NxtrCalIdsCal2DevlpAuthor.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal2DevlpAuthor';


NxtrCalIdsCal2DevlpDesc = DataDict.Calibration;
NxtrCalIdsCal2DevlpDesc.LongName = 'Calibration 2 Development Description';
NxtrCalIdsCal2DevlpDesc.Description = ['ASCII text used during development to provide a textual description of the cal set or changes that have been made to it.  This field is intended to be totally free-form and primarily for human use.'];
NxtrCalIdsCal2DevlpDesc.DocUnits = 'Cnt';
NxtrCalIdsCal2DevlpDesc.EngDT = dt.u08;
NxtrCalIdsCal2DevlpDesc.EngVal = [0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0];
NxtrCalIdsCal2DevlpDesc.EngMin = 0;
NxtrCalIdsCal2DevlpDesc.EngMax = 127;
NxtrCalIdsCal2DevlpDesc.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal2DevlpDesc.Cardinality = 'N';
NxtrCalIdsCal2DevlpDesc.CustomerVisible = false;
NxtrCalIdsCal2DevlpDesc.Online = false;
NxtrCalIdsCal2DevlpDesc.Impact = 'L';
NxtrCalIdsCal2DevlpDesc.TuningOwner = 'EPDT';
NxtrCalIdsCal2DevlpDesc.GraphLink = '';
NxtrCalIdsCal2DevlpDesc.Monotony = 'None';
NxtrCalIdsCal2DevlpDesc.MaxGrad = 999;
NxtrCalIdsCal2DevlpDesc.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal2DevlpDesc';


NxtrCalIdsCal2DevlpRelSt = DataDict.Calibration;
NxtrCalIdsCal2DevlpRelSt.LongName = 'Calibration 2 Development Release State';
NxtrCalIdsCal2DevlpRelSt.Description = ['Release status for the cal set.  Really an enumerated value indicating DEFAULT (0x00), OPEN (0x01), CLOSED (0x02), VERIFY (0x03), LOCKED (0x04), SUBMITTED (0x05), RELEASED (0x06), or DEVELOPMENT (0xFF).'];
NxtrCalIdsCal2DevlpRelSt.DocUnits = 'Cnt';
NxtrCalIdsCal2DevlpRelSt.EngDT = dt.u08;
NxtrCalIdsCal2DevlpRelSt.EngVal = 0;
NxtrCalIdsCal2DevlpRelSt.EngMin = 0;
NxtrCalIdsCal2DevlpRelSt.EngMax = 255;
NxtrCalIdsCal2DevlpRelSt.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal2DevlpRelSt.Cardinality = 'N';
NxtrCalIdsCal2DevlpRelSt.CustomerVisible = false;
NxtrCalIdsCal2DevlpRelSt.Online = false;
NxtrCalIdsCal2DevlpRelSt.Impact = 'L';
NxtrCalIdsCal2DevlpRelSt.TuningOwner = 'EPDT';
NxtrCalIdsCal2DevlpRelSt.GraphLink = '';
NxtrCalIdsCal2DevlpRelSt.Monotony = 'None';
NxtrCalIdsCal2DevlpRelSt.MaxGrad = 999;
NxtrCalIdsCal2DevlpRelSt.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal2DevlpRelSt';


NxtrCalIdsCal2DevlpTiStamp = DataDict.Calibration;
NxtrCalIdsCal2DevlpTiStamp.LongName = 'Calibration 2 Development Time Stamp';
NxtrCalIdsCal2DevlpTiStamp.Description = ['UNIX format timestamp as number of seconds elapsed since January 1 1970 00:00:00 represented as a 32-bit integer.  This timestamp is updated when cals are merged with the binary.'];
NxtrCalIdsCal2DevlpTiStamp.DocUnits = 'Cnt';
NxtrCalIdsCal2DevlpTiStamp.EngDT = dt.u32;
NxtrCalIdsCal2DevlpTiStamp.EngVal = 0;
NxtrCalIdsCal2DevlpTiStamp.EngMin = 0;
NxtrCalIdsCal2DevlpTiStamp.EngMax = 4294967295;
NxtrCalIdsCal2DevlpTiStamp.ProgrammedBy = 'Nexteer';
NxtrCalIdsCal2DevlpTiStamp.Cardinality = 'N';
NxtrCalIdsCal2DevlpTiStamp.CustomerVisible = false;
NxtrCalIdsCal2DevlpTiStamp.Online = false;
NxtrCalIdsCal2DevlpTiStamp.Impact = 'L';
NxtrCalIdsCal2DevlpTiStamp.TuningOwner = 'EPDT';
NxtrCalIdsCal2DevlpTiStamp.GraphLink = '';
NxtrCalIdsCal2DevlpTiStamp.Monotony = 'None';
NxtrCalIdsCal2DevlpTiStamp.MaxGrad = 999;
NxtrCalIdsCal2DevlpTiStamp.CoderInfo.CustomAttributes.PortName = 'NxtrCalIdsCal2DevlpTiStamp';



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
%end of Data Dictionary