import ide;
import os;
import shutil;
from utils import *;
from projects import *;


###############################################################################

def copy_mca_demo(defs):
    base_names = [ "common.gpj", "common.c", "common2.c", "core1.gpj", "hello.c", "core2.gpj", "hello2.c", "readme.txt" ];
    child_files = [ "common.gpj", "core1.gpj", "core2.gpj", "readme.txt" ];
    copy_demo(defs, base_names, child_files, None);
    set_in_project(defs, "-common \"{ -G --preprocess_linker_directive_full }\"");
    set_in_project(defs, "-shared_imports");
    set_in_project(defs, "-allow_overlap");

def copy_mca_threads_demo(defs):
    base_names = [ "shared.gpj", "shared.c", "hardware_thread0.gpj", "hardware_thread0.c", "hardware_thread1.gpj", "hardware_thread1.c", "hardware_thread2.gpj", "hardware_thread2.c", "hardware_thread3.gpj", "hardware_thread3.c", "hardware_thread1.ld", "hardware_thread2.ld", "hardware_thread3.ld", "hardware_thread0.ld", "shared.ld", "threads.con", "readme.txt" ];
    child_files = [ "shared.gpj", "hardware_thread0.gpj", "hardware_thread1.gpj", "hardware_thread2.gpj", "hardware_thread3.gpj", "threads.con", "readme.txt" ];
    copy_demo(defs, base_names, child_files, None);
    set_in_project(defs, "-common \"{ -G --preprocess_linker_directive_full }\"");

def copy_mca_threads_demo_imp(defs):
    base_names_imp = [ "shared.gpj", "shared.c", "hardware_thread0.gpj", "hardware_thread1.gpj", "hardware_thread0.c", "hardware_thread1.c", "readme.txt", "core0_lib0.c", "core1_lib0.c", "libcore0_0.gpj", "libcore1_0.gpj", "libshared_0.gpj", "libshared_1.gpj", "shared_lib0.c", "shared_lib1.c", "libshared_2.gpj", "shared_lib2.c"];
    child_files_imp = [ "shared.gpj", "hardware_thread0.gpj", "hardware_thread1.gpj"];
    copy_demo_tree(defs, base_names_imp, child_files_imp,  "demo_imports", "", None);

    if (defs.has_key("__GHS_GPJ_SUPPORTS_BUILD_CONFIGURATIONS") and
        defs.has_key("__GHS_NPW_PROVIDES_BUILD_CONFIG")):
	rcLocs = get_all_rc_paths(defs)
	srcDir = os.path.join(defs["ABS_PRJ_SRC_DIR"], "demo_imports")
	files = [ "libshared_0.ghsexports", "libcore1_0.ghsexports" ]
	for p in rcLocs:
	    binDir = os.path.dirname(p)
	    if not os.path.exists(binDir):
	        os.makedirs(binDir)
	    for f in files:
	        copy_file(defs, os.path.join(srcDir, f), os.path.join(binDir, f))
    else: 
        copy_demo_tree(defs, [ "libshared_0.ghsexports", "libcore1_0.ghsexports" ], [],  "demo_imports", "..", None);    

    base_names = [ "hardware_thread2.gpj", "hardware_thread2.c", "hardware_thread3.gpj", "hardware_thread3.c", "hardware_thread1.ld", "hardware_thread2.ld", "hardware_thread3.ld", "hardware_thread0.ld", "shared.ld", "threads.con" ];
    child_files = [ "hardware_thread2.gpj", "hardware_thread3.gpj", "threads.con" ];
    copy_demo(defs, base_names, child_files, None);

    copy_demo_tree(defs, [ "readme.txt" ], [ "readme.txt" ], "demo_imports", "", None);
       
    set_in_project(defs, "-common \"{ -G --preprocess_linker_directive_full }\"");
    set_in_project(defs, "-shared_imports");
    set_in_project(defs, "-cross_core_imports");
    set_in_project(defs, "-exported_absolutes_only");

