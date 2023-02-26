import ide;
import os;
import shutil;
from utils import *;

###############################################################################
# Add the shared threadx files to the project.
def add_tx_files_to_project(defs):
    if not (defs.has_key("LAST_RES_FILE")):
        # TODO: Create top-level resources project.
        return;


    npw2, uid = getNPW2Connection(defs);


    resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"],
                                       defs["LAST_RES_FILE"]);
    resources_full_dir = os.path.dirname(resources_full_path);

    if (defs.has_key("TX_ILL5_FILE")):
        ill5_file = os.path.join(resources_full_dir, defs["TX_ILL5_FILE"]);
	if (os.access(ill5_file, os.F_OK)):
	    # Link to file in tgt directory.
	    add_to_project(defs, ill5_file);    

    if (defs.has_key("TX_DEMO_ILL_FILE")):
        ill_file = os.path.join(resources_full_dir, defs["TX_DEMO_ILL_FILE"]);
	if (os.access(ill_file, os.F_OK)):
	    # Link to file in tgt directory.
	    add_to_project(defs, ill_file);    

    if (defs.has_key("TX_DEMO_RESET_FILE")):
        rst_file = os.path.join(resources_full_dir, defs["TX_DEMO_RESET_FILE"]);
	if (os.access(rst_file, os.F_OK)):
	    # Link to file in tgt directory.
	    add_to_project(defs, rst_file);    

###############################################################################
# Clear -event_logging and add -no_event_logging.
def set_no_eventanalyzer(defs):
    unset_in_project(defs, "-event_logging");
    set_in_project(defs, "-no_event_logging");

###############################################################################


###############################################################################
# Clear -no_event_logging and add -event_logging.
def set_eventanalyzer(defs):
    unset_in_project(defs, "-no_event_logging");
    set_in_project(defs, "-event_logging");

###############################################################################


###############################################################################
# Copies all of the files for the Sorter demo.
def copy_sorter_demo(defs):
    main_file_base = "hello";
    if (defs.has_key("MAIN_FILE_BASE")):
        main_file_base = defs["MAIN_FILE_BASE"];

    # All files to copy.
    base_names = [ "sort.c", "roster.txt", main_file_base + ".rc",
                   main_file_base + ".c" ];

    srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], "mevbutton.rc");
    dstpath = os.path.join(defs["ABS_TOP_PROJ_DIR"], "mevbutton.rc");
    copy_file(defs, srcpath, dstpath);

    # Files to put in to the project's .gpj file.
    child_files = [ main_file_base + ".c", "sort.c", get_rc_path(defs),
                    dstpath ];

    copy_demo(defs, base_names, child_files, main_file_base + ".rc");

###############################################################################
