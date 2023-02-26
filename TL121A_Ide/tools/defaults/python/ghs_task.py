import ghs_window;
import ghs_debugger_window;
import ghs_debugger;
from ghs_util import *;


    
##############################################################################
#
#
# GHS_Task class
#
#
##############################################################################



class GHS_Task(ghs_debugger_window.GHS_DebuggerWindow):
    """ Describe a task's information: component, ID or name. """
    #
    # Initialize object
    #
    # GHS: Validated (manually)
    #
    def __init__(self, dbcomponent, addressSpace, taskIdOrName,
		 taskComponent="",
		 wn="", wid="0", cn="", regSvcName=""):
	ghs_debugger_window.GHS_DebuggerWindow.__init__(self,
							taskComponent,
							wn,
							wid, cn, regSvcName,
							"");
	self.debugServerComponent = dbcomponent;
	self.addressSpace = addressSpace;
	self.idOrName = taskIdOrName;
	# Keep a debugger for myself.
	self.myDebugger = ghs_misc.GetGlobal("debugger");
	if not self.myDebugger:
	    self.myDebugger = ghs_debugger.GHS_Debugger();
	    ghs_misc.SetGlobal("debugger", self.myDebugger);
	self.forceRunCmdViaWin = False;

    #
    # Get task info for MULTI command.
    #
    # GHS: Validated (internal use only)
    #
    def GetTaskInfoForMultiCmd(self):
	ret = "";
	if self.addressSpace:
	    if self.addressSpace[0] == '"':
		ret = ret + ' -addressSpace ' + self.addressSpace;
	    else:
		ret = ret + ' -addressSpace "' + self.addressSpace + '"';
	if GHS_IsIntegerStringg(self.idOrName):
	    ret = ret + ' -taskId ' + self.idOrName;
	elif self.idOrName and self.idOrName[0] == '"':
	    ret = ret + ' -taskName ' + self.idOrName;
	else:
	    ret = ret + ' -taskName "' + self.idOrName + '"';
	return ret;
    
    #
    # Get task's information string.
    #
    # GHS: Validated (manually, internal use only)
    #
    def GetInfo(self, simple=True):
	ret = "";
	if (not simple) and self.debugServerComponent:
	    ret = ret + "DebugServer="+str(self.debugServerComponent) + ", ";
	if self.addressSpace:
	    ret = ret+"AddressSpace="+self.addressSpace+", ";
	ret = ret+"NameOrId="+str(self.idOrName);
	if (not simple) and self.component:
	    ret = ret + ", Component="+str(self.component);
	return ret;
    #
    # Run commands.
    #
    # Return True(success) or False(failure).
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
    # If any object for DebugServer, Debugger Window, or normal Window is
    # created, it is kept in executation context.
    #
    # GHS: Validated (manually)
    #
    def RunCommandsViaDebugServer(self, cmds, block=True, printOutput=True,
				  keepRawOutput=False):
	# Removeme
	#print("Run command via GHS_Task: %s" % cmds);
	self.CleanCmdExecVariables();
	if not cmds:
	    return True;
	if self.debugServerComponent:
	    cmds = "route "+self.debugServerComponent+" forward_to_pr {"+cmds+"}";
	else:
	    print("The task is not associated with any debug server:\n    %s"
		    % self.GetInfo(False));
	    return False;
	self.myDebugger.RunCommands(cmds,
				    block,
				    printOutput,
				    keepRawOutput);
	self.CleanCmdExecVariables(self.myDebugger.cmdExecStatus,
				   self.myDebugger.cmdExecOutput,
				   self.myDebugger.cmdExecObj);
	# Begin debugging code
	self.cmdExecPath = "Via Debugger: " + cmds;
	# End debugging code
	self.myDebugger.CleanCmdExecVariables();
	return self.cmdExecStatus == 1;
    # Define some aliases for RunCommands function
    runcommandsviadebugserver = RunCommandsViaDebugServer;
    RunCmdViaDebugServer = RunCommandsViaDebugServer;
    runcmdviadebugserver = RunCommandsViaDebugServer;
    RunCmdViaDbserv = RunCommandsViaDebugServer;
    runcmdviadbserv = RunCommandsViaDebugServer;
    #
    # Run commands.
    #
    # Return True(success) or False(failure).
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
    # If any object for DebugServer, Debugger Window, or normal Window is
    # created, it is kept in executation context.
    #
    # GHS: Validated (manually)
    #
    def RunCommands(self, cmds, block=True, printOutput=True,
		    keepRawOutput=False):
	if self.component:
	    # Attached, route the command to the window.
	    # Not work in the new target list.
#	    return ghs_debugger_window.GHS_DebuggerWindow.RunCommands(self,
#								cmds,
#								block,
#								printOutput,
#								keepRawOutput);
	    cmds = "route "+self.component+" {"+cmds+"}";
	    self.myDebugger.RunCommands(cmds,
					block,
					printOutput,
					keepRawOutput);
	    self.CleanCmdExecVariables(self.myDebugger.cmdExecStatus,
				       self.myDebugger.cmdExecOutput,
				       self.myDebugger.cmdExecObj);
	    # Begin debugging code
	    self.cmdExecPath = "Via Debugger: " + cmds;
	    # End debugging code
	    self.myDebugger.CleanCmdExecVariables();
	    return self.cmdExecStatus == 1;
	else:
	    # Or run the command via debug server?
	    #print("Task \"%s\" is not attached." % self.GetInfo(True));
	    #return False;
	    return self.RunCommandsViaDebugServer(cmds, block, printOutput,
						  keepRawOutput);
    # Define some aliases for RunCommands function
    runcommands = RunCommands;
    RunCommand = RunCommands;
    runcommand = RunCommands;
    RunCmd = RunCommands;
    runcmd = RunCommands;
    RunCmds = RunCommands;
    runcmds = RunCommands;
#    ExecuteCmd = RunCommands;
#    executecmd = RunCommands;
#    ExecuteCmds = RunCommands;
#    executecmds = RunCommands;
#    ExecCmds = RunCommands;
#    execcmds = RunCommands;
#    ExecCmd = RunCommands;
#    execcmd = RunCommands;
    #
    # Attach to task.
    #
    # Return the component for the task.
    #
    # GHS: Validated (manually)
    #
    def Attach(self, flags="", block=True, printOutput=True):
	self.CleanCmdExecVariables();
	if self.component:
	    print("Task \"%s\" is already attached:\n    %s" % \
		    (self.GetInfo(True), self.component));
	else:
	    cmd = "attach ";
	    cmd = cmd + self.GetTaskInfoForMultiCmd();
	    if flags:
		cmd = cmd+" "+flags;
	    self.RunCommandsViaDebugServer(cmd, block, printOutput);
	    # Keep the component for the attached task's component here.
	    if self.cmdExecObj:
		self.component = self.cmdExecObj.component;
		self.windowName = self.cmdExecObj.windowName;
		self.windowId = self.cmdExecObj.windowId;
		self.winClassName = self.cmdExecObj.winClassName;
		self.winRegSvcName = self.cmdExecObj.winRegSvcName;
	return self.component;
    # Define some aliases for Attach function
    attach = Attach;
    #
    # Detach from task.
    #
    # Return True or False.
    #
    # GHS: Validated (manually)
    #
    def Detach(self, flags="", block=False, printOutput=True):
	self.CleanCmdExecVariables();
	if not self.component:
	    print("Task \"%s\" is not attached:\n    %s" % \
		    (self.GetInfo(True), self.component));
	    return False;
	cmd = "detach ";
	if flags:
	    cmd = cmd + flags;
	if ghs_misc.CheckGlobal("__ghs_shared_debugger_window") and \
	    ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
	    return self.RunCommands(cmd, block, printOutput);
	if self.IsWindowAlive():
	    if ghs_debugger_window.GHS_DebuggerWindow.RunCommands(self,
								  cmd,
								  block,
								  printOutput):
		self.component = "";
		return True;
	    else:
		return False;
	else:
	    return self.RunCommandsViaDebugServer(cmd, block, printOutput);
	    
    # Define some aliases for Attach function
    detach = Detach;
    #
    # Halt task.
    #
    # Return True or False.
    #
    # GHS: Validated (manually)
    #
    def Halt(self, block=True, printOutput=True):
	if ghs_misc.CheckGlobal("__ghs_shared_debugger_window") and \
	    ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
	    if not self.component:
		if not self.Attach():
		    print("Failed to attach to task %s" % (self.GetInfo()));
		    return False;
	    if not self.component:
		print("Cannot attach to task %s" % (self.GetInfo()));
		return False;
	    return self.RunCommands("halt", block, printOutput);
	elif self.IsWindowAlive():
	    return ghs_debugger_window.GHS_DebuggerWindow.Halt(self, block,
							       printOutput);
	else:
	    cmd = "taskaction -h " + self.GetTaskInfoForMultiCmd();
	    return self.RunCommandsViaDebugServer(cmd, block, printOutput);
    # Define some aliases for Resume function
    halt = Halt;
    Stop = Halt;
    stop = Halt;
    #
    # Resume task.
    #
    # Return True or False.
    #
    # GHS: Validated (manually)
    #
    def Resume(self, block=True, printOutput=True):
	if ghs_misc.CheckGlobal("__ghs_shared_debugger_window") and \
	    ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
	    if not self.component:
		if not self.Attach():
		    print("Failed to attach to task %s" % (self.GetInfo()));
		    return False;
	    if not self.component:
		print("Cannot attach to task %s" % (self.GetInfo()));
		return False;
	    return self.RunCommands("c", block, printOutput);
	elif self.IsWindowAlive():
	    return ghs_debugger_window.GHS_DebuggerWindow.Resume(self,
								 block,
								 printOutput);
	else:
	    cmd = "taskaction -r " + self.GetTaskInfoForMultiCmd();
	    return self.RunCommandsViaDebugServer(cmd, block, printOutput);
    # Define some aliases for Resume function
    resume = Resume;
    Run = Resume;
    run = Resume;
    #
    # Single step into function.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated (manually)
    #
    def Step(self, block=True, printOutput=True, stepIntoFunc=True):
	if ghs_misc.CheckGlobal("__ghs_shared_debugger_window") and \
	    ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
	    if not self.component:
		if not self.Attach():
		    print("Failed to attach to task %s" % (self.GetInfo()));
		    return False;
	    if not self.component:
		print("Cannot attach to task %s" % (self.GetInfo()));
		return False;
	    if stepIntoFunc:
		cmd = "s";
	    else:
		cmd = "n";
	    return self.RunCommands(cmd, block, printOutput);
	elif self.IsWindowAlive():
	    return ghs_debugger_window.GHS_DebuggerWindow.Step(self,
								block,
								printOutput,
								stepIntoFunc);
	else:
	    cmd = "taskaction -s " + self.GetTaskInfoForMultiCmd();
	    return self.RunCommandsViaDebugServer(cmd, block, printOutput);
    # Define some aliases for Step function
    step = Step;
    #
    # Single step over function.
    #
    # Return True (on success) or False (on failure).
    #
    # GHS: Validated (manually)
    #
    def Next(self, block=True, printOutput=True, stepIntoFunc=False):
	if ghs_misc.CheckGlobal("__ghs_shared_debugger_window") and \
	    ghs_misc.GetGlobal("__ghs_shared_debugger_window") == 1:
	    if not self.component:
		if not self.Attach():
		    print("Failed to attach to task %s" % (self.GetInfo()));
		    return False;
	    if not self.component:
		print("Cannot attach to task %s" % (self.GetInfo()));
		return False;
	    if stepIntoFunc:
		cmd = "s";
	    else:
		cmd = "n";
	    return self.RunCommands(cmd, block, printOutput);
	elif self.IsWindowAlive():
	    return ghs_debugger_window.GHS_DebuggerWindow.Next(self,
								block,
								printOutput,
								stepIntoFunc);
	else:
	    return self.Step(block, printOutput, stepIntoFunc);
    # Define some aliases for the function
    next = Next;
    ##########################################################################
    #
    # More APIs......
    #
    ##########################################################################

# Define some aliases for GHS_Task class
ghs_task = GHS_Task;
#GHS_TASK = GHS_Task;
#Ghs_Task = GHS_Task;
