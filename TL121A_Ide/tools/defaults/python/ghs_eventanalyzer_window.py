import ghs_constants;
import ghs_window;
import ghs_winreg;
from ghs_util import *;

class GHS_EventAnalyzerWindow(ghs_window.GHS_Window):
    """ Describe information for MULTI EventAnalyzer window. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, compName="", wn="", wid="0", className="",
		 regSvcName="", service=""):
	ghs_window.GHS_Window.__init__(self, compName, wn, wid, className,
				       regSvcName, service);
#	self.fileName = "";


    #
    # Open new canvas window.
    #
    # Return an object of GHS_EventAnalyzerWindow.
    #
    # GHS: Validated
    #
    def NewWindow(self):
	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	oldWinList = winreg.GetWindowList(False);
	if self.RunCommands("NewWindow"):
	    return winreg.WaitForWindowFromClass(oldWinList,
		  self.maxSecToWaitForNewWindow,
		  getattr(ghs_constants.winClassNames, "eventAnalyzer", ""),
		  "");
	else:
	    return None;
    # Define some aliases for the function
    newwindow = NewWindow;
    NewWin = NewWindow;
    newwin = NewWindow;


    #
    # Select a range.
    #
    # If no unit is given, the begin and end value are in seconds or ticks
    # if the unit is not a real time.
    # The valid unit values are:
    #	s	- second
    #	ms	- millisecond
    #	us	- microsecond
    #	ns	- nanosecond
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def SelectRange(self, begin, end, unit=""):
	cmd = "SelectRange -from "+str(begin)+" -to "+str(end);
	if unit:
	    cmd = cmd+" -unit "+GHS_QuotifyString(unit);
	return self.RunCommands(cmd);
    # Define some aliases for the function
    selectrange = SelectRange;
    SelRange = SelectRange;
    selrange = SelectRange;
    Select = SelectRange;
    select = SelectRange;
    Sel = SelectRange;
    sel = SelectRange;


    #
    # View a range.
    #
    # If no unit is given, the begin and end value are in seconds or ticks
    # if the unit is not a real time.
    # The valid unit values are:
    #	s	- second
    #	ms	- millisecond
    #	us	- microsecond
    #	ns	- nanosecond
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ViewRange(self, begin, end, unit=""):
	cmd = "ViewRange -from "+str(begin)+" -to "+str(end);
	if unit:
	    cmd = cmd+" -unit "+GHS_QuotifyString(unit);
	return self.RunCommands(cmd);
    # Define some aliases for the function
    viewrange = ViewRange;
    View = ViewRange;
    view = ViewRange;


    #
    # Change time unit.
    #
    # If "gui" is True, a dialog will show up for you to choose.
    # Otherwise, the given unit will be used:
    #	s	- second
    #	ms	- millisecond
    #	us	- microsecond
    #	ns	- nanosecond
    #   <EMPTY>	- the next unit
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ChangeTimeUnit(self, unit="", gui=False):
	cmd = "ChangeUnit ";
	if gui:
	    cmd = "ChangeUnit -gui";
	elif unit:
	    cmd = "ChangeUnit -unit "+GHS_QuotifyString(unit);
	else:
	    cmd = "ChangeUnit -next";
	return self.RunCommands(cmd);
    # Define some aliases for the function
    changetimeunit = ChangeTimeUnit;
    ChangeUnit = ChangeTimeUnit;
    changeunit = ChangeTimeUnit;
    Unit = ChangeTimeUnit;
    unit = ChangeTimeUnit;
    #
    # Change the mechanism of choosing time unit.
    #
    # If "toggle" is True, the status for whether or not automatically choose
    # time unit will be toggled.
    # Otherwise, the status will be set to the given value of argument "auto".
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def AutoTimeUnit(self, toggle=True, auto=True):
	cmd = "ChangeUnit ";
	if toggle:
	    cmd = "ChangeUnit -auto";
	elif auto:
	    cmd = "ChangeUnit -auto 1";
	else:
	    cmd = "ChangeUnit -auto 0";
	return self.RunCommands(cmd);
    # Define some aliases for the function
    autotimeunit = AutoTimeUnit;
    AutoUnit = AutoTimeUnit;
    autounit = AutoTimeUnit;

    #
    # Zoom in.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ZoomIn(self):
	return self.RunCommands("ZoomIn");
    # Define some aliases for the function
    zoomin = ZoomIn;
    #
    # Zoom to selection.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ZoomToSelection(self):
	return self.RunCommands("ZoomToRange");
    # Define some aliases for the function
    zoomtoselection = ZoomToSelection;
    ZoomToSel = ZoomToSelection;
    zoomtosel = ZoomToSelection;
    ZoomSel = ZoomToSelection;
    zoomsel = ZoomToSelection;
    #
    # Zoom out.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ZoomOut(self):
	return self.RunCommands("ZoomOut");
    # Define some aliases for the function
    zoomout = ZoomOut;


    #
    # Open a data file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def OpenFile(self, fileName="", block=True, printOutput=True):
	if fileName:
	    cmd = "Open " + fileName;
	else:
	    cmd = "Open";
	return self.RunCommands(cmd, block, printOutput);
    # Define some aliases for the function
    openfile = OpenFile;
    LoadFile = OpenFile;
    loadfile = OpenFile;
    #
    # Close the current data file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def CloseFile(self, block=True, printOutput=True):
	return self.RunCommands("Close", block, printOutput);
    # Define some aliases for the function
    closefile = CloseFile;


    #
    # Show legend window.
    #
    # Return a GHS_Window object for the legend window.
    #
    # GHS: Validated
    #
    def ShowLegend(self):
	if not self.RunCommands("Legend"):
	    return None;
	else:
	    return self.cmdExecObj;
    # Define some aliases for the function
    showlegend = ShowLegend;
    Legend = ShowLegend;
    legend = ShowLegend;


    #
    # Save MULTI EventAnalyzer legend changes to configuration.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def SaveMevConfiguration(self, block=True, printOutput=True):
	return self.RunCommands("MeatSaveCfg", block, printOutput);
    # Define some aliases for the function
    savemevconfiguration = SaveMevConfiguration;
    SaveMevConfig = SaveMevConfiguration;
    savemevconfig = SaveMevConfiguration;


    #
    # Toggle flat view.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ToggleFlatView(self, block=True, printOutput=True):
	return self.RunCommands("FlatView", block, printOutput);
    # Define some aliases for the function
    toggleflatview = ToggleFlatView;
    FlatView = ToggleFlatView;
    flatview = ToggleFlatView;


    #
    # Go to the earliest view in history.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def GotoFirstView(self, block=True, printOutput=True):
	return self.RunCommands("BottomHistory", block, printOutput);
    # Define some aliases for the function
    gotofirstview = GotoFirstView;
    FirstView = GotoFirstView;
    firstview = GotoFirstView;
    #
    # Go to the latest view in history.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def GotoLastView(self, block=True, printOutput=True):
	return self.RunCommands("TopHistory", block, printOutput);
    # Define some aliases for the function
    gotolastview = GotoLastView;
    LastView = GotoLastView;
    lastview = GotoLastView;
    #
    # Go to the next view in history.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def GotoNextView(self, block=True, printOutput=True):
	return self.RunCommands("NextHistory", block, printOutput);
    # Define some aliases for the function
    gotonextview = GotoNextView;
    NextView = GotoNextView;
    nextview = GotoNextView;
    #
    # Go to the previous view in history.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def GotoPrevView(self, block=True, printOutput=True):
	return self.RunCommands("PrevHistory", block, printOutput);
    # Define some aliases for the function
    gotoprevview = GotoPrevView;
    PrevView = GotoPrevView;
    prevview = GotoPrevView;



    ##########################################################################
    #
    # More APIs......
    #
    ##########################################################################

# Define some aliases for the class
#ghs_eventanalyzerwindow = GHS_EventAnalyzerWindow;
#GHS_EVENTANALYZERWINDOW = GHS_EventAnalyzerWindow;
#Ghs_EventAnalyzerWindow = GHS_EventAnalyzerWindow;
