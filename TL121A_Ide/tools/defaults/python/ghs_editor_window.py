import time;
import ghs_window;
import ghs_constants;
import ghs_winreg;
from ghs_util import *;

class GHS_EditorWindow(ghs_window.GHS_Window):
    """ Describe GHS editor window information. """
    #
    # Initialize object
    #
    # GHS: Validated
    #
    def __init__(self, compName="", wn="", wid="0", className="",
		 regSvcName="", service=""):
	ghs_window.GHS_Window.__init__(self, compName, wn, wid, className,
				       regSvcName, service);


    #
    # Get selection range.
    #
    # Line number and column number are 1-based (counting from 1).
    #
    # For the position in the line, you can specify whether to get the GUI
    # position or the string position.
    #
    # GUI position is 1-based, it is for the column position you can see in
    # MULTI Editor window.
    #
    # String position is 0-based, it is the index in the text string for the
    # line.
    # 
    # Return a tuple as the following:
    #	(BeginLine, BeginColumn, EndLine, EndColumn)
    #
    # On error, the following tuple is returned:
    #	(-1, -1, -1, -1)
    #
    # GHS: Validated
    #
    def GetSelection(self, printRes=False, getGuiPos=True):
	if getGuiPos:
	    cmd = "GetSelection";
	else:
	    cmd = "GetSelection -string";
	if not self.RunCommands(cmd, True, printRes):
	    return (-1, -1, -1, -1);
	onePos = '\((\d+)\s*,\s*(\d+)\s*\)';
	res = re.match('\s*From\s+'+onePos+'\s*To\s+'+onePos+'\s*$',
			self.cmdExecOutput, re.I);
	if res:
	    lS = int(res.group(1), 0);
	    cS = int(res.group(2), 0);
	    lE = int(res.group(3), 0);
	    cE = int(res.group(4), 0);

	    if getGuiPos:
		cS = cS+1;
		cE = cE+1;
	    return (lS, cS, lE, cE);
	else:
	    if self.cmdExecOutput:
		print("Unexpected output:\n%s" % self.cmdExecOutput);
	    return (-1, -1, -1, -1);
    # Define some aliases for the function
    getselection = GetSelection;
    GetSel = GetSelection;
    getsel = GetSelection;
    #
    # Get selection string.
    #
    #
    # GHS: Validated
    #
    def GetSelectedString(self, printRes=False):
	if self.RunCommands("GetSelectedString", True, printRes, True):
	    return self.cmdExecOutput;
	else:
	    return "";
    # Define some aliases for the function
    getselectedstring = GetSelectedString;
    GetSelStr = GetSelectedString;
    getselstr = GetSelectedString;


    #
    # Select a range.
    #
    # Return True(success) or False(failure).
    #
    # Line number and column number are 1-based (counting from 1).
    #
    # For the column position, see "GetSelection()".
    #
    # Negative beginLine number means the first line.
    # Negative beginCol number means the first column.
    # Negative endLine number means the end of the file.
    # Negative endCol number means the end of the line.
    #
    # GHS: Validated
    #
    def SelectRange(self, beginLine=-1, beginCol=-1, endLine=-1, endCol=-1, guiPos=True):
	if guiPos:
	    cmd = "SelectRange " + str(beginLine) + ", " +\
		   str(beginCol-1) + ", " +\
		   str(endLine) + ", " +\
		   str(endCol-1);
	else:
	    cmd = "SelectRange -string " + str(beginLine) + ", " +\
		   str(beginCol) + ", " +\
		   str(endLine) + ", " +\
		   str(endCol);
	return self.RunCommands(cmd);
    # Define some aliases for the function
    selectrange = SelectRange;
    SelRange = SelectRange;
    selrange = SelectRange;
    Select = SelectRange;
    select = SelectRange
    Sel = SelectRange;
    sel = SelectRange;
    #
    # Select all.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def SelectAll(self):
	return self.SelectRange();
    # Define some aliases for the function
    selectall = SelectAll;
    SelAll = SelectAll;
    selall = SelectAll;


    #
    # Copy selection into clipboard.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def Copy(self, which=1):
	if which == 1:
	    cmd = "Copy1";
	elif which == 2:
	    cmd = "Copy2";
	elif which == 3:
	    cmd = "Copy3";
	elif which == 4:
	    cmd = "Copy4";
	else:
	    print("Unknown buffer index.");
	    return False;
	return self.RunCommands(cmd);
    # Define some aliases for the function
    copy = Copy;
    #
    # Cut selection into clipboard.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def Cut(self, which=1):
	if which == 1:
	    cmd = "Cut1";
	elif which == 2:
	    cmd = "Cut2";
	elif which == 3:
	    cmd = "Cut3";
	elif which == 4:
	    cmd = "Cut4";
	else:
	    print("Unknown buffer index.");
	    return False;
	return self.RunCommands(cmd);
    # Define some aliases for the function
    cut = Cut;
    #
    # Paste from the clipboard.
    #
    # Return True(success) or False(failure).
    #
    # Because MULTI Editor's paste command is implemented in two parts:
    #   * ask x server to convert selection
    #   * perform the paste on x server's selection notification
    # and the Paste command immediately returns after the first part is done
    # even when the command is executed in blocking mode, we have to wait for
    # a while so that the second part can be finished.
    #
    # GHS: Validated
    #
    def Paste(self, which=1, waitingTime=1.0):
	if which == 1:
	    cmd = "Paste1";
	elif which == 2:
	    cmd = "Paste2";
	elif which == 3:
	    cmd = "Paste3";
	elif which == 4:
	    cmd = "Paste4";
	else:
	    print("Unknown buffer index.");
	    return False;
	if not self.RunCommands(cmd, True, True):
	    return False;
	else:
	    # Hope that is long enough.
	    time.sleep(waitingTime);
	    return True;
    # Define some aliases for the function
    paste = Paste;
    #
    # Add string to the current cursor position.
    #
    # The position to add the string is controlled by "pos" argument:
    #	-1:	top of the existing contents
    #	 0:	the current selection
    #	 1:	bottom of the existing contents
    #
    # If the position is 0 and something is selected, the selected part will
    # be replaced with the string.
    #
    # GHS: Validated
    #
    def AddString(self, dataStr="", pos=0):
	return self.RunCommands("AddStr -pos "+str(pos)+" "+GHS_QuoteString(dataStr));
    # Define some aliases for the function
    addstring = AddString;
    AddStr = AddString;
    addstr = AddString;


    #
    # Open file.
    #
    # Return an Editor window object.
    #
    # GHS: Validated
    #
    def OpenFile(self, fileName="", newWindow=False, block=True):
	oldWinList = [];
	if newWindow:
	    winreg = ghs_misc.GetGlobal("winreg");
	    if not winreg:
		winreg = ghs_winreg.GHS_WindowRegister();
		ghs_misc.SetGlobal("winreg", winreg);

	    oldWinList = winreg.GetWindowList(False);
	    cmd = "LoadFile";
	else:
	    cmd = "OpenFile";
	if fileName:
	    cmd = cmd + " " + fileName;
	if self.RunCommands(cmd, block, True):
	    return self.cmdExecObj;
	else:
	    return None;
    # Define some aliases for the function
    openfile = OpenFile;
    EditFile = OpenFile;
    editfile = OpenFile;
    LoadFile = OpenFile;
    loadfile = OpenFile;
    Open = OpenFile;
    open = OpenFile;
    #
    # Save changes to the same file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def SaveIntoFile(self):
	return self.RunCommands("Save");
    # Define some aliases for the function
    saveintofile = SaveIntoFile;
    savefile = SaveIntoFile;
    SaveFile = SaveIntoFile;
    Save = SaveIntoFile;
    save = SaveIntoFile;
    #
    # Save changes to another file .
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def SaveAsFile(self, fileName=""):
	if fileName:
	    return self.RunCommands("SaveAs "+fileName);
	else:
	    return self.RunCommands("Save");
    # Define some aliases for the function
    saveasfile = SaveAsFile;
    SaveAs = SaveAsFile;
    saveas = SaveAsFile;


    #
    # Move cursor to a position.
    #
    # Return True(success) or False(failure).
    #
    # Negative line number means the end of the file.
    # Negative column number means the end of the line.
    #
    # GHS: Validated
    #
    def MoveCursor(self, line=1, col=1, flash=True):
	cmd = "MoveCursor " + str(line) + ", " + str(col-1);
	#if flash:
	#    cmd = cmd + "; FlashCursor";
	if self.RunCommands(cmd):
	    if flash:
		return self.RunCommands("FlashCursor");
	    else:
		return True;
	else:
	    return False;
    # Define some aliases for the function
    movecursor = MoveCursor;
    MoveTo = MoveCursor;
    moveto = MoveCursor;
    #
    # Flash cursor.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def FlashCursor(self):
	return self.RunCommands("FlashCursor");
    # Define some aliases for the function
    flashcursor = FlashCursor;
    Flash = FlashCursor;
    flash = FlashCursor;


    #
    # Undo a change.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def Undo(self):
	return self.RunCommands("Undo");
    # Define some aliases for the function
    undo = Undo;
    #
    # Redo a change.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def Redo(self):
	return self.RunCommands("Redo");
    # Define some aliases for the function
    redo = Redo;


    #
    # Cycle to next buffered file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def GotoNextFile(self):
	return self.RunCommands("CyclePush");
    # Define some aliases for the function
    gotonextfile = GotoNextFile;
    NextFile = GotoNextFile;
    nextfile = GotoNextFile;
    #
    # Cycle to previous buffered file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def GotoPrevFile(self):
	return self.RunCommands("CyclePushBack");
    # Define some aliases for the function
    gotoprevfile = GotoPrevFile;
    PrevFile = GotoPrevFile;
    prevfile = GotoPrevFile;
    #
    # Close the current file.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated
    #
    def CloseCurrentFile(self):
	return self.RunCommands("Pop");
    # Define some aliases for the function
    closecurrentfile = CloseCurrentFile;
    CloseCurFile = CloseCurrentFile;
    closecurfile = CloseCurrentFile;
    CloseFile = CloseCurrentFile;
    closefile = CloseCurrentFile;


    #
    # Place the current file under Version Control.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (manually)
    #
    def PlaceUnderVC(self):
	return self.RunCommands("PlaceUnderVC");
    # Define some aliases for the function
    placeundervc = PlaceUnderVC;
    PlaceUnderVc = PlaceUnderVC;
    PlaceIntoVC = PlaceUnderVC;
    PlaceIntoVc = PlaceUnderVC;
    placeintovc = PlaceUnderVC;
    #
    # Check the current file into Version Control.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (manually)
    #
    def Checkin(self):
	return self.RunCommands("Checkin");
    # Define some aliases for the function
    checkin = Checkin;
    #
    # Check the current file out of Version Control.
    #
    # Return True(success) or False(failure).
    #
    # GHS: Validated (manually)
    #
    def Checkout(self):
	return self.RunCommands("Checkout");
    # Define some aliases for the function
    checkout = Checkout;

    #
    # Get all text in the Editor window as a big string.
    #
    # Return a stirng for the text in the Editor window.
    #
    # GHS: Validated
    #
    def GetTextString(self):
	return self.GetEditTextString("EditPane");
    # Define some aliases for the function
    gettextstring = GetTextString;
    TextString = GetTextString;
    textstring = GetTextString;
    TextStr = GetTextString;
    textstr = GetTextString;

    #
    # Get all text in the Editor window as separate lines.
    #
    # You can indicate if to remove the Carriage Return chars (if any) at
    # the end of each line.
    #
    # Return a list of strings for the text in the Editor window.
    #
    # GHS: Validated
    #
    def GetTextLines(self, removeCrs=True):
	return self.GetEditTextLines("EditPane", removeCrs);
    # Define some aliases for the function
    gettextlines = GetTextLines;
    TextLines = GetTextLines;
    textlines = GetTextLines;
    Lines = GetTextLines;
    lines = GetTextLines;



    ##########################################################################
    #
    # More APIs......
    #
    ##########################################################################


# Define some aliases for the class
#ghs_editorwindow = GHS_EditorWindow;
#GHS_EDITORWINDOW = GHS_EditorWindow;
#Ghs_EditorWindow = GHS_EditorWindow;
