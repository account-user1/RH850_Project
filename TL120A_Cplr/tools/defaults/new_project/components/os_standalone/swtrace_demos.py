import ide;
import os;
import shutil;
from utils import *;


###############################################################################
# Copies all of the files for the Software Trace demo.
def copy_swtrace_demo(defs):
    # All files to copy.
    base_names = [ "swtrace.txt", "swtrace.c", "tag_ex.c", "labels.h"];

    # Files to put in to the project's .gpj file.
    child_files = [ "swtrace.txt", get_rc_path(defs), "swtrace.c", "tag_ex.c", "labels.h" ];

    copy_demo(defs, base_names, child_files, "swtrace.rc");

    if (defs.has_key("__GHS_GPJ_SUPPORTS_BUILD_CONFIGURATIONS") and
	defs.has_key("__GHS_NPW_PROVIDES_BUILD_CONFIG")):
	paths = get_all_rc_paths(defs) 
	for p in paths: 
	    if not os.path.exists(os.path.dirname(p)): 
		os.makedirs(os.path.dirname(p)) 
	    copy_file(defs, os.path.join(defs["ABS_PRJ_SRC_DIR"], "swtrace.gpy"),
		      os.path.join(os.path.dirname(p), "swtrace.gpy"))
    else:
	copy_file(defs, os.path.join(defs["ABS_PRJ_SRC_DIR"], "swtrace.gpy"),
		  os.path.join(defs["ABS_TOP_PROJ_DIR"], "swtrace.gpy"))
	
    # Set necessary options
    set_in_project(defs, "-gen_entry_exit_arg_log");
    set_in_project(defs, "-enable_entry_exit_log");
    # Ignore warnings from unset labels.
    if (defs.has_key("SUPPRESS_WARNINGS_OPT")):
        set_in_project(defs, defs["SUPPRESS_WARNINGS_OPT"]);

###############################################################################
