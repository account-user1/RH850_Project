import ide;
import os;
import shutil;
from utils import *;


###############################################################################
# Copies all of the files for Hello World Library (C) example.
def copy_hello_lib_c(defs):
    # All files to copy and include in .gpj file.
    base_names = [ "libhello.c", "libhello.h" ];

    copy_demo(defs, base_names, base_names, None);

###############################################################################


###############################################################################
# Copies all of the files for Hello World Library (C++) example.
def copy_hello_lib_cxx(defs):
    # All files to copy and include in .gpj file.
    base_names = [ "libhello.cc", "libhello.hh" ];

    copy_demo(defs, base_names, base_names, None);

###############################################################################


###############################################################################
# Copies all of the files for the Catalog demo.
def copy_catalog_demo(defs):
    # All files to copy.
    base_names = [ "catalog.cc", "catalogfile", "catalog.h", 
                   "catalog.txt", "hello.cc", "item_list.cc", "item_list.h",
		   "labels.h", "scan.c", "scan.h", "shop.cc", "shop.h",
		   "shopper.gpj", "strings.c", "utils.gpj" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "catalog.txt", get_rc_path(defs), "hello.cc", "shop.cc",
                    "shop.h", "shopper.gpj", "utils.gpj" ];

    copy_demo(defs, base_names, child_files, "catalog.rc");

    # Set several -check options.
    set_in_project(defs, "-check=memory");
    set_in_project(defs, "-check=assignbound,bounds,switch,nilderef");

###############################################################################


###############################################################################
# Copies all of the files for the Basic Debugging demo.
def copy_basic_debug_demo(defs):
    # All files to copy.
    base_names = [ "linked_list.c", "linked_list.txt", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "linked_list.txt", get_rc_path(defs), "linked_list.c",
                    "labels.h" ];

    rc_script = "linked_list.rc";
    if (defs.has_key("RC_SCRIPT_NAME")):
        rc_script = defs["RC_SCRIPT_NAME"];

    copy_demo(defs, base_names, child_files, rc_script);

    # Ignore warnings from unset labels.
    if (defs.has_key("SUPPRESS_WARNINGS_OPT")):
        set_in_project(defs, defs["SUPPRESS_WARNINGS_OPT"]);

###############################################################################


###############################################################################
# Copies all of the files for the DoubleCheck demo.
def copy_double_check_demo(defs):
    # All files to copy.
    base_names = [ "demo.cc", "directions.txt", "demo.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "directions.txt", "demo.cc", "demo.h" ];

    copy_demo(defs, base_names, child_files, None);

    # Enable DoubleCheck
    set_in_project(defs, "-double_check.level=medium");
    set_in_project(defs, "-double_check.report=report.gsr");
    
###############################################################################


###############################################################################
# Copies all of the files for the Editor Xref demo.
def copy_editor_xref_demo(defs):
    # All files to copy.
    base_names = [ "catalog.cc", "catalogfile", "catalog.h", "edit_xref.txt",
                   "hello.cc", "item_list.cc", "item_list.h",
		   "labels.h", "scan.c", "scan.h", "shop.cc", "shop.h",
		   "shopper.gpj", "strings.c", "utils.gpj" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "edit_xref.txt", get_rc_path(defs), "hello.cc", "shop.cc",
                    "shop.h", "shopper.gpj", "utils.gpj" ];

    copy_demo(defs, base_names, child_files, "edit_xref.rc");

    # Set several -check options.
    set_in_project(defs, "-check=memory");
    set_in_project(defs, "-check=assignbound,bounds,switch,nilderef");

###############################################################################


###############################################################################
# Copies all of the files for the Code Coverage demo.
def copy_coverage_demo(defs):
    # All files to copy.
    base_names = [ "coverage.txt", "tune.c", "tune2.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "coverage.txt", get_rc_path(defs), "tune.c",
                    "tune2.c" ];

    copy_demo(defs, base_names, child_files, "coverage.rc");

    # Turn on coverage.
    set_in_project(defs, "-a");

###############################################################################


###############################################################################
# Copies all of the files for the Run-Time Error Checking (C) demo.
def copy_rtec_demo(defs):
    # All files to copy.
    base_names = [ "rtec.txt", "labels.h", "rtec.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "rtec.txt", get_rc_path(defs), "rtec.c", "labels.h" ];

    copy_demo(defs, base_names, child_files, "rtec.rc");

    # Set several -check options.
    set_in_project(defs, "-check=memory");
    set_in_project(defs, "-check=assignbound,bounds,switch,nilderef,zerodivide");

###############################################################################


###############################################################################
# Copies all of the files for the Run-Time Error Checking (C++) demo.
def copy_rtec_cxx_demo(defs):
    # All files to copy.
    base_names = [ "labels.h", "rtec.cc" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "rtec.cc", "labels.h" ];

    copy_demo(defs, base_names, child_files, "rtec.rc");

    # Set several -check options.
    set_in_project(defs, "-check=memory");
    set_in_project(defs, "-check=assignbound,bounds,switch,nilderef,zerodivide");

###############################################################################


###############################################################################
# Copies all of the files for the Custom Run-Time Error Checking demo.
def copy_custom_rtec_demo(defs):
    # All files to copy.
    base_names = [ "custom_rtec.txt", "labels.h", "run_time_errors.c",
                   "user_defined_handler.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "custom_rtec.txt", get_rc_path(defs), "run_time_errors.c",
                    "user_defined_handler.c", "labels.h" ];

    copy_demo(defs, base_names, child_files, "custom_rtec.rc");

    # Set several -check options.
    set_in_project(defs, "-check=memory");
    set_in_project(defs, "-check=assignbound,bounds,switch,nilderef,zerodivide");

###############################################################################


###############################################################################
# Copies all of the files for the Fork Debugging (C) demo.
def copy_fork_debug_demo(defs):
    # All files to copy.
    base_names = [ "fork_debugging.c", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "fork_debugging.c", "labels.h" ];

    copy_demo(defs, base_names, child_files, "fork_debugging.rc");

###############################################################################


###############################################################################
# Copies all of the files for the Fork Debugging (C++) demo.
def copy_fork_debug_cxx_demo(defs):
    # All files to copy.
    base_names = [ "fork_debugging.cc", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "fork_debugging.cc", "labels.h" ];

    copy_demo(defs, base_names, child_files, "fork_debugging.rc");

###############################################################################


###############################################################################
# Copies all of the files for the Exec Debugging (C) demo.
def copy_exec_debug_demo(defs):
    # All files to copy.
    base_names = [ "another_program.c", "exec_debugging.c", "labels.h",
    		   "another_program.gpj", "exec_debugging.gpj" ];

    srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], "exec_debugging.rc");
    dstpath = os.path.join(defs["ABS_TOP_PROJ_DIR"], "exec_debugging.rc");
    copy_file(defs,srcpath, dstpath);

    child_files = [ dstpath, "exec_debugging.gpj", "another_program.gpj" ];
    
    copy_demo(defs, base_names, child_files, None);

###############################################################################


###############################################################################
# Copies all of the files for the Thread Debugging (C) demo.
def copy_thread_debug_demo(defs):
    # All files to copy.
    base_names = [ "thread_debugging.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "thread_debugging.c" ];

    copy_demo(defs, base_names, child_files, "thread_debugging.rc");

    # Set threading options.
    set_in_project(defs, "-lpthread");
    set_in_project(defs, "-DREENTRANT");
    set_in_project(defs, "-D_REENTRANT");

###############################################################################


###############################################################################
# Copies all of the files for the Thread Debugging (C) demo.
def copy_thread_debug_cxx_demo(defs):
    # All files to copy.
    base_names = [ "thread_debugging.cc" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "thread_debugging.cc" ];

    copy_demo(defs, base_names, child_files, "thread_debugging.rc");

    # Set threading options.
    set_in_project(defs, "-lpthread");
    set_in_project(defs, "-DREENTRANT");
    set_in_project(defs, "-D_REENTRANT");

###############################################################################


###############################################################################
# Copies all of the files for the Graph Visualization (C) demo.
def copy_ddv_demo(defs):
    # All files to copy.
    base_names = [ "ddv_demo.c", "labels.h" ];

    srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], "data_descriptions.mdv");
    destpath = os.path.join(defs["ABS_TOP_PROJ_DIR"],
                            "data_descriptions_graph.mdv");
    copy_file(defs,srcpath, destpath);


    # Files to put in to the project's .gpj file.
    child_files = [ "ddv_demo.c", "labels.h", get_rc_path(defs), destpath ];

    copy_demo(defs, base_names, child_files, "ddv_demo.rc");

###############################################################################


###############################################################################
# Copies all of the files for the Graph Visualization (C++) demo.
def copy_ddv_cxx_demo(defs):
    # All files to copy.
    base_names = [ "ddv_demo.cc", "labels.h" ];

    srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], "data_descriptions.mdv");
    destpath = os.path.join(defs["ABS_TOP_PROJ_DIR"],
                            "data_descriptions_graph_cc.mdv");
    copy_file(defs,srcpath, destpath);


    # Files to put in to the project's .gpj file.
    child_files = [ "ddv_demo.cc", "labels.h", get_rc_path(defs), destpath ];

    copy_demo(defs, base_names, child_files, "ddv_demo.rc");

###############################################################################


###############################################################################
# Copies all of the files for the Tree Visualization (C) demo.
def copy_ddv_tree_demo(defs):
    # All files to copy.
    base_names = [ "ddv_tree.c", "labels.h" ];

    srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], "data_descriptions.mdv");
    destpath = os.path.join(defs["ABS_TOP_PROJ_DIR"],
                            "data_descriptions_tree.mdv");
    copy_file(defs,srcpath, destpath);


    # Files to put in to the project's .gpj file.
    child_files = [ "ddv_tree.c", "labels.h", get_rc_path(defs), destpath ];

    copy_demo(defs, base_names, child_files, "ddv_tree.rc");

###############################################################################


###############################################################################
# Copies all of the files for the STL Visualization (C++) demo.
def copy_stl_vis_demo(defs):
    # All files to copy.
    base_names = [ "stl_demo.cc", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "stl_demo.cc", "labels.h", get_rc_path(defs) ];

    copy_demo(defs, base_names, child_files, "stl_demo.rc");

###############################################################################


###############################################################################
# Copies all of the files for the PathAnalyzer demo.
def copy_pa_demo(defs):
    # All files to copy.
    base_names = [ "sort.c", "sort.h", "bubblesort.c", "insertionsort.c",
                   "quicksort.c", "selectionsort.c", "sort_util.c",
		   "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "sort.c", "sort_util.c", "bubblesort.c", "insertionsort.c",
                    "quicksort.c", "selectionsort.c", get_rc_path(defs) ];

    copy_file(defs,os.path.join(defs["ABS_PRJ_SRC_DIR"], "pa_filter.gpy"),
		    os.path.join(defs["ABS_TOP_PROJ_DIR"], "pa_filter.gpy"));

    copy_demo(defs, base_names, child_files, "pa_demo.rc");

###############################################################################


###############################################################################
# Copies all of the files for the Advanced PathAnalyzer demo.
def copy_pa_demo_adv(defs):
    # All files to copy.
    base_names = [ "sort.c", "sort.h", "bubblesort.c", "insertionsort.c",
                   "quicksort.c", "selectionsort.c", "sort_util.c",
		   "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "sort.c", "sort_util.c", "bubblesort.c", "insertionsort.c",
                    "quicksort.c", "selectionsort.c", get_rc_path(defs) ];

    copy_demo(defs, base_names, child_files, "pa_demo_adv.rc");

###############################################################################


###############################################################################
# Copies all of the files for the DSP Visualization (C) demo.
def copy_dsp_demo(defs):
    # All files to copy.
    base_names = [ "dspbp.txt", "sindemo.c", "labels.h" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "dspbp.txt", get_rc_path(defs), "sindemo.c", "labels.h" ];

    copy_demo(defs, base_names, child_files, "sindemo.rc");

    # Ignore warnings from unset labels.
    if (defs.has_key("SUPPRESS_WARNINGS_OPT")):
        set_in_project(defs, defs["SUPPRESS_WARNINGS_OPT"]);

###############################################################################


###############################################################################
# Copies all of the files for the Memory Leak Detection (C) demo.
def copy_memleak_demo(defs):
    # All files to copy.
    base_names = [ "memory_leak.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "memory_leak.c" ];

    copy_demo(defs, base_names, child_files, "memory_leak.rc");

    # Set necessary options.
    set_in_project(defs, "-check=alloc");

###############################################################################


###############################################################################
# Copies all of the files for the Memory Leak Detection (C++) demo.
def copy_memleak_cxx_demo(defs):
    # All files to copy.
    base_names = [ "memory_leak.cc" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "memory_leak.cc" ];

    copy_demo(defs, base_names, child_files, "memory_leak.rc");

    # Set necessary options.
    set_in_project(defs, "-check=alloc");

###############################################################################


###############################################################################
# Copies all of the files for the Profiling (C) demo.
def copy_profile_demo(defs):
    # All files to copy.
    base_names = [ "profiling.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "profiling.c" ];

    copy_demo(defs, base_names, child_files, "profiling.rc");

    # Set necessary options.
    set_in_project(defs, "-p");
    # On solaris 10 libc is a shared object, so we need dynamic linkage here.
    # See TOOLS-3290
    set_in_project(defs, "{ target=sparc_solaris } -call_shared");

###############################################################################


###############################################################################
# Copies all of the files for the Profiling (C++) demo.
def copy_profile_cxx_demo(defs):
    # All files to copy.
    base_names = [ "profiling.cc" ];

    # Files to put in to the project's .gpj file.
    child_files = [ get_rc_path(defs), "profiling.cc" ];

    copy_demo(defs, base_names, child_files, "profiling.rc");

    # Set necessary options.
    set_in_project(defs, "-p");

###############################################################################


###############################################################################
# Copies all of the files for the Performance Timing demo.
def copy_timing_demo(defs):
    # All files to copy.
    base_names = [ "timing.txt", "tune.c", "tune2.c" ];

    # Files to put in to the project's .gpj file.
    child_files = [ "timing.txt", get_rc_path(defs), "tune.c", "tune2.c" ];

    copy_demo(defs, base_names, child_files, "timing.rc");

###############################################################################


###############################################################################
# Copies all of the files for the Custom File Types demo.
def copy_custom_filetypes_demo(defs):
    # All files to copy.
    base_names = [ "hello.c", "banner.bin" ];

    srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], "binary.bod");
    destpath = os.path.join(defs["ABS_PROJ_DIR"],
                            defs["BASE_PROJ_NAME"] + "_binary.bod");
    copy_file(defs,srcpath, destpath);
    
    # Files to put in to the project's .gpj file.
    child_files = [ destpath, "hello.c", "banner.c" ];

    copy_demo(defs, base_names, child_files, None);

    # Set customization
    add_customization_file(defs, destpath);

    # Add banner.bin file.  Done here to ensure it gets the correct type.
    child_cookie = add_to_self_project(defs, "banner.bin", True);

    # Set -size option on banner.bin
    # Set :outputDir option so that banner.c ends up in the source directory
    # and won't conflict if more than one Custom File Types demo is added to
    # a single project file.
    if (child_cookie != -1):
        modify_option_in_project(defs, child_cookie, "-size", True);
        modify_option_in_project(defs, child_cookie, \
	                         ":outputDir=" + defs["REL_PROJ_DIR"], True);

###############################################################################




