import sys;
import time;
import ide;
import ghs_ideobject;
import ghs_builder_window;
import ghs_constants;
import ghs_winreg;
from ghs_util import *;


class GHS_ProjectManager(ghs_ideobject.GHS_IdeObject):
    """ Describe GHS Project Manager's information. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, workingDir=""):
	ghs_ideobject.GHS_IdeObject.__init__(self,
					     "WBuildService",
					     workingDir);
	self.service = GHS_GetGeneralService(self.serviceName,
					     "MULTI Project Manager",
					     workingDir);
    # 
    # Load project file.
    #
    # Return an object for MULTI Project Manager window.
    #
    # GHS: Validated
    #
    def OpenProject(self, fileName, targetsToBuild="", hidden=False, expandFileName=True):
	if not self.service:
	    print("MULTI Project Manager is not started up.");
	    return None;

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	self.CleanCmdExecVariables();
	if expandFileName:
	    fileName = GHS_ExpandFileName(fileName);
	(self.cmdExecStatus, self.cmdExecOutput) = \
	    self.service.GetWBuildForTopProjectFile({'_full_pathname':fileName},
						    0xff, True);
	if self.cmdExecStatus:
	    parseRes = GHS_ParseObjectIds(self.cmdExecOutput);
	    self.cmdExecOutput = parseRes[5];
	    self.cmdExecObj = winreg.CreateObjectFromParsedResultTuple(parseRes);

	if not self.cmdExecObj:
	    oldWinList = winreg.GetWindowList(False);
	    self.service.OpenFileAndWait({'_full_pathname':fileName},
				  hidden);
	    self.cmdExecObj = winreg.WaitForWindowFromClass(oldWinList,
			  self.maxSecToWaitForNewWindow,
			  getattr(ghs_constants.winClassNames, "builder", ""),
			  "");
	if self.cmdExecObj:
	    if targetsToBuild:
		self.service.BuildTargets({'_full_pathname':fileName},
				      targetsToBuild);
		
	else:
	    print("Did not see MULTI Project Manager window.");

	return self.cmdExecObj;
    # Define some aliases for the function
    openproject = OpenProject;
    OpenFile = OpenProject;
    openfile = OpenProject;
    OpenProj = OpenProject;
    openproj = OpenProject;
    LoadFile = OpenProject;
    loadfile = OpenProject;
    Open = OpenProject;
    open = OpenProject;
    #
    # Get top project files
    #
    # GHS: Validated
    #
    def GetTopProjectFiles(self, showList=False):
	if not self.service:
	    print("MULTI Project Manager is not started up.");
	    return None;
	files = self.service.GetTopProjectFiles();
	if showList:
	    if len(files) <= 0:
		print("There is no top project files.");
	    else:
		print("Top project files:");
		for pf in files:
		    print("    %s" % pf);
	return files;
    # Define some aliases for the function
    gettopprojectfiles = GetTopProjectFiles;
    TopProjs = GetTopProjectFiles;
    topprojs = GetTopProjectFiles;

# Define some aliases for Project Manager class
ghs_projectmanager = GHS_ProjectManager;
GHS_Builder = GHS_ProjectManager;
ghs_builder = GHS_ProjectManager;
#GHS_BUILDER = GHS_Builder;
#Ghs_Builder = GHS_Builder;

