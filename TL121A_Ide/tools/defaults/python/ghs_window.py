import time;
import ghs_ideobject;
import ghs_winreg;
import re;
from ghs_util import *;


class GHS_MslTree(object):
    """ Describe the tree for the contents of a MSL widget.

    Each node in the tree is also reprented as a GHS_MslTree.

    Such a tree should be returned by "GetMslTree()" in class "GHS_Window".  
    It is a snapshot of the MSL widget's contents. User should not change
    the tree."""
    #
    # nodeName is the value on which MSL tree is constructed.
    # It is usually the first column's value. The column can be specified in
    # GHS_Window's GetMslTree() method.
    #
    # In the tree, each node is also reprented as a GHS_MslTree.
    #
    # For the top-level MSL tree, nodeName is the MSL widget's name.
    #
    # Such a tree should be returned by "GetMslTree()" in "GHS_Window", and 
    # user should not change the tree's contents.
    #
    # GHS: Validated (internal use only)
    #
    def __init__(self, nodeName, columnValues, row, expandMark=""):
	self.nodeName = nodeName;
	if not isinstance(columnValues, list):
	    columnValues = [str(columnValues)];
	self.columnValues = columnValues;
	self.parent = None;
	self.depth = -1;
	self.row = row;
	self.children = [];
	# expandMark can be:
	#	"+"	- expandable but not expanded
	#	"-"	- expandable and expanded
	#	""	- not expandable
	self.expandMark = expandMark;
	# The "shrinkanle" is not used yet.
	self.shrinkable = True;

    #
    # Dump the content of GHS_MslTree
    #
    # GHS: Validated
    #
    def DumpTree(self, recursive=True, treeLine=True, printHead=True, printRow=True):
	if self.IsTopTree() or printHead:
	    # Top tree
	    if printRow:
		print("%-6.6s Contents of %s (<Expansion> <Name>: [<Column0>] [<Column1>]...)" % ("Row#", self.nodeName));
	    else:
		print("Contents of %s (<Expansion> <Name>: [<Column0>] [<Column1>]...)" % (self.nodeName));
	if not self.IsTopTree():
	    indUnit = "  ";
	    if treeLine:
		node = self;
		indStr = "";
		backDepth = 0;
		while node.parent and not node.parent.IsTopTree():
		    # Check if the node is the last child of its parent.
		    cn = len(node.parent.children);
		    if node.parent.children[cn-1] == node:
			if backDepth == 0:
			    indStr = "|_" + indStr;
			else:
			    indStr = indUnit + indStr;
		    else:
			indStr = "| " + indStr;
		    node = node.parent;
		    backDepth = backDepth + 1;
	    else:
		indStr = "  "*(self.depth);
	    if self.expandMark == "+" or self.expandMark == "-":
	        indStr = indStr+self.expandMark+" ";
	    else:
	        indStr = indStr+indUnit;
	    if printRow:
		fmt = "%-6.6s "+indStr+"%s: ";
		print(fmt % (str(self.row), self.nodeName)),
	    else:
		print(indStr+"%s: " % (self.nodeName)),
	    firstColumn = True;
	    for col in self.columnValues:
		if firstColumn:
		    print("[%s]" % col),
		    firstColumn = False;
		else:
		    print(" [%s]" % col),
	    print("");
	if recursive:
	    for child in self.children:
		child.DumpTree(True, treeLine, False, printRow);
	return True;
    # aliases for the function
    dumptree = DumpTree;
    Dump = DumpTree;
    dump = DumpTree;

    #
    # Check if the GHS_MslTree node is expandable or not.
    #
    # GHS: Validated
    #
    def IsExpandable(self):
	return self.expandMark != "";
    # aliases for the function
    isexpandable = IsExpandable;
    Expandable = IsExpandable;
    expandable = IsExpandable;

    #
    # Check if the GHS_MslTree node is expanded or not.
    #
    # GHS: Validated
    #
    def IsExpanded(self):
	return self.expandMark == "-";
    # aliases for the function
    isexpanded = IsExpanded;
    Expanded = IsExpanded;
    expanded = IsExpanded;

    #
    # Check if the GHS_MslTree node is the top node.
    #
    # GHS: Validated
    #
    def IsTopTree(self):
	return self.row < 0 and self.depth <= 0 and not self.parent;
    # aliases for the function
    istoptree = IsTopTree;
    IsTop = IsTopTree;
    istop = IsTopTree;

    #
    # Change the GHS_MslTree node's parent.
    #
    # GHS: Validated (internal use only)
    #
    def ChangeParent(self, parent):
	if not parent:
	    self.parent = None;
	    self.depth = 0;
	    return True;
	elif isinstance(parent, GHS_MslTree):
	    self.parent = parent;
	    if parent.IsTopTree():
		self.depth = 0;
	    else:
		self.depth = self.parent.depth+1;
	    for child in self.children:
		child.ChangeParent(self);
	    return True;
	else:
	    print("Expect GHS_MslTree parent in GHS_MslTree.ChangeParent()");
	    #self.parent = None;
	    return False;
    # aliases for the function
    changeparent = ChangeParent;

    #
    # Insert a node to the current node as children.
    #
    # GHS: Validated (internal use only)
    #
    def InsertChild(self, node, index=-1):
	if not isinstance(node, GHS_MslTree):
	    print("Expect GHS_MslTree node in GHS_MslTree.AddChild()");
	    return False;
	self.children.insert(index, node);
	node.ChangeParent(self);
	return True;
    # aliases for the function
    insertchild = InsertChild;

    #
    # Append a node to the current node's children list.
    #
    # GHS: Validated (internal use only)
    #
    def AppendChild(self, node):
	if not isinstance(node, GHS_MslTree):
	    print("Expect GHS_MslTree node in GHS_MslTree.AddChild()");
	    return False;
	self.children.append(node);
	node.ChangeParent(self);
	return True;
    # aliases for the function
    appendchild = AppendChild;
    AddChild = AppendChild;
    addchild = AppendChild;

    #
    # Search children nodes by name.
    #
    # The given node name can be a regular expression.
    #
    # If "all" is True, a list of all qualified nodes or an empty list will be
    # returned.
    # If "all" is False, the first qualified node or None will be returned.
    #
    # GHS: Validated
    #
    def SearchChildByName(self, nodeName, match=False, all=False, recursive=True):
	if all:
	    ret = [];
	else:
	    ret = None;
	for child in self.children:
	    res = child.SearchByName(nodeName, match, all, recursive);
	    if res:
		if all:
		    ret = ret + res;
		else:
		    return res;

	return ret;
    # aliases for the function
    searchchildbyname = SearchChildByName;

    #
    # Search one or more nodes within the current tree (including the node and 
    # its children) by name.
    #
    # The given node name can be a regular expression.
    #
    # If "all" is True, a list of all qualified nodes or an empty list will be
    # returned.
    # If "all" is False, the first qualified node or None will be returned.
    #
    # GHS: Validated
    #
    def SearchByName(self, nodeName, match=False, all=False, recursive=True):
	if all:
	    ret = [];
	else:
	    ret = None;
	if not self.IsTopTree():
	    if self.nodeName == nodeName:
		if all:
		    ret.append(self);
		else:
		    return self;
	    elif match and re.match(nodeName, self.nodeName):
		if all:
		    ret.append(self);
		else:
		    return self;
	    elif not match and re.search(nodeName, self.nodeName):
		if all:
		    ret.append(self);
		else:
		    return self;
	if recursive:
	    res = self.SearchChildByName(nodeName, match, all, True);
	    if res:
		if all:
		    ret = ret + res;
		else:
		    return res;

	return ret;
    # aliases for the function
    searchbyname = SearchByName;

    #
    # Search a children node of the current tree by column value.
    #
    # The given column value can be a regular expression.
    #
    # "column < 0" means to search all columns
    #
    # If "all" is True, a list of all qualified nodes or an empty list will be
    # returned.
    # If "all" is False, the first qualified node or None will be returned.
    #
    # GHS: Validated
    #
    def SearchChildByColumnValue(self, value, column=-1, match=False, all=False, recursive=True):
	if all:
	    ret = [];
	else:
	    ret = None;
	for child in self.children:
	    res = child.SearchByColumnValue(value, column, match, all, recursive);
	    if res:
		if all:
		    ret = ret + res;
		else:
		    return res;

	return ret;
    # aliases for the function
    searchchildbycolumnvalue = SearchChildByColumnValue;
    SearchChildByColVal = SearchChildByColumnValue;
    searchchildbycolval = SearchChildByColumnValue;

    #
    # Search a node within the current tree (including the node and its
    # children) by column value.
    #
    # The given column value can be a regular expression.
    #
    # "column < 0" means to search all columns
    #
    # If "all" is True, a list of all qualified nodes or an empty list will be
    # returned.
    # If "all" is False, the first qualified node or None will be returned.
    #
    # GHS: Validated
    #
    def SearchByColumnValue(self, value, column=-1, match=False, all=False, recursive=True):
	if all:
	    ret = [];
	else:
	    ret = None;
	if not self.IsTopTree():
	    for idx in range(0, len(self.columnValues)):
		if column < 0 or idx == column:
		    if self.columnValues[idx] == value:
			if all:
			    ret.append(self);
			else:
			    return self;
		    elif match and re.match(value, self.columnValues[idx]):
			if all:
			    ret.append(self);
			else:
			    return self;
		    elif not match and re.search(value, self.columnValues[idx]):
			if all:
			    ret.append(self);
			else:
			    return self;
	if recursive:
	    res = self.SearchChildByColumnValue(value, column, match, all, True);
	    if res:
		if all:
		    ret = ret + res;
		else:
		    return res;

	return ret;
    # aliases for the function
    searchbycolumnvalue = SearchByColumnValue;
    SearchByColVal = SearchByColumnValue;
    searchbycolval = SearchByColumnValue;


    #
    # Search a node on a certain row within the current tree (including the
    # node and its children).
    #
    # Note: The search can be optimized.
    #
    # GHS: Validated
    #
    def SearchRow(self, row):
	if self.row == row:
	    return self;
	elif self.row > row:
	    return None;
	for child in self.children:
	    if child.row > row:
		return None;
	    ret = child.SearchRow(row);
	    if ret:
		return ret;

	return None;
    # aliases for the function
    searchrow = SearchRow;

    #
    # Get the number of children (direct or all descendants) of the node.
    #
    # GHS: Validated
    #
    def GetChildrenNumber(self, directChildren=False):
	ret = len(self.children);
	if directChildren:
	    return ret;
	for child in self.children:
	    ret = ret + child.GetChildrenNumber(False);
	return ret;
    # aliases for the function
    getchildrennumber = GetChildrenNumber;
    GetChildNum = GetChildrenNumber;
    getchildnum = GetChildrenNumber;




class GHS_Window (ghs_ideobject.GHS_IdeObject):
    """ Describe a GHS window's information: its name and internal ID etc. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, compName="", wn="", wid="0", className="",
		 regSvcName="", service=""):
	ghs_ideobject.GHS_IdeObject.__init__(self, service);
	# Component name for some MULTI Debuger windows (task manager window,
	# task etc).
	self.component = compName;
	self.windowName = wn;
	self.windowId = wid;
	self.winClassName = className;
	self.winRegSvcName = regSvcName;

	self.forceRunCmdViaWin = False;

	# This is a constant field, whose value should never be changed.
	self.modalDialogName = "ModalDialog";

    #
    # Print window information.
    #
    # Return a string for the window information.
    #
    # GHS: Validated
    #
    def GetInfo(self, printOut=True):
	ret = 'Window Information\n';
	if self.windowName:
	    ret = ret + 'Name:\t\t'+self.windowName+'\n';
	else:
	    ret = ret + 'Name:\t\tN/A\n';
	if self.windowId:
	    ret = ret + 'Id:\t\t'+self.windowId+'\n';
	else:
	    ret = ret + 'Id:\t\tN/A\n';
	if self.winClassName:
	    ret = ret + 'Class:\t\t'+self.winClassName+'\n';
	else:
	    ret = ret + 'Class:\t\tN/A\n';
	if self.winRegSvcName:
	    ret = ret + 'RegSvc:\t\t'+self.winRegSvcName+'\n';
	else:
	    ret = ret + 'RegSvc:\t\tN/A\n';
	if self.component:
	    ret = ret + 'Component:\t'+self.component+'\n';
	else:
	    ret = ret + 'Component:\tN/A\n';
	if printOut:
	    print('%s' % ret),
	return ret;
    # Define some aliases for the function
    getinfo =GetInfo;


    #
    # Check if two window objects are the same one.
    #
    # Return True if yes, and False otherwise.
    #
    # GHS: Validated
    #
    def IsSameWindow(self, winObj):
	if not winObj:
	    return False;
	if not isinstance(winObj, GHS_Window):
	    return False;
	if isinstance(self.windowId, str):
	    wid1 = int(self.windowId, 0);
	else:
	    wid1 = self.windowId;
	if isinstance(winObj.windowId, str):
	    wid2 = int(winObj.windowId, 0);
	else:
	    wid2 = winObj.windowId;
	if wid1 != wid2:
	    return False;
	if not self.winRegSvcName or self.winRegSvcName != winObj.winRegSvcName:
	    return False;

	return True;
    # Define some aliases for the function
    issamewindow = IsSameWindow;
    IsSameWin = IsSameWindow;
    issamewin = IsSameWindow;
    SameWin = IsSameWindow;
    samewin = IsSameWindow;


    #
    # Check if the window object is initialized with a GUI window.
    #
    # Return True or False.
    #
    # GHS: Validated
    #
    def IsInitializedWithGuiWindow(self):
	if not self.windowName and (not self.windowId or
				    int(self.windowId, 0) == 0):
	    return False;
	#elif not self.winClassName:
	#    return False;
	else:
	    return True;
    #
    # Check if the window for the object still exists.
    #
    # Return True or False.
    #
    # GHS: Validated
    #
    def IsWindowAlive(self, clearIfNotAlive=True):
	if not self.IsInitializedWithGuiWindow():
	    return False;

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	if not winreg.CheckWindowObject(self):
	    if clearIfNotAlive:
		# Cleanup the attributes to speed up the checking next time.
		self.windowName = "";
		self.windowId = "";
	    return False;
	else:
	    return True;
    # Define some aliases for the function
    iswindowalive = IsWindowAlive;
    IsWinAlive = IsWindowAlive;
    iswinalive = IsWindowAlive;
    IsAlive = IsWindowAlive;
    isalive = IsWindowAlive;
    Alive = IsWindowAlive;
    alive = IsWindowAlive;


    #
    # Process error and outputs.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (internal use only)
    #
    def HandleErrorAndOutputs(self, printOutput):
	if self.cmdExecStatus == 1:
	    if printOutput:
		if self.cmdExecOutput:
		    if re.match("\n$", self.cmdExecOutput):
			print("%s" % self.cmdExecOutput),
		    else:
			print("%s" % self.cmdExecOutput);
	    return True;
	elif printOutput:
	    # The window could be temporarily unregistered, so the existance
	    # checking is not accurate.
	    winreg = ghs_misc.GetGlobal("winreg");
	    if not winreg:
		winreg = ghs_winreg.GHS_WindowRegister();
		ghs_misc.SetGlobal("winreg", winreg);

	    obj = winreg.CheckWindowObject(self);
	    if obj:
		msg = "Failed to execute command";
	    else:
		msg = "Failed to execute command (the window may already be closed)";
	    if self.cmdExecOutput:
		if re.match("\n$", self.cmdExecOutput):
		    print("%s:\n%s" % (msg, self.cmdExecOutput)),
		else:
		    print("%s:\n%s" % (msg, self.cmdExecOutput));
	    else:
		print("%s" % msg);
	return False;
    #
    # Run a command in the corresponding component.
    #
    # The command and its arguments are given as a list.
    #
    # Arguments:
    #	 cmdInList	a list of commands to be executed.
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
    # Return True(success) or False(failure).
    #
    # The function is depreciated.
    #
    # GHS: Validated (deprecated, internal use only)
    #
    def RunCommandInList(self, cmdInList, block=True, printOutput=True,
			 keepRawOutput=False):
	# Route the commands to the corresponding Window via
	# GHS Window Register.
	if not self.IsInitializedWithGuiWindow():
	    print("The window's information is not initialized.");
	    raise GHS_AbortExecFileWithStack("RunCommandInList() on not-fully-initialized GHS_Window object");

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	ret  = winreg.RunCommandInList(cmdInList,
						  block,
						  False,
						  self.windowName,
						  self.windowId,
						  self.winClassName,
						  self.winRegSvcName,
						  keepRawOutput);
	self.CleanCmdExecVariables(winreg.cmdExecStatus,
				   winreg.cmdExecOutput,
				   winreg.cmdExecObj);
	# Begin debugging code
	self.cmdExecPath = "Via Window (list):";
	for idx in range(0, len(cmdInList)):
	    self.cmdExecPath = self.cmdExecPath + " " + str(cmdInList[idx]);
	# End debugging code
	winreg.CleanCmdExecVariables();
	self.HandleErrorAndOutputs(printOutput);
	return ret;
    # Define some aliases for RunCommands function
    runcommandinlist = RunCommandInList;
    RunCmdInList = RunCommandInList;
    runcmdinlist = RunCommandInList;
    #
    # Run a command in the corresponding component.
    #
    # Arguments:
    #	 cmds		commands to be executed.
    #    block		indicates if to execute the command in block mode and
    #			grabs the outputs back.
    #    printOutput	indicates whether or not to print the outputs (if any)
    #			from the corresponding window.
    #    keepRawOutput  indicates if to keep the raw output, which is used by
    #			MULTI Python Integration to transfer some special
    #			information.
    #			The flag is majorly for testing purpose. Usually, it 
    #			should not be turned on.
    #
    # The function is just for internal usage.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def RunCommands(self, cmd, block=True, printOutput=True, keepRawOutput=False):
	# Route the commands to the corresponding Window via
	# GHS Window Register.
	if not self.IsInitializedWithGuiWindow():
	    print("The window's information is not initialized.");
	    raise GHS_AbortExecFileWithStack("RunCommands('"+cmd+"') on not-fully-initialized GHS_Window object");

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	winreg.RunCommands(cmd, block,
				      False,
				      self.windowName,
				      self.windowId,
				      self.winClassName,
				      self.winRegSvcName,
				      keepRawOutput);
	self.CleanCmdExecVariables(winreg.cmdExecStatus,
				   winreg.cmdExecOutput,
				   winreg.cmdExecObj);
	# Begin debugging code
	self.cmdExecPath = "Via Window: " + cmd;
	# End debugging code
	winreg.CleanCmdExecVariables();
	self.HandleErrorAndOutputs(printOutput);
	return self.cmdExecStatus == 1;
    # Define some aliases for RunCommands function
    runcommands = RunCommands;
    RunCommand = RunCommands;
    runcommand = RunCommands;
    RunCmd = RunCommands;
    runcmd = RunCommands;
    RunCmds = RunCommands;
    runcmds = RunCommands;


    #
    # Run GUI commands.
    #
    # Arguments:
    #    block		indicates if to execute the command in block mode and
    #			grabs the outputs back.
    #    printOutput	indicates whether or not to print the outputs (if any)
    #			from the corresponding window.
    #
    # The function is just for internal usage.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (indirectly)
    #
    def RunGuiCommands(self, cmd, block=True, printOutput=True, keepRawOutput=False):
	return GHS_Window.RunCommands(self,
				     cmd,
				     block,
				     printOutput,
				     keepRawOutput);

    #
    # Show a message in window.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ShowMessage(self, msg, inDialog=False, error=False, permanent=False):
	if not msg:
	    msg = "";
	cmd = "ide_showmsg ";
	if inDialog:
	    cmd = cmd + "-dialog ";
	if error:
	    cmd = cmd + "-error ";
	if permanent:
	    cmd = cmd + "-permanent ";
	if msg:
	    cmd = cmd + GHS_QuotifyString(msg);
	return self.RunGuiCommands(cmd);
    # Define some aliases for the function
    showmessage = ShowMessage;
    ShowMsg = ShowMessage;
    showmsg = ShowMessage;
    DisplayMessage = ShowMessage;
    displaymessage = ShowMessage;
    DisplayMsg = ShowMessage;
    displaymsg = ShowMessage;
    #
    # Parse choose result.
    #
    # Return the choose result string.
    #
    # GHS: Validated (internal use only)
    #
    def ParseChooseResult(self, printOutput=True, resultString=""):
	if not resultString:
	    resultString = self.cmdExecOutput;
	self.cmdExecOutput = "";
	gotOutputLine = False;
	ret = "";
	gotResult = False;
	lines = resultString.split("\n");
	chooseLine = re.compile("(^%%%%ChooseResult=)(.*)$");
	for line in lines:
	    res = chooseLine.match(line);
	    if res:
		ret = res.group(2);
		gotResult = True;
		# Should we keep the result in the command outputs?
#		if gotOutputLine:
#		    self.cmdExecOutput = self.cmdExecOutput + "\n" + ret;
#		else:
#		    self.cmdExecOutput = ret;
#		    gotOutputLine = True;
	    elif gotOutputLine:
		self.cmdExecOutput = self.cmdExecOutput + "\n" + line;
	    else:
		self.cmdExecOutput = line;
		gotOutputLine = True;
	if printOutput and self.cmdExecOutput:
	    if re.match("\n$", self.cmdExecOutput):
		print(self.cmdExecOutput),
	    else:
		print(self.cmdExecOutput);
	if not gotResult:
	    ret = resultString;
	return ret;
    #
    # Parse Yes/No choosing result.
    #
    # Return True(yes) or False(no).
    #
    # GHS: Validated (internal use only)
    #
    def ParseYesNoResult(self, printOutput=True, resultString=""):
	res = self.ParseChooseResult(printOutput, resultString);
	if res and re.match("^\d+$", res):
	    return int(res, 0) != 0;
	else:
	    return False;
    #
    # Choose yes or no.
    #
    # For default choice: 1 for yes, and 0 for no.
    #
    # Return True(yes) or False(no).
    #
    # GHS: Validated
    #
    def ChooseYesNo(self, msg, dftChoice=0, printOutput=True):
	self.CleanCmdExecVariables();
	if not msg:
	    self.cmdExecStatus = 0;
	    print("No question message is given.");
	    return False;
	if dftChoice:
	    cmd = 'ide_yesnodlg  -distinguish -default 1 '+GHS_QuotifyString(msg);
	else:
	    cmd = 'ide_yesnodlg  -distinguish -default 0 '+GHS_QuotifyString(msg);
	if self.RunGuiCommands(cmd, True, False):
	    return self.ParseYesNoResult(printOutput, self.cmdExecOutput);
	else:
	    return False;
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
		    prompt="Your input", title="", helpkey=""):
	self.CleanCmdExecVariables();
	if valList:
	    if isinstance(valList, str):
		valStr = valList;
	    elif isinstance(valList, list) or isinstance(valList, tuple):
	    # And set in Python 2.4.
		valStr = "";
		gotFirstEle = False;
		for tmpStr in valList:
		    tmpStr = str(tmpStr);
		    if gotFirstEle:
			valStr = valStr + "\n" + tmpStr;
		    else:
			valStr = tmpStr;
			gotFirstEle = True;
	    else:
		# Hope it is a number
		#print("Unknown value for valList: str or string list are supported.");
		#return "";
		valStr = str(valList);
	else:
	    valStr = "";
	if not valStr and onlyFromList:
	    print("You cannot specify \"only from list\" while no value is given.");
	    return "";
	cmd = 'ide_getinput';
	# Distinguish the result
	cmd = cmd + " -distinguish";
	if title:
	    cmd = cmd + ' -title ' + GHS_QuotifyString(title);
	if not prompt:
	    prompt = "Type in input";
	cmd = cmd + ' -prompt ' + GHS_QuotifyString(prompt);
	if helpkey:
	    cmd = cmd + ' -help ' + GHS_QuotifyString(helpkey);
	if dftValue:
	    cmd = cmd + ' -default ' + GHS_QuotifyString(str(dftValue));
	if valStr:
	    cmd = cmd + ' -list ' + GHS_QuotifyString(valStr);
	if onlyFromList:
	    cmd = cmd + ' -fromlist';
	if self.RunGuiCommands(cmd, True, False):
	    return self.ParseChooseResult(False, self.cmdExecOutput);
	else:
	    return "";
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
		    title="Choose Value from List", helpkey=""):
	self.CleanCmdExecVariables();
	if valList:
	    if isinstance(valList, str):
		valStr = valList;
	    elif isinstance(valList, list) or isinstance(valList, tuple):
	    # And set in Python 2.4.
		valStr = "";
		gotFirstEle = False;
		for tmpStr in valList:
		    tmpStr = str(tmpStr);
		    if gotFirstEle:
			valStr = valStr + "\n" + tmpStr;
		    else:
			valStr = tmpStr;
			gotFirstEle = True;
	    else:
		# Hope it is a number
		#print("Unknown value for valList: str or string list are supported.");
		#return "";
		valStr = str(valList);
	else:
	    valStr = "";

	if not valStr:
	    print("The value list is empty.");
	    return "";

	cmd = 'ide_choosefromlist';
	# Distinguish the result
	cmd = cmd + " -distinguish";

	if not title:
	    title = prompt;
	cmd = cmd + ' -title ' + GHS_QuotifyString(title);

	if not prompt:
	    prompt = "Select value from the list:";
	cmd = cmd + ' -prompt ' + GHS_QuotifyString(prompt);

	if helpkey:
	    cmd = cmd + ' -help ' + GHS_QuotifyString(helpkey);
	cmd = cmd + ' -default ' + str(dftValueIdx);

	# The value list cannot be empty (checked above).
	cmd = cmd + ' -list ' + GHS_QuotifyString(valStr);

	if colValueSep:
	    cmd = cmd + ' -columnValueSep ' + GHS_QuotifyString(colValueSep);

	if colNames:
	    if isinstance(colNames, str):
		valStr = colNames;
	    elif isinstance(colNames, list) or isinstance(colNames, tuple):
	    # And set in Python 2.4.
		valStr = "";
		gotFirstEle = False;
		for tmpStr in colNames:
		    tmpStr = str(tmpStr);
		    if gotFirstEle:
			valStr = valStr + "\n" + tmpStr;
		    else:
			valStr = tmpStr;
			gotFirstEle = True;
	    else:
		# Hope it is a number
		#print("Unknown value for valList: str or string list are supported.");
		#return "";
		valStr = str(colNames);
	else:
	    valStr = "";
	if valStr:
	    cmd = cmd + ' -columnNames ' + GHS_QuotifyString(valStr);

	if self.RunGuiCommands(cmd, True, False):
	    return self.ParseChooseResult(False, self.cmdExecOutput);
	else:
	    return "";
    # Define some aliases for the function
    choosefromlist = ChooseFromList;

    #
    # Choose a window from a window list.
    #
    # It is an application of the above ChooseFromList() function.
    #
    # GHS: Validated
    #
    def ChooseWindowFromGui(self, msg="Choose a window:",
			    title="Choose Window from List",
			    wins=None):
	self.CleanCmdExecVariables();

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	if not wins:
	    wins = winreg.GetWindowList(False);
	idx = 0;
	valList = "";
	for win in wins["winInfo"]:
	    if valList:
		valList = valList + "\n";
	    valList = valList + str(idx)+"#";
	    if win["windowName"]:
		valList = valList + win["windowName"]+"#";
	    else:
		valList = valList + "Anonymous"+"#";
	    if win["className"]:
		valList = valList + win["className"]+"#";
	    else:
		valList = valList + "None"+"#";
	    valList = valList + str(win["pid"])+"#";
	    valList = valList + hex(win["win"]);
	    idx = idx+1;

	if idx <= 0:
	    # No window to select.
	    return None;
	if not msg:
	    msg = "Choose a window:";
	if not title:
	    title = msg;
	res = self.ChooseFromList(0, valList, "#",
				    "Index\nWindow Name\nClass Name\nPID\nWindow ID",
				    msg, title);
	if isinstance(res, str) and len(res) > 0:
	    idx = int(res, 0);
	    return winreg.GetWindowByIndex(idx, wins);
	else:
	    return None;
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
	title="Directory Chooser"):
	self.CleanCmdExecVariables();
	cmd = "ide_dirchooser -distinguish";
	if dftDir:
	    cmd = cmd + ' -dir ' + GHS_QuotifyString(dftDir);
	if prompt:
	    cmd = cmd + ' -prompt ' + GHS_QuotifyString(prompt);
	if not title:
	    title = prompt;
	if title:
	    cmd = cmd + ' -title ' + GHS_QuotifyString(title);
	if self.RunGuiCommands(cmd, True, False):
	    return self.ParseChooseResult(False, self.cmdExecOutput);
	else:
	    return "";
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
	    title="File Chooser"):
	self.CleanCmdExecVariables();
	cmd = "ide_filechooser -distinguish";
	if label:
	    cmd = cmd + ' -label ' + GHS_QuotifyString(label);
	if forOpen:
	    cmd = cmd + ' -forOpen';
	else:
	    cmd = cmd + ' -forSave';
	if existingFile:
	    cmd = cmd + ' -existingFile';
	if eraseFilenameWhenDirChange:
	    cmd = cmd + ' -eraseFilenameWhenDirChange';
	if dftFile:
	    cmd = cmd + ' -file ' + GHS_QuotifyString(dftFile);
	if dftDir:
	    cmd = cmd + ' -dir ' + GHS_QuotifyString(dftDir);
	if extension:
	    cmd = cmd + ' -extension ' + GHS_QuotifyString(extension);
	if fileTypes:
	    cmd = cmd + ' -fileTypes ' + GHS_QuotifyString(fileTypes);
	if title:
	    cmd = cmd + ' -title ' + GHS_QuotifyString(title);
	if self.RunGuiCommands(cmd, True, False):
	    return self.ParseChooseResult(False, self.cmdExecOutput);
	else:
	    return "";
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
    def Beep(self, count=1, block=False):
	self.CleanCmdExecVariables();
	if count <= 0:
	    self.cmdExecStatus = 0;
	    print("Invalid beep count.");
	    return False;
	cmd = 'ide_beep -count  '  + str(count);
	# Or just: print chr(7);
	return self.RunGuiCommands(cmd, block, True);
    # Define some aliases for the function
    beep = Beep;
    #
    # Block the corresponding window or MULTI IDE component from accepting
    # command for a while (in milliseconds).
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def Wait(self, timeout, local=True, block=False):
	self.CleanCmdExecVariables();
	if timeout <= 0:
	    self.cmdExecStatus = 0;
	    print("Invalid timeout value: a positive value in milliseconds.");
	    return False;
	cmd = 'ide_wait -time  '  + str(timeout);
	if local:
	    cmd = cmd + ' -local';
	else:
	    cmd = cmd + ' -global';
	return self.RunGuiCommands(cmd, block, True);
    # Define some aliases for the function
    wait = Wait;


    #
    # Get command to dump menu bar.
    #
    # GHS: Validated
    #
    def GetCommandToDumpMenuBar(self, dialog=False, level=0):
	cmd = "__dumpgui menubar.value ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	return cmd;
    # Define some aliases for the function
    getcommandtodumpmenubar = GetCommandToDumpMenuBar;
    CmdToDumpMenuBar = GetCommandToDumpMenuBar;
    cmdtodumpmenubar = GetCommandToDumpMenuBar;
    #
    # Dump menu bar
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def DumpMenuBar(self, block=True, printOutput=True):
	cmd = self.GetCommandToDumpMenuBar();
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumpmenubar = DumpMenuBar;
    #
    # Get command to dump a menu.
    #
    # GHS: Validated
    #
    def GetCommandToDumpMenu(self, menu="", dialog=False, level=0):
	cmd = "__dumpgui menu.value ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	if menu:
	    cmd = cmd + ' ' + GHS_QuotifyString(menu);
	return cmd;
    # Define some aliases for the function
    getcommandtodumpmenu = GetCommandToDumpMenu;
    CmdToDumpMenu = GetCommandToDumpMenu;
    cmdtodumpmenu = GetCommandToDumpMenu;
    #
    # Dump a menu 
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def DumpMenu(self, menu="", block=True, printOutput=True):
	cmd = self.GetCommandToDumpMenu(menu);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for DumpMenu function
    dumpmenu = DumpMenu;
    #
    # Check if the specified menu entry is active (not dimmed).
    #
    # Return True if yes, otherwise False.
    #
    # GHS: Validated
    #
    def IsMenuItemActive(self, menuName, menuItemName):
	if not menuName:
	    print("No menu name is specified.");
	    return False;
	if not menuItemName:
	    print("No menu entry name is specified.");
	    return False;
	if not self.DumpMenu(menuName, True, False):
	    return False;
	if not self.cmdExecOutput:
	    return False;
	lineList = self.cmdExecOutput.split("\n");
	escMenuEntryName = GHS_EscapeReChars(menuItemName);
	for line in lineList:
	    #res = re.match("^\s*"+menuItemName+"\s*(.*)$", line);
	    res = re.match("^"+escMenuEntryName+"\s*$", line);
	    if res:
		return True;
	    res = re.match("^"+escMenuEntryName+"\s(.*)$", line);
	    if res:
		# A bunch of option string could be here, like dimmed, ticked
		#print('"%s" matches "%s"' % (line, menuItemName));
		if re.match("^.*\s*dimmed\s*.*$", res.group(1)):
		    return False;
		else:
		    return True;
	# We did not see the menu entry name at all.
	return False;
    # Define some aliases for the function
    ismenuitemactive = IsMenuItemActive;
    IsMenuEntryActive = IsMenuItemActive;
    ismenuentryactive = IsMenuItemActive;
    #
    # Wait for a menu entry go into specified status (dimmed or active).
    #
    # If duration is a negavive number, we will wait forever until the 
    # menu entry becomes the specified status.
    # If duration is 0.0, we don't wait.
    # If duration is a positive number, we wait for that number of seconds
    # at most.
    #
    # Return True on success or False on failure.
    #
    # GHS: Validated
    #
    def WaitForMenuItem(self, menuName, menuItemName, active=True,
			 duration=-1.0, interval=0.3):
	if not menuName:
	    print("No menu name is specified.");
	    return False;
	if not menuItemName:
	    print("No menu entry name is specified.");
	    return False;
	goon = True;
        if duration > 0.0:
	    endTime = time.time()+duration;
	if interval <= 0.0:
	    interval = 0.3;

	while goon:
	    res = self.IsMenuEntryActive(menuName, menuItemName);
	    if not self.cmdExecStatus and not self.IsWindowAlive(False):
		# In case something goes wrong. 
		print("The window is gone. Here are the existing windows:");

		winreg = ghs_misc.GetGlobal("winreg");
		if not winreg:
		    winreg = ghs_winreg.GHS_WindowRegister();
		    ghs_misc.SetGlobal("winreg", winreg);

		winreg.ShowWindowList();
		return False;

	    if active == res:
		return True;
	    if duration == 0.0:
		# Only check once
		goon = False;
	    elif duration > 0.0:
		goon = (time.time() < endTime);
	    if goon:
		# We sleep after checking so that we don't miss one checking.
		time.sleep(interval);
	# If the building is not done, return False.
	return False;
    # Define some aliases for the function
    waitformenuitem = WaitForMenuItem;
    WaitMenuItem = WaitForMenuItem;
    waitmenuitem = WaitForMenuItem;
    WaitForMenuEntry = WaitForMenuItem;
    waitformenuentry = WaitForMenuItem;
    WaitMenuEntry = WaitForMenuItem;
    waitmenuentry = WaitForMenuItem;
    #
    # Check if the specified menu entry is ticked.
    #
    # Return True if yes, otherwise False.
    #
    # GHS: Validated
    #
    def IsMenuItemTicked(self, menuName, menuItemName):
	if not menuName:
	    print("No menu name is specified.");
	    return False;
	if not menuItemName:
	    print("No menu entry name is specified.");
	    return False;
	if not self.DumpMenu(menuName, True, False):
	    return False;
	if not self.cmdExecOutput:
	    return False;
	lineList = self.cmdExecOutput.split("\n");
	escMenuEntryName = GHS_EscapeReChars(menuItemName);
	for line in lineList:
	    #res = re.match("^\s*"+menuItemName+"\s*(.*)$", line);
	    res = re.match("^"+escMenuEntryName+"\s*$", line);
	    if res:
		return False;
	    res = re.match("^"+escMenuEntryName+"\s(.*)$", line);
	    if res:
		# A bunch of option string could be here, like dimmed, ticked
		#print('"%s" matches "%s"' % (line, menuItemName));
		if re.match("^.*\s*ticked\s*.*$", res.group(1)):
		    return True;
		else:
		    return False;
	# We did not see the menu entry name at all.
	return False;
    # Define some aliases for the function
    ismenuitemticked = IsMenuItemTicked;
    IsMenuEntryTicked = IsMenuItemTicked;
    ismenuentryticked = IsMenuItemTicked;
    #
    # Check if the specified sub menu entry is active (not dimmed).
    #
    # Return True if yes, otherwise False.
    #
    # GHS: Validated
    #
    def IsSubMenuItemActive(self, menuName, subMenuName, menuItemName):
	if not menuName:
	    print("No menu name is specified.");
	    return False;
	if not subMenuName:
	    print("No menu name is specified.");
	    return False;
	if not menuItemName:
	    print("No menu entry name is specified.");
	    return False;
	if not self.DumpMenu(menuName, True, False):
	    return False;
	if not self.cmdExecOutput:
	    return False;
	indentSpaces = "\t";
	inSubMenu = False;
	lineList = self.cmdExecOutput.split("\n");
	escsubMenuName = GHS_EscapeReChars(subMenuName);
	escMenuEntryName = GHS_EscapeReChars(menuItemName);
	for line in lineList:
	    if inSubMenu:
		res = re.match("^"+indentSpaces+"(.*)$", line);
		if res:
		    line = res.group(1);
		    res = re.match("^"+escMenuEntryName+"\s*$", line);
		    if res:
			return True;
		    res = re.match("^"+escMenuEntryName+"\s(.*)$", line);
		    if res:
			if re.match("^.*\s*dimmed\s*.*$", res.group(1)):
			    return False;
			else:
			    return True;
		else:
		    # We are out of the sub menu.
		    return False;
	    else:
		if re.match("^"+escsubMenuName+"\s*arrow\s*$", line):
		    inSubMenu = True;
	# We did not see the menu entry name at all.
	return False;
    # Define some aliases for the function
    issubmenuitemactive = IsSubMenuItemActive;
    IsSubMenuEntryActive = IsSubMenuItemActive;
    issubmenuentryactive = IsSubMenuItemActive;
    #
    # Check if the specified sub menu entry is ticked.
    #
    # Return True if yes, otherwise False.
    #
    # GHS: Validated
    #
    def IsSubMenuItemTicked(self, menuName, subMenuName, menuItemName):
	if not menuName:
	    print("No menu name is specified.");
	    return False;
	if not subMenuName:
	    print("No menu name is specified.");
	    return False;
	if not menuItemName:
	    print("No menu entry name is specified.");
	    return False;
	if not self.DumpMenu(menuName, True, False):
	    return False;
	if not self.cmdExecOutput:
	    return False;
	indentSpaces = "\t";
	inSubMenu = False;
	lineList = self.cmdExecOutput.split("\n");
	escsubMenuName = GHS_EscapeReChars(subMenuName);
	escMenuEntryName = GHS_EscapeReChars(menuItemName);
	for line in lineList:
	    if inSubMenu:
		res = re.match("^"+indentSpaces+"(.*)$", line);
		if res:
		    line = res.group(1);
		    res = re.match("^"+escMenuEntryName+"\s*$", line);
		    if res:
			return False;
		    res = re.match("^"+escMenuEntryName+"\s(.*)$", line);
		    if res:
			if re.match("^.*\s*ticked\s*.*$", res.group(1)):
			    return True;
			else:
			    return False;
		else:
		    # We are out of the sub menu.
		    return False;
	    else:
		if re.match("^"+escsubMenuName+"\s*arrow\s*$", line):
		    inSubMenu = True;
	# We did not see the menu entry name at all.
	return False;
    # Define some aliases for the function
    issubmenuitemticked = IsSubMenuItemTicked;
    IsSubMenuEntryTicked = IsSubMenuItemTicked;
    issubmenuentryticked = IsSubMenuItemTicked;


    #
    # Get command to dump the contents of the whole window.
    #
    # GHS: Validated
    #
    def GetCommandToDumpWindow(self, dialog=False, level=0):
	cmd = "__dumpgui colwind.name ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	return cmd;
    # Define some aliases for the function
    getcommandtodumpwindow = GetCommandToDumpWindow;
    CmdToDumpWin = GetCommandToDumpWindow;
    cmdtodumpwin = GetCommandToDumpWindow;
    CmdToDumpAll = GetCommandToDumpWindow;
    cmdtodumpall = GetCommandToDumpWindow;
    #
    # Dump all contents.
    #
    # GHS: Validated
    #
    def DumpAll(self, block=True, printOutput=True):
	cmd = self.GetCommandToDumpWindow();
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for DumpAll function
    dumpall = DumpAll;
    DumpWindow = DumpAll;
    dumpwindow = DumpAll;
    DumpWin = DumpAll;
    dumpwin = DumpAll;
    #
    # Get command to show all widgets' information of a window.
    #
    # GHS: Validated 
    #
    def GetCommandToShowWidgets(self, dialog=False, level=0):
	cmd = "__dumpwidget ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	return cmd;
    # Define some aliases for the function
    getcommandtoshowwidgets = GetCommandToShowWidgets;
    CmdToShowWidgets = GetCommandToShowWidgets;
    cmdtoshowwidgets = GetCommandToShowWidgets;
    #
    # Show all widget's information.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def ShowWidgets(self, block=True, printOutput=True):
	cmd = self.GetCommandToShowWidgets();
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    showwidgets = ShowWidgets;
    Widgets = ShowWidgets;
    widgets = ShowWidgets;
    #
    # Get command to dump a widget.
    #
    # For the detail, see DumpWidget().
    #
    # GHS: Validated 
    #
    def GetCommandToDumpWidget(self, widgetName="", option="",
				dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__dumpwidget ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	if widgetName:
	    cmd = cmd + ' ' + GHS_QuotifyString(widgetName);
	if option:
	    cmd = cmd + ' -option ' + GHS_QuotifyString(option);
	return cmd;
    # Define some aliases for the function
    getcommandtodumpwidget = GetCommandToDumpWidget;
    CmdToDumpWidget = GetCommandToDumpWidget;
    cmdtodumpwidget = GetCommandToDumpWidget;
    # 
    #
    # Dump a widget's contents.
    #
    # "option" argument gives more information about what to be dumped
    # if the widget has more items to be dumped.
    #
    # Here are the available options for some of the widgets:
    #     MScrollList	- selection | highlight | value
    #     PullDown	- menu | value
    #     TabControl	- selection | content | value
    #     OmniView	- selection | value
    #
    # For the applicable options, you can give "?" for the argument.
    #
    # If no widget name is give, the function will list the information
    # about all windgets in the window.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpWidget(self, widgetName="", option="",
		    block=True, printOutput=True):
	if not widgetName:
	    return self.ShowWidgets(block, printOutput);
	cmd = self.GetCommandToDumpWidget(widgetName, option);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumpwidget = DumpWidget;



    #
    # Get command to select menu entry.
    #
    # GHS: Validated 
    #
    def GetCommandToSelectMenuPath(self, menuPath, dialog=False, level=0):
	if not menuPath:
	    print("No menu path is given.");
	    return "";
	elif not isinstance(menuPath, list) and not isinstance(menuPath, tuple):
	# And set in Python 2.4.
	    print("Unknown value for menu path: string list or string tuple are supported.");
	    return "";
	cmd = "__modgui menu.selectitem ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level > 0:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);

	for tmpObj in menuPath:
	    cmd = cmd + ' ' + GHS_QuotifyString(str(tmpObj));
	return cmd;
    # Define some aliases for the function
    getcommandtoselectmenupath = GetCommandToSelectMenuPath;
    CmdToSelMenuPath = GetCommandToSelectMenuPath;
    cmdtoselmenupath = GetCommandToSelectMenuPath;
    #
    # Get command to select menu entry.
    #
    # GHS: Validated 
    #
    def GetCommandToSelectMenu(self, menuName, menuItemName,
				dialog=False, level=0):
	return self.GetCommandToSelectMenuPath([menuName, menuItemName],
						dialog, level);
    # Define some aliases for the function
    getcommandtoselectmenu = GetCommandToSelectMenu;
    CmdToSelMenu = GetCommandToSelectMenu;
    cmdtoselmenu = GetCommandToSelectMenu;
    #
    # Select menu entry.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SelectMenu(self, menuName, menuItemName, block=True, printOutput=True):
	if not self.IsMenuItemActive(menuName, menuItemName):
	    if printOutput:
		print("The menu entry is dimmed out or does not exist.");
	    return False;
	cmd = self.GetCommandToSelectMenu(menuName, menuItemName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for SelectMenu function
    selectmenu = SelectMenu;
    SelMenu = SelectMenu;
    selmenu = SelectMenu;
    ChooseMenu = SelectMenu;
    choosemenu = SelectMenu;
    #
    # Get command to select menu entry.
    #
    # GHS: Validated
    #
    def GetCommandToSelectSubMenu(self, menuName, subMenuName, menuItemName,
				    dialog=False, level=0):
	return self.GetCommandToSelectMenuPath([menuName,
						subMenuName,
						menuItemName],
						dialog, level);
    # Define some aliases for the function
    getcommandtoselectsubmenu = GetCommandToSelectSubMenu;
    CmdToSelSubMenu = GetCommandToSelectSubMenu;
    cmdtoselsubmenu = GetCommandToSelectSubMenu;
    #
    # Select sub menu entry.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def SelectSubMenu(self, menuName, subMenuName, menuItemName,
			block=True, printOutput=True):
	if not menuName:
	    print("No menu name is given.");
	    return False;
	elif not subMenuName:
	    print("No sub-menu name is given.");
	    return False;
	elif not menuItemName:
	    print("No menu item name is given.");
	    return False;
	elif not self.IsSubMenuItemActive(menuName, subMenuName, menuItemName):
	    print("The menu entry is dimmed out or does not exist.");
	    return False;
	else:
	    cmd = self.GetCommandToSelectSubMenu(menuName,
						 subMenuName,
						 menuItemName);
	    if not cmd:
		return False;
	    return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for SelectMenu function
    selectsubmenu = SelectSubMenu;
    SelSubMenu = SelectSubMenu;
    selsubmenu = SelectSubMenu;
    ChooseSubMenu = SelectSubMenu;
    choosesubmenu = SelectSubMenu;
    #
    # Get command to select menu entry.
    #
    # GHS: Validated 
    #
    def GetCommandToSelectSubSubMenu(self, menuName, subMenuName,
				     subSubMenuName, menuItemName,
				     dialog=False, level=0):
	return self.GetCommandToSelectMenuPath([menuName,
						subMenuName,
						subSubMenuName,
						menuItemName],
						dialog, level);
    # Define some aliases for the function
    getcommandtoselectsubsubmenu = GetCommandToSelectSubSubMenu;
    CmdToSelSubSubMenu = GetCommandToSelectSubSubMenu;
    cmdtoselsubsubmenu = GetCommandToSelectSubSubMenu;
    #
    # Select sub sub menu entry.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SelectSubSubMenu(self, menuName, subMenuName, subSubMenuName,
			 menuItemName, block=True, printOutput=True):
	if not menuName:
	    print("No menu name is given.");
	    return False;
	elif not subMenuName:
	    print("No sub-menu name is given.");
	    return False;
	elif not subSubMenuName:
	    print("No sub-sub-menu name is given.");
	    return False;
	elif not menuItemName:
	    print("No menu item name is given.");
	    return False;
	else:
	    cmd = self.GetCommandToSelectSubSubMenu(menuName,
						    subMenuName,
						    subSubMenuName,
						    menuItemName);
	    if not cmd:
		return False;
	    return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for SelectMenu function
    selectsubsubmenu = SelectSubSubMenu;
    SelSubSubMenu = SelectSubSubMenu;
    selsubsubmenu = SelectSubSubMenu;
    ChooseSubSubMenu = SelectSubSubMenu;
    choosesubsubmenu = SelectSubSubMenu;


    #
    # Close window
    #
    # GHS: Validated 
    #
    def CloseWindow(self, block=True, printOutput=True):
	self.CleanCmdExecVariables();
	if not self.IsInitializedWithGuiWindow():
	    print("The window information is not initialized.");
	    self.cmdExecStatus = 0;
	    return False;
	elif not self.IsWindowAlive(False):
	    print("The window was already closed.");
	    self.cmdExecStatus = 0;
	    return False;
	else:
	    # Use command instead of the dedicated message to avoid
	    # synchronization issue with other IDE or the target window's
	    # commands.
	    ret = self.RunGuiCommands("ide_closewin", block, printOutput);
	    if ret and block:
		# Wait for the object unregister.
		winreg = ghs_misc.GetGlobal("winreg");
		if not winreg:
		    winreg = ghs_winreg.GHS_WindowRegister();
		    ghs_misc.SetGlobal("winreg", winreg);

		winreg.WaitForWindowObjectGoAway(self,
						 self.maxSecToWaitForNewWindow);
	    return ret;
#	    if not winreg.CloseWindow(self.windowName,
#						 self.windowId,
#						 self.winClassName,
#						 self.winRegSvcName):
#		self.cmdExecStatus = 0;
#		return False;
#	    else:
#		return True;
    # Define some aliases for the function
    closewindow = CloseWindow;
    CloseWin = CloseWindow;
    closewin = CloseWindow;
    #
    # Show window to the top.
    #
    # We do not use "ShowWindow" as the function name in case that we would 
    # provide API to hide (make invisible) and show (make visible) a window.
    #
    # GHS: Validated 
    #
    def RestoreWindow(self, block=True, printOutput=True):
	self.CleanCmdExecVariables();
	if not self.IsInitializedWithGuiWindow():
	    print("The window information is not initialized.");
	    self.cmdExecStatus = 0;
	    return False;
	elif not self.IsWindowAlive(False):
	    print("The window was already closed.");
	    self.cmdExecStatus = 0;
	    return False;
	else:
	    # Use command instead of the dedicated message to avoid
	    # synchronization issue with other IDE or the target window's
	    # commands.
	    return self.RunGuiCommands("ide_showwin", block, printOutput);
#	    if not winreg.RestoreWindow(self.windowName,
#						self.windowId,
#						self.winClassName,
#						self.winRegSvcName):
#		self.cmdExecStatus = 0;
#		return False;
#	    else:
#		return True;
    # Define some aliases for the function
    restorewindow = RestoreWindow;
    RestoreWin = RestoreWindow;
    restorewin = RestoreWindow;
    RaiseWindow = RestoreWindow;
    raisewindow = RestoreWindow;
    RaiseWin = RestoreWindow;
    raisewin = RestoreWindow
    #
    # Iconify window
    #
    # GHS: Validated 
    #
    def IconifyWindow(self, block=True, printOutput=True):
	self.CleanCmdExecVariables();
	if not self.IsInitializedWithGuiWindow():
	    print("The window information is not initialized.");
	    self.cmdExecStatus = 0;
	    return False;
	elif not self.IsWindowAlive(False):
	    print("The window was already closed.");
	    self.cmdExecStatus = 0;
	    return False;
	else:
	    # Use command instead of the dedicated message to avoid
	    # synchronization issue with other IDE or the target window's
	    # commands.
	    return self.RunGuiCommands("ide_iconifywin", block, printOutput);
#	    if not winreg.IconifyWindow(self.windowName,
#						   self.windowId,
#						   self.winClassName,
#						   self.winRegSvcName):
#		self.cmdExecStatus = 0;
#		return False;
#	    else:
#		return True;
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
    # Move window.
    #
    # The new position can be relative to the window's current position,
    # or be the absolute position on the screen.
    #
    # If proper argument is given, the window can be moved out of the current
    # logic screen into another one.
    #
    # The x, y arguments should be in number, and you can use the following
    # globals in their expression:
    #     __ghs_display_width
    #     __ghs_display_height
    #
    # GHS: Validated 
    #
    def MoveWindow(self, x, y, relative=True):
	cmd = "ide_movewin "+self.windowId;
	if relative:
	    if x == 0 and y == 0:
		print("Window will not be moved by the arguments.");
		return True;
	    cmd = cmd + " -relative -x " + str(x) + " -y " + str(y);
	else:
	    cmd = cmd + " -absolute -x " + str(x) + " -y " + str(y);
	return self.RunGuiCommands(cmd);
    # Define some aliases for the function
    movewindow = MoveWindow;
    MoveWin = MoveWindow;
    movewin = MoveWindow;
    #
    # Resize window.
    #
    # The new dimension can be relative to the window's current dimension,
    # or be the absolute new dimension.
    #
    # The width, height arguments should be in number, and you can use the
    # following globals in their expression:
    #     __ghs_display_width
    #     __ghs_display_height
    #
    # GHS: Validated 
    #
    def ResizeWindow(self, width, height, relative=True):
	cmd = "ide_resizewin "+self.windowId;
	if relative:
	    if width == 0 and relative == 0:
		print("Window will not be resized by the arguments.");
		return True;
	    cmd = cmd + " -relative";
	else:
	    cmd = cmd + " -absolute";
	cmd = cmd + " -w " + str(width) + " -h " + str(height);
	return self.RunGuiCommands(cmd);
    # Define some aliases for the function
    resizewindow = ResizeWindow;
    ResizeWin = ResizeWindow;
    resizewin = ResizeWindow;
    #
    # Rename window.
    #
    # GHS: Validated 
    #
    def RenameWindow(self, winName, winTitle="", iconTitle=""):
	cmd = "ide_renamewin "+self.windowId+' -name '+GHS_QuotifyString(winName);
	if winTitle:
	    cmd = cmd+' -wtitle '+GHS_QuotifyString(winTitle);
	if iconTitle:
	    cmd = cmd+' -ititle '+GHS_QuotifyString(iconTitle);
	return self.RunGuiCommands(cmd);
    # Define some aliases for the function
    renamewindow = RenameWindow;
    RenameWin = RenameWindow;
    renamewin = RenameWindow;


    #
    # Get window position.
    #
    # Return the position in a tuple like (x, y) or None on error.
    #
    # GHS: Validated 
    #
    def GetPosition(self, printOutput=True):
	cmd = "ide_getwinattr -position";
	if not self.RunGuiCommands(cmd, True, printOutput):
	    return None;
	res = re.match("^\s*\((-{0,1}\d+|0[xX][0-9a-fA-F]+),\s*(-{0,1}\d+|0[xX][0-9a-fA-F]+)\)\s*$",
			self.cmdExecOutput);
	if res:
	    return (int(res.group(1), 0), int(res.group(2), 0));
	else:
	    return None;
    # Define some aliases for the function
    getposition = GetPosition;
    GetPos = GetPosition;
    getpos = GetPosition;
    #
    # Get window dimension.
    #
    # Return the dimension in a tuple like (w, h) or None on error.
    #
    # GHS: Validated 
    #
    def GetDimension(self, printOutput=True):
	cmd = "ide_getwinattr -dimension";
	if not self.RunGuiCommands(cmd, True, printOutput):
	    return None;
	res = re.match("^\s*\[(\d+|0[xX][0-9a-fA-F]+),\s*(\d+|0[xX][0-9a-fA-F]+)\]\s*$",
			self.cmdExecOutput);
	if res:
	    return (int(res.group(1), 0), int(res.group(2), 0));
	else:
	    return None;
    # Define some aliases for the function
    getdimension = GetDimension;
    GetDim = GetDimension;
    getdim = GetDimension;
    #
    # Check if the window is iconified.
    #
    # Return True (if iconified) or False (otherwise)
    #
    # GHS: Validated 
    #
    def IsIconified(self):
	cmd = "ide_getwinattr -iconified";
	if not self.RunGuiCommands(cmd, True, False):
	    return False;
	res = re.match("^\s*(\w+)\s*$", self.cmdExecOutput);
	if res:
	    return res.group(1) == "Yes" or res.group(1) == "yes" or \
		    res.group(1) == "True" or res.group(1) == "true";
	else:
	    return False;
    # Define some aliases for the function
    isiconified = IsIconified;
    IsMinimized = IsIconified;
    isminimized = IsIconified;
    IsMin = IsIconified;
    ismin = IsIconified;
    #
    # Check if the window is visible or not.
    #
    # Return True (if visible) or False (invisible)
    #
    # If we expose the API to customer, we need to provide more relatesd API:
    #     HideWindow()
    #     ShowWindow()
    #
    # GHS: Validated (internal use only)
    #
    def IsVisible(self):
        cmd = "ide_getwinattr -visible";
        if not self.RunGuiCommands(cmd, True, False):
	    if self.cmdExecOutput:
		print("%s" % (self.cmdExecOutput));
            return False;
        res = re.match("^\s*(\w+)\s*$", self.cmdExecOutput);
        if res:
            return res.group(1) == "Yes" or res.group(1) == "yes" or \
                    res.group(1) == "True" or res.group(1) == "true";
        else:
            return False;
    # Define some aliases for the function
    isvisible = IsVisible;
    #
    # Get window's name and refresh the name kept in the GHS_Window
    # object.
    #
    # Return window's name.
    #
    # GHS: Validated 
    #
    def GetName(self, printOutput=True):
	cmd = "ide_getwinattr -name";
	if self.RunGuiCommands(cmd, True, printOutput):
	    if self.windowName != self.cmdExecOutput:
		self.windowName = self.cmdExecOutput;
	    return self.cmdExecOutput;
	else:
	    return "";
    # Define some aliases for the function
    getname = GetName;
    #
    # Get window's attributes.
    #
    # Return True (on success) or False (on failure)
    #
    # GHS: Validated 
    #
    def ShowAttributes(self, printOutput=True):
	return self.RunGuiCommands("ide_getwinattr", True, printOutput);
    # Define some aliases for the function
    showattributes = ShowAttributes;
    ShowAttribute = ShowAttributes;
    showattribute = ShowAttributes;
    ShowAttr = ShowAttributes;
    showattr = ShowAttributes;



    ##########################################################################
    #
    #       Button Widget Operations
    #
    ##########################################################################
    #
    # Get command to click button.
    #
    # GHS: Validated 
    #
    def GetCommandToClickButton(self, widgetName, dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = '__modgui bt ';
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName);
	return cmd;
    # Define some aliases for the function
    getcommandtoclickbutton = GetCommandToClickButton;
    CmdToClickButton = GetCommandToClickButton;
    cmdtoclickbutton = GetCommandToClickButton;
    CmdToClickBut = GetCommandToClickButton;
    cmdtoclickbut = GetCommandToClickButton;
    #
    # Get command to dump button value.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpButton(self, widgetName, dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "", dialog, level);
    # Define some aliases for the function
    getcommandtodumpbutton = GetCommandToDumpButton;
    CmdToDumpButton = GetCommandToDumpButton;
    cmdtodumpbutton = GetCommandToDumpButton;
    CmdToDumpBut = GetCommandToDumpButton;
    cmdtodumpbut = GetCommandToDumpButton;
    #
    # Check if a button is dimmed or not.
    #
    # Return True (dimmed or not a button) or False (not dimmed).
    #
    # GHS: Validated 
    #
    def IsButtonDimmed(self, widgetName):
	if not widgetName:
	    return True;
	if not self.DumpButton(widgetName, True, False):
	    return True;
	res = re.match("^\s*Button:(.+)$", self.cmdExecOutput);
	if not res:
	    return True;
	res = re.match("^\s*\w.*\(dimmed\).*$", res.group(1));
	if res:
	    return True;
	else:
	    return False;
    # Define some aliases for RunCommands function
    isbuttondimmed = IsButtonDimmed;
    IsBtnDimmed = IsButtonDimmed;
    isbtndimmed = IsButtonDimmed;
    #
    # Check if a button is down.
    #
    # GHS: Validated
    #
    def IsButtonDown(self, widgetName):
	if not widgetName:
	    return False;
	if not self.DumpButton(widgetName, True, False):
	    return False;
	res = re.match("^\s*Button:(.+)$", self.cmdExecOutput);
	if not res:
	    return False;
	res = re.match("^\s*\w.*\(set\)\s*$", res.group(1));
	if res:
	    return True;
	else:
	    return False;
    # Define some aliases for RunCommands function
    isbuttondown = IsButtonDown;
    IsBtnDown = IsButtonDown;
    isbtndown = IsButtonDown;
    #
    # Wait for a button to be in the specified status.
    #
    # Arguments:
    #   widgetName      name of the button widget
    #   dimmed          indicates the waited button's dim status
    #   isDonw          indicates the waited button's up/down status
    #   duration        the period to wait for the button to be in the
    #                   specified status.
    #                   If duration is a negavive number, wait until the
    #                   button satisfies the requirements.
    #                   If duration is 0.0, only check the button's
    #                   status once.
    #                   If duration is a positive number, wait for that number
    #                   of seconds at most.
    #   checkInterval   the interval to check the button's status/
    #   verbose         indicates if to print detailed error information.
    #
    # Return True if the button is in the specified status, and False
    # otherwise.
    #
    # GHS: Validated 
    #
    def WaitButtonInStatus(self, widgetName, dimmed, isDown=False, duration=-1.0,
			   checkInterval=0.5, verbose=True):
	if not widgetName:
	    if verbose:
		print('No button name is given.');
	    return False;

	goon = True;
	if duration > 0.0:
	    endTime = time.time()+duration;
	while goon:
	    res = self.IsButtonDimmed(widgetName);
	    if not self.cmdExecStatus:
		if verbose:
		    print("Button %s does not exist in the GHS_Window." % widgetName);
		return False;
	    if not self.IsWindowAlive(False):
		if verbose:
		    print("The GHS_Window object is dead.");
		    mywinreg = ghs_misc.GetGlobal("winreg");
		    mywinreg.ShowWindowList();
		return False;

	    if (res and dimmed) or (not res and not dimmed):
		res = self.IsButtonDown(widgetName);
		if (res and isDown) or (not res and not isDown):
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
    waitbuttoninstatus = WaitButtonInStatus;
    #
    # Select Button.
    #
    # GHS: Validated 
    #
    def SelectButton(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No button name is given.");
	    return False;
	elif self.IsButtonDimmed(widgetName):
	    if printOutput:
		print("The button is dimmed out or does not exist.");
	    return False;
	cmd = self.GetCommandToClickButton(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    selectbutton = SelectButton;
    SelButton = SelectButton;
    selbutton = SelectButton;
    SelBut = SelectButton;
    selbut = SelectButton;
    PressButton = SelectButton;
    pressbutton = SelectButton;
    PressBut = SelectButton;
    pressbut = SelectButton;
    ClickButton = SelectButton;
    clickbutton = SelectButton;
    ClickBut = SelectButton;
    clickbut = SelectButton;
    #
    # Dump a button's status.
    #
    # GHS: Validated 
    #
    def DumpButton(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No button name is given.");
	    return False;
	cmd = self.GetCommandToDumpButton(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumpbutton = DumpButton;
    DumpBut = DumpButton;
    dumpbut = DumpButton;


    ##########################################################################
    #
    #       PullDown Widget Operations
    #
    ##########################################################################
    #
    # Get command to change PullDown widget value.
    #
    # GHS: Validated 
    #
    def GetCommandToChangePullDownValue(self, widgetName, value,
					dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = '__modgui pd ';
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + GHS_QuotifyString(str(value));
	return cmd;
    # Define some aliases for the function
    getcommandtochangepulldownvalue = GetCommandToChangePullDownValue;
    CmdToChangePdValue = GetCommandToChangePullDownValue;
    cmdtochangepdvalue = GetCommandToChangePullDownValue;
    CmdToChangePdVal = GetCommandToChangePullDownValue;
    cmdtochangepdval = GetCommandToChangePullDownValue;
    #
    # Get command to dump PullDown widget value.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpPullDownValue(self, widgetName, dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "", dialog, level);
    # Define some aliases for the function
    getcommandtodumppulldownvalue = GetCommandToDumpPullDownValue;
    CmdToDumpPdValue = GetCommandToDumpPullDownValue;
    cmdtodumppdvalue = GetCommandToDumpPullDownValue;
    CmdToDumpPdVal = GetCommandToDumpPullDownValue;
    cmdtodumppdval = GetCommandToDumpPullDownValue;
    #
    # Get command to select PullDown widget menu.
    #
    # GHS: Validated 
    #
    def GetCommandToSelectPullDownMenu(self, widgetName, valIdx,
					dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = '__modgui pd.idx ';
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + str(valIdx);
	return cmd;
    # Define some aliases for the function
    getcommandtoselectpulldownmenu = GetCommandToSelectPullDownMenu;
    CmdToSelPdMenu = GetCommandToSelectPullDownMenu;
    cmdtoselpdmenu = GetCommandToSelectPullDownMenu;
    #
    # Get command to dump PullDown widget value.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpPullDownMenu(self, widgetName, dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "menu", dialog, level);
    # Define some aliases for the function
    getcommandtodumppulldownmenu = GetCommandToDumpPullDownMenu;
    CmdToDumpPdMenu = GetCommandToDumpPullDownMenu;
    cmdtodumppdmenu = GetCommandToDumpPullDownMenu;
    #
    # Change a pulldown widget's value.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ChangePullDownValue(self, widgetName, value):
	if not widgetName:
	    print("No pulldown widget name is given.");
	    return False;
	cmd = self.GetCommandToChangePullDownValue(widgetName, value);
	return self.RunGuiCommands(cmd);
    # Define some aliases for the function
    changepulldownvalue = ChangePullDownValue;
    ChangePdValue = ChangePullDownValue;
    changepdvalue = ChangePullDownValue;
    ChangePdVal = ChangePullDownValue;
    changepdval = ChangePullDownValue;
    #
    # Select a pulldown widget's value from the value list.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SelectPullDownValue(self, widgetName, valIdx):
	if not widgetName:
	    print("No pulldown widget name is given.");
	    return False;
	cmd = self.GetCommandToSelectPullDownMenu(widgetName, valIdx);
	return self.RunGuiCommands(cmd);
    # Define some aliases for the function
    selectpulldownvalue = SelectPullDownValue;
    SelPdValue = SelectPullDownValue;
    selpdvalue = SelectPullDownValue;
    SelPdVal = SelectPullDownValue;
    selpdval = SelectPullDownValue;
    #
    # Dump PullDown widget's value.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpPullDownValue(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No pulldown widget name is given.");
	    return False;
	cmd = self.GetCommandToDumpPullDownValue(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumppulldownvalue= DumpPullDownValue;
    DumpPdValue = DumpPullDownValue;
    dumppdvalue = DumpPullDownValue;
    DumpPdVal = DumpPullDownValue;
    dumppdval = DumpPullDownValue;
    #
    # Get the pulldown value.
    #
    # Return a string for the pulldown's value.
    #
    # GHS: Validated 
    #
    def GetPullDownValue(self, widgetName):
	if not self.DumpPullDownValue(widgetName, True, False):
	    print('Failed to dump PullDown value for widget "%s".' % (widgetName));
	    return "";
	res = re.match("^Pull down: ID: "+widgetName+", Contents: (.*)$",
			self.cmdExecOutput);
	if res:
	    return res.group(1);
	else:
	    print('Unknown dumped PullDown value format.');
	    return "";
    # Define some aliases for the function
    getpulldownvalue = GetPullDownValue;
    GetPdValue = GetPullDownValue;
    getpdvalue = GetPullDownValue;
    GetPdVal = GetPullDownValue;
    getpdval = GetPullDownValue;
    #
    # Dump PullDown widget's menu.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpPullDownMenu(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No pulldown widget name is given.");
	    return False;
	cmd = self.GetCommandToDumpPullDownMenu(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumppulldownmenu = DumpPullDownMenu;
    DumpPdMenu = DumpPullDownMenu;
    dumppdmenu = DumpPullDownMenu;
    #
    # Get the pulldown menu.
    #
    # Return a list for the pulldown's menu entries.
    #
    # GHS: Validated 
    #
    def GetPullDownMenu(self, widgetName):
	if not self.DumpPdMenu(widgetName, True, False):
	    print('Failed to dump PullDown menu for widget "%s".' % (widgetName));
	    return [];
	ret = self.cmdExecOutput.split("\n");
	if not ret:
	    return [];
	ret.pop(0);
	for idx in range(0, len(ret)):
	    res = re.match("^\s*(.*)\s*$", ret[idx]);
	    if res:
		ret[idx] = res.group(1);
		res = re.match("^\[(.*)\]$", ret[idx]);
		if res:
		    ret[idx] = res.group(1);
	    else:
		print('Unknown menu entry: "%s"' % (ret[idx]));
		return [];
	return ret;
    # Define some aliases for the function
    getpulldownmenu = GetPullDownMenu;
    GetPdMenu = GetPullDownMenu;
    getpdmenu = GetPullDownMenu;


    ##########################################################################
    #
    #       TextField Widget Operations
    #
    ##########################################################################
    #
    # Get command to change TextField widget's value.
    #
    # GHS: Validated 
    #
    def GetCommandToChangeTextFieldValue(self, widgetName, value,
					hitReturn=True,
					dialog=False, level=0):
	if not widgetName:
	    return "";
	if hitReturn:
	    cmd = "__modgui tf ";
	else:
	    cmd = "__modgui tf.Noreturn ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + GHS_QuotifyString(str(value));
	return cmd;
    # Define some aliases for the function
    getcommandtochangetextfieldvalue = GetCommandToChangeTextFieldValue;
    CmdToChangeTfValue = GetCommandToChangeTextFieldValue;
    cmdtochangetfvalue = GetCommandToChangeTextFieldValue;
    CmdToChangeTfVal = GetCommandToChangeTextFieldValue;
    cmdtochangetfval = GetCommandToChangeTextFieldValue;
    #
    # Get command to hit return on TextField widget.
    #
    # GHS: Validated 
    #
    def GetCommandToReturnOnTextField(self, widgetName,
					dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__modgui tf.return ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName);
	return cmd;
    # Define some aliases for the function
    getcommandtoreturnontextfield = GetCommandToReturnOnTextField;
    CmdToReturnOnTf = GetCommandToReturnOnTextField;
    cmdtoreturnontf = GetCommandToReturnOnTextField;
    CmdToRetOnTf = GetCommandToReturnOnTextField;
    cmdtoretontf = GetCommandToReturnOnTextField;
    #
    # Get command to dump TextField widget value.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpTextField(self, widgetName, dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "", dialog, level);
    # Define some aliases for the function
    getcommandtodumptextfield = GetCommandToDumpTextField;
    CmdToDumpTf = GetCommandToDumpTextField;
    cmdtodumptf = GetCommandToDumpTextField;
    #
    # Check if a TextField widget is read-only.
    #
    # Return True (readonly or not a TextField) or False (not read-only).
    #
    # GHS: Validated 
    #
    def IsTextFieldReadOnly(self, widgetName):
	if not widgetName:
	    print('No widget name is given.');
	    return True;
	if not self.DumpWidget(widgetName, "", True, False):
	    return True;
	res = re.match("^\s*Text field:(.+)$", self.cmdExecOutput);
	if not res:
	    print('Widget "%s" is not a TextField.' % (widgetName));
	    return True;
	res = re.match("^\s*\w.*\(readonly\)\s*$", res.group(1));
	if res:
	    return True;
	else:
	    return False;
    # Define some aliases for RunCommands function
    istextfieldreadonly = IsTextFieldReadOnly;
    IsTfReadOnly = IsTextFieldReadOnly;
    istfreadonly = IsTextFieldReadOnly;
    #
    # Change a textfield widget's value.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ChangeTextFieldValue(self, widgetName, value, hitReturn=True, block=True, printOutput=True):
	if not widgetName:
	    print("No textfield widget name is given.");
	    return False;
	cmd = self.GetCommandToChangeTextFieldValue(widgetName, value, hitReturn);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    changetextfieldvalue = ChangeTextFieldValue;
    ChangeTfValue = ChangeTextFieldValue;
    changetfvalue = ChangeTextFieldValue;
    ChangeTfVal = ChangeTextFieldValue;
    changetfval = ChangeTextFieldValue;
    #
    # Hit return on a textfield widget.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ReturnOnTextField(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No textfield widget name is given.");
	    return False;
	cmd = self.GetCommandToReturnOnTextField(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    returnontextfield = ReturnOnTextField;
    ReturnOnTf = ReturnOnTextField;
    returnontf = ReturnOnTextField;
    RetOnTf = ReturnOnTextField;
    retontf = ReturnOnTextField;
    #
    # Dump TextField widget's value.
    #
    # A TextField widget's value can also be dumped by function:
    #    DumpWidget(textfieldWidgetName);
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpTextFieldValue(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No textfield widget name is given.");
	    return False;
	cmd = self.GetCommandToDumpTextField(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumptextfieldvalue= DumpTextFieldValue;
    DumpTfValue = DumpTextFieldValue;
    dumptfvalue = DumpTextFieldValue;
    DumpTfVal = DumpTextFieldValue;
    dumptfval = DumpTextFieldValue;
    #
    # Get TextField widget's value.
    #
    # Return a string for the text field's value.
    #
    # GHS: Validated 
    #
    def GetTextFieldValue(self, widgetName):
	if not self.DumpTextFieldValue(widgetName, True, False):
	    print("Failed to get the TextField widget's value.");
	    return "";
	res = re.match("^Text field: ID: "+widgetName+", Value: (.*)$",
			self.cmdExecOutput);
	if res:
	    val = res.group(1);
#	    res = re.match("^(.*)\(readonly\)\s*$", val);
	    # Exactly match the format
	    res = re.match("^(.*)\(readonly\)$", val);
	    if res:
		val = res.group(1);
#		res = re.match("^(.*\S)\s*$", val);
		# Exactly match the format
		res = re.match("^(.*)\s$", val);
		if res:
		    return res.group(1);
		else:
		    return "";
	    else:
		return val;
	else:
	    print('Unknown dumped TextField value format.');
	    return "";
    # Define some aliases for the function
    gettextfieldvalue= GetTextFieldValue;
    GetTfValue = GetTextFieldValue;
    gettfvalue = GetTextFieldValue;
    GetTfVal = GetTextFieldValue;
    gettfval = GetTextFieldValue;


    ##########################################################################
    #
    #       TextField Widget Operations
    #
    ##########################################################################
    #
    # Get command to change TextField widget's value.
    #
    # GHS: Validated (internal use only)
    #
    def GetCommandToChangeTextCellValue(self, widgetName, value,
					hitReturn=True,
					dialog=False, level=0):
	if not widgetName:
	    return "";
	if hitReturn:
	    cmd = "ide_modgui tc ";
	else:
	    cmd = "ide_modgui tc.Noreturn ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + GHS_QuotifyString(str(value));
	return cmd;
    # Define some aliases for the function
    getcommandtochangetextcellvalue = GetCommandToChangeTextCellValue;
    CmdToChangeTcValue = GetCommandToChangeTextCellValue;
    cmdtochangetcvalue = GetCommandToChangeTextCellValue;
    CmdToChangeTcVal = GetCommandToChangeTextCellValue;
    cmdtochangetcval = GetCommandToChangeTextCellValue;
    #
    # Dump TextCell widget's value.
    #
    # A TextCell widget's value can also be dumped by function:
    #    DumpWidget(textcellWidgetName);
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpTextCellValue(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No TextCell widget name is given.");
	    return False;
	cmd = self.GetCommandToDumpWidget(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumptextcellvalue= DumpTextCellValue;
    DumpTcValue = DumpTextCellValue;
    dumptcvalue = DumpTextCellValue;
    DumpTcVal = DumpTextCellValue;
    dumptcval = DumpTextCellValue;
    #
    # Get TextCell widget's value.
    #
    # Return a string for the text cell's value.
    #
    # GHS: Validated 
    #
    def GetTextCellValue(self, widgetName):
	if not self.DumpTextCellValue(widgetName, True, False):
	    print("Failed to get the TextCell widget's value.");
	    return "";
	res = re.match("Content of widget "+widgetName+":\nStatus=(\w+), Value=(.*)$",
			self.cmdExecOutput);
	if res:
	    return res.group(2);
	else:
	    print('Unknown format for the dumped TextCell value.');
	    return "";
    # Define some aliases for the function
    gettextcellvalue = GetTextCellValue;
    GetTcValue = GetTextCellValue;
    gettcvalue = GetTextCellValue;
    GetTcVal = GetTextCellValue;
    gettcval = GetTextCellValue;
    #
    # Change TextCell widget's value.
    # The given value should not contain the prefix and suffix (if any), or
    # the separator of the widget.
    #
    # For example, the TextCell widget for hex value in Register Information
    # window has prefix "0x", no suffix, and has "_" as separator. So you 
    # should use value like "1234567890abcdef" instead of "0x12345678_90abcdef"
    # to change the TextCell widget's value, though the later one is actualy
    # displayed in the GUI.
    #
    # As another example, the TextCell widget for binary value in Register
    # Information window has no prefix or suffix, but has "_" as separator.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (internal use only)
    #
    def ChangeTextCellValue(self, widgetName, value, hitReturn=True, block=True, printOutput=True):
	if not widgetName:
	    print("No TextCell widget name is given.");
	    return False;
	cmd = self.GetCommandToChangeTextCellValue(widgetName, value, hitReturn);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    changetextcellvalue = ChangeTextCellValue;
    ChangeTcValue = ChangeTextCellValue;
    changetcvalue = ChangeTextCellValue;
    ChangeTcVal = ChangeTextCellValue;
    changetcval = ChangeTextCellValue;
    #
    # Check if a TextCell widget is read-only.
    #
    # Return True if the widget is read-only or error happened,
    # False otherwise.
    #
    # GHS: Validated 
    #
    def IsTextCellReadOnly(self, widgetName):
	if not self.DumpTextCellValue(widgetName, True, False):
	    print("Failed to get the TextCell widget's value.");
	    return True;
	res = re.match("Content of widget "+widgetName+":\nStatus=(\w+), Value=(.*)$",
			self.cmdExecOutput);
	if res:
	    if res.group(1) == "Active":
		return False;
	    else:
		return True;
	else:
	    print('Unknown format for the dumped TextCell value.');
	    return True;
    # Define some aliases for the function
    istextcellreadonly= IsTextCellReadOnly;
    IsTcReadOnly = IsTextCellReadOnly;
    istcreadonly = IsTextCellReadOnly;
    

    ##########################################################################
    #
    #       Text Widget Operations
    #
    ##########################################################################
    #
    # Get command to dump TextField widget value.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpText(self, widgetName, dialog=False, level=0):
        return self.GetCommandToDumpWidget(widgetName, "", dialog, level);
    # Define some aliases for the function
    getcommandtodumptext = GetCommandToDumpText;
    CmdToDumpTx = GetCommandToDumpText;
    cmdtodumptx = GetCommandToDumpText;
    #
    # Get text widget value.
    #
    # GHS: Validated 
    #
    def GetTextValue(self, widgetName):
	if not widgetName:
	    print("No textfield widget name is given.");
	    return "";
	if not self.DumpWidget(widgetName, printOutput=False) or not self.cmdExecOutput:
	    print("Failed to get the Text widget's value.");
	    return "";

	res = re.match("^.*\nStatus=\w+,\s+Value=(.*)$", self.cmdExecOutput, re.DOTALL);
	if not res:
	    print("Unexpected value for text widget:\n%s" % (self.cmdExecOutput));
	    return "";
	return res.group(1);
    # Define some aliases for the function
    gettextvalue = GetTextValue;
    GetTxVal = GetTextValue;
    gettxval = GetTextValue;


    ##########################################################################
    #
    #       ColumnHeader Widget Operations
    #
    ##########################################################################
    #
    # Get command for columns of ColumnHeader.
    #
    # GHS: Validated 
    #
    def GetCommandToGetColumnsOfColumnHeader(self, widgetName, dialog=False, level=0):
        if not widgetName:
            return "";
        cmd = '__dumpgui columnheader.value ';
        if dialog:
            cmd = cmd + '"' + self.modalDialogName;
            if level:
                cmd = cmd + str(level);
            cmd = cmd + '"';
        else:
            if self.windowId:
                cmd = cmd + self.windowId;
            else:
                cmd = cmd + GHS_QuotifyString(self.windowName);
        cmd = cmd + ' '+GHS_QuotifyString(widgetName);
        return cmd;
    # Define some aliases for the function
    getcommandtogetcolumnsofcolumnheader = GetCommandToGetColumnsOfColumnHeader;
    CmdToGetColsOfCh = GetCommandToGetColumnsOfColumnHeader;
    cmdtogetcolsofch = GetCommandToGetColumnsOfColumnHeader;

    #
    # Get the columns of a ColumnHeader widget.
    #
    # Return a list of column names.
    #
    # GHS: Validated 
    #
    def GetColumnsOfColumnHeader(self, widgetName, warningOnError=False):
        if not widgetName:
            if warningOnError:
                print("No ColumnHeader widget is specified.");
            return [];
    
        cmd = self.GetCommandToGetColumnsOfColumnHeader(widgetName);
        if not self.RunGuiCommands(cmd, printOutput=False):
            if warningOnError:
                print('Failed to get the information of ColumnHeader widget "%s".' % (widgetName));
            return [];
        lines = self.cmdExecOutput.split('\n');
        if len(lines) != 2 or lines[0] != 'Column Header: ':
            if warningOnError:
                print('Unexpected information for ColumnHeader widget "%s":\n%s' % (widgetName, self.cmdExecOutput));
            return [];
        
        cols = lines[1].split('\t');
        cn = len(cols);
        if not cols[cn-1]:
            # Strip the bogus empty column name at the end of the list.
            x = cols.pop();
        return cols;
    # Define some aliases for the function
    getcolumnsofcolumnheader = GetColumnsOfColumnHeader;
    GetColsOfCh = GetColumnsOfColumnHeader;
    getcolsofch = GetColumnsOfColumnHeader;

    #
    # Get a column's index in ColumnHeader widget.
    #
    # GHS: Validated 
    #
    def GetColumnIndexInColumnHeader(self, widgetName, columnName, warningOnError=False):
        cols = self.GetColumnsOfColumnHeader(widgetName, warningOnError);
        if not cols:
            return -1;
        idx = 0;
        for cn in cols:
            if cn == columnName:
                return idx;
            idx = idx+1;
    
        if warningOnError:
            print('Column "%s" does not exist in ColumnHeader widget "%s".' % (columnName, widgetName));
        return -1;    
    # Define some aliases for the function
    getcolumnindexincolumnheader = GetColumnIndexInColumnHeader;
    GetColIdxInCh = GetColumnIndexInColumnHeader;
    getcolidxinch = GetColumnIndexInColumnHeader;

    ##########################################################################
    #
    #       MScrollList Widget Operations
    #
    ##########################################################################
    #
    # Get command to select cells of MScrollList widget.
    #
    # If column number is less than 0, all columns of the specified row will 
    # be selected.
    # If row number is less than 0, the specified column on all rows will
    # be selected.
    # If both row and column are less than 0, all cells of the MScrollList
    # widget will be selected.
    #
    # GHS: Validated 
    #
    def GetCommandToSelectMslCell(self, widgetName, row, col=-1,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__modgui msl.selectcell ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + str(row) + " " + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtoselectmslcell = GetCommandToSelectMslCell;
    CmdToSelMslCell = GetCommandToSelectMslCell;
    cmdtoselmslcell = GetCommandToSelectMslCell;
    #
    # Get command to extend MSL selection.
    #
    # If column number is less than 0, all columns of the specified row will 
    # be selected.
    # If row number is less than 0, the specified column on all rows will
    # be selected.
    # If both row and column are less than 0, all cells of the MScrollList
    # widget will be selected.
    #
    # Note: the command will simulate the action of ctrl-left-click, which
    # will clear the existing selection on the applied cells.
    #
    # GHS: Validated 
    #
    def GetCommandToExtendMslSelection(self, widgetName, row, col=-1,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__modgui msl.selectcellunion ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + str(row) + " " + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtoextendmslselection = GetCommandToExtendMslSelection;
    CmdToExtMslSel = GetCommandToExtendMslSelection;
    cmdtoextmslsel = GetCommandToExtendMslSelection;
    #
    # Get command to select a cell of MScrollList widget by value.
    #
    # GHS: Validated 
    #
    def GetCommandToSelectMslCellByValue(self, widgetName, cellValue, col=0,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__modgui msl.selectcellbyname ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + GHS_QuotifyString(cellValue) + ' ' + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtoselectmslcellbyvalue = GetCommandToSelectMslCellByValue;
    CmdToSelMslCellByValue = GetCommandToSelectMslCellByValue;
    cmdtoselmslcellbyvalue = GetCommandToSelectMslCellByValue;
    CmdToSelMslCellByVal = GetCommandToSelectMslCellByValue;
    cmdtoselmslcellbyval = GetCommandToSelectMslCellByValue;
    #
    # Get command to sort MScrollList widget.
    #
    # GHS: Validated 
    #
    def GetCommandToSortMsl(self, widgetName, col,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__modgui msl.sortcolumn ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtosortmsl = GetCommandToSortMsl;
    CmdToSortMsl = GetCommandToSortMsl;
    cmdtosortmsl = GetCommandToSortMsl;
    #
    # Get command to double-click a cell of MScrollList widget.
    #
    # GHS: Validated 
    #
    def GetCommandToDoubleClickMslCell(self, widgetName, row, col,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
#	if row < 0:
#	    print("Invalid row value.");
#	    return "";
#	if col < 0:
#	    print("Invalid column value.");
#	    return "";
	cmd = "__modgui msl.doubleclickcell ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + str(row) + " " + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtodoubleclickmslcell = GetCommandToDoubleClickMslCell;
    CmdToDblClickMslCell = GetCommandToDoubleClickMslCell;
    cmdtodblclickmslcell = GetCommandToDoubleClickMslCell;
    #
    # Get command to double-click a cell with specified value in a MScrollList
    # widget.
    #
    # GHS: Validated 
    #
    def GetCommandToDoubleClickMslCellByValue(self, widgetName, cellValue, col,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
	cmd = "__modgui msl.doubleclickcellbyname ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName) + ' ' + GHS_QuotifyString(cellValue) + ' ' + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtodoubleclickmslcellbyvalue = GetCommandToDoubleClickMslCellByValue;
    CmdToDblClickMslCellByValue = GetCommandToDoubleClickMslCellByValue;
    cmdtodblclickmslcellbyvalue = GetCommandToDoubleClickMslCellByValue;
    CmdToDblClickMslCellByVal = GetCommandToDoubleClickMslCellByValue;
    cmdtodblclickmslcellbyval = GetCommandToDoubleClickMslCellByValue;
    #
    # Get command to change the sub-tree associated with a cell in MScrollList
    # widget.
    #
    # GHS: Validated 
    #
    def GetCommandToChangeMslTree(self, widgetName, row, col, expand=True,
				    dialog=False, level=0):
	if not widgetName:
	    return "";
	# If row is negative, the operation is applied to the current selection.
	#if col < 0:
	#    print("Invalid column value.");
	#    return "";
	cmd = "__modgui msl.changeplusminuscell ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(widgetName);
	if expand:
	    cmd = cmd + ' minus';
	else:
	    cmd = cmd + ' plus';
	cmd = cmd + ' ' + str(row) + " " + str(col);
	return cmd;
    # Define some aliases for the function
    getcommandtochangemsltree = GetCommandToChangeMslTree;
    CmdToChangeMslTree = GetCommandToChangeMslTree;
    cmdtochangemsltree = GetCommandToChangeMslTree;
    #
    # Get command to dump highlight cells of MScrollList widget.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpMslHighlight(self, widgetName, 
				    dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "highlight", dialog, level);
    # Define some aliases for the function
    getcommandtodumpmslhighlight = GetCommandToDumpMslHighlight;
    CmdToDumpMslHl = GetCommandToDumpMslHighlight;
    cmdtodumpmslhl = GetCommandToDumpMslHighlight;
    #
    # Get command to dump selected cells of MScrollList widget.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpMslSelection(self, widgetName, 
				    dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "selection", dialog, level);
    # Define some aliases for the function
    getcommandtodumpmslselection = GetCommandToDumpMslSelection;
    CmdToDumpMslSel = GetCommandToDumpMslSelection;
    cmdtodumpmslsel = GetCommandToDumpMslSelection;
    #
    # Get command to dump the contents of MScrollList widget.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpMsl(self, widgetName, dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "", dialog, level);
    # Define some aliases for the function
    getcommandtodumpmsl = GetCommandToDumpMsl;
    CmdToDumpMsl = GetCommandToDumpMsl;
    cmdtodumpmsl = GetCommandToDumpMsl;
    #
    # Select a cell of MScrollList widget.
    #
    # If both row and col are negative, the whole MSL is selected if multiple
    # line selection is allowed in the MSL.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SelectMslCell(self, widgetName, row, col=-1, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToSelectMslCell(widgetName, row, col);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    selectmslcell = SelectMslCell;
    SelMslCell = SelectMslCell;
    selmslcell = SelectMslCell;
    #
    # Extend the selection in MScrollList widget.
    #
    # If column number is less than 0, all columns of the specified row will 
    # be selected.
    # If row number is less than 0, the specified column on all rows will
    # be selected.
    # If both row and column are less than 0, all cells of the MScrollList
    # widget will be selected.
    #
    # Note: the command will simulate the action of ctrl-left-click, which
    # will clear the existing selection on the applied cells.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ExtendMslSelection(self, widgetName, row, col=-1, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToExtendMslSelection(widgetName, row, col);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    extendmslselection = ExtendMslSelection;
    ExtMslSel = ExtendMslSelection;
    extmslsel = ExtendMslSelection;
    #
    # Select a cell of MScrollList widget by column value.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SelectMslCellByValue(self, widgetName, cellValue, col=0, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToSelectMslCellByValue(widgetName, cellValue,
						    col);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    selectmslcellbyvalue = SelectMslCellByValue;
    SelMslCellByValue = SelectMslCellByValue;
    selmslcellbyvalue = SelectMslCellByValue;
    #
    # Sort MScrollList widget by a column.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SortMslByColumn(self, widgetName, col, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToSortMsl(widgetName, col);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    sortmslbycolumn = SortMslByColumn;
    SortMslByCol = SortMslByColumn;
    sortmslbycol = SortMslByColumn;
    SortMsl = SortMslByColumn;
    sortmsl = SortMslByColumn;
    #
    # Expand or shrink the sub-tree of a cell in MScrollList widget.
    #
    # column argument has no affect at present.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ChangeMslTree(self, widgetName, row, col=-1, expand=True, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToChangeMslTree(widgetName, row, col, expand);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    changemsltree = ChangeMslTree;
    #
    # Get the number of rows in MScrollList widget.
    #
    # GHS: Validated 
    #
    def GetMslRowNumber(self, widgetName):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return 0;
	if not self.DumpWidget(widgetName, printOutput=False) or not self.cmdExecOutput:
	    print('Failed to dump the MSL widget '+widgetName+'.');
	    return 0;
	lines = self.cmdExecOutput.split("\n");
	return len(lines)-1;
    # Define some aliases for the function
    getmslrownumber = GetMslRowNumber;
    GetMslRowNum = GetMslRowNumber;
    getmslrownum = GetMslRowNumber;
    #
    # Expand or shrink all nodes in the MSL tree of a cell in MScrollList
    # widget.
    #
    # If recursive is True, the process will continue to the time when such
    # operation does not have any affect.
    #
    # column argument has no affect at present.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ChangeWholeMslTree(self, widgetName, col=-1, expand=True, recursive=False):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	goon = True;
	while goon:
	    if not recursive:
		goon = False;
	    oldRow = self.GetMslRowNumber(widgetName);
	    idx = oldRow;
	    while idx >= 0:
		if not self.ChangeMslTree(widgetName, idx, col, expand, True):
		    return False;
		idx = idx - 1;
	    if goon:
		newRow = self.GetMslRowNumber(widgetName);
		if newRow == oldRow:
		    goon = False;
	return True;
    # Define some aliases for the function
    changewholemsltree = ChangeWholeMslTree;
    #
    # Double click a cell of MScrollList widget.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DoubleClickMslCell(self, widgetName, row, col, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToDoubleClickMslCell(widgetName, row, col);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    doubleclickmslcell = DoubleClickMslCell;
    DblClickMslCell = DoubleClickMslCell;
    dblclickmslcell = DoubleClickMslCell;
    #
    # Double click a cell with specified value in a MScrollList widget.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DoubleClickMslCellByValue(self, widgetName, cellValue, col, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToDoubleClickMslCellByValue(widgetName, cellValue, col);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    doubleclickmslcellbyvalue = DoubleClickMslCellByValue;
    DblClickMslCellByValue = DoubleClickMslCellByValue;
    dblclickmslcellByValue = DoubleClickMslCellByValue;
    DblClickMslCellByVal = DoubleClickMslCellByValue;
    dblclickmslcellByVal = DoubleClickMslCellByValue;
    #
    # Dump highlighted cells in MScrollList widget.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpMslHighlight(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToDumpMslHighlight(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumpmslhighlight = DumpMslHighlight;
    DumpMslHl = DumpMslHighlight;
    dumpmslhl = DumpMslHighlight;
    #
    # Dump selected cells in MScrollList widget.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpMslSelection(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No MScrollList widget name is given.");
	    return False;
	cmd = self.GetCommandToDumpMslSelection(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumpmslselection = DumpMslSelection;
    DumpMslSel = DumpMslSelection;
    dumpmslsel = DumpMslSelection;
    #
    # Dump MscrollList widget's value.
    #
    # A MscrollList widget's value can also be dumped by function:
    #    DumpWidget(mslWidgetName);
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpMslValue(self, widgetName, block=True, printOutput=True):
	if not widgetName:
	    print("No MscrollList widget name is given.");
	    return False;
	return self.DumpWidget(widgetName, "", block, printOutput);
    # Define some aliases for the function
    dumpmslvalue= DumpMslValue;
    DumpMsl = DumpMslValue;
    dumpmsl = DumpMslValue;
    #
    # MscrollList widget's value can be dumped by function:
    #    DumpWidget(mslWidgetName);
    #


    #
    # Parse a MSL entry's text.
    #
    # Reurn a tulple:
    #	(IndentSize, "+"/"-"/"", ActualLineText)
    #
    # GHS: Validated (internal use only)
    #
    def CheckMslEntryIndention(self, line):
	if not line:
	    return (0, "", "");
	res = re.match("^(\>*)([+-]*)(.*)$", line);
	if res:
	    indSize = len(res.group(1));
	    return (indSize, res.group(2), res.group(3));
	else:
	    return (0, "", line);
    # aliases for the function
    checkmslentryindention = CheckMslEntryIndention;


    #
    # Dump a MSL widget and parse its contents into a GHS_MslTree object.
    #
    # GHS: Validated
    #
    def GetMslTree(self, widgetName, treeNodeColumn=0):
	if not widgetName:
	    return None;
	if not self.DumpMsl(widgetName, True, False) or not self.cmdExecOutput:
	    return None;
	
	lines = self.cmdExecOutput.split("\n");
	topMslTree = GHS_MslTree(widgetName, [], -1);
	parents = {};
	if treeNodeColumn < 0:
	    treeNodeColumn = 0;
	node = None;
	for idx in range (1, len(lines)):
	    (indSize, expanded, actualLine) = self.CheckMslEntryIndention(lines[idx]);
	    if actualLine:
		columns = actualLine.split("\t");
		# Cut off the last element.
		columns.pop();
		# Find out the MSL hierarchy column: 0 for most of cases.
		if treeNodeColumn > len(columns):
		    treeNodeColumn = 0;
		nodeName = columns[treeNodeColumn];
	    else:
		columns = [];
		nodeName = "";
	    if indSize > 0 and (indSize-1) not in parents.keys():
		# Some MSL widgets, like the traec options for QorIQ, 
		# don't have plus-minus identified parent nodes. In such
		# case, we assume that the parent node is the previous
		# line if exists, otherwise, we ignore the indention.
		if node:
		    parents[indSize-1] = node;
		    node.expandMark = "-";
		    node.shrinkable = False;
		else:
		    indSize = 0;
	    if indSize <= 0:
		father = topMslTree;
		parents = {};
	    else:
		father = parents[indSize-1];
	    node = GHS_MslTree(nodeName, columns, idx-1, expanded);
	    father.AppendChild(node);
	    if indSize >= 0 and expanded == "-":
		parents[indSize] = node;
	    else:
		node.shrinkable = False;
    
	return topMslTree;
    # aliases for the function
    getmsltree = GetMslTree;

    ##########################################################################
    #
    #       Tab Widget Operations
    #
    ##########################################################################
    #
    # Get command to select a tab in Tab widget.
    #
    # GHS: Validated
    #
    def GetCommandToSelectTab(self, widgetName, tabName,
				dialog=False, level=0):
	#if not widgetName:
	#    return "";
	if not tabName:
	    return "";
	cmd = "__modgui colwind.tab ";
	if dialog:
	    cmd = cmd + '"' + self.modalDialogName;
	    if level:
		cmd = cmd + str(level);
	    cmd = cmd + '"';
	else:
	    if self.windowId:
		cmd = cmd + self.windowId;
	    else:
		cmd = cmd + GHS_QuotifyString(self.windowName);
	cmd = cmd + ' ' + GHS_QuotifyString(tabName);
        cmd = cmd + ' ' + GHS_QuotifyString(widgetName);
	return cmd;
    # Define some aliases for the function
    getcommandtoselecttab = GetCommandToSelectTab;
    CmdToSelTab = GetCommandToSelectTab;
    cmdtoseltab = GetCommandToSelectTab;
    #
    # Get command to dump the contents of the current page of a Tab widget.
    #
    # GHS: Validated
    #
    def GetCommandToDumpTab(self, widgetName, 
				dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "", dialog, level)
    # Define some aliases for the function
    getcommandtodumptab = GetCommandToDumpTab;
    CmdToDumpTab = GetCommandToDumpTab;
    cmdtodumptab = GetCommandToDumpTab;
    #
    # Get command to dump a Tab widget's current tab name.
    #
    # GHS: Validated
    #
    def GetCommandToDumpTabSelection(self, widgetName, 
				dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "selection", dialog, level)
    # Define some aliases for the function
    getcommandtodumptabselection = GetCommandToDumpTabSelection;
    CmdToDumpTabSel = GetCommandToDumpTabSelection;
    cmdtodumptabsel = GetCommandToDumpTabSelection;
    #
    # Get command to dump a Tab widget's tab names.
    #
    # GHS: Validated 
    #
    def GetCommandToDumpTabValue(self, widgetName, 
				dialog=False, level=0):
	return self.GetCommandToDumpWidget(widgetName, "value", dialog, level)
    # Define some aliases for the function
    getcommandtodumptabvalue = GetCommandToDumpTabValue;
    CmdToDumpTabVal = GetCommandToDumpTabValue;
    cmdtodumptabval = GetCommandToDumpTabValue;
    #
    # Select a tab in Tab widget.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SelectTab(self, widgetName, tabName, block=True, printOutput=True):
	#if not widgetName:
	#    print("No Tab widget name is given.");
	#    return False;
	if not tabName:
	    print("No tab name is given.");
	    return False;
	cmd = self.GetCommandToSelectTab(widgetName, tabName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    selecttab = SelectTab;
    SelTab = SelectTab;
    seltab = SelectTab;
    #
    # Dump a Tab widget current tab's contents.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpTabContents(self, widgetName="", block=True, printOutput=True):
	cmd = self.GetCommandToDumpTab(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumptabcontents = DumpTabContents;
    DumpTab = DumpTabContents;
    dumptab = DumpTabContents;
    #
    # Dump a Tab widget's current tab name.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpTabSelection(self, widgetName="", block=True, printOutput=True):
	if not widgetName:
	    print("No tab widget name is specified.");
	    return False;
	cmd = self.GetCommandToDumpTabSelection(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumptabselection = DumpTabSelection;
    DumpTabSel = DumpTabSelection;
    dumptabsel = DumpTabSelection;
    #
    # Get a Tab widget's current tab's pure name.
    #
    # Return a string for the current tab.
    #
    # GHS: Validated 
    #
    def GetTabSelection(self, widgetName):
	if not self.DumpTabSelection(widgetName, True, False):
	    print('Failed to dump selection of Tab widget "%s".' % (widgetName));
	    return "";
	res = re.match("^Selected tab name: (.*)$", self.cmdExecOutput);
	if res:
	    return res.group(1);
	else:
	    print('Unknown dumped Tab selection format.');
	    return "";
    # Define some aliases for the function
    gettabselection = GetTabSelection;
    GetTabSel = GetTabSelection;
    gettabsel = GetTabSelection;
    GetCurrentTab = GetTabSelection;
    getcurrenttab = GetTabSelection;
    GetCurTab = GetTabSelection;
    getcurtab = GetTabSelection;
    #
    # Dump a Tab widget's tab list.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def DumpTabValue(self, widgetName="", block=True, printOutput=True):
	cmd = self.GetCommandToDumpTabValue(widgetName);
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    dumptabvalue = DumpTabValue;
    DumpTabVal = DumpTabValue;
    dumptabval = DumpTabValue;
    #
    # Get a Tab widget's tab name list.
    #
    # Return a list of tab names for the Tab widget.
    #
    # GHS: Validated 
    #
    def GetTabNames(self, widgetName):
	if not self.DumpTabValue(widgetName, True, False):
	    print('Failed to dump Tab widget "%s".' % (widgetName));
	    return [];
	res = re.match("^Tabs: (.*)$", self.cmdExecOutput);
	if res:
	    # It is bad that the tab names are not separated in better way,
	    # like in double-quotes , but only by a space.
	    names = res.group(1).split(";");
	    if not names:
		return [];
	    for idx in range(0, len(names)):
		res = re.match("^\s*(\w.*)\s*$", names[idx]);
		if res:
		    n = res.group(1);
		    res = re.match("^(.*\w)\s*$", n);
		    if res:
			names[idx] = res.group(1);
	    return names;
	else:
	    print('Unknown dumped Tab value format.');
	    return [];
    # Define some aliases for the function
    gettabnames = GetTabNames;


    ##########################################################################
    #
    #       Edit/Terminal Widget Operations
    #
    ##########################################################################
    #
    # Get all text in an Edit or Terminal widget as a big string.
    #
    # Return a stirng for the text in the Edit/Terminal widget.
    #
    # GHS: Validated
    #
    def GetEditTextString(self, widgetName):
	if not widgetName:
	    print("No Edit widget name is specified.");
	    return "";
	if self.dumpwidget(widgetName, "", True, False):
	    import re;

	    res = re.match("^([\w \t]+\:)\n(.*)$", self.cmdExecOutput,
			    re.DOTALL);
	    if res:
		return res.group(2);
	    else:
		# Should not happen.
		return self.cmdExecOutput;
	else:
	    print("Failed to dump the contents of widget EditPane.");
	    return "";
    # Define some aliases for the function
    getedittextstring = GetEditTextString;
    EditTextString = GetEditTextString;
    edittextstring = GetEditTextString;
    EditTextStr = GetEditTextString;
    edittextstr = GetEditTextString;
    GetTermTextString = GetEditTextString;
    gettermtextstring = GetEditTextString;
    TermTextString = GetEditTextString;
    termtextstring = GetEditTextString;
    TermTextStr = GetEditTextString;
    termtextstr = GetEditTextString;
    #
    # Get all text in an Edit or Terminal widget as separate lines.
    #
    # You can indicate if to remove the Carriage Return chars (if any) at
    # the end of each line.
    #
    # Return a list of strings for the text in the Edit/Terminal widget.
    #
    # GHS: Validated
    #
    def GetEditTextLines(self, widgetName, removeCrs=True):
	if not widgetName:
	    print("No Edit widget name is specified.");
	    return [];
	textStr = self.GetEditTextString(widgetName);
	if textStr:
	    lines = textStr.split("\n");
	    if removeCrs:
		import re;

		lineNum = len(lines);
		hasCr = re.compile("^(.*)\r$");
		for idx in range(0, lineNum):
		    res = hasCr.match(lines[idx]);
		    if res:
			lines[idx] = res.group(1);

	    return lines;
	else:
	    return [];
    # Define some aliases for the function
    getedittextlines = GetEditTextLines;
    EditTextLines = GetEditTextLines;
    edittextlines = GetEditTextLines;
    EditLines = GetEditTextLines;
    editlines = GetEditTextLines;
    GetTermTextLines = GetEditTextLines;
    gettermtextlines = GetEditTextLines;
    TermTextLines = GetEditTextLines;
    termtextlines = GetEditTextLines;
    TermLines = GetEditTextLines;
    termlines = GetEditTextLines;


    ##########################################################################
    #
    #       Pre-registered dialog command related operations
    #
    ##########################################################################
    #
    # Show registered commands for modal dialog.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ShowRegisteredModalDialogCommands(self, level=-1, printOutput=True):
	cmds = '__regDialogCmd';
	if level >= 0:
	    cmds = cmds + " -level " + str(level);
	return self.RunGuiCommands(cmds, True, printOutput);
    # Define some aliases for the function
    showregisteredmodaldialogcommands = ShowRegisteredModalDialogCommands;
    ShowDlgCmds = ShowRegisteredModalDialogCommands;
    showdlgcmds = ShowRegisteredModalDialogCommands;
    ShowDlgCmd = ShowRegisteredModalDialogCommands;
    showdlgcmd = ShowRegisteredModalDialogCommands;
    #
    # Remove all registered commands for modal dialog.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def RemoveRegisteredModalDialogCommands(self, level=-1, printOutput=True):
	cmds = '__unregDialogCmd';
	if level >= 0:
	    cmds = cmds + " -level " + str(level);
	return self.RunGuiCommands(cmds, True, printOutput);
    # Define some aliases for the function
    removeregisteredmodaldialogcommands = RemoveRegisteredModalDialogCommands;
    RmDlgCmds = RemoveRegisteredModalDialogCommands;
    rmdlgcmds = RemoveRegisteredModalDialogCommands;
    RmDlgCmd = RemoveRegisteredModalDialogCommands;
    rmdlgcmd = RemoveRegisteredModalDialogCommands;
    #
    # Get command to register modal dialog commands.
    #
    # Return a command string.
    #
    # GHS: Validated 
    #
    def GetCommandToRegisterModalDialogCommands(self, cmdList,
						    level=-1, count=1):
	if isinstance(cmdList, str):
	    cmds = cmdList;
	elif isinstance(cmdList, list) or isinstance(cmdList, tuple):
	# And set in Python 2.4.
	    cmds = "";
	    for cmd in cmdList:
		if cmds:
		    cmds = cmds + "; " + cmd;
		else:
		    cmds = cmd;
	else:
	    print("Unknown value for cmdList: str or string list are supported.");
	    return "";
	if not cmds:
	    print("No command is specified.");
	    return "";
	cmds = '__regDialogCmd -cmd {' + cmds + '}';
	if level >= 0:
	    cmds = cmds + " -level " + str(level);
	if count != 1:
	    cmds = cmds + " -count " + str(count);
	return cmds;
    # Define some aliases for the function
    getcommandtoregistermodaldialogcommands = GetCommandToRegisterModalDialogCommands;
    CmdToRegDlgCmds = GetCommandToRegisterModalDialogCommands;
    cmdtoregdlgcmds = GetCommandToRegisterModalDialogCommands;
    CmdToRegDlgCmd = GetCommandToRegisterModalDialogCommands;
    cmdtoregdlgcmd = GetCommandToRegisterModalDialogCommands;
    #
    # Register commands for modal dialog.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # Argument "cmdList" can be either a string, or a string list, string
    # tuple.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogCommands(self, cmdList, level=-1, count=1):
	cmds = self.GetCommandToRegisterModalDialogCommands(cmdList,
							     level,
							     count);
	if not cmds:
	    # Error happened and error message has been reported.
	    return False;
	return self.RunGuiCommands(cmds, True, True);
    # Define some aliases for the function
    registermodaldialogcommands = RegisterModalDialogCommands;
    RegDlgCmds = RegisterModalDialogCommands;
    regdlgcmds = RegisterModalDialogCommands;
    RegDlgCmd = RegisterModalDialogCommands;
    regdlgcmd = RegisterModalDialogCommands;
    #
    # Register command to dump a modal dialog.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToDumpWindow(self, dlgLevel=0, level=-1, count=1):
	cmd = self.GetCommandToDumpWindow(True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtodumpwindow = RegisterModalDialogToDumpWindow;
    RegDumpWin = RegisterModalDialogToDumpWindow;
    regdumpwin = RegisterModalDialogToDumpWindow;
    #
    # Register command to show widgets of a modal dialog.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToShowWidgets(self, dlgLevel=0, level=-1, count=1):
	cmd = self.GetCommandToShowWidgets(True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtoshowwidgets = RegisterModalDialogToShowWidgets;
    RegShowWidgets = RegisterModalDialogToShowWidgets;
    regshowwidgets = RegisterModalDialogToShowWidgets;
    #
    # Register command to show widgets of a modal dialog.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToDumpWidget(self, widgetName, option="",
					dlgLevel=0, level=-1, count=1):
	if not widgetName:
	    print("No widget name is specified.");
	    return False;
	cmd = self.GetCommandToDumpWidget(widgetName, option, True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtodumpwidget = RegisterModalDialogToDumpWidget;
    RegDumpWidget = RegisterModalDialogToDumpWidget;
    regdumpwidget = RegisterModalDialogToDumpWidget;
    #
    # Register command to click button on modal dialog
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToClickButton(self, widgetName, dlgLevel=0,
					    level=-1, count=1):
	if not widgetName:
	    print("No button name is specified.");
	    return False;
	cmd = self.GetCommandToClickButton(widgetName, True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtoclickbutton = RegisterModalDialogToClickButton;
    RegClickButton = RegisterModalDialogToClickButton;
    regclickbutton = RegisterModalDialogToClickButton;
    RegClickBut = RegisterModalDialogToClickButton;
    regclickbut = RegisterModalDialogToClickButton;
    #
    # Register command to change pulldown widget's value on modal dialog
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToChangePullDownValue(self, widgetName, value,
						 dlgLevel=0,
						 level=-1, count=1):
	if not widgetName:
	    print("No PullDown name is specified.");
	    return False;
	cmd = self.GetCommandToChangePullDownValue(widgetName, value,
						    True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtochangepulldownvalue = RegisterModalDialogToChangePullDownValue;
    RegChangePdValue = RegisterModalDialogToChangePullDownValue;
    regchangepdvalue = RegisterModalDialogToChangePullDownValue;
    RegChangePdVal = RegisterModalDialogToChangePullDownValue;
    regchangepdval = RegisterModalDialogToChangePullDownValue;
    #
    # Register command to select pulldown widget's menu on modal dialog
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToSelectPullDownMenu(self, widgetName, valIdx,
						dlgLevel=0,
						level=-1, count=1):
	if not widgetName:
	    print("No PullDown name is specified.");
	    return False;
	cmd = self.GetCommandToSelectPullDownMenu(widgetName, valIdx,
						    True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtoselectpulldownmenu = RegisterModalDialogToSelectPullDownMenu;
    RegSelPdMenu = RegisterModalDialogToSelectPullDownMenu;
    regselpdmenu = RegisterModalDialogToSelectPullDownMenu;
    #
    # Register command to select cells of MScrollList widget.
    #
    # If column number is less than 0, all columns of the specified row will 
    # be selected.
    # If row number is less than 0, the specified column on all rows will
    # be selected.
    # If both row and column are less than 0, all cells of the MScrollList
    # widget will be selected.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToSelectMslCell(self, widgetName, row, col=-1,
					    dlgLevel=0, level=-1, count=1):
	if not widgetName:
	    print("No MScrollList name is specified.");
	    return False;
	cmd = self.GetCommandToSelectMslCell(widgetName, row, col,
						    True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtoselectmslcell = RegisterModalDialogToSelectMslCell;
    RegSelMslCell = RegisterModalDialogToSelectMslCell;
    regselmslcell = RegisterModalDialogToSelectMslCell;
    #
    # Register command to select cell of MScrollList widget by value.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToSelectMslCellByValue(self, widgetName, cellValue,
						col=0, dlgLevel=0,
						level=-1, count=1):
	if not widgetName:
	    print("No MScrollList name is specified.");
	    return False;
	cmd = self.GetCommandToSelectMslCellByValue(widgetName, cellValue, col,
						    True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtoselectmslcellbyvalue = RegisterModalDialogToSelectMslCellByValue;
    RegSelMslCellByVal = RegisterModalDialogToSelectMslCellByValue;
    regselmslcellbyval = RegisterModalDialogToSelectMslCellByValue;
    #
    # Register command to sort MScrollList widget.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToSortMsl(self, widgetName, 
						col=0, dlgLevel=0,
						level=-1, count=1):
	if not widgetName:
	    print("No MScrollList name is specified.");
	    return False;
	cmd = self.GetCommandToSortMsl(widgetName, col, True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtosortmsl = RegisterModalDialogToSortMsl;
    RegSortMsl = RegisterModalDialogToSortMsl;
    regsortmsl = RegisterModalDialogToSortMsl;
    #
    # Register command to double-click a cell of MScrollList widget.
    #
    # Return True(success) or False(failure).
    #
    # Registering operations for modal dialog is usually for validation or
    # automation.
    #
    # GHS: Validated 
    #
    def RegisterModalDialogToDoubleClickMslCell(self, widgetName, 
						row, col=0,
						dlgLevel=0,
						level=-1, count=1):
	if not widgetName:
	    print("No MScrollList name is specified.");
	    return False;
	cmd = self.GetCommandToDoubleClickMslCell(widgetName, row, col,
						    True, dlgLevel);
	return self.RegisterModalDialogCommands(cmd, level, count);
    # Define some aliases for the function
    registermodaldialogtodoubleclickmslcell = RegisterModalDialogToDoubleClickMslCell;
    RegDblClickMslCell = RegisterModalDialogToDoubleClickMslCell;
    regdblclickmslcell = RegisterModalDialogToDoubleClickMslCell;



    #
    # Show configuration window.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ShowConfigWindow(self, block=True, printOutput=True):
	return self.RunGuiCommands("ide_configoptions", block, printOutput);
    # Define some aliases for the function
    showconfigwindow = ShowConfigWindow;
    ShowConfigWin = ShowConfigWindow;
    showconfigwin = ShowConfigWindow;
    #
    # Save configuration into file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def SaveConfig(self, fileName="", saveToDftFile=False, block=True, printOutput=True):
	if fileName:
	    cmd = "ide_saveconfigtofile "  + GHS_QuotifyString(fileName);
	elif saveToDftFile:
	    cmd = "ide_saveconfig";
	else:
	    cmd = "ide_saveconfigtofile";
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    saveconfig = SaveConfig;
    #
    # Clear the default config file
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def ClearDefaultConfigFile(self, block=True, printOutput=True):
	return self.RunGuiCommands("ide_clearconfig", block, printOutput);
    # Define some aliases for the function
    cleardefaultconfigfile = ClearDefaultConfigFile;
    ClearDftConfigFile = ClearDefaultConfigFile;
    cleardftconfigfile = ClearDefaultConfigFile;
    ClearConfigFile = ClearDefaultConfigFile;
    clearconfigfile = ClearDefaultConfigFile;
    #
    # Clear the default config file
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated 
    #
    def LoadConfigFile(self, fileName="", block=True, printOutput=True):
	if fileName:
	    cmd = "ide_loadconfigfromfile " + GHS_QuotifyString(fileName);
	else:
	    cmd = "ide_loadconfigfromfile"
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    loadconfigfile = LoadConfigFile;




    #
    # Get the working dir of the window's corrresponding process.
    #
    # Return a string for the cwd.
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def GetCwd(self):
	if not self.RunGuiCommands('ide_getcwd -distinguish', True, False):
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    getcwd = GetCwd;
    Cwd = GetCwd;
    cwd = GetCwd;


    #
    # Get INTEGRITY distribution directory.
    #
    # Return a string for the directory.
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def GetIntegrityDistributionDir(self):
	if not self.RunGuiCommands('ide_getintegritydist -distinguish', True, False):
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    getintegritydistributiondir = GetIntegrityDistributionDir;
    GetIntDistDir = GetIntegrityDistributionDir;
    getintdistdir = GetIntegrityDistributionDir;
    GetIntDir = GetIntegrityDistributionDir;
    getintdir = GetIntegrityDistributionDir;
    #
    # Set INTEGRITY distribution directory.
    #
    # Return a string for the old INTEGRITY distribution directory.
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def SetIntegrityDistributionDir(self, newDir):
	if not newDir:
	    newDir = "";
	if not self.RunGuiCommands('ide_setintegritydist -distinguish '+GHS_QuoteString(newDir),
				True, False):
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    setintegritydistributiondir = SetIntegrityDistributionDir;
    SetIntDistDir = SetIntegrityDistributionDir;
    setintdistdir = SetIntegrityDistributionDir;
    SetIntDir = SetIntegrityDistributionDir;
    setintdir = SetIntegrityDistributionDir;


    #
    # Get u-VeloSity distribution directory.
    #
    # Return a string for the directory.
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def GetUvelosityDistributionDir(self):
	if not self.RunGuiCommands('ide_getuvelositydist -distinguish', True, False):
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    getuvelositydistributiondir = GetUvelosityDistributionDir;
    GetUvelDistDir = GetUvelosityDistributionDir;
    getuveldistdir = GetUvelosityDistributionDir;
    GetUvelDir = GetUvelosityDistributionDir;
    getuveldir = GetUvelosityDistributionDir;
    #
    # Set u-VeloSity distribution directory.
    #
    # Return a string for the old u-VeloSity distribution directory.
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def SetUvelosityDistributionDir(self, newDir):
	if not newDir:
	    newDir = "";
	if not self.RunGuiCommands('ide_setuvelositydist -distinguish '+GHS_QuoteString(newDir),
				True, False):
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    setuvelositydistributiondir = SetUvelosityDistributionDir;
    SetUvelDistDir = SetUvelosityDistributionDir;
    setuveldistdir = SetUvelosityDistributionDir;
    SetUvelDir = SetUvelosityDistributionDir;
    setuveldir = SetUvelosityDistributionDir;


    #
    # Get the latest value for a type of directory maintained by MULTIU IDE.
    #
    # Here are the list of directory types supported at present:
    # 		EditFileDir
    #		BuildFileDir
    #		ExecutableDir
    #		EventFileDir
    #		ConfigFileDir
    #		TargetFileDir
    #		GeneralFileDir
    #		PlacerFileDir
    #		IntegrateFileDir
    #		TraceFileDir
    #		ConnectionFileDir
    #		LMAdminFileDir
    #
    # Return a directory which was most recently used for the specified
    # directory type.
    #
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def GetLatestDir(self, dirType="?"):
	if dirType:
	    dirType = '-'+dirType;
	else:
	    dirType = '?';
	if dirType == "?" or dirType == "-?" or dirType == "--?":
	    cmd = 'ide_getlatestdir ?';
	    self.RunGuiCommands(cmd, True, True);
	    return "";

	cmd = 'ide_getlatestdir -distinguish '+dirType;
	if not self.RunGuiCommands(cmd, True, False):
	    if self.cmdExecOutput:
		print("%s" % self.cmdExecOutput);
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    getlatestdir = GetLatestDir;
    GetMruDir = GetLatestDir;
    getmrudir = GetLatestDir;
    #
    # Set the latest value for a kind of directory maintained by MULTIU IDE.
    #
    # Return a string for the existing most recently used directory of the 
    # specified directory kind.
    #
    # When error happens, an empty string is returned.
    #
    # GHS: Validated 
    #
    def SetLatestDir(self, dirType="?", newDir=""):
	if dirType:
	    dirType = '-'+dirType;
	else:
	    dirType = '?';
	if not newDir:
	    newDir = "";

	if dirType == "?" or dirType == "-?" or dirType == "--?":
	    cmd = 'ide_setlatestdir ?';
	    self.RunGuiCommands(cmd, True, True);
	    return "";

	cmd = 'ide_setlatestdir -distinguish '+dirType+' '+GHS_QuoteString(newDir);
	if not self.RunGuiCommands(cmd, True, False):
	    if self.cmdExecOutput:
		print("%s" % self.cmdExecOutput);
	    return "";
	return self.ParseChooseResult();
    # Define some aliases for the function
    setlatestdir = SetLatestDir;
    SetMruDir = SetLatestDir;
    setmrudir = SetLatestDir;


    #
    # Get a most-recently-used (MRU) list of MULTI IDE.
    #
    # MULTI keeps a MRU list for various objects, like the editted files,
    # conected target etc.. The method provides the approach to get the lists.
    #
    # Return the specified MRU list on success or the available MRU types if
    # "mruType" is "?" or not does not exist.
    #
    # When error happens, an empty list is returned.
    #
    # GHS: Validated (internal use only)
    #
    def GetMruList(self, mruType="?", printOutput=True):
	if not mruType:
	    mruType = '?';
	if mruType == "?" or mruType == "-?" or mruType == "--?":
	    cmd = 'ide_getmrulist ?';
	    if not self.RunGuiCommands(cmd, True, printOutput) or not self.cmdExecOutput:
		return [];
	    ret = self.cmdExecOutput.split("\n");
	    if len(ret) < 2:
		return [];
	    res = re.match("^Here are the (\d+) MRU types:$", ret[1]);
	    if not res:
		return [];
	    ret.pop(0);
	    ret.pop(0);
	    count = int(res.group(1), 0);
	    count = len(ret)-count;
	    # An extra line could exist at the end of the list.
	    while count > 0:
		ret.pop();
		count = count - 1;
	    # Filter out the preceeding spaces in the MRU type names.
	    count = len(ret);
	    for idx in range(0, count):
		res = re.match("^\s*(.*)$", ret[idx]);
		if res:
		    ret[idx] = res.group(1);
	    return ret;

	cmd = 'ide_getmrulist -type '+GHS_QuoteString(mruType);
	if not self.RunGuiCommands(cmd, True, False) or not self.cmdExecOutput:
	    if self.cmdExecOutput and printOutput:
		print("%s" % self.cmdExecOutput);
	    return [];
	ret = self.cmdExecOutput.split("\n");
	if len(ret) < 1:
	    return [];
	count = 0;
	res = re.match("^Here are the (\d+) MRU entries:$", ret[0]);
	if not res:
	    res = re.match("^Here is the MRU entry:$", ret[0]);
	    if res:
		count = 1;
	if not res:
	    return [];
	ret.pop(0);
	if count < 1:
	    count = int(res.group(1), 0);
	count = len(ret)-count;
	# An extra line could exist at the end of the list.
	while count > 0:
	    ret.pop();
	    count = count - 1;
	return ret;
    # Define some aliases for the function
    getmrulist = GetMruList;
    #
    # Get a most-recently-editted files.
    #
    # Return a list of most-recently-editted programs files.
    #
    # When error happens, an empty list is returned.
    #
    # GHS: Validated (internal use only)
    #
    def GetMruFiles(self):
	return self.GetMruList("EditedFiles");
    # Define some aliases for the method
    getmrufiles = GetMruFiles;
    #
    # Get a most-recently-debugged programs.
    #
    # Return a list of most-recently-debugged programs files.
    #
    # When error happens, an empty list is returned.
    #
    # GHS: Validated (internal use only)
    #
    def GetMruPrograms(self):
	return self.GetMruList("Executables");
    # Define some aliases for the method
    getmruprograms = GetMruPrograms;
    GetMruProgs = GetMruPrograms;
    getmruprogs = GetMruPrograms;
    #
    # Get a most-recently-used (MRU) project files.
    #
    # Return a list of most-recently-used (MRU) project files.
    #
    # When error happens, an empty list is returned.
    #
    # GHS: Validated (internal use only)
    #
    def GetMruProjects(self):
	return self.GetMruList("Projects");
    # Define some aliases for the method
    getmruprojects = GetMruProjects;
    GetMruProjs = GetMruProjects;
    getmruprojs = GetMruProjects;
    #
    # Add a latest value for a MRU list maintained by MULTIU IDE.
    #
    # Return True on success of False on failure.
    #
    # GHS: Validated (internal use only)
    #
    def AddMruEntry(self, mruType="?", value="", slot=-1, expandValueAsFilename=False):
	if not mruType:
	    mruType = '?';

	if mruType == "?" or mruType == "-?" or mruType == "--?":
	    cmd = 'ide_changemrulist ?';
	    self.RunGuiCommands(cmd, True, True);
	    return True;

	if expandValueAsFilename:
	    value = GHS_ExpandFileName(value);
	cmd = 'ide_changemrulist -add -type '+GHS_QuoteString(mruType)+' -value '+GHS_QuoteString(value);
	if slot >=0:
	    cmd = cmd + ' -slot ' + str(slot);
	return self.RunGuiCommands(cmd, True, True);
    # Define some aliases for the function
    addmruentry = AddMruEntry;
    #
    # Change a value in a MRU list maintained by MULTIU IDE.
    #
    # Return True on success of False on failure.
    #
    # GHS: Validated (internal use only)
    #
    def ChangeMruEntry(self, mruType="?", value="", slot=0, expandValueAsFilename=False):
	if not mruType:
	    mruType = '?';

	if mruType == "?" or mruType == "-?" or mruType == "--?":
	    cmd = 'ide_changemrulist ?';
	    self.RunGuiCommands(cmd, True, True);
	    return True;

	if expandValueAsFilename:
	    value = GHS_ExpandFileName(value);
	cmd = 'ide_changemrulist -change -type '+GHS_QuoteString(mruType);
	if value != None:
	    cmd = cmd + ' -value '+GHS_QuoteString(value);
	if slot >=0:
	    cmd = cmd + ' -slot ' + str(slot);
	return self.RunGuiCommands(cmd, True, True);
    # Define some aliases for the function
    changemruentry = ChangeMruEntry;
    #
    # Delete an entry from a MRU list maintained by MULTIU IDE.
    #
    # Return True on success of False on failure.
    #
    # GHS: Validated (internal use only)
    #
    def DeleteMruEntry(self, mruType="?", value=None, slot=0, expandValueAsFilename=False):
	if not mruType:
	    mruType = '?';

	if mruType == "?" or mruType == "-?" or mruType == "--?":
	    cmd = 'ide_changemrulist ?';
	    self.RunGuiCommands(cmd, True, True);
	    return True;

	if expandValueAsFilename:
	    value = GHS_ExpandFileName(value);
	cmd = 'ide_changemrulist -delete -type '+GHS_QuoteString(mruType);
	if value != None:
	    cmd = cmd + ' -value '+GHS_QuoteString(value);
	if slot >=0:
	    cmd = cmd + ' -slot ' + str(slot);
	return self.RunGuiCommands(cmd, True, True);
    # Define some aliases for the function
    deletemruentry = DeleteMruEntry;
    DelMruEntry = DeleteMruEntry;
    delmruentry = DeleteMruEntry;



    #
    # Get the PID of the window's corrresponding process.
    #
    # Return an integer for the PID.
    # When error happens, 0 is returned.
    #
    # GHS: Validated 
    #
    def GetPid(self):
	if not self.RunGuiCommands('ide_getpid -distinguish', True, False):
	    return 0;
	pidStr = self.ParseChooseResult();
	if not pidStr:
	    return 0;
	else:
	    return int(pidStr, 0);
    # Define some aliases for the function
    getpid = GetPid;
    Pid = GetPid;
    pid = GetPid;
	


    #
    # Begin to record GUI operations on the window or all windows in Python
    # commands into the specified file.
    #
    # If no file name is specified, the function stopps such recording.
    #
    # GHS: Validated 
    #
    def RecordGuiOperations(self, fileName="", append=False, 
		     block=True, printOutput=True):
	cmd = "ide_record_py_cmd";
	if append:
	    cmd = cmd + " -append";
	if fileName:
	    fileName = GHS_ExpandFileName(fileName);
	    cmd = cmd + " -file " + GHS_QuotifyString(fileName);
	    
	return self.RunGuiCommands(cmd, block, printOutput);
    # Define some aliases for the function
    recordguioperations = RecordGuiOperations;
    RecGuiOps = RecordGuiOperations;
    recguiops = RecordGuiOperations;
    RecGuiOp = RecordGuiOperations;
    recguiop = RecordGuiOperations;


    ##########################################################################
    #
    # More APIs.
    #
    ##########################################################################

# Define some aliases for GHS_Window class
#ghs_window = GHS_Window;
#GHS_WINDOW = GHS_Window;
#Ghs_Window = GHS_Window;
