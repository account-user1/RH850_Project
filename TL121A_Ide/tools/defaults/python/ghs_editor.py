import ide;
import ghs_ideobject;
import ghs_winreg;
import ghs_editor_window;
from ghs_util import *;


#
# Connect to Editor service.
#
# GHS: Validated
#
def GHS_GetEditorService(serviceName="Editor.Multi", workingDir="", pluginId=0):
    """ Get specified editor service.
    The available editor services are:
    	Editor.Multi
    	Editor.Emacs
    	Editor.Vi
    	Editor.Other
    """
#    global editor;
#    if (editor and editor.service and editor.name == serviceName):
#	return editor.service;
    ret = ide.open(serviceName, workingDir, pluginId);
    if (ret == None):
	print("Cannot launch Editor service \"%s\"." % serviceName);
    elif serviceName == "Editor.Multi":
	ret.SetOutputMask(0xff);
    return ret;


class GHS_Editor(ghs_ideobject.GHS_IdeObject):
    """ Describe GHS editor information. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, serviceName="Editor.Multi", workingDir=""):
	ghs_ideobject.GHS_IdeObject.__init__(self,
					     serviceName,
					     workingDir);
	self.service = GHS_GetEditorService(serviceName, workingDir);
    #
    # Edit file.
    #
    # Return GHS_EditorWindow object.
    #
    # GHS: Validated
    #
    def EditFile(self, fileName, reuseEditorWindow=True, expandFileName=True):
	self.CleanCmdExecVariables();
	if expandFileName:
	    fileName = GHS_ExpandFileName(fileName) 
	res = self.service.EditFileBlock(fileName,
					 0, "", reuseEditorWindow);
	parseRes = GHS_ParseObjectIds(res);
	self.cmdExecOutput = parseRes[5];
	if parseRes[5]:
    	    print(parseRes);

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	self.cmdExecObj = winreg.CreateObjectFromParsedResultTuple(parseRes);
	return self.cmdExecObj;
    # Define some aliases for EditFile function
    editfile = EditFile;
    OpenFile = EditFile;
    openfile = EditFile;
    Open = EditFile;
    open = EditFile;
    #
    # Goto a file's special line.
    #
    # Return GHS_EditorWindow object.
    #
    # GHS: Validated
    #
    def GotoLine(self, fileName, lineNo, reuseEditorWindow=True, expandFileName=True):
	self.CleanCmdExecVariables();
	if expandFileName:
	    fileName = GHS_ExpandFileName(fileName) 
	res = self.service.EditFileBlock(fileName,
					lineNo, "",
					reuseEditorWindow);
	parseRes = GHS_ParseObjectIds(res);
	self.cmdExecOutput = parseRes[5];
	if parseRes[5]:
    	    print(parseRes);

	winreg = ghs_misc.GetGlobal("winreg");
	if not winreg:
	    winreg = ghs_winreg.GHS_WindowRegister();
	    ghs_misc.SetGlobal("winreg", winreg);

	self.cmdExecObj = winreg.CreateObjectFromParsedResultTuple(parseRes);
	return self.cmdExecObj;
    # Define some aliases for GotoLine function
    gotoline = GotoLine;
    Goto = GotoLine;
    goto = GotoLine;
    

# Define some aliases for GHS_Editor class
ghs_editor = GHS_Editor;
#GHS_EDITOR = GHS_Editor;
#Ghs_Editor = GHS_Editor;


	
	

    
