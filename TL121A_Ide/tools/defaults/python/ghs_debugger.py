import ide;
import os;
import ghs_winreg;
import ghs_dbserver;
import ghs_ideobject;
import ghs_debugger_window;
import ghs_debugger_api;
import ghs_misc;
from ghs_util import *;
import sys;
import re;


#
# Connect to Debugger service.
#
# GHS: Validated
#
def GHS_GetDebuggerService(serviceName, workingDir, pluginId):
    """ Get MULTI debugger service. """
#    if dir().count("debugger") > 0:
#	global debugger;
#	if isinstance(debugger, GHS_Debugger) and debugger.service:
#	    return debugger.service;
    ret = ide.open(serviceName, workingDir, pluginId);
    if (ret == None):
	print("Cannot launch Debugger service." );
    else:
	ret.SetOutputMask(0xff);
    return ret;



class GHS_Debugger(ghs_debugger_api.GHS_DebuggerApi):
    """ Describe GHS debugger information. """
    # This is a constant field, whose value should never be changed.
    modalDialogName = "ModalDialog";

    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, workingDir="", pluginId=0):
	self.waitingCookie = 0;
	self.nextCookie = 1;
	self.simulateBlockingWithNonBlocking = True;
	ghs_ideobject.GHS_IdeObject.__init__(self,
					     "MultiDebugger",
					     workingDir,
					     pluginId);
	self.service = GHS_GetDebuggerService(self.serviceName, workingDir,
					      pluginId);
	# To prevent the extra mesasge like TargetListChanged and
	# ReadStatusChanged msgs from coming in.
	if self.service:
	    self.service.SetNotificationMask(0);
	gdebugger = ghs_misc.GetGlobal("debugger");
	if not gdebugger or not gdebugger.IsAlive():
	    ghs_misc.SetGlobal("debugger", self);
					      

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
    # If any object for DebugServer, Debugger Window, or normal Window is
    # created, it is kept in executation context.
    #
    # GHS: Validated
    #
    def RunCommands(self, cmds, block=True, printOutput=True,
		    keepRawOutput=False):
	if self.debugFlag:
	    if block:
		print("---- Via  MULTI Debugger( b): %s" % cmds);
	    else:
		print("---- Via  MULTI Debugger(nb): %s" % cmds);
	obj = None;
	self.CleanCmdExecVariables();
	# Begin debugging code
	self.cmdExecPath = "Via Debugger: " + cmds;
	# End debugging code
	if block:
	    if self.simulateBlockingWithNonBlocking:
		self.waitingCookie = self.nextCookie;
		# Adjust next cookie number.
		self.nextCookie += 1;
		if not self.nextCookie:
		    self.nextCookie = 1;
    
		self.service.ExecuteCommand(cmds, None, self.waitingCookie, \
					    True, True, 0xff);
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
		    self.service.BlockCommandExecution(cmds, True);

	    if self.cmdExecStatus != 1:
		self.cmdExecStatus = 0;
	    if not keepRawOutput:
		parseRes = GHS_ParseObjectIds(self.cmdExecOutput);
		self.cmdExecOutput = parseRes[5];

		winreg = ghs_misc.GetGlobal("winreg");
		if not winreg:
		    winreg = ghs_winreg.GHS_WindowRegister();
		    ghs_misc.SetGlobal("winreg", winreg);

		obj = winreg.CreateObjectFromParsedResultTuple(parseRes);
	    if printOutput:
		if self.cmdExecStatus != 1:
		    print("Failed to execute MULTI commands:%s" % cmds);
		if self.cmdExecOutput:
		    if re.match("\n$", self.cmdExecOutput):
			print(self.cmdExecOutput),
		    else:
			print(self.cmdExecOutput);
	else:
#	    self.service.NonBlockCommandExecution(cmds);
	    self.service.ExecuteCommand(cmds, None, 0, False, False, 0);
	self.cmdExecObj = obj;
	if self.debugFlag:
	    print("     Status: %d, Created Object: %s, Output: %s" %
		    (self.cmdExecStatus, str(self.cmdExecObj), self.cmdExecOutput));
	return self.cmdExecStatus == 1;
    # Define some aliases for RunCommands function
    runcommands = RunCommands;
    RunCommand = RunCommands;
    runcommand = RunCommands;
    RunCmd = RunCommands;
    runcmd = RunCommands;
    RunCmds = RunCommands;
    runcmds = RunCommands;
    ExecuteCmd = RunCommands;
    executecmd = RunCommands;
    ExecuteCmds = RunCommands;
    executecmds = RunCommands;
    ExecCmds = RunCommands;
    execcmds = RunCommands;
    ExecCmd = RunCommands;
    execcmd = RunCommands;

# Define some aliases for GHS_Debugger class
ghs_debugger = GHS_Debugger;
#GHS_DEBUGGER = GHS_Debugger;
#Ghs_Debugger = GHS_Debugger;




