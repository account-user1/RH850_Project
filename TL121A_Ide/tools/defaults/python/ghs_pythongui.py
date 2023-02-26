import ide;
import ghs_window;
import ghs_pythongui_window;
from ghs_util import *;


class GHS_PythonGui(ghs_pythongui_window.GHS_PyGuiWindow):
    """ Describe GHS Python GUI information. """
    #
    # Initialize object
    #
    # GHS: Validated 
    #
    def __init__(self, workingDir=""):
	ghs_window.GHS_Window.__init__(self,
					"", # component name
					"", # window name
					"0", # window ID
					"", # window class name
					"", # window register service name
					"MULTI Python GUI" # service name
					);
	self.wd = workingDir;		# Not used right now
	self.service = GHS_GetGeneralService(self.serviceName, "",
					     workingDir);
	if self.service:
	    self.cmdExecOutput = self.service.GetWindowInfo();
	    parseRes = GHS_ParseObjectIds(self.cmdExecOutput);
	    if parseRes[5]:
		print(parseRes);
	    if parseRes[1]:
		ghs_window.GHS_Window.__init__(self,
					       parseRes[0],
					       parseRes[1],
					       parseRes[2],
					       parseRes[3],
					       parseRes[4],
					       self.serviceName);

# Define some aliases for GHS_Launcher class
ghs_pythongui = GHS_PythonGui;
#GHS_PYTHONGUI = GHS_PythonGui;
#Ghs_PythonGui = GHS_PythonGui;
#Ghs_Pythongui = GHS_PythonGui;

# Define an object for MULTI Python GUI.
#pgui = GHS_PythonGui();
