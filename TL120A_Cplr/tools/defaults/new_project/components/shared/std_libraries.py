import ide;
import os;
import shutil;
from utils import *;


# Non-recursive copy of all files from one directory to another.
def copy_files_in_dir(defs, srcdir, dstdir):
    if not (os.path.isdir(dstdir)):
        os.makedirs(dstdir)
    modify_file(defs, dstdir)
    files = os.listdir(srcdir)

    for f in files:
        srcname = os.path.join(srcdir, f)
        dstname = os.path.join(dstdir, f)

	if (os.path.isdir(srcname)):
	    continue

        modify_file(defs, dstname)
	shutil.copy2(srcname, dstname)


###############################################################################
# Copy the Custom System Library to the target resources project.  If it's
# already present, do nothing.  Otherwise, copy is from the tools installation.
def copy_custom_libsys(defs):
    npw2, uid = getNPW2Connection(defs);

    # First, check to see if the libsys source has been copied in to the
    # target resources project.  
    npw2.CopyDefineLocal(uid, "LAST_RES_FILE", "LAST_RES_FILE");
    npw2.CopyDefineLocal(uid, "ABS_TOP_PROJ_DIR", "ABS_TOP_PROJ_DIR");

    if not (defs.has_key("LAST_RES_FILE")):
        # TODO: Create top-level resources project.
	print "WARNING: Could not find Target Resources project.  Unable to " \
	      "copy Custom System Library files."
        return;

    resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
    resources_full_dir = os.path.dirname(resources_full_path);

    libsys_full_dir = os.path.join(resources_full_dir, "libsys");
    libsys_full_path = os.path.join(libsys_full_dir, "libsys.gpj");

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

    if not (os.access(libsys_full_path, os.F_OK)):
        # No libsys.gpj, copy it in.
	if (defs.has_key("__TOOLS_DIR__")):
	    libsys_src_dir = os.path.join(defs["__TOOLS_DIR__"], "src", "libsys");
	else:
	    libsys_src_dir = os.path.join(defs["__MULTI_DIR__"], "src", "libsys");

	if not (os.access(libsys_src_dir, os.F_OK)):
	    if (defs.has_key("__TOOLS_DIR__")):
	        libsys_src_dir = os.path.join(defs["__TOOLS_DIR__"], "..", "src", "libsys");
	    else:
	        libsys_src_dir = os.path.join(defs["__MULTI_DIR__"], "..", "src", "libsys");

	copy_files_in_dir(defs, libsys_src_dir, libsys_full_dir);
	chmod_tree(libsys_full_dir, 0666);

	# Add to the resources project.
	res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                               defs["LAST_RES_FILE"]);
	libsys_cookie = add_file_to_project(defs, res_file_cookie, "Library",
	                                    libsys_full_path, 0);
	wbuild.SetComponentName(top_cookie, libsys_cookie, "libsys");

	# Prune Select One children of libsys.gpj.
	wbuild.CanonicalizeTree(top_cookie, libsys_cookie, 1, 1);

	# Set the output directory for the library binary.
	wbuild.SetOption(top_cookie, libsys_cookie, ":binDir=libsys");
	
        # If the target needs special options for libsys, add them now.
        lib_opts = wbuild.GetBoardInformationAsString(top_cookie,
        	                                      "lib_build_options");
	if (lib_opts != None):
            wbuild.SetOption(top_cookie, libsys_cookie, lib_opts);

	if (defs.has_key("CUST_LIBSYS_OPTS")):
            wbuild.SetOption(top_cookie, libsys_cookie, defs["CUST_LIBSYS_OPTS"]);
	    
    else:
        # Verify that the project is still in the target resources .gpj,
	# inserting it if it's not there.
	res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                               defs["LAST_RES_FILE"]);
	libsys_cookie = find_file_in_project_by_diskname(defs, res_file_cookie,
						         libsys_full_path);
	if (libsys_cookie == -1):
	    libsys_cookie = add_file_to_project(defs, res_file_cookie, "Library",
	                                        libsys_full_path, 0);
	    wbuild.SetComponentName(top_cookie, libsys_cookie, "libsys");

	

###############################################################################


###############################################################################
# Add the Custom System Library to a project as a reference to the library
# code included in the target resources project. 
def add_custom_libsys(defs):
    npw2, uid = getNPW2Connection(defs);

    # Add a reference to the libsys source in the resources directory.
    npw2.AddGuiNodes(uid, "Custom System Library");


    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

# OLD WAY (absolute paths)
#    libPath = "-L" + defs["ABS_TOP_PROJ_DIR"];
#
# NEW WAY (relative path to top-level project directory)
    libPath = "-L${%expand_path(./libsys)}";

    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          libPath)):
    	set_option_in_self_project(defs, libPath);

    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          "-lsys")):
    	set_option_in_self_project(defs, "-lsys");

###############################################################################


###############################################################################
# Removes the Custom System Library reference from a program.
def remove_custom_libsys(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-lsys");
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-L${%expand_path(./libsys)}");

###############################################################################


###############################################################################
# Copy the Custom Startup Library to the target resources project.  If it's
# already present, do nothing.  Otherwise, copy is from the tools installation.
def copy_custom_libstartup(defs):
    npw2, uid = getNPW2Connection(defs);

    # First, check to see if the libstartup source has been copied in to the
    # target resources project.  
    npw2.CopyDefineLocal(uid, "LAST_RES_FILE", "LAST_RES_FILE");
    npw2.CopyDefineLocal(uid, "ABS_TOP_PROJ_DIR", "ABS_TOP_PROJ_DIR");

    if not (defs.has_key("LAST_RES_FILE")):
        # TODO: Create top-level resources project.
	print "WARNING: Could not find Target Resources project.  Unable to " \
	      "copy Custom Startup Library files."
        return;

    resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
    resources_full_dir = os.path.dirname(resources_full_path);

    libstart_full_dir = os.path.join(resources_full_dir, "libstartup");
    libstart_full_path = os.path.join(libstart_full_dir, "libstartup.gpj");
    crt0_full_path = os.path.join(libstart_full_dir, "crt0.gpj");
    custstart_full_path = os.path.join(libstart_full_dir, "startup.gpj");

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

    if not (os.access(libstart_full_path, os.F_OK)):
        # No libstartup.gpj, copy it in.
	if (defs.has_key("__TOOLS_DIR__")):
	    libstart_src_dir = os.path.join(defs["__TOOLS_DIR__"], "src", "libstartup");
	else:
	    libstart_src_dir = os.path.join(defs["__MULTI_DIR__"], "src", "libstartup");

	if not (os.access(libstart_src_dir, os.F_OK)):
	    if (defs.has_key("__TOOLS_DIR__")):
	        libstart_src_dir = os.path.join(defs["__TOOLS_DIR__"], "..", "src", "libstartup");
	    else:
	        libstart_src_dir = os.path.join(defs["__MULTI_DIR__"], "..", "src", "libstartup");
	    
	copy_files_in_dir(defs, libstart_src_dir, libstart_full_dir);
	chmod_tree(libstart_full_dir, 0666);


    if not (os.access(custstart_full_path, os.F_OK)):
	# Add to the resources project.
	res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                               defs["LAST_RES_FILE"]);

	custstart_cookie = add_file_to_project(defs, res_file_cookie,
	                                       "Subproject",
					       custstart_full_path, 0);

	wbuild.SetComponentName(top_cookie, custstart_cookie, "libstartup");

	npw2, uid = getNPW2Connection(defs);
	npw2.AddGuiNodes(uid, "Custom Startup Library");
					       
	crt0_cookie = add_file_to_project(defs, custstart_cookie, "Select One",
	                                  crt0_full_path, 0);
	
	libstart_cookie = add_file_to_project(defs, custstart_cookie, "Library",
	                                      libstart_full_path, 0);

	# Prune Select One children of custstart.gpj
	wbuild.CanonicalizeTree(top_cookie, custstart_cookie, False, 1);
	
        # If the target needs special options for libstartup, add them now.
        lib_opts = wbuild.GetBoardInformationAsString(top_cookie,
        	                                      "lib_build_options");
        if (lib_opts != None):
            wbuild.SetOption(top_cookie, custstart_cookie, lib_opts);

	# Set the output directory for the library binary.
	wbuild.SetOption(top_cookie, custstart_cookie, ":binDir=libstartup");
	
	# Add include dir for libsys in tgt and in the MULTI dist.
	wbuild.SetOption(top_cookie, custstart_cookie, "-I../libsys");

	wbuild.SetOption(top_cookie, custstart_cookie, "{isdefined(__TOOLS_DIR__)} -I${__TOOLS_DIR__}/src/libsys");
        wbuild.SetOption(top_cookie, custstart_cookie, "{isundefined(__TOOLS_DIR__)} -I${__MULTI_DIR__}/src/libsys");

	if (defs.has_key("__TOOLS_DIR__")):
	    libsys_src_dir = os.path.join(defs["__TOOLS_DIR__"], "src", "libsys");
	else:
	    libsys_src_dir = os.path.join(defs["__MULTI_DIR__"], "src", "libsys");

	if not (os.access(libsys_src_dir, os.F_OK)):
            wbuild.SetOption(top_cookie, custstart_cookie, "{isdefined(__TOOLS_DIR__)} -I${__TOOLS_DIR__}/../src/libsys");
            wbuild.SetOption(top_cookie, custstart_cookie, "{isundefined(__TOOLS_DIR__)} -I${__MULTI_DIR__}/../src/libsys");

	if (defs.has_key("CUST_LIBSTARTUP_OPTS")):
            wbuild.SetOption(top_cookie, custstart_cookie, defs["CUST_LIBSTARTUP_OPTS"]);

    else:
        # Verify that the project is still in the target resources .gpj,
	# inserting it if it's not there.
	res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                               defs["LAST_RES_FILE"]);
	custstart_cookie = find_file_in_project_by_diskname(defs,
							    res_file_cookie,
						            custstart_full_path);
	if (custstart_cookie == -1):
	    custstart_cookie = add_file_to_project(defs, res_file_cookie,
	                                           "Subproject",
					           custstart_full_path, 0);

	    wbuild.SetComponentName(top_cookie, custstart_cookie, "libstartup");
					       

###############################################################################


###############################################################################
# Add the Custom Startup Library to a project as a reference to the library
# code included in the target resources project. 
def add_custom_libstartup(defs):
    npw2, uid = getNPW2Connection(defs);

    # Add a reference to the libstartup source in the resources directory.
    npw2.AddGuiNodes(uid, "Custom Startup Library");

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

# OLD WAY (absolute paths)
#    startFileDir = "-startfile_dir=" + defs["ABS_TOP_PROJ_DIR"];
#    libPath = "-L" + defs["ABS_TOP_PROJ_DIR"];
#
# NEW WAY (relative path to top-level project directory)
    startFileDir = "-startfile_dir=${%expand_path(.)}";
    libPath = "-L${%expand_path(./libstartup)}";

    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          startFileDir)):
    	set_option_in_self_project(defs, startFileDir);

    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          libPath)):
    	set_option_in_self_project(defs, libPath);

    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          "-lstartup")):
    	set_option_in_self_project(defs, "-lstartup");

###############################################################################


###############################################################################
# Removes the Custom Startup Library reference from a program.
def remove_custom_libstartup(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-startfile_dir=${%expand_path(.)}");
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-lstartup");
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-L${%expand_path(./libstartup)}");

###############################################################################




###############################################################################
# Copy the Custom Board Init Library to the target resources project.  If it's
# already present, do nothing.  Otherwise, copy is from the tools installation.
def copy_custom_libboardinit(defs):
    npw2, uid = getNPW2Connection(defs);

    # First, check to see if the libstartup source has been copied in to the
    # target resources project.  
    npw2.CopyDefineLocal(uid, "LAST_RES_FILE", "LAST_RES_FILE");
    npw2.CopyDefineLocal(uid, "ABS_TOP_PROJ_DIR", "ABS_TOP_PROJ_DIR");

    if not (defs.has_key("TARGET_INFO_DIR")):
        # No target-specific information available for this target, so bail.
	return;

    if not (defs.has_key("LAST_RES_FILE")):
        # TODO: Create top-level resources project.
	print "WARNING: Could not find Target Resources project.  Unable to " \
	      "copy Custom Board Initialization Library files."
        return;

    resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
    resources_full_dir = os.path.dirname(resources_full_path);

    libinit_full_dir = os.path.join(resources_full_dir, "libboardinit");
    libinit_full_path = os.path.join(libinit_full_dir, "libboardinit.gpj");

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

    if not (os.access(libinit_full_path, os.F_OK)):
        # No libboardinit.gpj, create it and copy in the necessary files.
	ret = wbuild.GetBoardInformationAsStringList(top_cookie, "board_libraries.libboardinit.files");

	file_list = ret["data"];
	if (file_list == None or len(file_list) == 0):
	    return;

	if not (os.access(libinit_full_dir, os.F_OK)):
	    os.mkdir(libinit_full_dir);
	
	for f in file_list:
	    src_path = os.path.join(defs["TARGET_INFO_DIR"], f);
	    modify_file(defs, os.path.join(libinit_full_dir, f))
	    shutil.copy(src_path, libinit_full_dir);
	    os.chmod(os.path.join(libinit_full_dir, f), 0666);
        
	# Add to the resources project.
	res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                               defs["LAST_RES_FILE"]);
	libinit_cookie = add_file_to_project(defs, res_file_cookie, "Library",
	       	                             libinit_full_path, 0);
	wbuild.SetComponentName(top_cookie, libinit_cookie, "libboardinit");

        # If the target needs special options for libboardinit, add them now.
        lib_opts = wbuild.GetBoardInformationAsString(top_cookie,
        	                                      "lib_build_options");
        if (lib_opts != None):
            wbuild.SetOption(top_cookie, libinit_cookie, lib_opts);

	# Set the output directory for the library binary.
        wbuild.SetOption(top_cookie, libinit_cookie, ":binDir=libboardinit");

	if (defs.has_key("CUST_LIBBOARDINIT_OPTS")):
            wbuild.SetOption(top_cookie, libinit_cookie, defs["CUST_LIBBOARDINIT_OPTS"]);
	
    else:
        # Verify that the project is still in the target resources .gpj,
	# inserting it if it's not there.
	res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                               defs["LAST_RES_FILE"]);
	libinit_cookie = find_file_in_project_by_diskname(defs, res_file_cookie,
						         libinit_full_path);
	if (libinit_cookie == -1):
	    libinit_cookie = add_file_to_project(defs, res_file_cookie, "Library",
	       	                                 libinit_full_path, 0);
	    wbuild.SetComponentName(top_cookie, libinit_cookie, "libboardinit");
	    
    # Libboardinit requires header files from the custom libsys, so ensure
    # that it's been copied in.  Note that the project itself doesn't actually
    # require that libsys be present / linked in.
    copy_custom_libsys(defs);

###############################################################################


###############################################################################
# Add the Board Initialization Library to a project as a reference to the
# library code included in the target resources project. If the libboardinit
# code is not present in the target resources project, it's copied there from
# the tools installation.
def add_libboardinit(defs):
    npw2, uid = getNPW2Connection(defs);

    # Add a reference to the libstartup source in the resources directory.
    npw2.AddGuiNodes(uid, "Board Initialization Library");

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

# OLD WAY (absolute paths)
#    libPath = "-L" + defs["ABS_TOP_PROJ_DIR"];
#
# NEW WAY (relative path to top-level project directory)
    libPath = "-L${%expand_path(./libboardinit)}";
    
    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          libPath)):
    	set_option_in_self_project(defs, libPath);

    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                                          "-lboardinit")):
    	set_option_in_self_project(defs, "-lboardinit");

###############################################################################


###############################################################################
# Removes the Board Initialization reference from a program.
def remove_libboardinit(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-lboardinit");
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-L${%expand_path(./libboardinit)}");

###############################################################################


###############################################################################
# Removes the Board Initialization reference from a program if the Board
# Initialization library is not supported by the current target.  This is
# run after the target is changed.
def remove_libboardinit_if_unsupported(defs):
    supported = False

    # Determine if the board initialization library is supported based on
    # whether there's a file list 
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    ret = wbuild.GetBoardInformationAsStringList(top_cookie, "board_libraries.libboardinit.files");
    file_list = ret["data"];
    if (file_list != None and len(file_list) > 0):
        supported = True

    # If the library isn't supported, remove it.    
    if (not supported):
        remove_libboardinit(defs)
###############################################################################


###############################################################################
# Ensure the library implementation is pulled in for the current library.
# Used for retargeting.
def update_library_impl(defs):
    npw2, uid = getNPW2Connection(defs);

    npw2.ResolveRequires(uid);

###############################################################################
