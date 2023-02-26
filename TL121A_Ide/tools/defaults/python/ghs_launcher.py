import ide;
import ghs_launcher_window;
import ghs_winreg;
from ghs_util import *;


class GHS_Launcher(ghs_launcher_window.GHS_LauncherWindow):
    """ Describe GHS Launcher information. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, workingDir=""):
	ghs_launcher_window.GHS_LauncherWindow.__init__(self,
					"", # component name
					"", # window name
					"0", # window ID
					"", # window class name
					"", # window register service name
					"MULTI Bar" # service name
					);
	self.wd = workingDir;		# Not used right now
	self.service = GHS_GetGeneralService(self.serviceName,
					     "MULTI Launcher",
					     workingDir);
	if self.service:
	    winInfo = self.service.GetWindowInfo();
	    parseRes = GHS_ParseObjectIds(winInfo);
	    if parseRes[5]:
		print(parseRes);
	    if parseRes[1]:
		self.component = parseRes[0];
		self.windowName = parseRes[1];
		self.windowId = parseRes[2];
		self.winClassName = parseRes[3];
		self.winRegSvcName = parseRes[4];
		# Wait for the window to be registered.

		winreg = ghs_misc.GetGlobal("winreg");
		if not winreg:
		    winreg = ghs_winreg.GHS_WindowRegister();
		    ghs_misc.SetGlobal("winreg", winreg);

		winreg.WaitForWindow(None,
						self.maxSecToWaitForNewWindow,
						self.winClassName,
						self.winRegSvcName,
						self.windowName,
						self.windowId,
						True);



# Define some aliases for GHS_Launcher class
ghs_launcher = GHS_Launcher;
#GHS_LAUNCHER = GHS_Launcher;
#Ghs_Launcher = GHS_Launcher;

# Define an object for MULTI Launcher.
#mb = GHS_Launcher();
