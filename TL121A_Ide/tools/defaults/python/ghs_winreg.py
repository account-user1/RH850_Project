import ide;
import ghs_ideobject;
import ghs_window;
import ghs_constants;
import ghs_launcher_window;
import ghs_editor_window;
import ghs_builder_window;
import ghs_eventanalyzer_window;
import ghs_debugger_window;
import ghs_cobrowse_window;
import ghs_terminal_window;
import ghs_diffview_window;
import ghs_trace_window;
import ghs_tm_window;
import ghs_osa_window;
import ghs_co_window;
import ghs_helpviewer_window;
import ghs_pythongui_window;
import ghs_dbserver;
from ghs_util import *;
import string;
import time;
import re;

#
# Stretch a string to a certain width by padding space at the end of it
# if necessary.
#
# GHS: Validated (internal use only)
#
def StretchStr(s, length):
    if not s:
	return	 ' '*length;
    l = len(s);
    if l < length:
	return s+' '*(length-l);
    else:
	return s;


class GHS_WindowRegister(ghs_ideobject.GHS_IdeObject):
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, workingDir=""):
	self.useNewNonBlockingMsg = True;
	self.waitingCookie = 0;
	self.nextCookie = 1;

	# Ignore working dir to make sure that there is only one MULTI
	# state manager service for window register is created with a MULTI
	# service router.
	ghs_ideobject.GHS_IdeObject.__init__(self,
					     "GHS_WindowRegisterService",
					     "");
	self.service = GHS_GetGeneralService(self.serviceName,
						"MULTI Window Register",
						"");
	if self.service:
	    self.service.ChangeNotificationMask(0);

#	self.checkInterval = 0.2;

	# In safe mode, all commands are sent to a window as unsafe
	# commands, which would be blocked by MULTI IDE's message dispatching
	# mechanism.
	# In unsafe mode, all commands are sent to a window as safe commands,
	# which will be easier to be executed promptly.
	# User should be cautious when using unsafe mode.
	self.safeMode = True;


    #
    # Close window
    #
    # GHS: Validated
    #
    def CloseWindow(self, winName, winId, winClass="", winRegSvcName=""):
	if self.service:
	    # No status is returned
	    if not winClass or winClass == "None" or winClass == "NULL":
		winClass = None;
	    res = self.service.CloseWindow(winRegSvcName, 
					   winClass,
					   winName,
					   int(winId, 0));
	    return True;
	else:
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    closewindow = CloseWindow;
    CloseWin = CloseWindow;
    closewin = CloseWindow;
    #
    # Show window to the top.
    #
    # GHS: Validated
    #
    def RestoreWindow(self, winName, winId, winClass="", winRegSvcName=""):
	if self.service:
	    # No status is returned
	    if not winClass or winClass == "None" or winClass == "NULL":
		winClass = None;
	    res = self.service.ShowWindow(winRegSvcName, 
					  winClass,
					  winName,
					  int(winId, 0));
	    return True;
	else:
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    restorewindow = RestoreWindow;
    RestoreWin = RestoreWindow;
    restorewin = RestoreWindow;
    #
    # Iconify window
    #
    # GHS: Validated
    #
    def IconifyWindow(self, winName, winId, winClass="", winRegSvcName=""):
	if self.service:
	    # No status is returned
	    if not winClass or winClass == "None" or winClass == "NULL":
		winClass = None;
	    res = self.service.IconifyWindow(winRegSvcName, 
					     winClass,
					     winName,
					     int(winId, 0));
	    return True;
	else:
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    iconifywindow = IconifyWindow;
    IconWindow = IconifyWindow;
    iconwindow = IconifyWindow;
    IconifyWin = IconifyWindow;
    iconifywin = IconifyWindow;
    IconWin = IconifyWindow;
    iconwin = IconifyWindow;
    MinimizeWindow = IconifyWindow;
    minimizewindow = IconifyWindow;
    MinWin = IconifyWindow;
    minwin = IconifyWindow;
    #
    # Close all windows
    #
    # GHS: Validated 
    #
    def CloseAllWindows(self):
	if self.service:
	    # No status is returned
	    res = self.service.CloseAllWindows(0);
	    return True;
	else:
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    closeallwindows = CloseAllWindows;
    CloseWindows = CloseAllWindows;
    closewindows = CloseAllWindows;
    CloseWins = CloseAllWindows;
    closewins = CloseAllWindows;
    #
    # Show all windows
    #
    # GHS: Validated 
    #
    def RestoreAllWindows(self):
	if self.service:
	    # No status is returned
	    res = self.service.ShowAllWindows(0);
	    return True;
	else:
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    restoreallwindows = RestoreAllWindows;
    RestoreWindows = RestoreAllWindows;
    restorewindows = RestoreAllWindows;
    RestoreWins = RestoreAllWindows;
    restorewins = RestoreAllWindows;
    #
    # Iconify all windows
    #
    # GHS: Validated 
    #
    def IconifyAllWindows(self):
	if self.service:
	    # No status is returned
	    res = self.service.IconifyAllWindows(0);
	    return True;
	else:
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    iconifyallwindows = IconifyAllWindows;
    IconifyWindows = IconifyAllWindows;
    iconifywindows = IconifyAllWindows;
    IconifyWins = IconifyAllWindows;
    iconifywins = IconifyAllWindows;
    IconWins = IconifyAllWindows;
    iconwins = IconifyAllWindows;
    MinimizeWindows = IconifyAllWindows;
    minimizewindows = IconifyAllWindows;
    MinWins = IconifyAllWindows;
    minwins = IconifyAllWindows;

    #
    # Sync all windows
    #
    # GHS: Validated (internal use only, only for validations)
    #      As this is internal use only, do not create a bunch
    #      of synonyms (e.g. syncwins) for it.
    #
    def SyncAllWindows(self):
        if self.service:
            # No status is returned
            res = self.service.SyncAllWindows(0);
            return True;
        else:
            print("%s is not successfully connected." % self.serviceName);
            return False;



    #
    # Get window list in the system
    #
    # GHS: Validated
    #
    def GetWindowList(self, showIt=False, showPid=True,
			showClassName=True, showWinId=False,
			showServiceName=False, showParentWin=False, showGuiClass=False):
	wins = self.service.GetWindowList();
	if showIt:
	    winStr = self.ConvertWindowListIntoString(wins, showPid,
						      showClassName,
						      showWinId,
						      showServiceName,
						      showParentWin,
						      showGuiClass);
	    print winStr;
	return wins;
    # Define some aliases for GetWindowList function
    getwindowlist = GetWindowList;
    GetWinList = GetWindowList;
    getwinlist = GetWindowList;
    GetWindows = GetWindowList;
    getwindows = GetWindowList;
    GetWins = GetWindowList;
    getwins = GetWindowList;
    Windows = GetWindowList;
    windows = GetWindowList;
    Wins = GetWindowList;
    wins = GetWindowList;
    #
    # Show window list in the system
    #
    # GHS: Validated
    #
    def ShowWindowList(self, showPid=True,
			showClassName=True, showWinId=False,
			showServiceName=False, showParentWin=False, showGuiClass=False):
	self.GetWindowList(True, showPid, showClassName, showWinId,
			    showServiceName, showParentWin, showGuiClass);
    # Define some aliases for the function
    showwindowlist = ShowWindowList;
    ShowWindows = ShowWindowList;
    showwindows = ShowWindowList;
    ShowWins = ShowWindowList;
    showwins = ShowWindowList;

    #
    # Convert window list in string.
    #
    # GetWindowList() can be changed to use the function.
    #
    # GHS: Validated (internal use only)
    #
    def ConvertWindowListIntoString(self, wins, showPid=True,
			    showClassName=True, showWinId=True,
			    showServiceName=False, showParentWin=False,
			    showGuiClass=False):
	#if not wins:
	#    return "";
	spcAdj=" ";
	spcAdjLen = 1;
	ret = "";
	ret = ret + ("Index  "+spcAdj);
	if showServiceName:
	    ret = ret + ("Service Name           "+spcAdj);
	if showClassName:
	    ret = ret + ("Class Name             "+spcAdj);
	if showWinId:
	    ret = ret + ("Window ID      "+spcAdj);
	if showPid:
	    ret = ret + ("Process ID     "+spcAdj);
	if showParentWin:
	    ret = ret + ("Parent Win     "+spcAdj);
	if showGuiClass:
	    ret = ret + ("GUI Class              "+spcAdj);
	ret = ret + ("Window Name")+"\n";
	# Show separator
	ret = ret + ("=====  "+spcAdj);
	if showServiceName:
	    ret = ret + ("============           "+spcAdj);
	if showClassName:
	    ret = ret + ("==========             "+spcAdj);
	if showWinId:
	    ret = ret + ("=========      "+spcAdj);
	if showPid:
	    ret = ret + ("==========     "+spcAdj);
	if showParentWin:
	    ret = ret + ("==========     "+spcAdj);
	if showGuiClass:
	    ret = ret + ("=========              "+spcAdj);
	ret = ret + ("===========")+"\n";
	idx = 0;
	for win in wins["winInfo"]:
	    # One extra space is used by print.
	    ret = ret + StretchStr(str(idx), 7+spcAdjLen);
	    if showServiceName:
		# One extra space is used by print.
		ret = ret + StretchStr( win["serviceName"], 23+spcAdjLen);
	    if showClassName:
		# One extra space is used by print.
		ret = ret + StretchStr( win["className"], 23+spcAdjLen);
	    if showWinId:
		# One extra space is used by print.
		ret = ret + StretchStr(hex(win["win"]), 15+spcAdjLen);
	    if showPid:
		# One extra space is used by print.
		ret = ret + StretchStr(str(win["pid"]), 15+spcAdjLen);
	    if showParentWin:
		# One extra space is used by print.
		ret = ret + StretchStr(hex(win["parentWin"]), 15+spcAdjLen);
	    if showGuiClass:
		# One extra space is used by print.
		ret = ret + StretchStr( win["guiClassName"], 23+spcAdjLen);
	    ret = ret + win["windowName"]+"\n";
	    idx = idx+1;
	if wins["count"]:
	    ret = ret + "\n";
	return ret + "Total number of windows: " + str(wins["count"]);
    # Define some aliases for the function
    convertwindowlistintostring = ConvertWindowListIntoString;
    GetStringForWindowList = ConvertWindowListIntoString;
    getstringforwindowlist = ConvertWindowListIntoString;
    GetStrForWinList = ConvertWindowListIntoString;
    getstrforwinlist = ConvertWindowListIntoString;


    #
    # Create GHS_Window object from its class type.
    #
    # GHS: Validated (internal use only)
    #
    def CreateWindowObject(self, winName, winId, winClass, winRegSvcName):
	if winClass == getattr(ghs_constants.winClassNames, "launcher", ""):
	    return ghs_launcher_window.GHS_LauncherWindow("", winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "editor", ""):
	    return ghs_editor_window.GHS_EditorWindow("", winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "builder", ""):
	    return ghs_builder_window.GHS_BuilderWindow("", winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "debugger", ""):
	    return ghs_debugger_window.GHS_DebuggerWindow("", winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "eventAnalyzer", ""):
	    return ghs_eventanalyzer_window.GHS_EventAnalyzerWindow("",
						     winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	#elif winClass == getattr(ghs_constants.winClassNames, "resourceAnalyzer", ""):
	#    return ghs_resourceanalyzer_window.GHS_ResourceAnalyzerWindow("",
	#					     winName,
	#					     winId,
	#					     winClass,
	#					     winRegSvcName,
	#					     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "coBrowser", ""):
	    return ghs_cobrowse_window.GHS_CoBrowseWindow("",
						     winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "terminal", ""):
	    return ghs_terminal_window.GHS_TerminalWindow("",
						     winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "diffView", ""):
	    return ghs_diffview_window.GHS_DiffViewWindow("",
						     winName,
						     winId,
						     winClass,
						     winRegSvcName,
						     "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "trace", ""):
	    return ghs_trace_window.GHS_TraceWindow("",
						    winName,
						    winId,
						    winClass,
						    winRegSvcName,
						    "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "taskManager", ""):
	    return ghs_tm_window.GHS_TaskManagerWindow("",
						    winName,
						    winId,
						    winClass,
						    winRegSvcName,
						    "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "osaExplorer", ""):
	    return ghs_osa_window.GHS_OsaWindow("",
						    winName,
						    winId,
						    winClass,
						    winRegSvcName,
						    "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "connectionOrganizer", ""):
	    return ghs_co_window.GHS_ConnectionOrganizerWindow("",
						    winName,
						    winId,
						    winClass,
						    winRegSvcName,
						    "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "helpViewer", ""):
	    return ghs_helpviewer_window.GHS_HelpViewerWindow("",
						    winName,
						    winId,
						    winClass,
						    winRegSvcName,
						    "Unknown");
	elif winClass == getattr(ghs_constants.winClassNames, "pythonGui", ""):
	    return ghs_pythongui_window.GHS_PyGuiWindow("",
						    winName,
						    winId,
						    winClass,
						    winRegSvcName,
						    "Unknown");
	else:
	    # Support other MULTI IDE component's window classes later.
	    return ghs_window.GHS_Window("", winName,
					 winId,
					 winClass,
					 winRegSvcName,
					 "Unknown");
    #
    # Create GHS_Window object from an entry in window list
    # If no window list is given, we will get it from the system.
    #
    # GHS: Validated
    #
    def GetWindowByIndex(self, idx, winList=None):
	if idx < 0:
	    print("Invalid index.");
	    return None;
	if not winList:
	    winList = self.GetWindowList(False);
	if len(winList["winInfo"]) == 0:
	    return None;
	for win in winList["winInfo"]:
	    if idx == 0:
		return self.CreateWindowObject(win["windowName"],
						str(hex(win["win"])),
						win["className"],
						win["serviceName"]);
	    idx = idx-1;
	print("There is no window with such index.");
	return None;
    # Define some aliases for the function
    getwindowbyindex = GetWindowByIndex;
    GetWinByIdx = GetWindowByIndex;
    getwinbyidx = GetWindowByIndex;
    WindowForIndex = GetWindowByIndex;
    windowforindex = GetWindowByIndex;
    WinForIdx = GetWindowByIndex;
    winforidx = GetWindowByIndex;
    WinFIdx = GetWindowByIndex;
    winfidx = GetWindowByIndex;



    #
    # Get any MULTI Launcher window from the given window list or the current
    # window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetLauncherWindow(self, winName="", pid=0, fromWinList=None,
			    notInWinList=None,
			    warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "launcher", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Launcher window is found.");
	    return None;
    # Define some aliases for the function
    getlauncherwindow = GetLauncherWindow;
    GetLauncherWin = GetLauncherWindow;
    getlauncherwin = GetLauncherWindow;
    GetLauncher = GetLauncherWindow;
    getlauncher = GetLauncherWindow;
    #
    # Get any MULTI Editor window from the given window list or the current
    # window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetEditorWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "editor", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Editor window is found.");
	    return None;
    # Define some aliases for the function
    geteditorwindow = GetEditorWindow;
    GetEditorWin = GetEditorWindow;
    geteditorwin = GetEditorWindow;
    GetEditor = GetEditorWindow;
    geteditor = GetEditorWindow;
    #
    # Get any MULTI Debugger window from the given window list or the current
    # window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetDebuggerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "debugger", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Debugger window is found.");
	    return None;
    # Define some aliases for the function
    getdebuggerwindow = GetDebuggerWindow;
    GetDebuggerWin = GetDebuggerWindow;
    getdebuggerwin = GetDebuggerWindow;
    GetDebugger = GetDebuggerWindow;
    getdebugger = GetDebuggerWindow;
    #
    # Get any MULTI Task Manager window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated (manually)
    #
    def GetTaskManagerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "taskManager", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Task Manager window is found.");
	    return None;
    # Define some aliases for the function
    gettaskmanagerwindow = GetTaskManagerWindow;
    GetTaskManagerWin = GetTaskManagerWindow;
    gettaskmanagerwin = GetTaskManagerWindow;
    GetTm = GetTaskManagerWindow;
    gettm = GetTaskManagerWindow;
    #
    # Get any MULTI Connection Organizer window from the given window list or  
    # the current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetConnectionOrganizerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames,
			"connectionOrganizer", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Connection Organizer window is found.");
	    return None;
    # Define some aliases for the function
    getconnectionorganizerwindow = GetConnectionOrganizerWindow;
    GetConnectionOrganizer = GetConnectionOrganizerWindow;
    getconnectionorganizer = GetConnectionOrganizerWindow;
    GetCo = GetConnectionOrganizerWindow;
    getco = GetConnectionOrganizerWindow;
    #
    # Get any MULTI OSA Explorer window from the given window list or  
    # the current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetOsaExplorerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames,
			"osaExplorer", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI OSA Explorer window is found.");
	    return None;
    # Define some aliases for the function
    getosaexplorerwindow = GetOsaExplorerWindow;
    GetOsaExplorer = GetOsaExplorerWindow;
    getosaexplorer = GetOsaExplorerWindow;
    GetOsa = GetOsaExplorerWindow;
    getosa = GetOsaExplorerWindow;
    #
    # Get any MULTI Mroject Manager (Builder) window from the given window list 
    # or the current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetProjectManagerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "builder", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Builder window is found.");
	    return None;
    # Define some aliases for the function
    getprojectmanagerwindow = GetProjectManagerWindow;
    GetProjMgrWin = GetProjectManagerWindow;
    getprojmgrwin = GetProjectManagerWindow;
    GetBuilderWindow = GetProjectManagerWindow;
    getbuilderwindow = GetProjectManagerWindow;
    GetBuilderWin = GetProjectManagerWindow;
    getbuilderwin = GetProjectManagerWindow;
    GetBuilder = GetProjectManagerWindow;
    getbuilder = GetProjectManagerWindow;
    #
    # Get any MULTI Checkout Browser window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetCheckoutBrowserWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "coBrowser", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Checkout Browser is found.");
	    return None;
    # Define some aliases for the function
    getcheckoutbrowserwindow = GetCheckoutBrowserWindow;
    GetCheckoutBrowser = GetCheckoutBrowserWindow;
    getcheckoutbrowser = GetCheckoutBrowserWindow;
    GetCoB = GetCheckoutBrowserWindow;
    getcob = GetCheckoutBrowserWindow;
    #
    # Get any MULTI EventAnalyzer window from the given window list or the
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetEventAnalyzerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "eventAnalyzer", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI EventAnalyzer window is found.");
	    return None;
    # Define some aliases for the function
    geteventanalyzerwindow = GetEventAnalyzerWindow;
    GetEventAnalyzerWin = GetEventAnalyzerWindow;
    geteventanalyzerwin = GetEventAnalyzerWindow;
    GetMeaWindow = GetEventAnalyzerWindow;
    getmeawindow = GetEventAnalyzerWindow;
    GetMeaWin = GetEventAnalyzerWindow;
    getmeawin = GetEventAnalyzerWindow;
    GetMea = GetEventAnalyzerWindow;
    getmea = GetEventAnalyzerWindow;
    GetMev = GetEventAnalyzerWindow;
    getmev = GetEventAnalyzerWindow;
    #
    # Get any MULTI Resource Analyzer window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated (manually)
    #
    def GetResourceAnalyzerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "resourceAnalyzer", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Resource Analyzer is found.");
	    return None;
    # Define some aliases for the function
    getresourceanalyzerwindow = GetResourceAnalyzerWindow;
    GetResourceAnalyzer = GetResourceAnalyzerWindow;
    getresourceanalyzer = GetResourceAnalyzerWindow;
    GetMra = GetResourceAnalyzerWindow;
    getmra = GetResourceAnalyzerWindow;
    GetMrv = GetResourceAnalyzerWindow;
    getmrv = GetResourceAnalyzerWindow;
    #
    # Get any MULTI Diff Viewer window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetDiffViewerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "diffView", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Diff Viewer is found.");
	    return None;
    # Define some aliases for the function
    getdiffviewerwindow = GetDiffViewerWindow;
    GetDiffViewer = GetDiffViewerWindow;
    getdiffviewer = GetDiffViewerWindow;
    GetDv = GetDiffViewerWindow;
    getdv = GetDiffViewerWindow;
    #
    # Get any MULTI Python GUI window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetPythonGuiWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "pythonGui", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Python GUI is found.");
	    return None;
    # Define some aliases for the function
    getpythonguiwindow = GetPythonGuiWindow;
    GetPyGui = GetPythonGuiWindow;
    getpygui = GetPythonGuiWindow;
    #
    # Get any MULTI Terminal window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated (manually)
    #
    def GetTerminalWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "terminal", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Terminal is found.");
	    return None;
    # Define some aliases for the function
    getterminalwindow = GetTerminalWindow;
    GetTerminal = GetTerminalWindow;
    getterminal = GetTerminalWindow;
    GetTerm = GetTerminalWindow;
    getterm = GetTerminalWindow;
    #
    # Get any MULTI Trace window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetTraceWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "trace", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Trace is found.");
	    return None;
    # Define some aliases for the function
    gettracewindow = GetTraceWindow;
    GetTraceWin = GetTraceWindow;
    gettracewin = GetTraceWindow;
    GetTrace = GetTraceWindow;
    gettrace = GetTraceWindow;
    #
    # Get any MULTI Help Viewer window from the given window list or the 
    # current window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetHelpViewerWindow(self, winName="", pid=0, fromWinList=None,
			notInWinList=None,
			warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
			getattr(ghs_constants.winClassNames, "helpViewer", ""),
			"", pid, fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No MULTI Help Viewer is found.");
	    return None;
    # Define some aliases for the function
    gethelpviewerwindow = GetHelpViewerWindow;
    GetHelpViewer = GetHelpViewerWindow;
    gethelpviewer = GetHelpViewerWindow;
    GetHv = GetHelpViewerWindow;
    gethv = GetHelpViewerWindow;

    #
    # Get any dialog by name in the given window list or the  current
    # window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetDialogByName(self, winName="", pid=0, fromWinList=None,
			notInWinList=None, warnIfNotFound=True):
	obj = self.CheckWindow(winName, "",
				getattr(ghs_constants.winClassNames, "dialog", ""),
				"", pid,
				fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No dialogue with the name is found.");
	    return None;
    # Define some aliases for the function
    getdialogbyname = GetDialogByName;
    GetDlgByName = GetDialogByName;
    getdlgbyname = GetDialogByName;
    GetDialog = GetDialogByName;
    getdialog = GetDialogByName;
    GetDlg = GetDialogByName;
    getdlg = GetDialogByName;

    #
    # Get any window by name in the given window list or the  current
    # window list.
    #
    # The value for "winName" can be regular expression.
    #
    # GHS: Validated
    #
    def GetWindowByName(self, winName="", pid=0, fromWinList=None,
			notInWinList=None, warnIfNotFound=True):
	obj = self.CheckWindow(winName, "", "", "", pid,
				fromWinList, notInWinList);
	if obj:
	    return obj;
	else:
	    if warnIfNotFound:
		print("No window with the name is found.");
	    return None;
    # Define some aliases for the function
    getwindowbyname = GetWindowByName;
    GetWinByName = GetWindowByName;
    getwinbyname = GetWindowByName;
    GetWindow = GetWindowByName;
    getwindow = GetWindowByName;
    GetWin = GetWindowByName;
    getwin = GetWindowByName;




    #
    # Show a message in dialog.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ShowMessage(self, msg, hostWin=None):
	self.CleanCmdExecVariables();
	if not msg:
	    return False;
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return False;
	ret = hostWin.ShowMessage(msg, True, False, False);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    showmessage = ShowMessage;
    ShowMsg = ShowMessage;
    showmsg = ShowMessage;
    DisplayMessage = ShowMessage;
    displaymessage = ShowMessage;
    DisplayMsg = ShowMessage;
    displaymsg = ShowMessage;
    #
    # Choose yes or no.
    #
    # For default choice: 1 for yes, and 0 for no.
    #
    # Return True(yes) or False(no).
    #
    # GHS: Validated
    #
    def ChooseYesNo(self, msg, dftChoice=0, printOutput=True, hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return False;
	ret = hostWin.ChooseYesNo(msg, dftChoice, printOutput);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    chooseyesno = ChooseYesNo;
    YesNo = ChooseYesNo;
    yesno = ChooseYesNo;
    YesOrNo = ChooseYesNo;
    yesorno = ChooseYesNo;
    #
    # Get input from dialogue.
    #
    # In the value list ("valList"), you can use element "\x01" to display
    # a menu separator.
    #
    # Return the input string, or "" on failure/cancel.
    #
    # GHS: Validated
    #
    def GetInput(self, dftValue="", valList=[], onlyFromList=False,
		    prompt="Your input", title="", helpkey="",
		    hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return "";
	ret = hostWin.GetInput(dftValue, valList, onlyFromList,
				prompt, title, helpkey);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    getinput = GetInput;
    #
    # Choose a value from a list.
    # Each string in the value list could consist a set of column values
    # which are separated by column value separator.
    # If multiple columns are specified, the returned string is the value of
    # the first column(in the order specified in the function, not from the
    # GUI, because the column order could be changed by user).
    #
    # No new line is allowed in the string values.
    #
    # Return the selected string from the list, or "" on failure/cancel.
    #
    # GHS: Validated
    #
    def ChooseFromList(self, dftValueIdx=0, valList=[],
		    colValueSep="", colNames=[], 
		    prompt="Select value from the list:",
		    title="Choose Value from List", helpkey="",
		    hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return "";
	ret = hostWin.ChooseFromList(dftValueIdx, valList, colValueSep,
				     colNames, prompt, title, helpkey);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    choosefromlist = ChooseFromList;
    #
    # Choose a window from a window list.
    #
    # GHS: Validated
    #
    def ChooseWindowFromGui(self, msg="Choose a window:",
			    title="Choose Window from List",
			    wins=None, hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("There is no window in the system.");
	    return None;
	ret = hostWin.ChooseWindowFromGui(msg, title, wins);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    choosewindowfromgui = ChooseWindowFromGui;
    ChooseWindow = ChooseWindowFromGui;
    choosewindow = ChooseWindowFromGui;
    ChooseWin = ChooseWindowFromGui;
    choosewin = ChooseWindowFromGui;
    #
    # Get a directory via MULTI's dir chooser.
    #
    # Return the selected directory or "" on failure/cancel.
    #
    # GHS: Validated
    #
    def ChooseDir(self, dftDir="", prompt="Choose directory:",
	title="Directory Chooser", hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return "";
	if not title:
	    title = prompt;
	ret = hostWin.ChooseDir(dftDir, prompt, title);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    choosedir = ChooseDir;
    DirChooser = ChooseDir;
    dirchooser = ChooseDir;
    #
    # Get a file path via MULTI's file chooser.
    #
    # Return the selected file path or "" on failure/cancel.
    #
    # GHS: Validated
    #
    def ChooseFile(self, dftFile="", dftDir="", 
	    label="OK",
	    forOpen=True,
	    existingFile=False,
	    extension="",
	    fileTypes="",
	    eraseFilenameWhenDirChange=False,
	    title="File Chooser",
	    hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return "";
	ret = hostWin.ChooseFile(dftFile, dftDir, label, forOpen,
			      existingFile, extension, fileTypes,
			      eraseFilenameWhenDirChange, title);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    choosefile = ChooseFile;
    FileChooser = ChooseFile;
    filechooser = ChooseFile;
    #
    # Beep.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def Beep(self, count=1, block=False, hostWin=None):
	self.CleanCmdExecVariables();
	if not hostWin or not isinstance(hostWin, ghs_window.GHS_Window):
	    hostWin = self.GetWindowByIndex(0);
	if not hostWin:
	    print("A host window is needed.");
	    return False;
	ret = hostWin.Beep(count, block);
	self.CleanCmdExecVariables(hostWin.cmdExecStatus,
				   hostWin.cmdExecOutput,
				   hostWin.cmdExecObj,
				   hostWin.cmdExecPath);
	return ret;
    # Define some aliases for the function
    beep = Beep;



    #
    # Create object from the parsed result tuple.
    #
    # GHS: Validated (internal use only)
    #
    def CreateObjectFromParsedResultTuple(self, parseRes, waitSec=0):
	if not parseRes:
	    return None;
	obj = None;
	if parseRes[0] and (parseRes[0].find("debugger") >= 0 or parseRes[0].find("debugserver") >= 0):
	    if re.match("^\s*debugserver", parseRes[0]):
		obj = ghs_dbserver.GHS_DebugServer(parseRes[0],
						   parseRes[1],
						   parseRes[2],
						   parseRes[3],
						   parseRes[4]);
	    elif parseRes[1]:
		obj = ghs_debugger_window.GHS_DebuggerWindow(parseRes[0],
					parseRes[1],
					parseRes[2],
					parseRes[3],
					parseRes[4]);
	elif parseRes[1]:
	    obj = self.CreateWindowObject(parseRes[1],
					    parseRes[2],
					    parseRes[3],
					    parseRes[4]);

	if waitSec < 0.0:
	    return obj;
	elif waitSec == 0:
	    waitSec = self.maxSecToWaitForNewWindow;
	if obj and isinstance(obj, ghs_window.GHS_Window) and obj.windowId:
	    # Wait for the window to be registered.
	    newObj = self.WaitForWindow(None,
				    waitSec,
				    "",
				    obj.winRegSvcName,
				    "",
				    int(obj.windowId, 0));
	    # Use the old object if it contains component name: dbserv or
	    # debugger window. Don't use the new one in the cases, because
	    # the component is still useful.
	    if not obj.component:
		obj = newObj;

	return obj;
    #
    # Parse outputs for MULTI IDE object.
    #
    # GHS: Validated (internal use only)
    #
    def ParseOutputsFromMultiIdeService(self, printOutput):
	parseRes = GHS_ParseObjectIds(self.cmdExecOutput);
	self.cmdExecOutput = parseRes[5];
	self.cmdExecObj = self.CreateObjectFromParsedResultTuple(parseRes);
	if printOutput and self.cmdExecOutput:
	    if re.match("\n$", self.cmdExecOutput):
		print("%s" % self.cmdExecOutput),
	    else:
		print("%s" % self.cmdExecOutput);
    #
    # Route GUI commands to Window
    #
    # The command and its arguments are given as a list.
    #
    # The function is only used for run GUI widget related commands (__dumpgui
    # and __modgui), and it is always executed in blocking mode.
    #
    # Arguments:
    #	 cmdInList	a list of commands to be executed.
    #    block		indicates if to execute the command in block mode and
    #			grabs the outputs back.
    #    printOutput	indicates whether or not to print the outputs (if any)
    #			from the MULTI debugger.
    #	 winName	name of the window on which to execute command.
    #	 winId		id of the window on which to execute command.
    #	 winClass	class of the window on which to execute command.
    #	 winRegSvcName	window register service name of the window on which to
    #			execute command.
    #    keepRawOutput  indicates if to keep the raw output, which is used by
    #			MULTI Python Integration to transfer some special
    #			information.
    #			The flag is majorly for testing purpose. Usually, it 
    #			should not be turned on.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (deprecated)
    #
    def RunCommandInList(self, cmdInList, block, printOutput,
			 winName, winId, winClass, winRegSvcName,
			 keepRawOutput=False):
	#Removeme
	#print("Run command via Window Register: %s" % string.join(cmdInList));
	self.CleanCmdExecVariables();
	if self.service:
	    self.cmdExecStatus = 1;
	    # The high 8 bits of output mask are reserved for validation etc.
	    self.cmdExecOutput = \
		    self.service.RouteTestMessageToWindow(winRegSvcName, 
 						          winClass,
						          winName,
							  int(winId, 0),
						          cmdInList,
							  0x0fffffff);
	    # Parse outputs for MULTI IDE objects.
	    if not keepRawOutput:
		self.ParseOutputsFromMultiIdeService(printOutput);
	    return True;
	else:
	    self.cmdExecStatus = 0;
	    print("%s is not successfully connected." % self.serviceName);
	    return False;
    # Define some aliases for the function
    runcommandinlist = RunCommandInList;
    RunCmdInList = RunCommandInList;
    runcmdinlist = RunCommandInList;
    #
    # Route GUI commands to Window
    #
    # Arguments:
    #	 cmds		commands to be executed.
    #    block		indicates if to execute the command in block mode and
    #			grabs the outputs back.
    #    printOutput	indicates whether or not to print the outputs (if any)
    #			from the MULTI debugger.
    #	 winName	name of the window on which to execute command.
    #	 winId		id of the window on which to execute command.
    #	 winClass	class of the window on which to execute command.
    #	 winRegSvcName	window register service name of the window on which to
    #			execute command.
    #    keepRawOutput  indicates if to keep the raw output, which is used by
    #			MULTI Python Integration to transfer some special
    #			information.
    #			The flag is majorly for testing purpose. Usually, it 
    #			should not be turned on.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (internal use only)
    #
    def RunCommands(self, cmds, block, printOutput,
		    winName, winId, winClass, winRegSvcName,
		    keepRawOutput=False):
	self.CleanCmdExecVariables();
	if not self.service:
	    self.cmdExecStatus = 0;
	    print("Window register service is not up.");
	    return False;
	if self.debugFlag:
	    if block:
		print("++++ Via Window Register( b): %s" % cmds);
	    else:
		print("++++ Via Window Register(nb): %s" % cmds);
	self.cmdExecStatus = 1;
	if block:
	    # The high 8 bits of output mask are reserved for validation etc.
	    if self.useNewNonBlockingMsg:
		self.waitingCookie = self.nextCookie;
		# Adjust next cookie number.
		self.nextCookie += 1;
		if not self.nextCookie:
		    self.nextCookie = 1;

		self.service.RouteCommandToWindow(winRegSvcName, 
						  winClass,
						  winName,
						  int(winId, 0),
						  cmds,
						  None,
						  self.waitingCookie,
						  True,
						  True,
						  0x0fffffff,
						  not self.safeMode);
		# The timeout is in milliseconds. Make it block forever with a
		# big number.
		goon = True;
		triedCount = 0;
		while goon:
		    result = self.service.expect("CommandReply", sys.maxint, 100, 0);
		    triedCount = triedCount+1;
		    if not result or len(result) != 3:
			return False;
	
		    if isinstance(result[0], int):
			cookieNum = result[0];
		    else:
			cookieNum = int(result[0], 0);
		    if self.waitingCookie == cookieNum:
			goon = False;
		    elif triedCount > 1000:
			goon = False;
			print("Unknown cookie %d while is waiting for cookie %d" %
			    (result[0], self.waitingCookie));
		    elif self.waitingCookie != 0 and cookieNum != self.waitingCookie:
			# The result is the remains from an aborted execution?
			goon = True;
		    else:
			goon = False;
		self.waitingCookie = 0;

		if isinstance(result[1], int):
		    self.cmdExecStatus = result[1];
		else:
		    self.cmdExecStatus = int(result[1], 0);
    
		if isinstance(result[2], str):
		    self.cmdExecOutput = result[2];
		else:
		    self.cmdExecOutput = str(result[2]);	    
	    else:
		(self.cmdExecStatus, self.cmdExecOutput) = \
		    self.service.RouteCommandToWindowInBlockingMode(winRegSvcName, 
								    winClass,
								    winName,
								    int(winId, 0),
								    cmds,
								    0x0fffffff);
	    # Parse outputs for MULTI IDE objects.
#	    if self.debugFlag:
#		print("     Raw Output: %s" %
#			(GHS_QuoteString(self.cmdExecOutput)));
	    if not keepRawOutput:
		self.ParseOutputsFromMultiIdeService(printOutput);
        else:
	    if self.useNewNonBlockingMsg:
		self.service.RouteCommandToWindow(winRegSvcName, 
						  winClass,
						  winName,
						  int(winId, 0),
						  cmds,
						  None,
						  0,
						  False,
						  False,
						  0,
						  not self.safeMode);
	    else:
		self.service.RouteCommandToWindowInNonBlockingMode(winRegSvcName, 
								winClass,
								winName,
								int(winId, 0),
								cmds);
	if self.debugFlag:
	    print("     Status: %d, Created Object: %s, Output: %s" %
		    (self.cmdExecStatus, str(self.cmdExecObj), self.cmdExecOutput));
	return True;
    # Define some aliases for RunCommands function
    runcommands = RunCommands;
    RunCommand = RunCommands;
    runcommand = RunCommands;
    RunCmd = RunCommands;
    runcmd = RunCommands;
    RunCmds = RunCommands;
    runcmds = RunCommands;



    #
    # Check if a GHS_Window object exists in the system, if yes,
    # return a GHS_Window object, otherwise, return None.
    #
    # GHS: Validated
    #
    def CheckWindowObject(self, winObj):
	if not winObj or not isinstance(winObj, ghs_window.GHS_Window):
	    return None;
	return self.CheckWindow(winObj.windowName,
				winObj.windowId,
				winObj.winClassName,
				winObj.winRegSvcName);
    # Define some aliases for CheckWindowObject function
    checkwindowobject = CheckWindowObject;
    CheckWindowObj = CheckWindowObject;
    checkwindowobj = CheckWindowObject;
    CheckWinObj = CheckWindowObject;
    checkwinobj = CheckWindowObject;
    #
    # Check if a window is in a window list, which is got from MULTI Window
    # Register, not a Python list.
    #
    # GHS: Validated
    #
    def IsWindowInList(self, winList, winName, winId=0, winClass="",
			pid=0, winRegSvcName=""):
	if not winList:
	    return False;

	for win in winList["winInfo"]:
	    if pid and pid != win["pid"]:
		continue;
	    if winRegSvcName and winRegSvcName != win["serviceName"]:
		continue;
	    if winClass and winClass != win["className"]:
		continue;
	    if winId:
		if winId != win["win"]:
		    continue;
	    elif winName:
		if winName != win["windowName"] and \
		    not re.search(winName, win["windowName"]):
		    continue;

	    return True;

	return False;
    # Define some aliases for the function
    iswindowinlist = IsWindowInList;
    IsWinInList = IsWindowInList;
    iswininlist = IsWindowInList;
    #
    # Check if a window is in "fromWinList" and not in "notInWinList".
    # If yes, return a GHS_Window object, otherwise, return None.
    #
    # The value for "winName" can be regular expression.
    #
    # If "fromWinList" is None, the current window list is used.
    #
    # GHS: Validated
    #
    def CheckWindow(self, winName, winId=0, winClass="",
		    winRegSvcName="", pid=0, fromWinList=None, notInWinList=None):
	if not isinstance(winId, int):
	    if winId:
		winId = str(winId);
		winId = int(winId, 0);
	    else:
		winId = 0;
	if not fromWinList:
	    fromWinList = self.service.GetWindowList();
	if not winClass or winClass == "None" or winClass == "NULL":
	    winClass = None;
	for win in fromWinList["winInfo"]:
	    if pid and pid != win["pid"]:
		continue;
	    if winRegSvcName and winRegSvcName != win["serviceName"]:
		continue;
	    if winClass and winClass != win["className"]:
		continue;

	    if winId:
		if winId != win["win"]:
		    continue;
	    elif winName:
		if winName != win["windowName"] and \
		    not re.search(winName, win["windowName"]):
		    continue;

	    if self.IsWindowInList(notInWinList, win["windowName"],
				   win["win"], win["className"],
				   win["pid"],
				   win["serviceName"]):
		continue;

	    # return the window.
	    return self.CreateWindowObject(win["windowName"],
					    str(hex(win["win"])),
					    win["className"],
					    win["serviceName"]);

	# We scanned all windows, no match.
	return None;
    # Define some aliases for the function
    checkwindow = CheckWindow;
    CheckWin = CheckWindow;
    checkwin = CheckWindow;
    #
    # Find all windows in "fromWinList" and not in "notInWinList".
    #
    # The value for "winName" can be regular expression.
    #
    # If "fromWinList" is None, the current window list is used.
    #
    # GHS: Validated (internal use only)
    #
    def CheckWindows(self, winName, winId=0, winClass="",
		    winRegSvcName="", pid=0, fromWinList=None, notInWinList=None):
	if not isinstance(winId, int):
	    if winId:
		winId = str(winId);
		winId = int(winId, 0);
	    else:
		winId = 0;
	if not fromWinList:
	    fromWinList = self.service.GetWindowList();
	if not winClass or winClass == "None" or winClass == "NULL":
	    winClass = None;
	ret = [];
	for win in fromWinList["winInfo"]:
	    if pid and pid != win["pid"]:
		continue;
	    if winRegSvcName and winRegSvcName != win["serviceName"]:
		continue;
	    if winClass and winClass != win["className"]:
		continue;

	    if winId:
		if winId != win["win"]:
		    continue;
	    elif winName:
		if winName != win["windowName"] and \
		    not re.search(winName, win["windowName"]):
		    continue;

	    if self.IsWindowInList(notInWinList, win["windowName"],
				   win["win"], win["className"],
				   win["pid"],
				   win["serviceName"]):
		continue;

	    # The window matches the criteria.
	    ret.append(self.CreateWindowObject(win["windowName"],
					    str(hex(win["win"])),
					    win["className"],
					    win["serviceName"]));

	# We scanned all windows.
	return ret;
    # Define some aliases for the function
    checkwindows = CheckWindows;
    CheckWins = CheckWindows;
    checkwins = CheckWindows;
    #
    # Wait for a window to show up and register.
    #
    # If no old window list information is given, any window satisfying
    # the requirement will be returned.
    # If an old window list informaiton is given, any window not in the
    # old window list and satisfying the requirement will be returned.
    #
    # If duration is a negavive number, we will wait for the expected
    # window forever until we get it.
    # If duration is 0.0, we only check the window once.
    # If duration is a positive number, we will wait for that number of seconds
    # at most.
    #
    # GHS: Validated (via other functions, like ghs_builder.OpenProject etc)
    #
    def WaitForWindow(self, oldWinListInfo, duration=0.0,
		      winClass="", winRegSvcName="",
		      winName="", winId=0, warnIfNotFound=False):
        goon = True;
        if duration > 0.0:
	    endTime = time.time()+duration;
	while goon:
	    wins = self.GetWindowList(False);
	    obj = self.CheckWindow(winName, winId, winClass, winRegSvcName,
				   0, wins, oldWinListInfo);
	    if obj:
		return obj;
	    # Check if we should continue
	    if duration == 0.0:
		# Only check once
		goon = False;
	    elif duration > 0.0:
		goon = (time.time() < endTime);
	    if goon:
		# We sleep after checking so that we don't miss one checking.
		time.sleep(self.checkInterval);
	# Timeout, no match.
	if warnIfNotFound:
	    print("Did not see the expected new window to show up.");
	return None;
    # Define some aliases for the function
    waitforwindow = WaitForWindow;
    WaitWindow = WaitForWindow;
    waitwindow = WaitForWindow;
    WaitWin = WaitForWindow;
    waitwin = WaitForWindow;
    
    #
    # Wait for a window from a certain class to show up and register.
    #
    # If no old window list information is given, any window satisfying
    # the requirement will be returned.
    # If an old window list informaiton is given, any window not in the
    # old window list and satisfying the requirement willl be returned.
    #
    # If duration is a negavive number, we will wait for the expected
    # window forever until we get it.
    # If duration is 0.0, we only check the window list once.
    # If duration is a positive number, we will wait for that number of seconds
    # at most.
    #
    # GHS: Validated
    #
    def WaitForWindowFromClass(self, oldWinListInfo, duration=0.0,
		      winClass="", winRegSvcName="", warnIfNotFound=False):
	return self.WaitForWindow(oldWinListInfo, duration,
				  winClass, winRegSvcName,
				  "", 0, warnIfNotFound);
    # Define some aliases for the function
    waitforwindowfromclass = WaitForWindowFromClass;
    WaitWinFromClass = WaitForWindowFromClass;
    waitwinfromclass = WaitForWindowFromClass;

    #
    # Wait for window to unregister and disappear.
    #
    # If "notInWinList" is specified, the window from the list will not be
    # considered.
    #
    # If duration is a negavive number, we will wait for the window to
    # disappear forever.
    # If duration is 0.0, we only check the window list once.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # Return True if the specified window (not from "notInWinList") disappears,
    # False otherwise.
    #
    # GHS: Validated
    #
    def WaitForWindowGoAway(self, duration, winName, winId=0, winClass="",
			    winRegSvcName="", pid=0, notInWinList=None):
        goon = True;
        if duration > 0.0:
	    endTime = time.time()+duration;
	while goon:
	    wins = self.GetWindowList(False);
	    obj = self.CheckWindow(winName, winId, winClass, winRegSvcName,
				   pid, wins, notInWinList);
	    if not obj:
		return True;
	    # Check if we should continue
	    if duration == 0.0:
		# Only check once
		goon = False;
	    elif duration > 0.0:
		goon = (time.time() < endTime);
	    if goon:
		# We sleep after checking so that we don't miss one checking.
		time.sleep(self.checkInterval);
	# Timeout, the window still exists
	return False;
    # Define some aliases for the function
    waitforwindowgoaway = WaitForWindowGoAway;
    WaitForWinGoAway = WaitForWindowGoAway;
    waitforwingoaway = WaitForWindowGoAway;
    #
    # Wait for window to disappear.
    # If "notInWinList" is specified, the window from the list will not be
    # considered.
    #
    # Return True if the specified window (not from "notInWinList") disappears,
    # False otherwise.
    #
    # GHS: Validated
    #
    def WaitForWindowObjectGoAway(self, winObj, duration=0.0,
				  notInWinList=None):
	if not winObj:
	    return True;
	if not isinstance(winObj, ghs_window.GHS_Window):
	    print("Given object is not a GHS_Window object.");
	    return False;

	return self.WaitForWindowGoAway(duration,
					winObj.windowName,
					winObj.windowId,
					winObj.winClassName,
					winObj.winRegSvcName,
					0,
					notInWinList);
    # Define some aliases for the function
    waitforwindowobjectgoaway = WaitForWindowObjectGoAway;
    WaitForWinObjGoAway = WaitForWindowObjectGoAway;
    waitforwinobjgoaway = WaitForWindowObjectGoAway;
	



# Define some aliases for GHS_WindowRegister class
ghs_windowregister = GHS_WindowRegister;
#GHS_WINDOWREGISTER = GHS_WindowRegister;
#Ghs_Windowregister = GHS_WindowRegister;
#
#ghs_windregister = GHS_WindowRegister;
#GHS_WINDREGISTER = GHS_WindowRegister;
#Ghs_Windregister = GHS_WindowRegister;
#
#ghs_winregister = GHS_WindowRegister;
#GHS_WINREGISTER = GHS_WindowRegister;
#Ghs_Winregister = GHS_WindowRegister;

