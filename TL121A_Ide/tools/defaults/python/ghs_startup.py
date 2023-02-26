# Precompile the GHS modules into the Python dir under user's local
# configuration dir.
# Preload all MULTI IDE modules.
import py_compile
import os;
import re;
import warnings;

#
# Check if an object name exists.
#
# A better choice is to put these global variables as the fields of a
# special class, like GHS_Global, then use class'  attribute access functions.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_CheckObjectName(objName, nameList):
#    nameList = dir();
    if nameList.count(objName) <= 0:
	return False;
    else:
	return True;

#
# Concatenate two directory string together to get a new directory.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_ConcatDirs(dir1, dir2):
    if not dir1:
	return dir2;
    elif not dir2:
	return dir1;
    else:
	return dir1+os.sep+dir2;

#
# Search file in GHS Python configuration dirs
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_SearchFileInPythonConfigDirs(fileName, globalNameList):
    global __ghs_user_config_python_dir;
    global __ghs_site_default_python_dir;
    if GHS_CheckObjectName("__ghs_user_ver_config_python_dir", globalNameList):
	global __ghs_user_ver_config_python_dir;
	ret = GHS_ConcatDirs(__ghs_user_ver_config_python_dir, fileName);
	if os.path.isfile(ret):
	    return ret;
    ret = GHS_ConcatDirs(__ghs_user_config_python_dir, fileName);
    if os.path.isfile(ret):
	return ret;

    if GHS_CheckObjectName("__ghs_site_tools_config_python_dir", globalNameList):
	global __ghs_site_tools_config_python_dir;
	ret = GHS_ConcatDirs(__ghs_site_tools_config_python_dir, fileName);
	if os.path.isfile(ret):
	    return ret;
    if GHS_CheckObjectName("__ghs_site_tools_default_python_dir", globalNameList):
	global __ghs_site_tools_default_python_dir;
	ret = GHS_ConcatDirs(__ghs_site_tools_default_python_dir, fileName);
	if os.path.isfile(ret):
	    return ret;
	    
    if GHS_CheckObjectName("__ghs_site_config_python_dir", globalNameList):
	global __ghs_site_config_python_dir;
	ret = GHS_ConcatDirs(__ghs_site_config_python_dir, fileName);
	if os.path.isfile(ret):
	    return ret;
    ret = GHS_ConcatDirs(__ghs_site_default_python_dir, fileName);
    if os.path.isfile(ret):
	return ret;
    return "";

#
# Get the name for compiled Python script.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_GetPycName(pyName):
    if not pyName:
	return "";
    pyName = os.path.basename(pyName);
    tmpSplit = os.path.splitext(pyName);
    return tmpSplit[0]+".pyc";

#
# Get a Python script's base name.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_GetPyBaseName(pyName):
    if not pyName:
	return "";
    res = re.match("^\s*([\w]+)\..*", pyName);
    if res:
	return res.group(1);
    else:
	print("Not a Python file: \"%s\"" % pyName);
	return "";

#
# Keep the current sys.argv into a system stack and set the given value to
# it.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_PushArgv(args):
    global __ghs_internal_sys_args_stack;
    if isinstance(args, list):
	__ghs_internal_sys_args_stack.append(sys.argv);
	sys.argv = args;
	return True;
    else:
	return False;

#
# Restore the value kept in a system stack to the current sys.argv.
#
# GHS: Validated (indirectly, internal use only)
#
def GHS_PopArgv():
    global __ghs_internal_sys_args_stack;
    if len(__ghs_internal_sys_args_stack):
	s = __ghs_internal_sys_args_stack.pop();
	if isinstance(s, list):
	    sys.argv = s;
	    return True;
	else:
	    __ghs_internal_sys_args_stack.append(s);
	    return False;
    else:
	return False;


############################################################################
#
#
# Begin of the real setup code
#
#
############################################################################

warnings.filterwarnings("ignore", ".*", FutureWarning);

# By default, precreate objects for
#    window register
#    builder/projmgr
#    editor
#    debugger
if dir().count("__ghs_precreate_ide_objects") <= 0:
    if __ghs_validation_mode:
	__ghs_precreate_ide_objects = 0x1d;
    else:
	__ghs_precreate_ide_objects = 1;

#
# Check if BEFORE_GHS_STARTUP_PYTHON is defined, if yes, run the script kept in
# the environment variable.
#
if os.environ.has_key("BEFORE_GHS_STARTUP_PYTHON"):
    userStartupScript = os.environ["BEFORE_GHS_STARTUP_PYTHON"];
    if os.path.isfile(userStartupScript):
	execfile(userStartupScript);
    else:
	print("Startup file defined in environment varibale BEFORE_GHS_STARTUP_PYTHON does not exist:\n    %s" %
		userStartupScript);

# Execute the files named "before_ghs_startup.py" from user's configuration
# dir.
fn = __ghs_user_config_python_dir+os.sep+"before_ghs_startup.py";
if os.path.isfile(fn):
    execfile(fn);
fn = __ghs_user_ver_config_python_dir+os.sep+"before_ghs_startup.py";
if os.path.isfile(fn):
    execfile(fn);

# Execute the files from the current working directory
fn = os.getcwd()+os.sep+"before_ghs_startup.py";
if os.path.isfile(fn):
    execfile(fn);

globalNameList = dir();
# Add path for board setup module.
if GHS_CheckObjectName("__ghs_site_default_python_dir", globalNameList):
    fn = __ghs_site_default_python_dir+os.sep+"board_setup";
    if sys.path.count(fn) == 0:
	sys.path.append(fn);
#    fn = fn+os.sep+"pybs";
#    if sys.path.count(fn) == 0:
#	sys.path.append(fn);

if GHS_CheckObjectName("__ghs_user_ver_config_python_dir", globalNameList):
    pycDir = __ghs_user_ver_config_python_dir;
    if not os.access(pycDir, os.F_OK):
	pycDir = None;
    oldPycDir = __ghs_user_config_python_dir;
    if not os.access(oldPycDir, os.F_OK):
	oldPycDir = None;
else:
    pycDir = __ghs_user_config_python_dir;
    if not os.access(pycDir, os.F_OK):
	pycDir = None;
    oldPycDir = None;
if GHS_CheckObjectName("__ghs_python_class_dir", globalNameList):
    specialPycDir = __ghs_python_class_dir;
    if not os.path.isdir(specialPycDir):
	specialPycDir = None;
else:
    specialPycDir = None;



fn = GHS_SearchFileInPythonConfigDirs("ghs_manifest.txt", globalNameList);

modulesToImport = [];
if fn:
    fp = open(fn);
    if fp:
	manifestLineRe = re.compile("^\s*([\w\.]+)\s*:\s*([\w]+)\s*,\s*([\w]+),\s*([\w]+)\s*");
	isTrueRe = re.compile("true", re.IGNORECASE);
	cmtLineRe = re.compile("^\s*#");
	emptyLineRe = re.compile("^\s*$");

	lines = fp.read();
	lineList = lines.split("\n");
	lineNum = len(lineList);
	for idx in range(0, lineNum):
	    if cmtLineRe.match(lineList[idx]):
		continue;
	    if emptyLineRe.match(lineList[idx]):
		continue;
	    res = manifestLineRe.match(lineList[idx]);
	    if res:
		fn = GHS_SearchFileInPythonConfigDirs(res.group(1), globalNameList);
	    else:
		continue;
	    if fn:
		if isTrueRe.match(res.group(4)) and not __ghs_validation_mode:
		    continue;
		# Before, I precompiled the MULTI Python integration classes
		# into a directory for the specific MULTI version under user's
		# local configuration directory to keep the MULTI python
		# directory clean (only contain source files). But the
		# approach is not good for the following reasons:
		#  * compatibility between different MULTI releases in the
		#    same MULTI version
		#  * special situations, for example, insider GHS, people try
		#    an old MULTI tools snapshot, then use a newer MULTI tools
		#    snapshot or the current MULTI auto building version, the
		#    Python class files from the newer MULTI snapshot will
		#    not be recompiled, because the corresponding .pyc file in
		#    user's configuration directory has newer timestamp than
		#    the Python source file from the new MULTI snapshot.
		#
		# To switch back to old behavior, change the following
		# False into True.
		compileIntoUserDir = True;
		# Delete the existing .pyc files for the MULTI Python
		# integration files from user's directory.
		# Set the flag into False in MULTI release, because there are
		# no such auto-compiled .pyc files in user's directory.
		removePycFromUserDir = True;
		if removePycFromUserDir:
		    if specialPycDir and pycDir:
			pycName = GHS_ConcatDirs(pycDir, GHS_GetPycName(res.group(1)));
			if os.access(pycName, os.F_OK):
			    os.remove(pycName);
		    if oldPycDir:
			pycName = GHS_ConcatDirs(oldPycDir, GHS_GetPycName(res.group(1)));
			if os.access(pycName, os.F_OK):
			    os.remove(pycName);
		if isTrueRe.match(res.group(2)):
		    # Precompile the module
		    if compileIntoUserDir:
			if specialPycDir:
			    pycName = GHS_ConcatDirs(specialPycDir, GHS_GetPycName(res.group(1)));
			else:
			    pycName = GHS_ConcatDirs(pycDir, GHS_GetPycName(res.group(1)));
		    else:
			pycName = GHS_ConcatDirs(__ghs_site_default_python_dir, GHS_GetPycName(res.group(1)));
		    compilePy = False;
		    if os.access(pycName, os.F_OK):
			pycStat = os.stat(pycName);
			pyStat = os.stat(fn);
			# Check modification time
			if pycStat[8] < (pyStat[8]):
#			    print("Compile %s: pyc[8]=%d < py[8]=%d" % (os.path.basename(fn), pycStat[8], pyStat[8]));
			    compilePy = True;
			del pycStat;
			del pyStat;
		    else:
#			print("Compile %s: pyc does not exist." % os.path.basename(fn));
			compilePy = True;
		    if compilePy:
			py_compile.compile(fn, pycName);
#			if os.access(pycName, os.F_OK):
#			    os.chmod(pycName, 0666)
		    del compilePy;
		    del pycName;
		if isTrueRe.match(res.group(3)):
		    # Import the module to the global context
		    modulesToImport.append(GHS_GetPyBaseName(res.group(1)));
	    elif __ghs_validation_mode or not isTrueRe.match(res.group(4)):
		pycName = GHS_GetPycName(res.group(1));
		fn = GHS_SearchFileInPythonConfigDirs(pycName, globalNameList);
		# Check if the corresponding .pyc exists
		if fn:
		    if isTrueRe.match(res.group(3)):
			# Import the module to the global context
			modulesToImport.append(GHS_GetPyBaseName(res.group(1)));
		else:
		    print("Cannot find GHS Python file \"%s\"." % res.group(1));

	fp.close();
	
	del manifestLineRe;
	del isTrueRe;
	del cmtLineRe;
	del emptyLineRe;
	del lines;
	del lineList;
	del lineNum;
	del idx;
	del res;
    else:
	print("Cannot open GHS Python manifest file: \n%s" % fn);
    del fp;
else:
    print("Cannot find GHS Python manifest file \"%s\"." % "ghs_manifest.txt");


# Set the globals for GHS Python environment.
import ghs_misc;

ghs_misc.ghs_globals = globals();


#
# Special setup for GHS validation.
#
if __ghs_validation_mode:
    fn = GHS_SearchFileInPythonConfigDirs("ghs_val_setup.gpy", globalNameList);
    if fn:
	execfile(fn);


# Import the modules
if modulesToImport:
    for idx in range(0, len(modulesToImport)):
	cmd = "from " + modulesToImport[idx] + " import *";
	exec(cmd);
    del cmd;
    del idx;
del modulesToImport;

__ghs_internal_sys_args_stack = [];

# Delete these objects
# We keep the GHS config dir around in case that they are used later.
del globalNameList;
del fn;
del pycDir;
del oldPycDir;



# Setup signal handler to abort Python execution.
from ghs_util import *;
import signal;

signal.signal(signal.SIGINT, GHS_SigintHandler)


# Initialize the special variables
self_dbw = None;
self_dbs = None;



#
# Pre-create objects for user's convenience.
#

# Define an object for MULTI Window Register.
if getattr(objMasks, "windowRegister", 0) & __ghs_precreate_ide_objects:
    winreg = GHS_WindowRegister();
else:
    winreg = None;

# Define an object for MULTI Builder (Project Manager).
if getattr(objMasks, "builder", 0) & __ghs_precreate_ide_objects:
    builder = GHS_Builder();
else:
    builder = None;
projmgr = builder;

# Define an object for MULTI debugger.
if getattr(objMasks, "editor", 0) & __ghs_precreate_ide_objects:
    editor = GHS_Editor();
else:
    editor = None;

# You can create the following two kinds of Editors if you use them.
if getattr(objMasks, "vi", 0) & __ghs_precreate_ide_objects:
    vi = GHS_Editor("Editor.Vi");
else:
    vi = None;
if getattr(objMasks, "emacs", 0) & __ghs_precreate_ide_objects:
    emacs = GHS_Editor("Editor.Emacs");
else:
    emacs = None;

# Define an object for MULTI debugger.
if getattr(objMasks, "debugger", 0) & __ghs_precreate_ide_objects:
    debugger = GHS_Debugger();
else:
    debugger = None;


#
# Check if AFTER_GHS_STARTUP_PYTHON is defined, if yes, run the script kept in
# the environment variable.
#
if os.environ.has_key("AFTER_GHS_STARTUP_PYTHON"):
    userStartupScript = os.environ["AFTER_GHS_STARTUP_PYTHON"];
    if os.path.isfile(userStartupScript):
	execfile(userStartupScript);
    else:
	print("Startup file defined in environment varibale AFTER_GHS_STARTUP_PYTHON does not exist:\n    %s" %
		userStartupScript);
if os.environ.has_key("GHS_STARTUP_PYTHON"):
    userStartupScript = os.environ["GHS_STARTUP_PYTHON"];
    if os.path.isfile(userStartupScript):
	execfile(userStartupScript);
    else:
	print("Startup file defined in environment varibale GHS_STARTUP_PYTHON does not exist:\n    %s" %
		userStartupScript);


# Execute the files named "after_ghs_startup.py" from user's configuration
# dir.
fn = __ghs_user_config_python_dir+os.sep+"after_ghs_startup.py";
if os.path.isfile(fn):
    execfile(fn);
fn = __ghs_user_ver_config_python_dir+os.sep+"after_ghs_startup.py";
if os.path.isfile(fn):
    execfile(fn);

# Execute the files from the current working directory
fn = os.getcwd()+os.sep+"after_ghs_startup.py";
if os.path.isfile(fn):
    execfile(fn);

# Hack to override Tcl/Tk's installation limitation:
# Tcl/Tk does not use relative path to search for the source files (.tcl).
# Instead, it hardcodes its C compilation path into its shared librries.
if os.name == "posix":
    os.environ["TCL_LIBRARY"] = os.path.join(__ghs_multi_dir, 'python/tcl_tk/lib/tcl8.4')

############################################################################
#
#
# End of the real setup code
#
#
############################################################################

#
# Execute board-setup script written in Python over a GHS debug server.
#
# The function is supposed to be for internal use, though you can call it
# directly with proper arguments when necessary.
#
# The function is automatically called when you use board setup script written
# in Python via MULTI Debuger command "connect", "setup" etc.
#
# Here are the arguments:
#    fileName		the setup script file name or path.
#    dbserverId		the corresponding debug server's component name, which
#			is displayed with MULTI Debugger command "components".
#    args		the arguments to be transferred to the setup script.
#
# Here is the environment for user's board setup Python script when it is
# executed:
# sys.argv[0]:	Stores the board setup script file name.
# sys.argv[1]: 	Stores the debug server connection object (of class
#		GHS_Debugger).
#		The real commands to setup the board will be executed via
#		the debug server.
# sys.argv[2]: 	Stores the arguments from user for the setup script.
#
# GHS: Validated (indirectly, internal use only)
#
import ghs_dbserver;
def GHS_ExecuteBsScript(fileName, dbServerId, args=""):
    if not fileName:
	print("No Python script is given.");
	return False;
    if not os.access(fileName, os.F_OK):
	print('Python script "%s" does not exist.' % fileName);
	return False;
    if not dbServerId:
	print("No MULTI Debug Server ID is given.");
	return False;

    dbs = ghs_dbserver.GHS_DebugServer(dbServerId);
    __ghs_bs_tmp_argv = [fileName];
    __ghs_bs_tmp_argv.append(dbs);
    if args:
	__ghs_bs_tmp_argv.append(str(args));
    else:
	__ghs_bs_tmp_argv.append("");

    if not GHS_PushArgv(__ghs_bs_tmp_argv):
	print('Failed to get arguments ready for script.');
	return False;

    ghs_execfile(fileName);

    if not GHS_PopArgv():
	print('Failed to cleanups argument for GHS board setup script.');
	return False;

    return True;
# Define some aliases for the function
ghs_executebsscript = GHS_ExecuteBsScript;
ghs_ExecBsScript = GHS_ExecuteBsScript;
ghs_execbsscript = GHS_ExecuteBsScript;
GHS_RunBsScript = GHS_ExecuteBsScript;
ghs_runbsscript = GHS_ExecuteBsScript;


