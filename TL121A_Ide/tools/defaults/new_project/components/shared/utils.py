import ide;
import os;
import tempfile;
import shutil;
import string;
import re;
import sys;
#import ghs_util;


def do_system(sysstr):
    #os.system(sysstr);
    #ghs_system(sysstr,True);
    pipe = os.popen(sysstr);
    data = pipe.read();
    err = pipe.close();
    if data:
	print data;
    if err:
	print "System call failed with error " + str(err) + ": "  + sysstr;

# guts of gpjmodify-service

#adds
def add_file_to_project(defs,proj_cookie,filetype,filename,front,expand=True):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    if (proj_cookie == top_cookie and front == 0 and defs.has_key("LAST_RES_FILE")):
	sib_cookie = wbuild.GetCookieForBuildItem(top_cookie,top_cookie,defs["LAST_RES_FILE"]);
	if (sib_cookie != -1):
	    new_cookie = wbuild.AddFileBySibling(top_cookie,top_cookie,sib_cookie,filename,filetype,1,expand);
	    return new_cookie;
   
    new_cookie = wbuild.AddFileToParent(top_cookie,proj_cookie,filename,filetype,front,expand);
    return new_cookie;
    
def add_gpj_to_project(defs,proj_cookie,filetype,filebasename,front,expand=True):
    return add_file_to_project(defs,proj_cookie,filetype,filebasename+".gpj",front,expand);

def add_gpj_to_parent_project(defs,filetype,filebasename):
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]); 
    return add_gpj_to_project(defs,proj_cookie,filetype,filebasename,0);
    
def add_to_parent_project(defs,filename):
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]); 
    return add_file_to_project(defs,proj_cookie,None,filename,0);
   
def add_gpj_to_self_project(defs,filetype,filebasename,front):
    proj_cookie = int(defs["MY_GPJ_COOKIE"]); 
    return add_file_to_project(defs,proj_cookie,filetype,filebasename+".gpj",front);

def add_to_self_project(defs,filename,front=False):
    proj_cookie = int(defs["MY_GPJ_COOKIE"]);
    return add_file_to_project(defs,proj_cookie,None,filename,front);


def add_customization_file(defs,filename):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.AddCustomization(top_cookie, {"_full_pathname": filename});


def add_default_build_options(defs, optionstr):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.AddDefaultBuildOptions(top_cookie, optionstr);



#removes
def remove_item_from_project(defs,proj_cookie,remove_cookie):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.RemoveFromBuildFile(top_cookie,proj_cookie,remove_cookie);

def remove_self_from_parent_project(defs):
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    remove_cookie = int(defs["MY_ITEM_COOKIE"]);
    remove_item_from_project(defs,proj_cookie,remove_cookie);

def remove_item_from_self_project(defs):
    proj_cookie = int(defs["MY_GPJ_COOKIE"]);
    remove_cookie = int(defs["MY_ITEM_COOKIE"]);
    remove_item_from_project(defs,proj_cookie,remove_cookie);

def remove_filename_from_project(defs,proj_cookie,remove_name):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.RemoveFromBuildFileByName(top_cookie,proj_cookie,remove_name);

def remove_filename_from_parent_project(defs,remove_name):
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    remove_filename_from_project(defs,proj_cookie,remove_name);
  
def remove_filename_from_self_project(defs,remove_name):
    proj_cookie = int(defs["MY_GPJ_COOKIE"]);
    remove_filename_from_project(defs,proj_cookie,remove_name);

#replaces
def replace_item_in_project(defs,proj_cookie,oldname,newname,filetype):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    #todo- filetype
    if (filetype == None):
	wbuild.ReplaceInBuildItem(top_cookie,proj_cookie,oldname,newname);
    else:
	print 'TODO- ReplaceInBuildItem with filetype';

def replace_in_parent_project(defs,oldname,newname,filetype):
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    child_cookie = int(defs["MY_ITEM_COOKIE"]);
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    #todo- filetype
    if (filetype == None):
	wbuild.RenameBuildItemInParent(top_cookie,proj_cookie,child_cookie,newname);
    else:
	print 'TODO- ReplaceInBuildItem with filetype';

def replace_in_self_project(defs,oldname,newname,filetype):
    proj_cookie = int(defs["MY_GPJ_COOKIE"]);
    replace_item_in_project(defs,proj_cookie,oldname,newname,filetype);

# set/unset
def modify_option_in_project(defs,proj_cookie,setstr,isset):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    if (isset):
	wbuild.SetOption(top_cookie,proj_cookie,setstr);
    else:
	wbuild.UnsetOption(top_cookie,proj_cookie,setstr);

def set_option_in_parent_project(defs,setstr = None):	
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    if (setstr == None):
        setstr = defs["OPTION_STRING"];
    modify_option_in_project(defs,proj_cookie,setstr,True);

def unset_option_in_parent_project(defs,setstr = None):	
    proj_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    if (setstr == None):
        setstr = defs["OPTION_STRING"];
    modify_option_in_project(defs,proj_cookie,setstr,False);

def set_option_in_self_project(defs,setstr = None):
    proj_cookie = int(defs["MY_GPJ_COOKIE"]);
    if (setstr == None):
        setstr = defs["OPTION_STRING"];
    modify_option_in_project(defs,proj_cookie,setstr,True);

#def set_option_in_self_project_by_filename(defs,filename,setstr = None):
#    wbuild = getWBuildConnection(defs);
#    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
#    parent_cookie = int(defs["MY_GPJ_COOKIE"]);
#    proj_cookie = wbuild.GetCookieForBuildItem(top_cookie,parent_cookie,filename);
#    if (setstr == None):
#        setstr = defs["OPTION_STRING"];
#    modify_option_in_project(defs,proj_cookie,setstr,True);

def unset_option_in_self_project(defs,setstr = None):	
    proj_cookie = int(defs["MY_GPJ_COOKIE"]);
    if (setstr == None):
        setstr = defs["OPTION_STRING"];
    modify_option_in_project(defs,proj_cookie,setstr,False);

def set_option_in_top_project(defs,setstr = None):
    proj_cookie = int(defs["TOP_GPJ_COOKIE"]);
    if (setstr == None):
        setstr = defs["OPTION_STRING"];
    modify_option_in_project(defs,proj_cookie,setstr,True);

def unset_option_in_top_project(defs,setstr = None):	
    proj_cookie = int(defs["TOP_GPJ_COOKIE"]);
    if (setstr == None):
        setstr = defs["OPTION_STRING"];
    modify_option_in_project(defs,proj_cookie,setstr,False);




def set_component_name(defs,cname):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    this_cookie = int(defs["MY_GPJ_COOKIE"]);
    wbuild.SetComponentName(top_cookie,this_cookie,cname);

def set_parent_component_name(defs,cname):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    this_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    wbuild.SetComponentName(top_cookie,this_cookie,cname);
   
# synonyms ( all the users had different calls for historical reasons)
def add_gpj_to_base_project(defs,filetype,filebasename):
    new_cookie = add_gpj_to_parent_project(defs,filetype,filebasename);
    npw2, uid = getNPW2Connection(defs);
    new_cookie_defines(defs, npw2, uid, new_cookie);
    
def add_to_base_project(defs,filename):
    add_to_parent_project(defs,filename);

def remove_from_base_project(defs,filebasename):
    remove_self_from_parent_project(defs);

def replace_in_base_project(defs,filetype,oldname,newname):
    replace_in_parent_project(defs,oldname,newname,filetype);

def set_in_base_project(defs,setstr):
    set_option_in_parent_project(defs,setstr);
   
def unset_in_base_project(defs,setstr):
    unset_option_in_parent_project(defs,setstr);

def new_cookie_defines(defs, npw2, uid, new_cookie):
    npw2.DefineLocalVariable(uid,"MY_GPJ_COOKIE",str(new_cookie));
    defs["MY_GPJ_COOKIE"] = str(new_cookie);
    npw2.DefineLocalVariable(uid,"MY_ITEM_COOKIE",str(new_cookie));
    defs["MY_ITEM_COOKIE"] = str(new_cookie);
    
#def create_gpj_file_add_into_at_spot(defs,filetype,filebasename,front):
#    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
#    p_cookie = int(defs["MY_GPJ_COOKIE"]); #parent's cookie, I don't have one yet
#    if (top_cookie == p_cookie):
#	create_gpj_file_add_to_top_level(defs,filetype,filebasename);
#    else:
#	new_cookie = add_gpj_to_self_project(defs,filetype,filebasename,front);
#	npw2, uid = getNPW2Connection(defs);
#	new_cookie_defines(defs,npw2,uid,new_cookie);
#	npw2.DefineLocalVariable(uid,"PARENT_GPJ_COOKIE",str(p_cookie));
#	defs["PARENT_GPJ_COOKIE"] = str(p_cookie);
def create_gpj_file_add_into_at_spot(defs,filetype,filebasename,front):
    p_cookie = int(defs["MY_GPJ_COOKIE"]); #parent's cookie, I don't have one yet    
    new_cookie = add_gpj_to_self_project(defs,filetype,filebasename,front);
    npw2, uid = getNPW2Connection(defs);
    new_cookie_defines(defs,npw2,uid,new_cookie);
    npw2.DefineLocalVariable(uid,"PARENT_GPJ_COOKIE",str(p_cookie));
    defs["PARENT_GPJ_COOKIE"] = str(p_cookie);

def create_gpj_file_add_into_front(defs,filetype,filebasename):
    create_gpj_file_add_into_at_spot(defs,filetype,filebasename,1);

def create_gpj_file_add_into(defs,filetype,filebasename):
    create_gpj_file_add_into_at_spot(defs,filetype,filebasename,0);
    
#def create_gpj_file_add_to_top_level(defs,filetype,filebasename):
#    wbuild = getWBuildConnection(defs);
#    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
#    sib_cookie = wbuild.GetCookieForBuildItem(top_cookie,top_cookie,"target_resources.gpj");
#    if (sib_cookie != -1):
#	new_cookie = wbuild.AddFileBySibling(top_cookie,top_cookie,sib_cookie,filebasename+".gpj",filetype,1);
#    else:
#	new_cookie = add_gpj_to_self_project(defs,filetype,filebasename,front);
#    npw2, uid = getNPW2Connection(defs);	
#    new_cookie_defines(defs,npw2,uid,new_cookie);
#    npw2.DefineLocalVariable(uid,"PARENT_GPJ_COOKIE",str(top_cookie));
#    defs["PARENT_GPJ_COOKIE"] = str(top_cookie);
    
def add_to_project(defs,filename):
    new_cookie = add_to_self_project(defs,filename);
    return new_cookie;

def remove_from_project(defs,filename):
    remove_filename_from_self_project(defs,filename);
    
def set_in_project(defs,setstr):
    set_option_in_self_project(defs,setstr);

def unset_in_project(defs,setstr):
    unset_option_in_self_project(defs,setstr);

def modify_in_project(defs,setstr,set):
    if (set):
	set_in_project(defs,setstr);
    else:
	unset_in_project(defs,setstr);
	
def replace_in_project(defs,oldname,newname):
    replace_in_self_project(defs,oldname,newname,None);
    
def add_to_real_parent(defs,filetype,filebasename):
    return add_to_real_parent_back(defs,filetype,filebasename);

def add_to_real_parent_back(defs,filetype,filebasename):
    return add_gpj_to_parent_project(defs,filetype,filebasename);

def add_to_real_parent_front(defs,filetype,filebasename,expand=True):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    p_cookie = int(defs["PARENT_GPJ_COOKIE"]); 
    new_cookie = wbuild.AddFileToParent(top_cookie,p_cookie,filebasename+".gpj",filetype,1,expand);
    return new_cookie;

def add_to_real_parent_before(defs,filetype,filebasename,siblingname,expand=True):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    p_cookie = int(defs["PARENT_GPJ_COOKIE"]);
    sib_cookie = wbuild.GetCookieForItem(top_cookie,p_cookie,siblingname);
    new_cookie = wbuild.AddFileBySibling(top_cookie,p_cookie,sib_cookie,filebasename+".gpj",filetype,1,expand);
    return new_cookie;

def add_to_project_before(defs,filetype,filebasename,siblingname,expand=True):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    p_cookie = int(defs["MY_GPJ_COOKIE"]);
    sib_cookie = wbuild.GetCookieForBuildItem(top_cookie,p_cookie,siblingname);
    new_cookie = wbuild.AddFileBySibling(top_cookie,p_cookie,sib_cookie,filebasename+".gpj",filetype,1,expand);
    return new_cookie;

def add_to_project_after(defs,filetype,filebasename,siblingname,expand=True):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    p_cookie = int(defs["MY_GPJ_COOKIE"]);
    sib_cookie = wbuild.GetCookieForBuildItem(top_cookie,p_cookie,siblingname);
    new_cookie = wbuild.AddFileBySibling(top_cookie,p_cookie,sib_cookie,filebasename+".gpj",filetype,0,expand);
    return new_cookie;

def add_file_to_project_after(defs,filename,siblingname,expand=True):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    p_cookie = int(defs["MY_GPJ_COOKIE"]);
    sib_cookie = wbuild.GetCookieForBuildItem(top_cookie,p_cookie,siblingname);
    new_cookie = wbuild.AddFileBySibling(top_cookie,p_cookie,sib_cookie,filename,None,0,expand);
    return new_cookie;


def replace_in_real_parent(defs,filetype,oldname,newname):
    replace_in_parent_project(defs,oldname,newname,filetype);

def remove_from_real_parent(defs,filebasename):
    remove_self_from_parent_project(defs);


def set_in_top_project(defs,setstr):
    set_option_in_self_project(defs,setstr);

def unset_in_top_project(defs,setstr):
    unset_option_in_self_project(defs,setstr);

def update_cookies(defs,filename):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    parent_cookie = int(defs["MY_GPJ_COOKIE"]);
    new_cookie = wbuild.GetCookieForBuildItem(top_cookie,parent_cookie,filename);
    npw2, uid = getNPW2Connection(defs);
    new_cookie_defines(defs,npw2,uid,new_cookie);
    npw2.DefineLocalVariable(uid,"PARENT_GPJ_COOKIE",str(parent_cookie));
    defs["PARENT_GPJ_COOKIE"] = str(parent_cookie);
    
def writestr(mntf,newstr):
    nnewstr =  newstr +  "\n";
    mntf.write(nnewstr);

def getNPW2Connection(defs):
    workingdir = "";
    pluginid = int(defs["NPW2_PLUGIN_ID"]);
    npw2 = ide.open("NPW2",workingdir,pluginid);
    uid = int(defs["DRIVER_ID"]);
    return npw2, uid;

def fix_perms(filename):
    um = os.umask(0);
    os.umask(um);
    os.chmod(filename,(0666&~um));
  
def getWBuildConnection(defs):
    workingdir = "";
    pluginid = int(defs["NPW2_PLUGIN_ID"]);
    wbuild = ide.open("WBuildService",workingdir,pluginid);
    return wbuild;

def fixUpDiskname(defs,npw2,uid):
    # fix up diskname
    dirname, basename = os.path.split(defs["tf_diskname"]);
    newdiskname = os.path.join(dirname,defs["tf_name"]);
    npw2.OverrideAttribute(uid,"tf_diskname",newdiskname);


def verbose_print(defs, msg):
    if defs.has_key('VERBOSE_MODE'):
	print msg;

def chmod_tree(path, perms):
    for root, dirs, files in os.walk(path):
        for f in files:
            os.chmod(os.path.join(root, f), perms);
    

###############################################################################
# Determines the filename for the .rc file including translating to the
# correct basename to match the program output name.
def get_rc_path(defs):
    wbuild = getWBuildConnection(defs);
    prog_ext = wbuild.GetBoardInformationAsString(int(defs["TOP_GPJ_COOKIE"]),
        	                                  "program_extension");

    if (prog_ext != None):
	rc_file = defs["BASE_PROJ_NAME"] + "." + prog_ext + ".rc";
    else:
	rc_file = defs["BASE_PROJ_NAME"] + ".rc";
    return os.path.join(defs["ABS_TOP_PROJ_DIR"], rc_file);

###############################################################################


###############################################################################
# Copies files from the tools repository to the newly created project,
# inserting the specified ones in to the project's .gpj file.
#   files_to_copy          - Base names of files to copy.
#   copied_files_to_insert - Base names or full paths of files to add to the
#                            project.  Inserted in the order specified.
#   rc_file                - Name of the input rc file (optional).
def copy_demo(defs, files_to_copy, copied_files_to_insert, rc_file):

    if not (defs.has_key("ABS_PRJ_SRC_DIR")):
        print "Error: No source directory specified for copying demo files. (ABS_PRJ_SRC_DIR)"
        # Error: don't know what directory to copy from.
        return;

    # Copy the files over
    for base in files_to_copy:
        srcpath = os.path.join(defs["ABS_PRJ_SRC_DIR"], base);
        dstpath = os.path.join(defs["ABS_PROJ_DIR"], base);
	copy_file(defs,srcpath, dstpath);
	
    if (rc_file != None):
        copy_file(defs,os.path.join(defs["ABS_PRJ_SRC_DIR"], rc_file),
                        get_rc_path(defs));

    # Add the files to the catalog project in the desired order.
    for child in copied_files_to_insert:
	add_to_project(defs, child);

###############################################################################

def copy_demo_tree(defs, files_to_copy, copied_files_to_insert, src_directory,
                   dest_directory, rc_file):

    if not (defs.has_key("ABS_PRJ_SRC_DIR")):
        # Error: don't know what directory to copy from.
	return;

    src_dir  = os.path.join(defs["ABS_PRJ_SRC_DIR"], src_directory);
    dest_dir = os.path.join(defs["ABS_PROJ_DIR"], dest_directory);
 
    if not (os.path.exists(dest_dir)):
	os.mkdir(dest_dir);


    for base in files_to_copy:
        srcpath = os.path.join(src_dir, base);
        dstpath = os.path.join(dest_dir, base);

	copy_file(defs,srcpath, dstpath);

    if (rc_file != None):
        copy_file(defs,os.path.join(defs["ABS_PRJ_SRC_DIR"], rc_file),
                        get_rc_path(defs));

    # Add the files to the catalog project in the desired order.
    for child in copied_files_to_insert:
	add_to_project(defs, child);


def get_empty_file_name(absfilename):
    if (not os.access(absfilename,os.F_OK)):
	return absfilename;

    dirpath, basename = os.path.split(absfilename);

    # strip off the extension
    oldnamesplit = string.split(basename,".");
    last = len(oldnamesplit) -1;
    suffix = oldnamesplit[last];
    ndx = 0;
    for word in oldnamesplit:
	if (ndx == 0):
	    newbase = word;
	elif (ndx != last):
	    newbase = newbase + word;
	ndx += 1;

    #print newbase;
    newabsbase = os.path.join(dirpath,newbase);
    #print newabsbase;
  
    lastnum = 1;
    dirs = os.listdir(dirpath);
    for d in dirs:
	ismatch = re.match(newbase + "(?P<dirnum>\d+)" + "." + suffix + "$", d);
	if (ismatch != None):
	    dirnum = int(ismatch.group('dirnum'));
	    if (dirnum > lastnum):
		lastnum = dirnum;
    
    newfilename = newabsbase + str(lastnum + 1) + "." + suffix;
    
    #print newfilename;
    return newfilename
#end get_empty_file_name

def fix_up_base_name(defs, npw2, uid, attrname, newvalue, isattr):
   if (defs[attrname] != newvalue):
	defs[attrname] = newvalue;
	if (isattr):
	    npw2.OverrideAttribute(uid,attrname,newvalue);
	else:
	    npw2.DefineLocalVariable(uid,attrname,newvalue);


###############################################################################

def queue_dialog(defs, dlgcmd = None):
    proj_cookie = int(defs["TOP_GPJ_COOKIE"]);
    if (dlgcmd == None and defs.has_key("DIALOG_CMD")):
        dlgcmd = defs["DIALOG_CMD"];
    if (dlgcmd == None):
        return;
    npw2, uid = getNPW2Connection(defs);
    npw2.ShowDialog(uid, dlgcmd);


###############################################################################

def comment_self_item(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    my_cookie = int(defs["MY_ITEM_COOKIE"]);
    wbuild.AddConditionForBuildItem(top_cookie, my_cookie, "comment");

def uncomment_self_item(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    my_cookie = int(defs["MY_ITEM_COOKIE"]);
    wbuild.ClearConditionForBuildItem(top_cookie, my_cookie, "{comment}");


def add_comment_to_self_item(defs):
    if not (defs.has_key("COMMENT_STRING")):
        return;
	
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    my_cookie = int(defs["MY_ITEM_COOKIE"]);
    wbuild.AddCommentForBuildItem(top_cookie, my_cookie,
                                  defs["COMMENT_STRING"], 0);
###############################################################################


def modify_file(defs,filename):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    allowed = wbuild.ModifyFile(top_cookie, {"_full_pathname": filename});
    return allowed;	

def delete_file_from_disk(defs,filename):
    if (not modify_file(defs,filename)):
	return;
    if (os.access(filename,os.F_OK)):
	os.remove(filename);

def rename_file(defs,absfrom,absto,gpjfrom,gpjto):
    if (not modify_file(defs,absfrom)):
	return False;
    if (not modify_file(defs,absto)):
	return False; 
    if (os.access(absfrom,os.F_OK) and os.access(absfrom,os.W_OK)):
	shutil.move(absfrom,absto);
    else:
	return False;

    if (gpjfrom != None):
	replace_in_project(defs,gpjfrom,gpjto);
    return True;

def copy_file(defs,fromdiskname,todiskname):
    if (not modify_file(defs,todiskname)):
	return;
    if (os.access(fromdiskname,os.F_OK)):
	shutil.copyfile(fromdiskname,todiskname);

def rename_gpj(defs,filetype,absfrom,absto,gpjfrom,gpjto):
    if (not modify_file(defs,absfrom)):
	return False;
    if (not modify_file(defs,absto)):
	return False; 

    if (os.access(absfrom,os.F_OK) and os.access(absfrom,os.W_OK)):
	shutil.move(absfrom,absto);
    else:
	return False;
    replace_in_base_project(defs,filetype,gpjfrom,gpjto);
    return True;

def gen_safe_open(filename, mode_options):
    try:
	f = open(filename,mode_options);
    except IOError:
	print "File " + filename + " does not exist";
	return None;
    return f;
    
###############################################################################

def add_file_to_resources(defs):
    # add the file defined by RES_NAME to the target resources project
    verbose_print(defs, "add_file_to_resources()");
    if (not defs.has_key("RES_NAME")):
        return;
    if (not defs.has_key("ABS_TOP_PROJ_DIR")):
        return;
    if (not defs.has_key("LAST_RES_FILE")):
    	return;

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    
    resources_full_path = os.path.join(defs["ABS_TOP_PROJ_DIR"], defs["LAST_RES_FILE"]);
    res_cookie = wbuild.GetCookieForBuildItem(top_cookie,top_cookie,resources_full_path);

    if (res_cookie != -1):
	remove_name = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"],"default.con");
	remove_filename_from_project(defs,res_cookie,remove_name)
        add_file_to_project(defs, res_cookie, None, defs["RES_NAME"], False, False);

###############################################################################

def find_file_in_project_by_diskname(defs, proj_cookie, diskname):
    # loop through the project, returning the first entry with a diskname
    # that matches the one provided.
    verbose_print(defs, "find_file_in_project_by_diskname()")
    
    if (not defs.has_key("TOP_GPJ_COOKIE")):
    	return;

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);

    child_cookie = wbuild.GetCookieForFirstChild(top_cookie,
                                                 proj_cookie);
    while (child_cookie != -1):
	next_cookie = wbuild.GetCookieForNextChild(top_cookie,
		                                   proj_cookie,
						   child_cookie);
        itemInfo = wbuild.GetInfoForBuildItem(top_cookie, child_cookie);
	if (itemInfo['DiskName'] == diskname):
	    # match!
	    return child_cookie;
	    
	child_cookie = next_cookie;

    return -1;



###############################################################################

win_rsv = ["CON", "PRN", "AUX", "NUL", "COM1", "COM2", "COM3", "COM4", "COM5", "COM6", "COM7", "COM8", "COM9", "LPT1", "LPT2", "LPT3", "LPT4", "LPT5", "LPT6", "LPT7", "LPT8", "LPT9"];

def windows_reserved_filename(defs,basename):
    if (sys.platform == "win32" or sys.platform == "cygwin"):
	return (basename in win_rsv);
    else:
	return False;


def shared_filename_sanity_check(defs, basename):
    # allow posix style names only
    if (re.search("[^a-zA-Z0-9_\-\.]+",basename)):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Illegal character in name: '" + basename + "'";
	npw2.ReadInString(uid,failstr);
	return False;

    # but not starting with hyphen
    if (re.match("-",basename)):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Name cannot begin with '-': '" + basename + "'";
	npw2.ReadInString(uid,failstr);
	return False;
	
    # and also not 1/2 dots
    if (basename == "." or basename == ".."):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Illegal name: '" + basename + "'";
	npw2.ReadInString(uid,failstr);
	return False;

    # arbitrarily choose maximum length- we don't have the full path here so not based off of filenamemax
    if (len(basename) > 80):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Name is too long: '" + basename + "'";
	npw2.ReadInString(uid,failstr);
	return False;
	
    if (windows_reserved_filename(defs,basename)):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Cannot used reserved name: '" + basename + "'";
	npw2.ReadInString(uid,failstr);
	return False;

    return True;
#end shared_filename_sanity_check

###############################################################################
