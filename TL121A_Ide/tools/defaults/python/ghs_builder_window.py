import time;
import ghs_window;
import ghs_constants;
import ghs_winreg;
from ghs_util import *;

class GHS_ProjectManagerWindow(ghs_window.GHS_Window):
    """ Describe GHS Project Manager (Builder) window information. """

    # Class constant
    treeViewWidget = "msl_System"; # "msl" on old mbuild
    infoTabWidget = "tc_info";
    statusTabName = "Status";
    statusWidget = "tv_status";

    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, compName="", wn="", wid="0", className="",
		 regSvcName="", service=""):
	ghs_window.GHS_Window.__init__(self, compName, wn, wid, className,
				       regSvcName, service);

	self.checkInterval = 0.3;


    #
    # Select a row in the project tree view.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def SelectTreeRow(self, row, block=True):
	return self.SelectMslCell(self.treeViewWidget, row, -1, block);
    # Define some aliases for the function
    selecttreerow = SelectTreeRow;
    SelTreeRow = SelectTreeRow;
    seltreerow = SelectTreeRow;
    #
    # Double-click a row in the project tree view.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def DoubleClickTreeRow(self, row, block=True):
	if not self.SelectMslCell(self.treeViewWidget, row, -1, block):
	    return False;
	return self.DoubleClickMslCell(self.treeViewWidget, row, -1, block);
    # Define some aliases for the function
    doubleclicktreerow = DoubleClickTreeRow;
    DblClickTreeRow = DoubleClickTreeRow;
    dblclicktreerow = DoubleClickTreeRow;


    #
    # Open project.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def OpenProject(self, projName="", block=True, expandFileName=True):
	if projName:
	    if expandFileName:
		projName = GHS_ExpandFileName(projName);
	    cmd = "OpenProjectByName projectPath:" + GHS_QuotifyString(projName);
	else:
	    cmd = "OpenProject";
	return self.RunCommands(cmd, block);
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
    # Close project.
    #
    # Return an object for MULTI Builder window.
    #
    # GHS: Validated
    #
    def CloseProject(self):
	return self.RunCommands("CloseProject");
    # Define some aliases for the function
    closeproject = CloseProject;
    CloseProj = CloseProject;
    closeproj = CloseProject;


    #
    # Open new Builder window.
    #
    # Return an object for MULTI Builder window.
    #
    # GHS: Validated
    #
    def NewWindow(self):
	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	oldWinList = winreg.GetWindowList(False);
	if self.RunCommands("NewWindow"):
	    obj = winreg.WaitForWindowFromClass(oldWinList,
		      self.maxSecToWaitForNewWindow,
		      getattr(ghs_constants.winClassNames, "builder", ""),
		      "");
	else:
	    obj = None;
	if not obj:
	    print("Did not see new MULTI Builder window.");
	return obj;
    # Define some aliases for the function
    newwindow = NewWindow;
    NewWin = NewWindow;
    newwin = NewWindow;


    #
    # Select entry by MSL index
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def SelectByIndex(self, row=0, block=True):
	return self.SelectMslCell(self.treeViewWidget, row, -1, block);
    # Define some aliases for the function
    selectbyindex = SelectByIndex;
    SelByIdx = SelectByIndex;
    selbyidx = SelectByIndex;
    SelIdx = SelectByIndex;
    selidx = SelectByIndex;
    #
    # Select entry by name.
    #
    # Note: if column 0 of the MSL widget is not project name, the function
    # will be wrong.
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def SelectProject(self, projName, block=True):
	return self.SelectMslCellByValue(self.treeViewWidget, projName, 0, block);
    # Define some aliases for the function
    selectproject = SelectProject;
    SelProj = SelectProject;
    selproj = SelectProject;
    #
    # Select entry by name
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def SelectAll(self, block=True):
	return self.SelectMslCell(self.treeViewWidget, -1, -1, block);
    # Define some aliases for the function
    selectall = SelectAll;
    SelAll = SelectAll;
    selall = SelectAll;


    #
    # Wait for building to finish.
    #
    # If duration is a negavive number, we will wait forever until building
    # is done.
    # If duration is 0.0, we only check once.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # If checkInterval is 0 or negative, the MULTI Project Manager window
    # object's default "checkInterval" will be used.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def WaitForBuildingFinish(self, duration=-1.0, checkInterval=0):
	goon = True;
        if duration > 0.0:
	    endTime = time.time()+duration;
	if checkInterval <= 0:
	    checkInterval = self.checkInterval;
	while goon:
	    res = self.IsButtonDimmed("Build");
	    if not self.cmdExecStatus and not self.IsWindowAlive(False):
		# In case something goes wrong. But it is normal that the
		# cmdExecStatus is 0 because the checked button may not
		# exist.
		print("The builder window is gone. Here are the existing windows:");

		winreg = ghs_misc.GetGlobal("winreg");
		if not winreg:
		    winreg = ghs_winreg.GHS_WindowRegister();
		    ghs_misc.SetGlobal("winreg", winreg);

		winreg.ShowWindowList();
		return False;

	    if not res:
		return True;
	    if duration == 0.0:
		# Only check once
		goon = False;
	    elif duration > 0.0:
		goon = (time.time() < endTime);
	    if goon:
		# We sleep after checking so that we don't miss one checking.
		time.sleep(checkInterval);

	# If the building is not done, return False.
	return False;
    # Define some aliases for the function
    waitforbuildingfinish = WaitForBuildingFinish;
    
    #
    # Build project(s).
    #
    # If duration is a negavive number, we will wait forever until building
    # is done.
    # If duration is 0.0, we don't wait.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def BuildProjects(self, buildAll=False,
			waitBuildFinish=False, duration=-1.0):
	if self.IsButtonDimmed("Build"):
	    print('Builder is building projects.');
	    return False;
	if buildAll:
	    cmd = "BuildAll";
	else:
	    cmd = "BuildSelectedParents";
	if not self.RunCommands(cmd, waitBuildFinish):
	    return False;
	elif not waitBuildFinish or duration == 0.0:
	    return True;

	# Wait for building to finish (sending the above command in blocking
	# mode does not guarantee that).
	return self.WaitForBuildingFinish(duration);
    # Define some aliases for the function
    buildprojects = BuildProjects;
    BuildProjs = BuildProjects;
    buildprojs = BuildProjects;
    BuildProj = BuildProjects;
    buildproj = BuildProjects;
    #
    # Build all project(s).
    #
    # If duration is a negavive number, we will wait forever until building
    # is done.
    # If duration is 0.0, we don't wait.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def BuildAllProjects(self, waitBuildFinish=False, duration=-1.0):
	return self.BuildProjects(True, waitBuildFinish, duration);
    # Define some aliases for the function
    buildallprojects = BuildAllProjects;
    BuildAll = BuildAllProjects;
    buildall = BuildAllProjects;
    BuildAllProj = BuildAllProjects;
    buildallproj = BuildAllProjects;
    BuildAllProjs = BuildAllProjects;
    buildallprojs = BuildAllProjects;
    #
    # Build selected project(s).
    #
    # If duration is a negavive number, we will wait forever until building
    # is done.
    # If duration is 0.0, we don't wait.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def BuildSelectedProjects(self, waitBuildFinish=False, duration=-1.0):
	return self.BuildProjects(False, waitBuildFinish, duration);
    # Define some aliases for the function
    buildselectedprojects = BuildSelectedProjects;
    BuildSelected = BuildSelectedProjects;
    buildselected = BuildSelectedProjects;
    BuildSelectedProjs = BuildSelectedProjects;
    buildselectedprojs = BuildSelectedProjects;
    BuildSelectedProj = BuildSelectedProjects;
    buildselectedproj = BuildSelectedProjects;
    BuildSel = BuildSelectedProjects;
    buildsel = BuildSelectedProjects;
    #
    # Halt building process.
    #
    # If duration is a negavive number, we will wait forever until halting
    # is done.
    # If duration is 0.0, we don't wait.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def HaltBuild(self, waitHaltFinish=False, duration=-1.0):
	if not self.IsButtonDimmed("Build"):
	    self.CleanCmdExecVariables();
	    return True;
	if not self.RunCommands("HaltBuild", waitHaltFinish):
	    return False;
	elif not waitHaltFinish or  duration == 0.0:
	    return True;

	# Wait for halting to finish (sending the above command in blocking
	# mode does not guarantee that).
	return self.WaitForBuildingFinish(duration);
    # Define some aliases for the function
    haltbuild = HaltBuild;
    Halt = HaltBuild;
    halt = HaltBuild;


    #
    # Debug selected project(s).
    #
    # Return True (success) or False (failure).
    #
    # Change the function to return a debugger window object?
    #
    # GHS: Validated
    #
    def DebugSelectedProjects(self, block=False):
	if self.IsButtonDimmed("Debug"):
	    self.CleanCmdExecVariables(0);
	    print('No program to debug.');
	    return False;
	return self.RunCommands("DebugSelected", block);
    # Define some aliases for the function
    debugselectedprojects = DebugSelectedProjects;
    DebugSelected = DebugSelectedProjects;
    debugselected = DebugSelectedProjects;
    DebugSelectedProjs = DebugSelectedProjects;
    debugselectedprojs = DebugSelectedProjects;
    DebugSelectedProj = DebugSelectedProjects;
    debugselectedproj = DebugSelectedProjects;
    DebugSel = DebugSelectedProjects;
    debugsel = DebugSelectedProjects;
    #
    # Edit selected project(s).
    #
    # Return an object for MULTI Editor window.
    #
    # GHS: Validated
    #
    def EditSelectedProjects(self, block=True):
	if self.IsButtonDimmed("Edit"):
	    self.CleanCmdExecVariables(0);
	    print('No file to edit.');
	    return None;
	if block:
	    winreg = ghs_misc.GetGlobal("winreg");
	    if not winreg:
		winreg = ghs_winreg.GHS_WindowRegister();
		ghs_misc.SetGlobal("winreg", winreg);

	    oldWinList = winreg.GetWindowList(False);
	    if self.RunCommands("EditSelected"):
		obj = winreg.WaitForWindowFromClass(oldWinList,
			self.maxSecToWaitForNewWindow,
			getattr(ghs_constants.winClassNames, "editor", ""),
			"");
	    else:
		obj = None;
	    if not obj:
		print("Did not see new MULTI Editor window.");
	    return obj;
	else:
	    self.RunCommands("EditSelected");
	    return None;
    # Define some aliases for the function
    editselectedprojects = EditSelectedProjects;
    EditSelected = EditSelectedProjects;
    editselected = EditSelectedProjects;
    EditSelectedProjs = EditSelectedProjects;
    editselectedprojs = EditSelectedProjects;
    EditSelectedProj = EditSelectedProjects;
    editselectedproj = EditSelectedProjects;
    EditSel = EditSelectedProjects;
    editsel = EditSelectedProjects;


    #
    # Expand all.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def ExpandAll(self, block=False):
	return self.RunCommands("ExpandAll", block);
    # Define some aliases for the function
    expandall = ExpandAll;
    #
    # Expand selected items.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def ExpandSelected(self, block=False):
	return self.RunCommands("ExpandSelected", block);
    # Define some aliases for the function
    expandselected = ExpandSelected;
    ExpandSel = ExpandSelected;
    expandsel = ExpandSelected;
    #
    # Contract all.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def ContractAll(self, block=False):
	return self.RunCommands("ContractAll", block);
    # Define some aliases for the function
    contractall = ContractAll;
    #
    # Contract selected items.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def ContractSelected(self, block=False):
	return self.RunCommands("ContractSelected", block);
    # Define some aliases for the function
    contractselected = ContractSelected;
    ContractSel = ContractSelected;
    contractsel = ContractSelected;


    #
    # Copy selected items.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def CopySelected(self):
	return self.RunCommands("CopySelected");
    # Define some aliases for the function
    copyselected = CopySelected;
    CopySel = CopySelected;
    copysel = CopySelected;
    #
    # Cut selected items.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def CutSelected(self):
	return self.RunCommands("CutSelected");
    # Define some aliases for the function
    cutselected = CutSelected;
    CutSel = CutSelected;
    cutsel = CutSelected;
    #
    # Delete selected items.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def DeleteSelected(self):
	return self.RunCommands("DeleteSelected");
    # Define some aliases for the function
    deleteselected = DeleteSelected;
    DelSelected = DeleteSelected;
    delselected = DeleteSelected;
    DelSel = DeleteSelected;
    delsel = DeleteSelected;
    #
    # Paste after selected item.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def PasteAfterSelected(self):
	return self.RunCommands("PasteAfterSelected");
    # Define some aliases for the function
    pasteafterselected = PasteAfterSelected;
    Paste = PasteAfterSelected;
    paste = PasteAfterSelected;


    #
    # Save project changes.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def SaveChanges(self, block=True):
	return self.RunCommands("Save", block);
    # Define some aliases for the function
    savechanges = SaveChanges;
    SaveChange = SaveChanges;
    savechange = SaveChanges;
    Save = SaveChanges;
    save = SaveChanges;
    #
    # Revert from file.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def RevertFromFile(self, block=True):
	return self.RunCommands("Revert", block);
    # Define some aliases for the function
    revertfromfile = RevertFromFile;
    Revert = RevertFromFile;
    revert = RevertFromFile;


    #
    # Print view.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def PrintView(self, block=True):
	return self.RunCommands("PrintView", block);
    # Define some aliases for the function
    printview = PrintView;
    #
    # Print all.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def PrintAll(self, block=True):
	return self.RunCommands("PrintAll", block);
    # Define some aliases for the function
    printall = PrintAll;
    Print = PrintAll;


    #
    # Get status contents.
    #
    # Return the contents for the status in string on success or None on
    # Failure.
    #
    # GHS: Validated
    #
    def GetStatus(self):
	oldTabSel = self.GetTabSelection(self.infoTabWidget);
	tabSwitched = False;
	if oldTabSel != self.statusTabName:
	    if not self.SelectTab(self.infoTabWidget, self.statusTabName):
		print('Failed to select tab "%s".' % self.statusTabName);
		return None;
	    tabSwitched = True;
	if not self.DumpWidget(self.statusWidget, "", True, False):
	    print('Failed to dump contents of tab "%s".' % self.statusTabName);
	    return None;
	ret = self.cmdExecOutput;
	if tabSwitched:
	    if not self.SelectTab(self.infoTabWidget, oldTabSel):
		print('Failed to select tab "%s".' % oldTabSel);
	return ret;
    # Define some aliases for the function
    getstatus = GetStatus;

    #
    # Build one or more files or projects in the Project Manager window.
    #
    # See WaitForBuildingFinish() for the specification of "duration".
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def BuildFile(self, optionsAndFileName, block=True, printOutput=True, duration=-1):
	if not optionsAndFileName:
	    if printOutput:
		print("No filename is given.");
	    return False;
	if not isinstance(optionsAndFileName, str):
	    if printOutput:
		print("Expect file name in string.");
	    return False;

	opName = "Build:";
	if not self.ChangePullDownValue("pdLocator", opName):
	    if printOutput:
		print('Failed to select "%s".' % (opName));
	    return False;

	ret = self.ChangePullDownValue("pdBuildBar", optionsAndFileName);

	if ret:
	    if block and duration != 0:
		return self.WaitForBuildingFinish(duration, 0.5);
	else:
	    if printOutput:
		print('Failed to set value "%s" to "pdBuildBar" widget.' % (optionsAndFileName));

	return ret;
    # Define some aliases for the function
    buildfile = BuildFile;
    Build = BuildFile;
    build = BuildFile;

    #
    # Find a file or a project in the Project Manager window.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def FindFile(self, fileName, block=True, printOutput=True):
	if not fileName:
	    if printOutput:
		print("No filename is given.");
	    return False;
	if not isinstance(fileName, str):
	    if printOutput:
		print("Expect file name in string.");
	    return False;

	opName = "Find:";
	if not self.ChangePullDownValue("pdLocator", opName):
	    if printOutput:
		print('Failed to select "%s".' % (opName));
	    return False;

	ret = self.ChangePullDownValue("pdBuildBar", fileName);

	if not ret:
	    if printOutput:
		print('Failed to set value "%s" to "pdBuildBar" widget.' % (fileName));

	return ret;
    # Define some aliases for the function
    findfile = FindFile;
    Find = FindFile;
    find = FindFile;

    #
    # Find a next file or a project in the Project Manager window.
    #
    # Return True (success) or False (failure).
    #
    # GHS: Validated
    #
    def NextFile(self, fileName, block=True, printOutput=True):
	if not fileName:
	    if printOutput:
		print("No filename is given.");
	    return False;
	if not isinstance(fileName, str):
	    if printOutput:
		print("Expect file name in string.");
	    return False;

	opName = "Next:";
	if not self.ChangePullDownValue("pdLocator", opName):
	    if printOutput:
		print('Failed to select "%s".' % (opName));
	    return False;

	ret = self.ChangePullDownValue("pdBuildBar", fileName);

	if not ret:
	    if printOutput:
		print('Failed to set value "%s" to "pdBuildBar" widget.' % (fileName));

	return ret;
    # Define some aliases for the function
    nextfile = NextFile;
    Next = NextFile;
    next = NextFile;
    

    ##########################################################################
    #
    # More APIs......
    #
    ##########################################################################

GHS_BuilderWindow = GHS_ProjectManagerWindow;
# Define some aliases for the class
#ghs_builderwindow = GHS_BuilderWindow;
#GHS_BUILDERWINDOW = GHS_BuilderWindow;
#Ghs_BuilderWindow = GHS_BuilderWindow;
