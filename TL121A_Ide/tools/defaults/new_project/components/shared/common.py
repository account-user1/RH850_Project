import ide;
import os;
import shutil;
import re;
from utils import *;
from source import *;
from projects import *;

def top_tf_rtosdir_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);
    #unsetstr = "\"-os_dir " + defs["LAST_RTOS_DIR"] + "\"";
    unsetstr = "-os_dir " + defs["LAST_RTOS_DIR"];
    unset_in_top_project(defs,unsetstr);
    #setstr = "\"-os_dir " + defs["RTOS_DIR"] + "\"";
    setstr = "-os_dir " + defs["RTOS_DIR"];
    set_in_top_project(defs,setstr);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_target");

def top_tf_bsp_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);
    #unsetstr = "\"-bsp " + defs["LAST_BSP_NAME"] + "\"";
    unsetstr = "-bsp " + defs["LAST_BSP_NAME"];
    unset_in_top_project(defs,unsetstr);
    #setstr = "\"-bsp " + defs["BSP_NAME"] + "\"";
    setstr = "-bsp " + defs["BSP_NAME"];
    set_in_top_project(defs,setstr);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_target");

def top_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_target");

def newproj_sanity_check(defs):
    # if the operation is paste_link, we don't want to return an error, because the
    # directory is obviously already there and that's fine
    if (defs["NPW2_OP"] == "paste_link"):
	return;
    newdir = defs["tf_ProjectDir"];
    # if the dir exists and is non-empty, disallow
    if os.access(newdir,os.F_OK):
	entries = os.listdir(newdir);
	if len(entries) == 0:
	    return; # all good
	for entry in entries:
	    if (entry == "CVS" or entry == ".svn"):
		continue;
	    npw2, uid = getNPW2Connection(defs);
	    tfdirstr = defs["tf_ProjectDir"];
	    if defs.has_key('VALIDATION_MODE'):
		# can't use full path for vals
		tfdirstr = os.path.basename(tfdirstr);
	    failstr = "The directory " + tfdirstr + " is not empty.\n" + \
	              "A new project can only be created in an empty or new directory.";
	    npw2.ReadInString(uid,failstr);
	    return;
#end newproj_sanity_check


def newproj_find_next_dir(defs):
    prjroot = defs["BASE_PROJ_DIR"];
    dirbase = "src";
    if (defs.has_key("__CURR_VALUE__")):
        path, dirbase = os.path.split(defs["__CURR_VALUE__"]);

    if (os.access(os.path.join(prjroot, dirbase), os.F_OK)):
        # Directory already exists, look for the highest numbered directory
	# of the form dirbaseN.
	lastnum = 1;
	dirs = os.listdir(prjroot);
	for d in dirs:
	    ismatch = re.match(dirbase + "(?P<dirnum>\d+)$", d);
	    if (ismatch != None):
		dirnum = int(ismatch.group('dirnum'));
		if (dirnum > lastnum):
		    lastnum = dirnum;
	
	npw2, uid = getNPW2Connection(defs);
	if (defs.has_key("tf_ProjectName")):	
	    defName = defs["tf_ProjectName"];
	    verbose_print(defs,defName);
	    newName = defName + str(lastnum + 1);
	    verbose_print(defs,newName);
	    npw2.OverrideAttribute(uid,"tf_ProjectName", newName);
	npw2.ReadInString(uid, os.path.join(prjroot, dirbase + str(lastnum + 1)));
#end newproj_find_next_dir

def target_resources_paste_local_std(defs):
    verbose_print(defs,  'target_resources_paste_local_std')
    
#end target_resources_paste_local_std

def is_default_resource(defs):
    verbose_print(defs,  'is_default_resource')
    verbose_print(defs,  defs["tf_diskname"]);

    resdir = "tgt";
    if (defs.has_key("LAST_RES_FILE")):
        resdir = os.path.dirname(defs["LAST_RES_FILE"]);
    resfile = os.path.join(defs["TOP_PROJ_DIR"],resdir,defs["filename"]);
    verbose_print(defs,  resfile)
    return (resfile == defs["tf_diskname"]);
#end is_default_resource

def resource_file_paste_parent_local_std(defs):
    verbose_print(defs,  'resource_file_paste_parent_local_std()');
    if (not is_default_resource(defs)):
	source_paste_parent_local_std(defs);
#end resource_file_paste_parent_local_std

def resource_file_paste_local_std(defs):
    verbose_print(defs,  'resource_file_paste_local_std')

    fromname = defs["COPY_DISKNAME"];
    tobasename = defs["BASE_PROJ_NAME"]+"_"+defs["COPY_FILENAME"]
    toname = os.path.join(defs["PROJ_DIR"],tobasename);

    if (defs.has_key("LAST_RES_FILE") and defs.has_key("ABS_TOP_PROJ_DIR")):
	wbuild = getWBuildConnection(defs);
	top_cookie = int(defs["TOP_GPJ_COOKIE"]);
        resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
        res_cookie = wbuild.GetCookieForBuildItem(top_cookie,top_cookie,resources_full_path);

        if (res_cookie != -1 and (res_cookie == int(defs["MY_GPJ_COOKIE"]))):
            toname = os.path.join(os.path.dirname(defs["LAST_RES_FILE"]),
	                          defs["COPY_FILENAME"]);

    copy_file(defs,fromname,toname);

    typename = defs["COPY_TYPENAME"]
    insert_resfile_by_name(defs,toname,typename);
    
    source_std_lastdefines(defs);
#end resource_file_paste_local_std    

def resource_file_paste_link_std(defs):
    verbose_print(defs,  'resource_file_paste_link_std')

    fromname = defs["COPY_DISKNAME"];
   
    typename = defs["COPY_TYPENAME"]
    insert_resfile_by_name(defs,fromname,typename);
    
    source_std_lastdefines(defs);
#end resource_file_paste_local_std

def resource_file_edit_std(defs):
    verbose_print(defs,  'resource_file_edit_std')
    oldbasename = defs["LAST_FILENAME"];
    newbasename = defs["filename"];
    oldfname = os.path.join(defs["PROJ_DIR"],oldbasename);
    newfname = os.path.join(defs["PROJ_DIR"],newbasename);
    verbose_print(defs,  oldfname)
    verbose_print(defs,  newfname)

    rename_file(defs,oldfname,newfname,oldbasename,newbasename);
#end resource_file_edit_std

def resource_parent_projname_edit_std(defs):
    verbose_print(defs,  'resource_parent_projname_edit_std')
    npw2, uid = getNPW2Connection(defs);
   
    oldbasename = defs["KIDS_LAST_BASE_PROJ_NAME"];
    restr = oldbasename+"_(?P<suffix>.*)$"
    verbose_print(defs,  restr);
    verbose_print(defs,  defs["filename"]);
    result= re.match(restr,defs["filename"]);
    if (result != None):
	suffix = result.group('suffix');
	newtfname = defs["BASE_PROJ_NAME"] + "_" + suffix;
	verbose_print(defs,  newtfname);
	npw2.OverrideAttribute(uid,"filename",newtfname);
	pastemode = npw2.InPasteMode(uid);
	if (pastemode):	
	    npw2.AddGuiNodes(uid,newtfname);
	else:
	    npw2.RefreshGuiNodes(uid,newtfname);
	defs["filename"] = newtfname;
	resource_file_edit_std(defs);
#end resource_parent_projname_edit_std 

def resource_delete_std(defs):
    verbose_print(defs,  'resource_delete_std')
    if (is_default_resource(defs)):
	source_remove_std(defs); # don't actually delete the file
    else:
	source_delete_std(defs);

def create_workspace_file(defs):
    # We have checked validation mode in caller .npw file, the following
    # checking is not really necessary.
    if defs.has_key('VALIDATION_MODE'):
	verbose_print(defs, ("In validation mode."));
	return;

    wsFileName = "default.gmb";
    absTopProjDir = defs['ABS_TOP_PROJ_DIR'];
    wsFilePath = absTopProjDir+os.sep+wsFileName;
    destFp = open(wsFilePath, "w");
    if not destFp:
	print('Cannot create workspace file in "%s"' % (absTopProjDir));
	return;

    destFp.write("version = 4\n\n");

    projBaseDir = os.path.basename(absTopProjDir);
    if projBaseDir:
	res = re.search("(\d+)", projBaseDir);
	if False and res:
	    wsId = int(res.group(1), 0);
	    wsBwVarName = "bw"+str(wsId);
	else:
	    # The case should not happen.
	    wsBwVarName = "bw";
    else:
	# The case should not happen.
	wsBwVarName = "bw";
	projBaseDir = "MyProject";

    destFp.write('"'+projBaseDir+'" {\n');
    destFp.write('    working_dir = "$_ws_file_dir";\n');
    destFp.write('    100 {\n');
    destFp.write('        task = "Startup";\n');
    destFp.write('        action = "Project Manager";\n');
    destFp.write('        argument += {"default.gpj"};\n');
    destFp.write('        enabled = false;\n');
    destFp.write('    }\n');
    destFp.write('    200 {\n');
    destFp.write('        task = "Startup";\n');
    destFp.write('        action = "Python Statement";\n');
    destFp.write('        argument += {"if not projmgr: projmgr = GHS_ProjectManager(\\"$_ws_working_dir\\");"};\n');
    destFp.write('    }\n');
    destFp.write('    300 {\n');
    destFp.write('        task = "Startup";\n');
    destFp.write('        action = "Python Statement";\n');
    destFp.write('        argument += {"'+wsBwVarName+' = projmgr.Open(\\"default.gpj\\");"};\n');
    destFp.write('    }\n');
    destFp.write('    400 {\n');
    destFp.write('        task = "Cleanup";\n');
    destFp.write('        action = "Python Statement";\n');
    destFp.write('        argument += {"'+wsBwVarName+'.CloseWin(True);"};\n');
    destFp.write('    }\n');
    destFp.write('}\n');
    destFp.close();

    # Add the file to the top of the project
    add_to_self_project(defs, wsFileName);
    
def project_copy_local_std(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.OverrideAttribute(uid,"tf_ProjectDir","$BASE_PROJ_DIR/src");

    
def project_paste_parent_local_std(defs):
    verbose_print(defs, defs["REL_TO_PARENT_PROJ_DIR"])
    if (os.path.isabs(defs["REL_TO_PARENT_PROJ_DIR"])):
	# bail- this isn't going to work
	print "Only projects that are located in the same directory or subdirectory(ies) of the parent project can be pasted."
	prettyprintstr = os.path.join(defs["REL_TO_PARENT_PROJ_DIR"],defs["tf_ProjectName"]+".gpj");
	print "Cancelling paste of " + prettyprintstr + ".";
	npw2, uid = getNPW2Connection(defs);
	npw2.CancelSelfActions(uid,1);
	return;
	
    # ABS_PROJ_DIR comes from parent, because we undefed ours
    newdir = os.path.join(defs["ABS_PROJ_DIR"],defs["REL_TO_PARENT_PROJ_DIR"]);
    verbose_print(defs,newdir)
    if (not os.access(newdir,os.F_OK)):
	os.makedirs(newdir);

    fromname = defs["COPY_DISKNAME"];
    toname = os.path.join(newdir,defs["tf_ProjectName"]+".gpj");
    copy_file(defs,fromname,toname);
    
    npw2, uid = getNPW2Connection(defs);
    npw2.DefineLocalVariable(uid,"PROJ_DIR",newdir);
    npw2.DefineLocalVariable(uid,"ABS_PROJ_DIR",newdir);
    npw2.DefineLocalVariable(uid,"PASTE_DISKNAME",toname);
    update_cookies(defs,toname);
    
def project_paste_local_std(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["BASE_PROJ_NAME"]);

    os.makedirs(defs["PROJ_DIR"]);

    fromname = defs["COPY_DISKNAME"];
    toname = os.path.join(defs["PROJ_DIR"],defs["tf_ProjectName"]+".gpj");
    copy_file(defs,fromname,toname);

    #add to default.gpj
    new_cookie = add_to_project(defs,toname);
    if (defs.has_key("COPY_ITEM_COOKIE")):
        wbuild = getWBuildConnection(defs);
        top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    	wbuild.CopyOptionsFromBuildItem(top_cookie, int(defs["COPY_ITEM_COOKIE"]), new_cookie, 1, 0);
	   
#end project_paste_local_std

def make_project_dir(defs):
    verbose_print(defs,defs["ABS_PROJ_DIR"]);
    if (not os.access(defs["ABS_PROJ_DIR"],os.F_OK)):
	if (not modify_file(defs,defs["ABS_PROJ_DIR"])):
	    return;
	os.makedirs(defs["ABS_PROJ_DIR"]);


def childproject_add_std(defs):
    verbose_print(defs,  'childproject_add_std()');
    create_child_project_file(defs);
    
#end childproject_remove_std

def childproject_remove_std(defs):
    verbose_print(defs,  'childproject_remove_std()');
    proj_remove_std(defs);
#end childproject_remove_std

def childproject_delete_std(defs):
    verbose_print(defs,  'childproject_delete_std()');
    verbose_print(defs,  defs["tf_diskname"]);
    delete_file_from_disk(defs,defs["tf_diskname"]);
    childproject_remove_std(defs);
#end childproject_delete_std

def childproject_paste_local_std(defs):
    verbose_print(defs,  'childproject_paste_local_std()');
    childproject_paste_parent_local_std(defs);
    paste_local_child_project_file(defs);
#end childproject_paste_local_std

def childproject_paste_parent_local_std(defs):
    verbose_print(defs,  'childproject_paste_local_std()');
    fromstr = defs["COPY_DISKNAME"];
    tostr = os.path.join(defs["PROJ_DIR"],defs["COPY_FILENAME"]+".gpj");
    copy_file(defs,fromstr,tostr);
#end childproject_paste_local_std


def common_projname_sanity_check(defs):
    shared_filename_sanity_check(defs, defs["tf_ProjectName"])
