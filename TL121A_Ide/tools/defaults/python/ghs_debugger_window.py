import ghs_window;
import ghs_winreg;
import ghs_debugger_api;
import ghs_debugger;
import ghs_misc;
from ghs_util import *;


class GHS_DebuggerWindow(ghs_window.GHS_Window, ghs_debugger_api.GHS_DebuggerApi):
    """ Describe information for MULTI Debugger window. """
    targetListWidget = "mslTargets";

    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, compName="", wn="", wid="0", className="",
		 regSvcName="", service=""):
	ghs_window.GHS_Window.__init__(self, compName, wn, wid, className,
				       regSvcName, service);
	# Keep a debugger for myself.
	self.myDebugger = ghs_misc.GetGlobal("debugger");
	self.forceRunCmdViaWin = True;
	if not self.myDebugger:
	    self.myDebugger = ghs_debugger.GHS_Debugger();
	    ghs_misc.SetGlobal("debugger", self.myDebugger);


    #
    # Run commands.
    #
    # Arguments:
    #	 cmds		commands to be executed.
    #    block		indicates if to execute the command in block mode and
    #			grabs the outputs back.
    #    printOutput	indicates whether or not to print the outputs (if any)
    #			from the MULTI debugger.
    #    keepRawOutput  indicates if to keep the raw output, which is used by
    #			MULTI Python Integration to transfer some special
    #			information.
    #			The flag is majorly for testing purpose. Usually, it 
    #			should not be turned on.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def RunCommands(self, cmds, block=True, printOutput=True,
		    keepRawOutput=False):
	if self.forceRunCmdViaWin and self.IsInitializedWithGuiWindow():
	    runCmdViaWin = True;
	else:
	    runCmdViaWin = True;
	    if not ghs_misc.CheckGlobal("__ghs_shared_debugger_window"):
		if ghs_window.GHS_Window.RunCommands(self,
						     "__debugflag -q NewTargetWindow",
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

	if (not self.component) or runCmdViaWin:
	    return ghs_window.GHS_Window.RunCommands(self,
						     cmds,
						     block,
						     printOutput,
						     keepRawOutput);
	else:
	    cmds = "route "+self.component+" {"+cmds+"}";
	    ret = self.myDebugger.RunCommands(cmds,
						block,
						printOutput,
						keepRawOutput);
	    self.CleanCmdExecVariables(self.myDebugger.cmdExecStatus,
				       self.myDebugger.cmdExecOutput,
				       self.myDebugger.cmdExecObj);
	    # Begin debugging code
	    self.cmdExecPath = self.myDebugger.cmdExecPath;
	    # End debugging code

	
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
    # Print the file/content in the debugger's source pane.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def PrintFile(self, block=True, printOutput=True):
	return self.RunCommands("dbprint f", block, printOutput);
    # Define some aliases for the function
    printfile = PrintFile;
    Print = PrintFile;
    #print = PrintFile;
    #
    # Print the content in the debugger's source pane.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def PrintWindow(self, block=True, printOutput=True):
	return self.RunCommands("dbprint w", block, printOutput);
    # Define some aliases for the function
    printwindow = PrintWindow;
    PrintWin = PrintWindow;
    printwin = PrintWindow;
    #
    # Dump the file/content in the debugger's source pane into a text file.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def DumpToFile(self, fileName="", block=True, printOutput=True):
	cmd = 'dumpfile';
	if fileName:
	    cmd = cmd + ' ' + GHS_QuotifyString(fileName);
	return self.RunCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumptofile = DumpToFile;



    #
    # Set Breakpoint.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def SetBreakpoint(self, location="", bpType="", grabOutput=False):
	cmd = "b";
	if bpType:
	    cmd = cmd + " /type_" + str(bpType);
	if location:
	    cmd = cmd + " " + str(location);
	return self.RunCommands(cmd, grabOutput, True);
    # Define some aliases for the function
    setbreakpoint = SetBreakpoint;
    SetBp = SetBreakpoint;
    setbp = SetBreakpoint;
    #
    # Set group breakpoint.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated (manually)
    #
    def SetGroupBreakpoint(self, location="", hitGrp="", haltGrp="",
			    grabOutput=False):
	if not hitGrp and not haltGrp:
	    # it is a normal break point
	    return self.SetBreakpoint(location, "", grabOutput);
	cmd = "b /type_gt ";
	if hitGrp:
	    cmd = cmd + "@\"" + hitGrp + "\" ";
	if haltGrp:
	    cmd = cmd + "/trigger @\"" + haltGrp + "\" ";
	if location:
	    cmd = cmd + str(location);
	return self.RunCommands(cmd, grabOutput, True);
    # Define some aliases for the function
    setgroupbreakpoint = SetGroupBreakpoint;
    SetGrpBp = SetGroupBreakpoint;
    setgrpbp = SetGroupBreakpoint;
    #
    # Remove Breakpoint.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def RemoveBreakpoint(self, location="", grabOutput=False):
	if location:
	    cmd = "d " + location;
	else:
	    cmd = "D";
	return self.RunCommands(cmd, grabOutput, True);
    # Define some aliases for the function
    removebreakpoint = RemoveBreakpoint;
    RemoveBp = RemoveBreakpoint;
    removebp = RemoveBreakpoint;
    RmBp = RemoveBreakpoint;
    rmbp = RemoveBreakpoint;

    #
    # Show breakpoints.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated
    #
    def ShowBreakpoints(self, block=True, printOutput=True):
	return self.RunCommands("B", block, printOutput);
    # Define some aliases for the function
    showbreakpoints = ShowBreakpoints;
    ShowBps = ShowBreakpoints;
    showbps = ShowBreakpoints;

    #
    # Show breakpoint window.
    #
    # Return a GHS_Window object for the breakpoint window.
    #
    # GHS: Validated
    #
    def ShowBreakpointWindow(self, block=True):
	if self.RunCommands("breakpoints", block, True):
	    return self.cmdExecObj;
	else:
	    return None;
    # Define some aliases for the function
    showbreakpointwindow = ShowBreakpointWindow;
    ShowBpWin = ShowBreakpointWindow;
    showbpwin = ShowBreakpointWindow;




    ##########################################################################
    #
    # More APIs......
    #
    ##########################################################################



# Define some aliases for the class
#ghs_debuggerwindow = GHS_DebuggerWindow;
#GHS_DEBUGGERWINDOW = GHS_DebuggerWindow;
#Ghs_DebuggerWindow = GHS_DebuggerWindow;
