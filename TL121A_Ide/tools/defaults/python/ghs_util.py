import os;
import string;
import re;
import ide;
import sys;
import ghs_misc;

#############################################################################
#
# MULTI Python utility functions for internal usage
#
#############################################################################

#
# Check if a string in an integer string.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_IsIntegerStringg(s):
    if not s:
	return False;
    if not isinstance(s, str):
	return False;
    if re.match("^[\s]*[0-9]+[\s]*$", s):
	return True;
    if re.match("^[\s]*0[xX][0-9a-fA-F]+[\s]*$", s):
	return True;
    return False;

#
# Quote string
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_QuoteString(s, quote=True):
    if not s:
	# In case s is None.
	s = "";
    if not isinstance(s, str):
	s = str(s);
    tmpStr = s.replace('\\', '\\\\');
    tmpStr = tmpStr.replace('"', '\\"');
    if quote:
	return '"'+tmpStr+'"';
    else:
	return tmpStr;
# Define some aliases for the function
ghs_quotestring = GHS_QuoteString;
GHS_QuotifyString = GHS_QuoteString;
ghs_quotifystring = GHS_QuoteString;

#
# Return a string with special regular expression characters escaped.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_EscapeReChars(s):
    if not s:
	return "";
    if not isinstance(s, str):
	s = str(s);
    tmpStr = s.replace('\\', '\\\\');
    tmpStr = tmpStr.replace('"', '\\"');
    tmpStr = tmpStr.replace('.', '\\.');
    tmpStr = tmpStr.replace('-', '\\-');
    tmpStr = tmpStr.replace('+', '\\+');
    tmpStr = tmpStr.replace('*', '\\*');
    tmpStr = tmpStr.replace('^', '\\^');
    tmpStr = tmpStr.replace('$', '\\$');
    tmpStr = tmpStr.replace('?', '\\?');
    tmpStr = tmpStr.replace('|', '\\|');
    tmpStr = tmpStr.replace('#', '\\#');
    tmpStr = tmpStr.replace('!', '\\!');

    tmpStr = tmpStr.replace('(', '\\(');
    tmpStr = tmpStr.replace(')', '\\)');
    tmpStr = tmpStr.replace('{', '\\{');
    tmpStr = tmpStr.replace('}', '\\}');
    tmpStr = tmpStr.replace('[', '\\[');
    tmpStr = tmpStr.replace(']', '\\]');
    tmpStr = tmpStr.replace('<', '\\<');
    tmpStr = tmpStr.replace('>', '\\>');

    return tmpStr;
# Define some aliases for the function
ghs_escaperechars = GHS_EscapeReChars;
    

#
# Startup MULTI IDE service in a normal way.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_GetGeneralService(serviceName, prodName="", workingDir="", pluginId=0):
    """ Startup a MULTI IDE service.
    """
#    print("Open service <%s> at <%s> with ID <%d>" % (serviceName, workingDir, pluginId));
    ret = ide.open(serviceName, workingDir, pluginId);
    if not ret:
	if prodName:
	    print("Cannot startup service \%s\" for %s." % (serviceName, prodName));
	else:
	    print("Cannot startup service \%s\"." % (serviceName));
    return ret;

#
# Return the expanded file name.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_ExpandFileName(fileName, normalize=True):
    """ Expand a file name into absolute path. """
    if not fileName:
	return "";
    elif not os.path.isabs(fileName):
	fileName = os.path.abspath(fileName);

    if normalize:
	return os.path.normpath(fileName);
    else:
	return fileName;
# Define some aliases for the function
ghs_expandfilename = GHS_ExpandFileName;

#
# Return a tuple:
#    (ComponentName,
#     WindowName, WindowID,
#     WindowClassName,
#     WindowRegisterServiceName,
#     Remains)
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_ParseObjectIds(outputStr):
    """ Parse the output string from a MULTI IDE component, and
        return a tuple with the following fields:
	    (Component, Window Name, Window ID, Remains)
        where "Remains" is the left stuff from the input string.

	We assume that the object information are printed in
	seaprate lines.
    """
#    print outputStr;
    if not outputStr:
	return ("", "", "", "", "", "");
    compName = "";
    winRegClientName = "";
    winClassName = "";
    wName = "";
    wId = "";
    rem = "";
    lines = outputStr.split("\n");
    lineNum = len(lines);
    compRe = re.compile("^(.*)(%%%%Component\s*=\s*)(\w.*)$");
    winRegClientNameRe = re.compile("^(.*)(%%%%WindowServiceId\s*=\s*)([\w].*)$");
    winClassRe = re.compile("^(.*)(%%%%WindowClass\s*=\s*)([\w].*)$");
    # In case that people incorrectly use ":<PID>" as a debugger window's name.
#    wNameRe = re.compile("^(.*)(%%%%WindowName\s*=\s*)([\w].*$)");
    wNameRe = re.compile("^(.*)(%%%%WindowName\s*=\s*)(.*$)");
    wIdRe = re.compile("^(.*)(%%%%WindowId\s*=\s*)(0[xX][0-9a-fA-F]+)$", re.IGNORECASE);
    wIdDelRe = re.compile("^(.*)(%%%%DelWindowId\s*=\s*)(0[xX][0-9a-fA-F]+)$", re.IGNORECASE);
    slotIdRe = re.compile("\.slot\.");
    taskIdRe = re.compile("\.pid\.");
    taskNameRe = re.compile("\.task\.");
    valGrpIdx = 3;
    for idx in range(0, lineNum):
	# Check component
	res = compRe.match(lines[idx]);
	if res:
	    extraVal = res.group(1);
	    if extraVal:
		if rem:
		    rem = rem+"\n"+extraVal;
		else:
		    rem = extraVal;
	    if not compName:
		compName = res.group(valGrpIdx);
	    elif taskNameRe.search(compName):
		pass;
	    elif taskNameRe.search(res.group(valGrpIdx)):
		compName = res.group(valGrpIdx);
	    elif taskIdRe.search(res.group(valGrpIdx)):
		compName = res.group(valGrpIdx);
	    elif slotIdRe.search(res.group(valGrpIdx)):
		compName = res.group(valGrpIdx);
#	    if (not compName) or \
#	       (not re.compile("\.task\.").search(compName)):
#		    compName = res.group(valGrpIdx);
	    continue;
	# Check Window Register Client ID
	res = winRegClientNameRe.match(lines[idx]);
	if res:
	    extraVal = res.group(1);
	    if extraVal:
		if rem:
		    rem = rem+"\n"+extraVal;
		else:
		    rem = extraVal;
	    winRegClientName = res.group(valGrpIdx);
	    continue;
	# Check Window Class
	res = winClassRe.match(lines[idx]);
	if res:
	    extraVal = res.group(1);
	    if extraVal:
		if rem:
		    rem = rem+"\n"+extraVal;
		else:
		    rem = extraVal;
	    winClassName = res.group(valGrpIdx);
	    continue;
	# Check Window Name
	res = wNameRe.match(lines[idx]);
	if res:
	    extraVal = res.group(1);
	    if extraVal:
		if rem:
		    rem = rem+"\n"+extraVal;
		else:
		    rem = extraVal;
	    wName = res.group(valGrpIdx);
	    continue;
	# Check Window ID
	res = wIdRe.match(lines[idx]);
	if res:
	    extraVal = res.group(1);
	    if extraVal:
		if rem:
		    rem = rem+"\n"+extraVal;
		else:
		    rem = extraVal;
	    wId = res.group(valGrpIdx);
	    continue;
	# Check Deleted Window ID
	res = wIdDelRe.match(lines[idx]);
	if res:
	    extraVal = res.group(1);
	    if extraVal:
		if rem:
		    rem = rem+"\n"+extraVal;
		else:
		    rem = extraVal;
	    if wId  == res.group(valGrpIdx):
		wName = "";
		wId = "";
		winClassName = "";
		winRegClientName = "";
	    continue;
	# Unknown stuff
	if lines[idx]:
	    if rem:
		rem = rem+"\n"+lines[idx];
	    else:
		rem = lines[idx];
	elif idx > 0 and idx+1 < lineNum:
	    rem = rem+"\n";
    
#    print("Window Register Service Name: %s" % winRegClientName);
    return (compName, wName, wId, winClassName, winRegClientName, rem);
# Define some aliases for the function
ghs_parseobjectids = GHS_ParseObjectIds;
GHS_ParseObjIds = GHS_ParseObjectIds;
ghs_parseobjids = GHS_ParseObjectIds;


#############################################################################
#
# MULTI Python utility functions available to user
#
#############################################################################

# Based on the indention setting from MULTI?
__ghs_indention_string = "    ";

#
# Get indent prefix.
#
# GHS: Validated (internal use only)
#
def GHS_GetIndentPrefix(indent):
    ret = "";
    for idx in range(0, indent):
	ret = ret+__ghs_indention_string;
    return ret;

#
# Make blank string with a certain length.
#
# GHS: Validated (internal use only)
#
def GHS_MakeBlankString(length):
    if length > 0:
	return " "*length;
    else:
	return "";

#
# Check if the object need special handling.
#
# GHS: Validated (internal use only)
#
def GHS_NeedSpecialPrint(obj):
    if not obj:
	return False;
    elif isinstance(obj, list):
	return True;
    elif isinstance(obj, tuple):
	return True;
    elif isinstance(obj, dict):
	return True;
    # More object types. To be consistent with GHS_PrintObject().
    else:
	return False;

#
# Get the name for the types which need special printing.
#
# GHS: Validated (internal use only)
#
def GHS_GetNameForTypeNeedSpecialPrint(obj):
    if not obj:
	return "";
    elif isinstance(obj, list):
	return "List";
    elif isinstance(obj, tuple):
	return "Tuple";
    elif isinstance(obj, dict):
	return "Dictionary";
    # More object types. To be consistent with GHS_PrintObject().
    else:
	return "Unknown Type";

#
# Print a list or tuple object.
#
# GHS: Validated
#
def GHS_PrintList(lo, printIdx=True, recursive=False, indentStr=""):
    if isinstance(lo, list):
	if not lo:
	    print("%sEmpty List" % (indentStr));
	    return;
	print("%s%s:" % (indentStr,
			 GHS_GetNameForTypeNeedSpecialPrint(lo)));
    elif isinstance(lo, tuple):
	if not lo:
	    print("%sEmpty Tuple" % (indentStr));
	    return;
	print("%s%s:" % (indentStr,
			 GHS_GetNameForTypeNeedSpecialPrint(lo)));
    else:
	print("Not a list or tuple.\n%s" % str(lo));
	return;
    idx = 0;
    newIndentStr = indentStr+__ghs_indention_string;
    for o in lo:
	if printIdx:
	    if recursive and GHS_NeedSpecialPrint(o):
		print("%s%-7.7s" % (indentStr, str(idx)));
		GHS_PrintObject(o, printIdx, True, newIndentStr);
	    else:
		print("%s%-7.7s %s" % (indentStr,
				       str(idx), str(o)));
	else:
	    if recursive and GHS_NeedSpecialPrint(o):
		GHS_PrintObject(o, printIdx, True, newIndentStr);
	    else:
		print("%s%s" % (indentStr, str(o)));
	idx = idx+1;
# Define some aliases for the function
ghs_printlist = GHS_PrintList;

#
# Print a dictinoary object.
#
# GHS: Validated
#
def GHS_PrintDict(do, printIdx=True, recursive=False, indentStr=""):
    if isinstance(do, dict):
	print("%s%s:" % (indentStr,
	    GHS_GetNameForTypeNeedSpecialPrint(do)));
    else:
	print("Not a dict.\n%s" % str(do));
	return;
    nameWidth = 0;
    for o in do:
	idx = len(str(o));
	if idx > nameWidth:
	    nameWidth = idx;
    idx = 0;
    if nameWidth == 0:
	nameWidth = 1;
    if 0:
	# Simple indention
	newIndentStr = indentStr+__ghs_indention_string;
    elif printIdx:
	newIndentStr = indentStr+GHS_MakeBlankString(8+nameWidth+4);
    else:
	newIndentStr = indentStr+GHS_MakeBlankString(nameWidth+4);
    for o in do:
	if printIdx:
	    fmt = "%s%-7.7s %-"+str(nameWidth)+"."+str(nameWidth)+"s ->";
	    if recursive and GHS_NeedSpecialPrint(do[o]):
		print(fmt % (indentStr, str(idx), str(o)));
		GHS_PrintObject(do[o], printIdx, True, newIndentStr);
	    else:
		fmt = fmt+" %s";
		print(fmt % (indentStr,
			     str(idx), str(o), str(do[o])));
	else:
	    fmt = "%s%-"+str(nameWidth)+"."+str(nameWidth)+"s ->";
	    if recursive and GHS_NeedSpecialPrint(do[o]):
		print(fmt % (indentStr, str(o)));
		GHS_PrintObject(do[o], printIdx, True, newIndentStr);
	    else:
		fmt = fmt+" %s";
		print(fmt % (indentStr, str(o), str(do[o])));
	idx = idx+1;
# Define some aliases for the function
ghs_printdict = GHS_PrintDict;

#
# Print an object in better format.
#
# GHS: Validated
#
def GHS_PrintObject(o, printIdx=True, recursive=False, indentStr=""):
    if isinstance(o, list) or isinstance(o, tuple):
	GHS_PrintList(o, printIdx, recursive, indentStr);
	return;
    elif isinstance(o, dict):
	GHS_PrintDict(o, printIdx, recursive, indentStr);
	return;
    # In Python 2.4, but not in Python 2.3
#    elif isinstance(o, set):
#	GHS_PrintList(o, printIdx);
#	return;
    else:
	print("%s%s" % (indentStr, str(o)));
	return;
# Define some aliases for the function
ghs_printobject = GHS_PrintObject;
GHS_PrintObj = GHS_PrintObject;
ghs_printobj = GHS_PrintObject;

if os.name == "posix":
    # The following code only works on UNIX, not Windows.
    import popen2;
    import fcntl;
    import select;
    
    #
    # Make a file descriptor non-blocking.
    #
    # GHS: Validated (indirectly, internal use only)
    #
    def GHS_MakeNonBlocking(fd):
	fl = fcntl.fcntl(fd, fcntl.F_GETFL)
	try:
	    fcntl.fcntl(fd, fcntl.F_SETFL, fl | os.O_NDELAY)
	except AttributeError:
	    fcntl.fcntl(fd, fcntl.F_SETFL, fl | fcntl.FNDELAY)
	
    
    #
    # Run shell commands, catpure its status and grab the outputs from
    # stdout and stderr and return a tuple:
    #	(exitCode, stdoutOutput, stderrOutput)
    #
    # GHS: Validated (indirectly, internal use only)
    #
    def GHS_GetCommandOutput(commands):
	child = popen2.Popen3(commands, 1) # capture stdout and stderr from command
	child.tochild.close()             # don't need to talk to child
	outfile = child.fromchild 
	outfd = outfile.fileno()
	errfile = child.childerr
	errfd = errfile.fileno()
	GHS_MakeNonBlocking(outfd)            # don't deadlock!
	GHS_MakeNonBlocking(errfd)
	outdata = errdata = ''
	outeof = erreof = 0
	while 1:
	    ready = select.select([outfd,errfd],[],[]) # wait for input
	    if outfd in ready[0]:
		outchunk = outfile.read()
		if outchunk == '': outeof = 1
		outdata = outdata + outchunk
	    if errfd in ready[0]:
		errchunk = errfile.read()
		if errchunk == '': erreof = 1
		errdata = errdata + errchunk
	    if outeof and erreof: break
	    select.select([],[],[],.1) # give a little time for buffers to fill
	err = child.wait()
	if not err:
	    err = 0;
	return (err, outdata, errdata);

#
# Run shell commands, catpure its status and grab the outputs from stdout.
#
# It returns a tuple:
#	(exitCode, stdoutOutput, stderrOutput)
# where stderrOutput is always "".
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_GetCommandOutput2(command):
    child = os.popen(command)
    data = child.read()
    if not data:
	data = "";
    try:
	err = child.close()
    except IOError:
	return (-1, data, "");
    if err == None:
	err = 0;
    return (err, data, "");

#
# Run shell commands, catpure its status and grab the outputs from
# stdout and stderr on request and return a tuple:
#	(exitCode, stdoutOutput, stderrOutput)
#
# If the outputs from stdout or stderr are not grabbed, the corresponding
# fields are "".
#
# GHS: Validated
#
def GHS_RunShellCommands(commands, grabStdout=True, grabStderr=False,
			 printErrMsg=True):
    if not commands:
	return (0, "", "");
    if grabStderr:
	if os.name == "posix":
	    res = GHS_GetCommandOutput(commands);
	    if res[0] and printErrMsg:
		if res[2]:
		    print('Command "%s" failed with exit code %d and error message:\n%s' % (commands, res[0], res[2]));
		else:
		    print('Command "%s" failed with exit code %d.' % (commands, res[0]));
	    return res;
	else:
	    # The mechanism does not work on Windows at present.
	    print('Grabbing stderr for shell command is not supported on OS "%s" yet.'
		    % (os.name));
	    return (1, "", "");
    elif grabStdout:
	res = GHS_GetCommandOutput2(commands);
	if res[0] and printErrMsg:
	    print('Command "%s" failed with exit code %d.' % (commands, res[0]));
	return res;
    else:
	res = os.system(commands);
	if res and printErrMsg:
	    print('Command "%s" failed with exit code %d.' % (commands, res));
	return (res, "", "");
# Define some aliases for the function
ghs_runshellcommands = GHS_RunShellCommands;
GHS_RunShellCmds = GHS_RunShellCommands;
ghs_runshellcmds = GHS_RunShellCommands;
GHS_ShellCmds = GHS_RunShellCommands;
ghs_shellcmds = GHS_RunShellCommands;
GHS_Shell = GHS_RunShellCommands;
ghs_shell = GHS_RunShellCommands;
#
# Run shell commands and return a string for the outputs from its stdout
# and/or stderr on request.
#
# If the outputs from stderr are requested to be grabbed, the stderr outputs
# will be appended to the stdout outputs as the return value.
#
# GHS: Validated
#
def GHS_System(commands, grabStdout=True, grabStderr=False,
			 printErrMsg=True):
    if not commands:
	return "";
    res = GHS_RunShellCommands(commands, grabStdout, grabStderr, printErrMsg);
    if res[2]:
	resStr = res[1]+res[2];
    else:
	resStr = res[1];
    return resStr;
# Define some aliases for the function
ghs_system = GHS_System;


#############################################################################
#
# MULTI Python exceptions
#
#############################################################################

import sys;
import traceback;

# Define GHS exception class.
class GHS_Exception(Exception):
    #
    # GHS: Validated (indirectly)
    #
    def __init__(self, value=None):
	self.value = value;
    #
    # GHS: Validated (indirectly)
    #
    def __str__(self):
	return "GHS_Exception: "+str(self.value);

class GHS_AbortExecFile(GHS_Exception):
    #
    # GHS: Validated (indirectly)
    #
    def __init__(self, value=None):
	self.value = value;
    #
    # GHS: Validated (indirectly)
    #
    def __str__(self):
	return "GHS_AbortExecFile: "+str(self.value);

class GHS_AbortExecFileWithStack(GHS_Exception):
    #
    # GHS: Validated (indirectly)
    #
    def __init__(self, value=None):
	self.value = value;
    #
    # GHS: Validated (indirectly)
    #
    def __str__(self):
	return "GHS_AbortExecFileWithStack: "+str(self.value);


import signal;

#
# Get signal name from number.
#
# GHS: Validated (indirectly)
#
def GHS_GetSignalNameFromNumber(num):
    if not isinstance(num, int):
	return str(num);
    if os.name == "posix":
	osName = os.uname()[0];
	if osName != "Linux" and osName != "SunOS":
	    return str(num);
	if num == signal.SIGABRT:
	    return "SIGABRT";
	elif num == signal.SIGALRM:
	    return "SIGALRM";
	elif num == signal.SIGBUS:
	    return "SIGBUS";
	elif num == signal.SIGCHLD:
	    return "SIGCHLD";
	elif num == signal.SIGCLD:
	    return "SIGCLD";
	elif num == signal.SIGCONT:
	    return "SIGCONT";
	elif osName == "SunOS" and num == signal.SIGEMT:
	    return "SIGEMT";
	elif num == signal.SIGFPE:
	    return "SIGFPE";
	elif num == signal.SIGHUP:
	    return "SIGHUP";
	elif num == signal.SIGILL:
	    return "SIGILL";
	elif num == signal.SIGINT:
	    return "SIGINT";
	elif num == signal.SIGIO:
	    return "SIGIO";
	elif num == signal.SIGIOT:
	    return "SIGIOT";
	elif num == signal.SIGKILL:
	    return "SIGKILL";
	elif num == signal.SIGPIPE:
	    return "SIGPIPE";
	elif num == signal.SIGPOLL:
	    return "SIGPOLL";
	elif num == signal.SIGPROF:
	    return "SIGPROF";
	elif num == signal.SIGPWR:
	    return "SIGPWR";
	elif num == signal.SIGQUIT:
	    return "SIGQUIT";
	elif num == signal.SIGSEGV:
	    return "SIGSEGV";
	elif num == signal.SIGSTOP:
	    return "SIGSTOP";
	elif num == signal.SIGSYS:
	    return "SIGSYS";
	elif num == signal.SIGTERM:
	    return "SIGTERM";
	elif num == signal.SIGTRAP:
	    return "SIGTRAP";
	elif num == signal.SIGTSTP:
	    return "SIGTSTP";
	elif num == signal.SIGTTIN:
	    return "SIGTTIN";
	elif num == signal.SIGTTOU:
	    return "SIGTTOU";
	elif num == signal.SIGURG:
	    return "SIGURG";
	elif num == signal.SIGUSR1:
	    return "SIGUSR1";
	elif num == signal.SIGUSR2:
	    return "SIGUSR2";
	elif num == signal.SIGVTALRM:
	    return "SIGVTALRM";
	elif num == signal.SIGWINCH:
	    return "SIGWINCH";
	elif num == signal.SIGXCPU:
	    return "SIGXCPU";
	elif num == signal.SIGXFSZ:
	    return "SIGXFSZ";
	else:
	    return str(num);
    elif os.name == "nt":
	if num == signal.SIGABRT:
	    return "SIGABRT";
	elif num == signal.SIGBREAK:
	    return "SIGBREAK";
	elif num == signal.SIGFPE:
	    return "SIGFPE";
	elif num == signal.SIGILL:
	    return "SIGILL";
	elif num == signal.SIGINT:
	    return "SIGINT";
	elif num == signal.SIGSEGV:
	    return "SIGSEGV";
	elif num == signal.SIGTERM:
	    return "SIGTERM";
	else:
	    return str(num);
    else:
	# Put in branches for other OSes.
	return str(num);
	
# Define some aliases for the function
ghs_getsignalnamefromnumber = GHS_GetSignalNameFromNumber;
    

class GHS_AbortExecOnSignal(GHS_Exception):
    #
    # GHS: Validated (indirectly)
    #
    def __init__(self, value=None):
	self.value = value;
    #
    # GHS: Validated (indirectly)
    #
    def __str__(self):
	return "Abort execution on signal "+GHS_GetSignalNameFromNumber(self.value);


#
# Handler for SIGINT signal to abort the current execution.
#
# GHS: Validated
#
def GHS_SigintHandler(signum, frame):
    print '!!! Execution is aborted by user.'
    raise GHS_AbortExecOnSignal(signum);
# Define some aliases for the function
ghs_siginthandler = GHS_SigintHandler;


#
# Run a Python script.
#
# GHS: Validated
#
def GHS_ExecFile(fileName, gd={}, ld={}, args=[]):
    if not gd:
	gd = ghs_misc.ghs_globals;
    if not ld:
	ld = gd;

    __ghs_internal_sys_args_stack = ghs_misc.GetGlobal("__ghs_internal_sys_args_stack");
    argsPushed = False;
    if isinstance(__ghs_internal_sys_args_stack, list) and args:
	if not isinstance(args, list):
	    args = [args];
	args.insert(0, fileName);
	__ghs_internal_sys_args_stack.append(sys.argv);
	sys.argv = args;
	argsPushed = True;

    try: 
	if not gd and not ld:
	    execfile(fileName);
	else:
	    execfile(fileName, gd, ld);
    except "GHS_AbortExecFile":
	pass;
    except GHS_AbortExecFile, e:
	if e.value != None:
	    print str(e);
	pass;
    except GHS_AbortExecFileWithStack, e:
	if e.value != None:
	    print str(e);
	traceback.print_exc();
	pass;
    except GHS_AbortExecOnSignal:
	traceback.print_exc();
	pass;
    except GHS_Exception, e:
	if e.value == "GHS_AbortExecFile":
	    pass;
	else:
	    print('GHS_Exception: to handle exception "%s"' % (e.value));
    except SystemExit, e:
	pass;
    except:
	traceback.print_exc();

    if argsPushed:
	if len(__ghs_internal_sys_args_stack):
	    s = __ghs_internal_sys_args_stack.pop();
	    if isinstance(s, list):
		sys.argv = s;
	    else:
		__ghs_internal_sys_args_stack.append(s);
		print('Failed to cleanups argument for script: the kept object is not a list');
	else:
	    print('Failed to cleanups argument for script.');

# Define some aliases for the function
ghs_execfile = GHS_ExecFile;


##
## Run a Python statement.
##
## GHS: Validated
##
#def GHS_ExecStatement(statements):
#    if not statements:
#	return True;
#    try:
#	exec(statements);
#    except "GHS_AbortExecFile":
#	pass;
#    except GHS_AbortExecFile:
#	pass;
#    except GHS_AbortExecOnSignal:
#	pass;
#    except GHS_Exception, e:
#	if e.value == "GHS_AbortExecFile":
#	    pass;
#	else:
#	    print('GHS_Exception: to handle exception "%s"' % (e.value));
#    except:
#	traceback.print_exc();
## Define some aliases for the function
#ghs_execstatement = GHS_ExecStatement;


#
# return	0	false
#		1	true
#		-1	unknown
#
#
# GHS: Validated
#
def GHS_GeneralTrueOrFalse(strVal):
    if strVal == None:
	return -1;

    strVal = str(strVal);
    if strVal == "Yes" or strVal == "yes" or strVal == "YES" or \
	strVal == "Y" or strVal == "y" or \
	strVal == "True" or strVal == "true" or strVal == "TRUE" or \
	strVal == "T" or strVal == "t" or \
	strVal == "On" or strVal == "on" or strVal == "ON" or \
	strVal == "1":
	return 1;
    elif strVal == "No" or strVal == "no" or strVal == "No" or \
	strVal == "N" or strVal == "n" or \
	strVal == "False" or strVal == "false" or strVal == "FALSE" or \
	strVal == "F" or strVal == "f" or \
	strVal == "Off" or strVal == "off" or strVal == "OFF" or \
	strVal == "0":
	return 0;
    else:
	return -1;
# Define some aliases for the function
ghs_generaltrueorfalse = GHS_GeneralTrueOrFalse;
GHS_TrueOrFalse = GHS_GeneralTrueOrFalse;
ghs_trueorfalse = GHS_GeneralTrueOrFalse;
GHS_YesOrNo = GHS_GeneralTrueOrFalse;
ghs_yesorno = GHS_GeneralTrueOrFalse;
