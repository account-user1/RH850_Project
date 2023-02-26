import ghs_window;
import ghs_debugger;
import ghs_winreg;
import ghs_debugger_api;
import ghs_misc;
from ghs_util import *;

##############################################################################
#
#
# GHS_DebugServer class
#
#
##############################################################################



class GHS_DebugServer(ghs_window.GHS_Window, ghs_debugger_api.GHS_DebuggerApi):
    """ Describe a debug server's information, which include
	    windowName  - the Task Manager window's name (if applicable)
	    windowId    - the Task Manager window's ID (if applicable)
    """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, component, winName="", winId="",
		 winClassName="", winRegSvcName=""):
	ghs_window.GHS_Window.__init__(self, component,
				       winName, winId,
				       winClassName, winRegSvcName);
	# Keep a debugger for myself.
	self.myDebugger = ghs_misc.GetGlobal("debugger");
	if not self.myDebugger:
	    self.myDebugger = ghs_debugger.GHS_Debugger();
	    ghs_misc.SetGlobal("debugger", self.myDebugger);

    #
    # Run commands.
    #
    # A general function to run commands on the debug server.
    #
    # Arguments:
    #	 cmds		commands to be executed.
    #    block		indicates if to execute the command in block mode and
    #			grabs the outputs back.
    #    printOutput	indicates whether or not to print the outputs (if any)
    #			from the MULTI debugger server.
    #    keepRawOutput  indicates if to keep the raw output, which is used by
    #			MULTI Python Integration to transfer some special
    #			information.
    #			The flag is majorly for testing purpose. Usually, it 
    #			should not be turned on.
    #
    # Return an object for Debugserver, Task, Window or None,
    # the status and output string are kept in global variables.
    #
    # GHS: Validated
    #
    def RunCommands(self, cmds, block=True, printOutput=True,
		    keepRawOutput=False):
	if not cmds:
	    self.CleanCmdExecVariables();
	    return True;

	if self.forceRunCmdViaWin and self.IsInitializedWithGuiWindow():
	    runCmdViaWin = True;
	else:
	    runCmdViaWin = True;
	    if not ghs_misc.CheckGlobal("__ghs_shared_debugger_window"):
		if self.myDebugger.RunCommands("__debugflag -q NewTargetWindow",
						True,
						False,
						False):
		    ghs_misc.SetGlobal("__ghs_shared_debugger_window",
					GHS_GeneralTrueOrFalse(self.cmdExecOutput));
		    if ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
			runCmdViaWin = False;
		else:
		    print("Failed to check if the debugger is running in new target mode.");
	    elif ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
		runCmdViaWin = False;

	if runCmdViaWin and self.IsWindowAlive():
	    return ghs_window.GHS_Window.RunCommands(self,
						     cmds,
						     block,
						     printOutput,
						     keepRawOutput);
	elif self.component:
	    cmds = "route "+self.component+" forward_to_pr {"+cmds+"}";
	# Warning if no component?
	ret = self.myDebugger.RunCommands(cmds,
					block,
					printOutput,
					keepRawOutput);
	self.CleanCmdExecVariables(self.myDebugger.cmdExecStatus,
				   self.myDebugger.cmdExecOutput,
				   self.myDebugger.cmdExecObj);
	# Begin debugging code
	self.cmdExecPath = "Via DebugServer: " + cmds;
	# End debugging code
	self.myDebugger.CleanCmdExecVariables();
	return ret and self.cmdExecStatus == 1;
    # Define some aliases for RunCommands function
    runcommands = RunCommands;
    RunCommand = RunCommands;
    runcommand = RunCommands;
    RunCmd = RunCommands;
    runcmd = RunCommands;
    RunCmds = RunCommands;
    runcmds = RunCommands;
    #
    # Disconnect from the debug server.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def Disconnect(self, printOutput=True):
	if not self.component:
	    print("The debug server is not connected.");
	    return False;
	ret = self.RunCommands("disconnect", True, printOutput);
	self.component = "";
	return ret;
    # Define some aliases for Disconnect function
    disconnect = Disconnect;
    #
    # Show task manager window (if any) for the debug server.
    #
    # Return the object for the Task Window (success on run-mode environment)
    # or OSA Explorer (success on some freeze-mode environment) or
    # None (failure).
    #
    # GHS: Validated (manually)
    #
    def ShowTaskManagerWindow(self):
	if not self.component:
	    print("The debug server is not connected.");
	    return None;

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	# With NTW on, the debugger window information is transferred
	# to Python side when a lot of MULTI commands are executed,
	# so explicitly get the task manager window.
	if 0 and self.IsWindowAlive() and \
	    winreg.CheckWindowObject(self):
	    return self;
	# Restart the task window.
	ret = self.RunCommands("TaskWindow", True, True);
	if ret and \
	   self.cmdExecObj and \
	   isinstance(self.cmdExecObj, ghs_window.GHS_Window):
	    self.windowName = self.cmdExecObj.windowName;
	    self.windowId = self.cmdExecObj.windowId;
	    self.winClassName = self.cmdExecObj.winClassName;
	    self.winRegSvcName = self.cmdExecObj.winRegSvcName;
	return self.cmdExecObj;
    # Define some aliases for the function
    showtaskmanagerwindow = ShowTaskManagerWindow;
    ShowTaskWindow = ShowTaskManagerWindow;
    showtaskwindow = ShowTaskManagerWindow;
    ShowTaskWin = ShowTaskManagerWindow;
    showtaskwin = ShowTaskManagerWindow;
    TaskWindow = ShowTaskManagerWindow;
    taskwindow = ShowTaskManagerWindow;
    TaskWin = ShowTaskManagerWindow;
    taskwin = ShowTaskManagerWindow;
    #
    # Load program.
    #
    # Return True (on success) or False (failure).
    #
    # GHS: Validated (manually)
    #
    def LoadProgram(self, progName="", block=True):
	if progName:
	    cmd = "load " + progName;
	else:
	    cmd = "load";
	self.RunCommands(cmd, True);
	return self.cmdExecStatus == 1;
    # Define some aliases for Disconnect function
    loadprogram = LoadProgram;
    LoadProg = LoadProgram;
    loadprog = LoadProgram;
    LoadModule = LoadProgram;
    loadmodule = LoadProgram;
    Load = LoadProgram;
    load = LoadProgram;
    #
    # Return the debug server's component name.
    #
    # GHS: Validated (manually)
    #
    def GetComponent(self):
	return self.component;
    # Define some aliases for GetComponent function
    getcomponent = GetComponent;

    ##########################################################################
    #
    # More APIs......
    #
    ##########################################################################

# Define some aliases for GHS_Task class
#ghs_debugserver = GHS_DebugServer;
#GHS_DEBUGSERVER = GHS_DebugServer;
#Ghs_DebugServer = GHS_DebugServer;
#Ghs_Debugserver = GHS_DebugServer;
