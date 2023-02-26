import os;
import ide;
import ghs_ideobject;
import ghs_constants;
import ghs_winreg;
import ghs_window;
from ghs_util import *;


class GHS_EventAnalyzer(ghs_ideobject.GHS_IdeObject):
    """ Describe information for MULTI EventAnalyzer. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, workingDir=""):
	ghs_ideobject.GHS_IdeObject.__init__(self, "MULTI EventAnalyzer",
					     workingDir);
	self.service = GHS_GetGeneralService(self.serviceName, "",
					     workingDir);
	if self.service:
	    setattr(self.service, "CheckAbility", self.CheckAbility);

    #
    # Set the ability of the MULTI EventAnalyzer client.
    #
    # It is a function to be called by the MULTI EventAnalyzer service.
    # Do nothing from Python service right now.
    #
    # GHS: Validated
    #
    def CheckAbility(self, dataFile):
	return 0x0;


    #
    # Show an event data file in MULTI EventAnalyzer.
    #
    # Return a MULTI EventAnalyzer window object if possible.
    #
    # GHS: Validated
    #
    def OpenFile(self, dataFile="", title=None, newWin=True, raiseWin=True,
		 reloadData=True):
	self.CleanCmdExecVariables();
	if not self.service:
	    self.cmdExecStatus = 0;
	    print("MULTI EventAnalyzer service is not connected.");
	    return None;

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);
	if newWin:
	    oldWinList = winreg.GetWindowList(False);
	else:
	    oldWinList = None;
	self.service.OpenFile(dataFile, title, reloadData,
				    newWin, raiseWin);
	# Because "OpenFile" is non-blocking message, it does not return
	# the corresponding MULTI EventAnalyzer window's ID.
	# The returned GHS_Window object from the function may be not expected
	# when "newWin" is False.
	winId = 0;

	obj = winreg.WaitForWindow(oldWinList,
		    self.maxSecToWaitForNewWindow,
		    getattr(ghs_constants.winClassNames, "eventAnalyzer", ""),
		    "",
		    "",
		    winId,
		    False);
	if obj:
	    obj.fileName = dataFile;
	    return obj;
	else:
	    self.cmdExecStatus = 0;
	    self.cmdExecOutput = "No window is opened.";
	    print("%s" % self.cmdExecOutput);
	    return None;
    # Define some aliases for the function
    openfile = OpenFile;
    Open = OpenFile;
    open = OpenFile;


    #
    # Scroll to a special time position on a special object (task).
    #
    # Return a window object if possible.
    #
    # GHS: Validated
    #
    def ScrollToPosition(self, dataFile, timeValue,
			 newWin=True, raiseWin=True,
			 newWinIfNotExist=True, reloadData=True,
			 oid=0):
	self.CleanCmdExecVariables();
	if not self.service:
	    self.cmdExecStatus = 0;
	    print("MULTI EventAnalyzer service is not connected.");
	    return None;
	win = self.service.ScrollToPosition(dataFile,
					    reloadData,
					    newWin,
					    newWinIfNotExist,
					    raiseWin,
					    oid,
					    str(timeValue));
	if not win:
	    self.cmdExecStatus = 0;
	    self.cmdExecOutput = "No window is opened.";
	    print("%s" % self.cmdExecOutput);
	    return None;

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	obj = winreg.WaitForWindow(None,
		    self.maxSecToWaitForNewWindow,
		    getattr(ghs_constants.winClassNames, "eventAnalyzer", ""),
		    "",
		    "",
		    win,
		    False);
	if obj:
	    return obj;
	else:
	    self.cmdExecStatus = 0;
	    self.cmdExecOutput = "No window is opened.";
	    print("%s" % self.cmdExecOutput);
	    return None;
    # Define some aliases for the function
    scrolltoposition = ScrollToPosition;
    ScrollTo = ScrollToPosition;
    scrollto = ScrollToPosition;
    MoveTo = ScrollToPosition;
    moveto = ScrollToPosition;


    #
    # Close a MULTI EventAnalyzer window for a data file.
    #
    # The function is non-blocking, the caller can wait for the corresponding
    # MULTI EventAnalyzer window to disappear if necessary.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def CloseFile(self, dataFile):
	self.CleanCmdExecVariables();
	if not self.service:
	    self.cmdExecStatus = 0;
	    print("MULTI EventAnalyzer service is not connected.");
	    return False;
	self.service.CloseFile(dataFile);
	return True;
    # Define some aliases for the function
    closefile = CloseFile;


    #
    # Get a list of data files shown in MULTI EventAnalyzer windows.
    #
    # Return a list of file names
    #
    # GHS: Validated
    #
    def GetFileList(self, showThem=True, onlyShowBaseName=False):
	self.CleanCmdExecVariables();
	if not self.service:
	    self.cmdExecStatus = 0;
	    print("MULTI EventAnalyzer service is not connected.");
	    return [];
	(count, files) = self.service.GetFileList();
	if count <= 0 or not files:
	    return [];
	print("Index   Data File Name");
	print("=====   ==============");
	idx = 0;
	for fn in files:
	    if onlyShowBaseName:
		fn = os.path.basename(fn);
	    print("%-7.7s %s" % (str(idx), fn));
	    idx = idx+1;
	print("\nTotal number of data files: %d" % count);
	return files;
    # Define some aliases for the function
    getfilelist = GetFileList;
    GetFiles = GetFileList;
    getfiles = GetFileList;
    Files = GetFileList;
    files = GetFileList;


# Define some aliases for the class
ghs_eventanalyzer = GHS_EventAnalyzer;
#GHS_EVENTANALYZER = GHS_EventAnalyzer;
#Ghs_EventAnalyzer = GHS_EventAnalyzer;
#Ghs_Eventanalyzer = GHS_EventAnalyzer;
#GHS_Mea = GHS_EventAnalyzer;
#Ghs_Mea = GHS_EventAnalyzer;
#ghs_mea = GHS_EventAnalyzer;

# Define an object for MULTI EventAnalyzer.
#mea = GHS_EventAnalyzer();
