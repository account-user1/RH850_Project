import ide;
import os;
import shutil;
from utils import *;


###############################################################################
# Creates a new .gpj project file
# Required arguments (from defs)
#   ABS_TOP_PROJ_DIR - absolute path to the top-level project file
#   BASE_PROJ_NAME   - base name of the project output file
#   PROJ_DIR         - directory where the project output file will be placed
#   PROJ_TYPE        - the filetype for the project
#   TARGET	     - build target
# Optional arguments (from defs)
#   COMP_TYPE        - the component type for the project
#   RES_FILE         - name of the target resources file
def create_project_file(defs):
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_ProjectName"]);

    npw2.CopyDefineLocal(uid, "PROJ_DIR", "PROJ_DIR");
    npw2.CopyDefineLocal(uid, "REL_PROJ_DIR", "REL_PROJ_DIR");
    npw2.CopyDefineLocal(uid, "ABS_PROJ_DIR", "ABS_PROJ_DIR");

    # for gpjmodify util funcs
    defs["tf_name"] = defs["BASE_PROJ_NAME"];

    # create gpj
    filebasename = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]);
    filetype = "Subproject";
    if (defs.has_key("PROJ_TYPE")):
        filetype = defs["PROJ_TYPE"];

    # this will add the project to the end of the parent, but before the
    # target resources file (if present)
    child_cookie = add_gpj_to_self_project(defs, filetype, filebasename, False);

    # set component name
    if (defs.has_key("COMP_TYPE")):
        wbuild = getWBuildConnection(defs);
	top_cookie = int(defs["TOP_GPJ_COOKIE"]);
	wbuild.SetComponentName(top_cookie, child_cookie, defs["COMP_TYPE"]);

###############################################################################


###############################################################################
# Copies a file in to the project directory and adds it to the project
# Required arguments (from defs)
#   ABS_SRC_NAME     - name of the file to be copied
def copy_file_into_project(defs):

    base_file_name = os.path.basename(defs["ABS_SRC_NAME"]);

    topath = os.path.join(defs["ABS_PROJ_DIR"], base_file_name);

    copy_diskfile_into_project(defs,defs["ABS_SRC_NAME"],topath,base_file_name);

###############################################################################

###############################################################################
# Copies a file in to the project directory and adds it to the project
# Required arguments (from defs)
#   ABS_SRC_NAME     - name of the file to be copied
def copy_diskfile_into_project(defs,fromdiskname,todiskname,basename):  
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid, basename);

    copy_file(defs,fromdiskname, todiskname);

    add_to_project(defs, basename);

###############################################################################


###############################################################################
# Remove all references of a type of file.
###############################################################################
def remove_files_of_type(defs, typename):
    # loop through the project, removing references to any files of "typename"
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    proj_cookie = int(defs["MY_GPJ_COOKIE"]); 
    
    child_cookie = wbuild.GetCookieForFirstChild(top_cookie,
                                                 proj_cookie);
    while (child_cookie != -1):
	next_cookie = wbuild.GetCookieForNextChild(top_cookie,
		                                   proj_cookie,
						   child_cookie);
        itemInfo = wbuild.GetInfoForBuildItem(top_cookie, child_cookie);
	if (itemInfo["FileType"] == typename):
	    wbuild.RemoveFromBuildFile(top_cookie, proj_cookie, child_cookie);
	child_cookie = next_cookie;


def remove_all_files_of_type(defs):
    if not (defs.has_key("FILETYPE")):
        return;
    remove_files_of_type(defs, defs["FILETYPE"]);


###############################################################################
# Adds a reference to a linkmap, removes any others (unless adding to the
# target resources project).
def insert_resfile_by_name(defs,resfile_full_path, typename):

    doRemove = True

    if (defs.has_key("LAST_RES_FILE") and defs.has_key("ABS_TOP_PROJ_DIR")):
	wbuild = getWBuildConnection(defs);
	top_cookie = int(defs["TOP_GPJ_COOKIE"]);
        resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
        res_cookie = wbuild.GetCookieForBuildItem(top_cookie,top_cookie,resources_full_path);

        if (res_cookie != -1 and (res_cookie == int(defs["MY_GPJ_COOKIE"]))):
	    # Adding to the target resources project.  Don't remove the
	    # others of our type.
	    doRemove = False

    if (doRemove):
        remove_files_of_type(defs, typename);

    add_to_project(defs, resfile_full_path);

###############################################################################

###############################################################################
# Adds a reference to a linkmap.
# Required arguments (from defs)
#   LINKMAP     - name of the linkmap to be inserted, assumed to reside in
#                 the target resources directory.
def insert_linkmap(defs):
    npw2, uid = getNPW2Connection(defs);

    npw2.CopyDefineLocal(uid, "LAST_RES_FILE", "LAST_RES_FILE");
    npw2.CopyDefineLocal(uid, "ABS_TOP_PROJ_DIR", "ABS_TOP_PROJ_DIR");

    if not (defs.has_key("LAST_RES_FILE")):
        return;

    if not (defs.has_key("LINKMAP") and (defs["LINKMAP"] != None) and defs["LINKMAP"] != ""):
        return;

    typename = "Linker Directives";

    if (defs.has_key("LINKMAP_TYPE")):
        typename = defs["LINKMAP_TYPE"];

    # For a linkmap from the target resources project to be found, the
    # top-level project needs to have ":sourceDir=.", so ensure it's still set.
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    if (not wbuild.IsOptionSetOnBuildItem(top_cookie, top_cookie, ":sourceDir=.")):
    	set_option_in_top_project(defs, ":sourceDir=.");

    # Add the selected ld file to the project.
    #resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
    linkmap_full_path = os.path.join(os.path.dirname(defs["LAST_RES_FILE"]),
                                     defs["LINKMAP"]);

    insert_resfile_by_name(defs, linkmap_full_path, typename);

###############################################################################


###############################################################################
# Read all of the link maps from the target resources project and add them
# to the list of available linkmaps.
def populate_linkmap_list(defs):
    if not (defs.has_key("LAST_RES_FILE")):
        return;

    typename = "Linker Directives";

    if (defs.has_key("LINKMAP_TYPE")):
        typename = defs["LINKMAP_TYPE"];
	
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    res_file_cookie = wbuild.GetCookieForBuildItem(top_cookie, top_cookie,
	                                           defs["LAST_RES_FILE"]);

    child_cookie = wbuild.GetCookieForFirstChild(top_cookie, res_file_cookie);

    linkMapList = None;

    while (child_cookie != -1):
        itemInfo = wbuild.GetInfoForBuildItem(top_cookie, child_cookie);
	if (itemInfo["FileType"] == typename):
	    if (linkMapList == None):
	        linkMapList = itemInfo["Name"];
	    else:
	        linkMapList = linkMapList + "," + itemInfo["Name"];
	child_cookie = wbuild.GetCookieForNextChild(top_cookie, res_file_cookie,
						    child_cookie);


    # Also include linkmaps from the program itself.
    proj_cookie = int(defs["MY_GPJ_COOKIE"]); 

    child_cookie = wbuild.GetCookieForFirstChild(top_cookie, proj_cookie);

    selectedLinkMap = None;

    resdir = os.path.dirname(defs["LAST_RES_FILE"]);
    
    while (child_cookie != -1):
        itemInfo = wbuild.GetInfoForBuildItem(top_cookie, child_cookie);
	if (itemInfo["FileType"] == typename):
	    selectedLinkMap = itemInfo["Name"];

	    if (os.path.dirname(selectedLinkMap) == resdir):
	        selectedLinkMap = os.path.basename(selectedLinkMap);

	    if (selectedLinkMap not in linkMapList): 
   	        if (linkMapList == None):
	            linkMapList = selectedLinkMap;
	        else:
	            linkMapList = linkMapList + "," + selectedLinkMap;
		    
	child_cookie = wbuild.GetCookieForNextChild(top_cookie, proj_cookie,
						    child_cookie);


    npw2, uid = getNPW2Connection(defs);
    npw2.OverrideAttributeDefaults(uid,"linkMap",linkMapList);

    if (selectedLinkMap != None):
        npw2.OverrideAttribute(uid,"linkMap",selectedLinkMap);
    elif (linkMapList != None and defs.has_key("linkMap")):
        if (defs["linkMap"] not in linkMapList): 
	    npw2.OverrideAttribute(uid,"linkMap",(linkMapList.split(","))[0]);
    elif (linkMapList == None and defs.has_key("linkMap")):
	npw2.OverrideAttribute(uid,"linkMap","");

###############################################################################


###############################################################################
# Remove a project from its parent.
def proj_remove_std(defs):
    verbose_print(defs,  'proj_remove_std()');
    npw2, uid = getNPW2Connection(defs);

    remove_self_from_parent_project(defs);

    npw2.DeleteGuiNodes(uid);

###############################################################################


###############################################################################
# Creates a new .gpj project file, child to another project
# Required arguments (from defs)
#   ABS_TOP_PROJ_DIR - absolute path to the top-level project file
#   PROJ_DIR         - directory where the project output file will be placed (from parent)
# Optional arguments (from defs)
#   PROJ_TYPE        - the filetype for the project
#   COMP_TYPE        - the component type for the project
#   RES_FILE         - name of the target resources file
def create_child_project_file(defs):
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["filename"]);

    # for gpjmodify util funcs
    defs["tf_name"] = defs["filename"];

    # create gpj
    filebasename = os.path.join(defs["PROJ_DIR"],defs["filename"]);
    filetype = "Subproject";
    if (defs.has_key("PROJ_TYPE")):
        filetype = defs["PROJ_TYPE"];

    # this will add the project to the end of the parent, but before the
    # target resources file (if present)
    child_cookie = add_gpj_to_self_project(defs, filetype, filebasename, False);

    # set component name
    if (defs.has_key("COMP_TYPE")):
        wbuild = getWBuildConnection(defs);
	top_cookie = int(defs["TOP_GPJ_COOKIE"]);
	wbuild.SetComponentName(top_cookie, child_cookie, defs["COMP_TYPE"]);

###############################################################################

###############################################################################
# Paste an existing gpj into another project
# Required arguments (from defs)
#   PROJ_DIR         - directory where the project output file will be placed (from parent)
# Optional arguments (from defs)
#   PROJ_TYPE        - the filetype for the project
def paste_local_child_project_file(defs):
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["filename"]);

    # for gpjmodify util funcs
    defs["tf_name"] = defs["filename"];

    # create gpj
    filebasename = os.path.join(defs["PROJ_DIR"],defs["filename"]);
    filetype = "Subproject";
    if (defs.has_key("PROJ_TYPE")):
        filetype = defs["PROJ_TYPE"];

    # this will add the project to the end of the parent, but before the
    # target resources file (if present)
    child_cookie = add_to_real_parent(defs,filetype,filebasename);
    
###############################################################################
