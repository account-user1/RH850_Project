import ide;
import os;
import shutil;
from utils import *;


###############################################################################
# Copies all of the files for the Trace Debugging demo.
def copy_trace_debug_demo(defs):
    # All files to copy.
    base_names = [ "trace_demo.c", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "trace_demo.c", "labels.h" ];

    copy_demo(defs, base_names, child_files, "trace_demo.rc");

    # Ignore warnings from unset labels.
    if (defs.has_key("SUPPRESS_WARNINGS_OPT")):
        set_in_project(defs, defs["SUPPRESS_WARNINGS_OPT"]);

###############################################################################


###############################################################################
# Copies all of the files for the In-Memory TimeMachine demo.
def copy_inmem_tm_demo(defs):
    # Most of the files for the In-Memory TimeMachine demo come from the
    # normal TimeMachine demo.  First we copy In-Memory TimeMachine specific
    # files.
    base_names = [ "readme.txt" ];
    
    child_files = [ "readme.txt" ];

    copy_demo(defs, base_names, child_files, None);

    # Now copy files from the normal TimeMachine demo.
    tm_base_names = [ "trace_demo.c", "labels.h" ];

    second_rc_file = os.path.join(defs["ABS_TOP_PROJ_DIR"],
                                  "trace_dbg_cr.rc");

    # Files to put in to the project's .gpj file.
    tm_child_files = [ get_rc_path(defs), second_rc_file, "trace_demo.c",
                    "labels.h" ];

    copy_file(defs, os.path.join(defs["ABS_PRJ_SRC_DIR_2"], "trace_demo_cr.rc"),
              second_rc_file);

    # ABS_PRJ_SRC_DIR_2 is the location of the normal TimeMachine demo.
    alt_defs = defs;
    alt_defs["ABS_PRJ_SRC_DIR"] = alt_defs["ABS_PRJ_SRC_DIR_2"];

    copy_demo(alt_defs, tm_base_names, tm_child_files, "trace_demo.rc");

    # Set necessary options
    set_in_project(defs, "-inmemtm");
    set_in_project(defs, "-lnk=-append");

###############################################################################


###############################################################################
# Copies all of the files for the Memory Checking demo.
def copy_std_memcheck_demo(defs):
    # All files to copy.
    base_names = [ "mem_check.txt", "mem_check.rc", "leaks.c", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "mem_check.txt", get_rc_path(defs), "leaks.c",
                    "labels.h" ];

    copy_demo(defs, base_names, child_files, "mem_check.rc");

    # Set necessary options
    set_in_project(defs, "-check=memory");

###############################################################################


###############################################################################
# Copies all of the files for the Profiling demo.
def copy_std_profile_demo(defs):
    # All files to copy.
    base_names = [ "instructions.txt", "profile.cc", "dataset.h", "dataset.cc",
                   "position.h", "graph.h", "graph.cc" ];

    copy_demo(defs, base_names, base_names, None);

    # Set necessary options
    set_in_project(defs, "-Ospace");
    set_in_project(defs, "-Onoinline -Onoloop");
    set_in_project(defs, "{optional} -Onocond");
    set_in_project(defs, "-Olimit=peephole,pipeline");
    set_in_project(defs, "--ee");

###############################################################################


###############################################################################
# Copies all of the files for the LED Blinking demo.
def copy_led_demo(defs):
    if (not defs.has_key("ABS_LED_SRC_DIR")):
        print "No hardware-specific source directory specified."
	return;

    # Copy hardware-specific files 
    for base in [ "parts_leds.c", "parts_timer.c", "parts_switch.c"] :
        srcpath = os.path.join(defs["ABS_LED_SRC_DIR"], base);
        dstpath = os.path.join(defs["ABS_PROJ_DIR"], base);
	copy_file(defs, srcpath, dstpath);

    # All files to copy.
    base_names = [ "led_demo.c", "parts_leds.h", "parts_timer.h",
                   "parts_switch.h", "led_demo.txt" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "led_demo.txt", "led_demo.c", "parts_leds.c",
                    "parts_leds.h", "parts_timer.c", "parts_timer.h",
		    "parts_switch.c", "parts_switch.h" ];

    copy_demo(defs, base_names, child_files, None);

    # Set necessary options
    set_in_project(defs, "-noobj");
    
###############################################################################


