#
# The demo shows how Python GUI (Tcl/Tk) can be used to drive MULTI IDE
# components.
#
# Left side are a list of buttons, which guide you to perform an action
# sequence to setup dual-mode debugging environment on INTEGRITY.
#
# "Quit" button is used to terminate the demo. The button above "Quit" button
# lets you choose if to cleanup MULTI debugging environment which has be setup
# before the GUI window is closed. Besides the "Quit" button and its option 
# button, there is at most one another button available at any time.
#
# The top area on the right side displays the commands to be executed when you
# press the available button (other than "Quit" button). You can change them
# to fit your environment.
#
# Note: if you change the commands, be sure to make changes in all the
# commands which are necessary. For example, if you want to use different
# INTEGRITY BSP kernel, you may need to change the commands for the first two
# and the forth buttons.
#
# After you press a button to execute the corresponding command, the execution
# result (status and output) are displayed in below area on the right side.
#

from Tkinter import *
import time;

class MultiPythonGuiDemo(Frame):
    #
    # Initialize the attributes of the class.
    #
    def __init__(self, master=None):
        Frame.__init__(self, master);
	self.dftPromptMsg = "Python command to be executed:";
	self.sequence=0;
	self.actionButtons = [];
        self.grid();
        self.CreateWidgets();
	#self.pack();
	self.dw = None;
	self.fm = None;
	self.rm = None;
	self.tw = None;
	self.attachedTask = None;
	self.ntwOn = False;
	self.canvasDemoInfoWrapWidth = "10c";
	self.canvasCmdOutputWrapWidth = "20c";

    #
    # Display the commands to be executed by the next button click.
    #
    def ShowCommand(self, msg):
	self.cmdEntry.delete(0, 1000);
	self.cmdEntry.insert(0, msg);
	self.cmdEntry.update();
	#self.ShowMessage("Commands:\n"+msg, True);

    #
    # Show a message into the message area.
    #
    def ShowMessage(self, msg, forceUpdate=False, fgColor="#000000", demoInfo=False):
	#oldTxt = self.outputLabel.__getitem__("text");
	#self.outputLabel.__setitem__("text", oldTxt+"\n"+msg);
	if demoInfo:
	    self.outputCanvas.itemconfigure(self.outputLabel,
					    anchor=NW,
					    text=msg,
					    width=self.canvasDemoInfoWrapWidth,
					    fill=fgColor);
	else:
	    self.outputCanvas.itemconfigure(self.outputLabel,
					    anchor=NW,
					    text=msg,
					    width=self.canvasCmdOutputWrapWidth,
					    fill=fgColor);
	if forceUpdate:
	    self.outputCanvas.update();

    #
    # Show the result of the MULTI IDE commands which are executed just now.
    #
    def ShowCmdExecRes(self, status, output, forceUpdate=False):
	if status:
	    msg = "Status: SUCCESS\n";
	    fgColor = "#000000";
	else:
	    msg = "Status: FAILURE\n";
	    fgColor = "#ff0000";
	msg = msg + "Output: \n";
	if output:
	    msg = msg + output;
	self.ShowMessage(msg, forceUpdate, fgColor);

    #
    # Adjust the statuses of the widgets in the GUI:
    #    enable and disable buttons properly based on the demo's progress.
    #
    def AdjustWidgetStatus(self):
	# Adjust one button's status
	idx = 0;
	for btn in self.actionButtons:
	    if self.sequence==idx:
		oldState = btn.__getitem__("state");
		if oldState == DISABLED:
		    btn.__setitem__("state", NORMAL);
	    else:
		btn.__setitem__("state", DISABLED);
	    
	    if self.sequence == 0:
		self.cmdPrompt.__setitem__("text", "Python command to be executed (change program path and name if necessary):");
		self.ShowCommand("self.dw = debugger.DebugProgram('Your_INTEGRITY_PATH/sim800/kernel', True, True, False);");
	    elif self.sequence == 1:
		self.cmdPrompt.__setitem__("text", "Python command to be executed (change debug server if necessary):");
		self.ShowCommand("self.fm = self.dw.ConnectToTarget('isimppc');");
	    elif self.sequence == 2:
		self.cmdPrompt.__setitem__("text", self.dftPromptMsg);
		self.ShowCommand("ret = self.fm.Run(True, False);");
	    elif self.sequence == 3:
		self.cmdPrompt.__setitem__("text", "Python command to be executed (put your target inside the parentheses if necessary):");
		self.ShowCommand("self.rm = self.dw.rtserv();");
	    elif self.sequence == 4:
		self.cmdPrompt.__setitem__("text", self.dftPromptMsg);
		self.ShowCommand("ret = self.tw.SelectMenu('&View', 'F&lat View', True, False);");
	    elif self.sequence == 5:
		self.ShowCommand("ret = self.tw.DumpAll(True, False);");
	    elif self.sequence == 6:
		self.cmdPrompt.__setitem__("text", "Python command to be executed (change the task to attach to, if desired):");
		#self.ShowCommand("self.attachedTask = GHS_Task(self.rm.component, \"kernel\", \"ResourceManager\"); self.attachedTask.attach();");
		self.ShowCommand("self.attachedTask = GHS_Task(self.rm.component, 'kernel', 'Idle');");
	    elif self.sequence == 7:
		self.cmdPrompt.__setitem__("text", self.dftPromptMsg);
		self.ShowCommand("ret = self.attachedTask.Attach('', True, False);");
	    else:
		self.ShowCommand("destroy GUI");
	    
	    idx = idx+1;

    #
    # Debug an INTEGRITY kernel (open a MULTI Debugger window for the program).
    #
    # The function is associated with a button in the GUI.
    #
    def DebugKernel(self):
	exec('if not debugger or not debugger.IsAlive():    debugger = GHS_Debugger();');
	if debugger.GetMultiVersion() >= 6:
	    self.ntwOn = True;
	elif debugger.RunCommands("__debugflag -q NewTargetWindow",
					True,
					False,
					False):
	    self.ntwOn = GHS_GeneralTrueOrFalse(debugger.cmdExecOutput)

	cmd = self.cmdEntry.get();
	if os.name != 'posix':
	    cmd = GHS_QuotifyString(cmd, False);
	exec(cmd);
	if debugger.cmdExecStatus and self.dw:
	    self.sequence = self.sequence+1;
	    self.AdjustWidgetStatus();
	else:
	    self.bell();
	self.ShowCmdExecRes(debugger.cmdExecStatus, debugger.cmdExecOutput);

    #
    # Establish freeze-mode connection for the INTEGRITY kernel.
    #
    # The function is associated with a button in the GUI.
    #
    def ConnectForFreezeMode(self):
	exec(self.cmdEntry.get());
	if self.dw.cmdExecStatus and self.fm:
	    self.sequence = self.sequence+1;
	    self.AdjustWidgetStatus();
	else:
	    self.bell();
	self.ShowCmdExecRes(self.dw.cmdExecStatus, self.dw.cmdExecOutput);

    #
    # Execute the INTEGRITY kernel with freeze-mode connection.
    #
    # The function is associated with a button in the GUI.
    #
    def RunKernelInFreezeMode(self):
	exec(self.cmdEntry.get());
	if self.fm.cmdExecStatus:
	    self.sequence = self.sequence+1;
	else:
	    self.bell();
	self.AdjustWidgetStatus();
	self.ShowCmdExecRes(self.fm.cmdExecStatus, self.fm.cmdExecOutput);

    #
    # Establish run-mode connection with the INTEGRITY kernel.
    #
    # The function is associated with a button in the GUI.
    #
    def ConnectForRunMode(self):
	exec(self.cmdEntry.get());
	if debugger.cmdExecStatus and self.rm:
	    self.sequence = self.sequence+1;
	    self.AdjustWidgetStatus();
	    if self.ntwOn:
		exec("self.tw = self.rm.ShowTaskWindow()");
	    else:
		self.tw = self.rm;
	else:
	    self.bell();
	self.ShowCmdExecRes(debugger.cmdExecStatus, debugger.cmdExecOutput);

    #
    # Toggle the run-mode Task Manager into flat-view (without showing the
    # task hierarchy).
    #
    # The function is associated with a button in the GUI.
    #
    def ToggleTaskView(self):
	exec(self.cmdEntry.get());
	if self.tw.cmdExecStatus:
	    self.sequence = self.sequence+1;
	else:
	    self.bell();
	self.AdjustWidgetStatus();
	self.ShowCmdExecRes(self.tw.cmdExecStatus, self.tw.cmdExecOutput);

    #
    # Dump the contents of the run-mode Task Manager and show them in the
    # GUI's message center.
    #
    # The function is associated with a button in the GUI.
    #
    def DumpTaskWindow(self):
	exec(self.cmdEntry.get());
	if self.tw.cmdExecStatus:
	    self.sequence = self.sequence+1;
	else:
	    self.bell();
	self.AdjustWidgetStatus();
	self.ShowCmdExecRes(self.tw.cmdExecStatus, self.tw.cmdExecOutput);

    #
    # Create an object for a task running in the INTEGRITY application.
    #
    # The function is associated with a button in the GUI.
    #
    def CreateTaskObject(self):
	exec(self.cmdEntry.get());
	if self.attachedTask:
	    self.sequence = self.sequence+1;
	    self.AdjustWidgetStatus();
	    self.ShowMessage("");
	else:
	    self.bell();
	    self.ShowMessage("Failed to create task object.");

    #
    # Debug the task.
    #
    # The function is associated with a button in the GUI.
    #
    def DebugTask(self):
	exec(self.cmdEntry.get());
	if self.attachedTask.cmdExecStatus and self.attachedTask and self.attachedTask.component:
	    self.sequence = self.sequence+1;
	else:
	    # Not successfully attached.
	    self.bell();
	    self.attachedTask.cmdExecStatus = 0;
	self.AdjustWidgetStatus();
	self.ShowCmdExecRes(self.attachedTask.cmdExecStatus, self.attachedTask.cmdExecOutput);

    #
    # Close the GUI window.
    #
    # The function is associated with a button in the GUI.
    #
    def QuitGui(self):
	if self.optionButtonVar.get():
	    self.ShowMessage("Shutting down MULTI.", True);
	    if self.ntwOn:
		if self.rm:
		    self.ShowMessage("Shutting down MULTI..run-mode connection", True);
		    self.rm.Disconnect();
		if self.fm:
		    self.ShowMessage("Shutting down MULTI..freeze-mode connection", True);
		    self.fm.Disconnect();
#		time.sleep(0.2);
	    else:
		if self.attachedTask and self.attachedTask.IsInitializedWithGuiWindow():
		    self.attachedTask.CloseWindow();
#		time.sleep(0.2);
		self.ShowMessage("Shutting down MULTI..", True);
		if self.rm:
		    self.ShowMessage("Shutting down MULTI..run-mode connection", True);
		    self.rm.Disconnect();
		if self.fm:
		    self.ShowMessage("Shutting down MULTI..freeze-mode connection", True);
		    self.fm.Disconnect();
#		time.sleep(0.2);

	    self.ShowMessage("Shutting down MULTI...", True);
	    if self.dw:
		self.dw.CloseWindow();
	else:
	    self.ShowMessage("Quitting ", True);
#	time.sleep(0.5);
	self.ShowMessage("Quitting.. ", True);
#	time.sleep(0.5);
	self.ShowMessage("Quitting...Done ", True);
	time.sleep(0.2);
	self.quit();
	self.winfo_toplevel().destroy();


    #
    # Create the widgets for the GUI window.
    #
    def CreateWidgets(self):
	# Button to debug a program
	myDataWidth = 80;	# In characters
        self.actionButtons.insert(0,
		Button(self, text="Debug INTEGRITY Kernel",
                command=self.DebugKernel));
        self.actionButtons[0].grid(row=0, sticky=E+W);
	# Button to connect to debug server for freeze-mode connection and run
	# the application
        self.actionButtons.insert(0,
		Button(self, text="Freeze-Mode Connection",
                command=self.ConnectForFreezeMode));
        self.actionButtons[0].grid(row=1, sticky=E+W);
	# Button to run the application in freeze-mode
        self.actionButtons.insert(0,
		Button(self, text="Run in Freeze Mode",
                command=self.RunKernelInFreezeMode));
        self.actionButtons[0].grid(row=2, sticky=E+W);
	#self.fmButton.pack();
	# Button to connect to debug server for run-mode connection
        self.actionButtons.insert(0,
		Button(self, text="Run-Mode Connection",
                command=self.ConnectForRunMode));
        self.actionButtons[0].grid(row=3, sticky=N+E+W);
	# Button to toggle task view into flat
        self.actionButtons.insert(0,
		Button(self, text="Flat Task View",
                command=self.ToggleTaskView));
        self.actionButtons[0].grid(row=4, sticky=N+E+W);
	# Button to toggle task view into flat
        self.actionButtons.insert(0,
		Button(self, text="Dump Task Window",
                command=self.DumpTaskWindow));
        self.actionButtons[0].grid(row=5, sticky=N+E+W);
	# Button to create a task object
        self.actionButtons.insert(0,
		Button(self, text="Create a Task Object",
                command=self.CreateTaskObject));
        self.actionButtons[0].grid(row=6, sticky=N+E+W);
	# Button to attach to a task
        self.actionButtons.insert(0,
		Button(self, text="Attach to Task",
                command=self.DebugTask));
        self.actionButtons[0].grid(row=7, sticky=N+E+W);
	# Dummy widget to keep a space between the normal buttons and
	# Quit button.
	self.dummyLabel = Label(self,
				 text="");
        self.dummyLabel.grid(row=8, sticky=N+E+S+W);
	self.dummyLabel1 = Label(self,
				 text="");
        self.dummyLabel1.grid(row=9, rowspan=2, sticky=N+E+S+W);
	# Quit options: shutdown dual-mode debugging environment which
	# has been setup or leave them there.
	self.optionButtonVar = IntVar();
	self.optionButtonVar.set(1);
	self.optionButton = Checkbutton(self,
				 text="Clean up MULTI before quitting",
#				 wraplength=100,
				 variable = self.optionButtonVar);
        self.optionButton.grid(row=11, sticky=N+E+S+W);
	# Quit button
        self.quitButton = Button(self, text="Quit",
                command=self.QuitGui);
	self.quitButton.grid(row=12, sticky=E+W);
	#self.quitButton.pack();
	
	# Label to show command prompt
	self.cmdPrompt = Label(self,
				 anchor=NW,
				 text=self.dftPromptMsg,
				 width=myDataWidth, height=1,
				 justify=LEFT
#				 bg="#c0c0c0"
				 );          
        self.cmdPrompt.grid(row=0, column=1, columnspan=1, sticky=E+W);
        
	# Entry to get command from user
	self.cmdEntry = Entry(self,
				 width=myDataWidth,
				 justify=LEFT,
				   bg="#ffffff");          
        self.cmdEntry.grid(row=1, column=1, columnspan=2, sticky=N+E+S+W);
	
	# Label to show output from system
	if sys.platform == "win32":
	    self.canvasDemoInfoWrapWidth = "15c";
	else:
	    self.canvasDemoInfoWrapWidth = "10c";
	self.canvasCmdOutputWrapWidth = "20c";
	self.outputCanvas = Canvas(self,
				 width=self.canvasDemoInfoWrapWidth,
				 height="5.5c",
				 scrollregion=(0, 0, self.canvasCmdOutputWrapWidth, "30c"),
				 bg="#e0ffd0");          
        self.outputCanvas.grid(row=2, rowspan=10, column=1, sticky=N+E+S+W);
	self.outputCanvas.scrollX = Scrollbar(self, orient=HORIZONTAL);
	self.outputCanvas.scrollY = Scrollbar(self, orient=VERTICAL);
	# Tie the three together. This is standard boilerplate text
 	self.outputCanvas['xscrollcommand'] = self.outputCanvas.scrollX.set;
 	self.outputCanvas['yscrollcommand'] = self.outputCanvas.scrollY.set;
 	self.outputCanvas.scrollX['command'] = self.outputCanvas.xview;
 	self.outputCanvas.scrollY['command'] = self.outputCanvas.yview;
	self.outputLabel = self.outputCanvas.create_text(
				 2, 2,
				 anchor=CENTER,
				 text="Output Area",
				 width=self.canvasDemoInfoWrapWidth
				 );      
 	# Place the scrollbars
	self.outputCanvas.scrollX.grid(row=12, column=1, sticky=N+E+W);
	self.outputCanvas.scrollY.grid(row=2, rowspan=10, column=2, sticky=W+N+S);
        
	self.actionButtons.reverse();
	self.AdjustWidgetStatus();
	self.ShowMessage("This demo shows how a Python GUI (created with Tcl/Tk) can be used to drive "\
			"MULTI IDE components.\n"\
			 "\n"\
			 "The buttons on the left side of this window guide you through an action "\
			 "sequence that sets up a dual-mode debugging environment on INTEGRITY. "\
			 "Clicking the \"Quit\" button terminates the demo. The option above the "\
			 "\"Quit\" button lets you choose  whether or not to clean up the MULTI "\
			 "debugging environment before the window closes. Besides the \"Quit\" button, "\
			 "there is, at most, one other button available at any time. \n"\
			 "\n"\
			 "The field above this area displays the command to be executed when you press "\
			 "the available button (other than \"Quit\"). You should change the program "\
			 "path according to your environment. \n"\
			 "\n"\
			 "Note: If you change a command, be sure to make corresponding changes to "\
			 "all the commands where necessary. For example, if you want to use a different "\
			 "INTEGRITY BSP kernel, you need to change the commands for the first, second "\
			 "and fourth buttons.\n"\
			 "\n"\
			 "After you press a button to execute the corresponding command, the output is "\
			 "displayed in this area.",
			 False,
			 "#0000f0",
			 True);
			 
	

#
# Main procedure code
#
app = MultiPythonGuiDemo();

app.master.title("Python Tcl/Tk GUI: Demo for MULTI-Python Integration"); 
app.mainloop();
del app;
