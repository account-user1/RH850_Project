class GHS_IdeObject(object):
    """ The general information shared by all MULTI IDE objects."""
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, serviceName="", workingDir="", pluginId=0):
	# Name of the MULTI component service name.
	self.serviceName = serviceName;
	# Working dir for the execution instance of the MULTI component
	# service.
	self.wd = workingDir;
	# Plugin ID of the execution instance of the MULTI component service.
	# It is an internal data of MULTI.
	self.pluginId = pluginId;
	# The handle to the execution instance of the MULTI component service.
	self.service = None;
	# Max time (in seconds) to wait for a window to show up.
	self.maxSecToWaitForNewWindow = 5.0;
	# How often to check the waited condition.
	self.checkInterval = 0.5;

	# Command execution information.
	# Indicates if in debugging mode. More diagnostic information is
	# printed in debugging mode.
	self.debugFlag = 0;
	# Command execution status: usually 1 means success and 0 means failure
	# and other values (like -100) means fatal error etc.
	self.cmdExecStatus = 1;
	# String output from the command execution.
	self.cmdExecOutput = "";
	# Objects created from some command execution.
	self.cmdExecObj = None;
	# For debugging purpose: what is the command and how it is executed
	# (routed to the window or via other approach).
	self.cmdExecPath = "";

    #
    # Cleanup the variables which are used to keep command execution
    # result and outputs.
    #
    # GHS: Validated
    #
    def CleanCmdExecVariables(self, status=1, output="", obj=None, cmdPath=""):
	self.cmdExecStatus = status;
	self.cmdExecOutput = output;
	self.cmdExecObj = obj;
	self.cmdExecPath = cmdPath;

    #
    # Copy the variables from another GHS_IdeObject objects.
    #
    # GHS: Validated (internal use only)
    #
    def CopyCmdExecVariables(self, ideObj):
	if isinstance(ideObj, GHS_IdeObject):
	    self.cmdExecStatus = ideObj.cmdExecStatus;
	    self.cmdExecOutput = ideObj.cmdExecOutput;
	    self.cmdExecObj = ideObj.cmdExecObj;
	    self.cmdExecPath = ideObj.cmdExecPath;
	    return True;
	else:
	    return False;

    #
    # Check if the corresponding MULTI IDE service (if any) is alive (not down).
    #
    # GHS: Validated
    #
    def IsAlive(self):
	return self.service and not self.service.isdown();
    isalive = IsAlive;
    Alive = IsAlive;
    alive = IsAlive;
