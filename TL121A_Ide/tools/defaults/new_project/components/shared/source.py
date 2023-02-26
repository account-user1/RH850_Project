import ide;
import os;
import shutil;
from utils import *;
import re;
import string;

def source_add_std(defs):
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["filename"]);
#end source_add_std

def source_std_lastdefines(defs):
    verbose_print(defs,  'source_std_lastdefines()');
    npw2, uid = getNPW2Connection(defs);

    npw2.DefineLocalVariable(uid,"LAST_FILENAME",defs["filename"]);
#end source_std_lastdefines

def source_file_add_std(defs):
    source_add_std(defs);
    theType = None;
    if (defs.has_key("FILE_TYPE")):
        theType = defs["FILE_TYPE"];
    add_file_to_project(defs, int(defs["MY_GPJ_COOKIE"]), theType,
                        defs["filename"], 0);    
#end source_c_add_std

def source_file_add_chooser(defs):
    if (not defs.has_key("filename") or defs["filename"] == None or defs["filename"] == ""):
        # Prompt the user with a dialog.
	queue_dialog(defs);
	return;
    source_add_std(defs);
    theType = None;
    if (defs.has_key("FILE_TYPE")):
        theType = defs["FILE_TYPE"];
    add_file_to_project(defs, int(defs["MY_GPJ_COOKIE"]), theType,
                        defs["filename"], 0);    
#end source_c_add_chooser

def source_uvel_app_add_std(defs):
    print 'source_uvel_app_add_std()';
    source_add_std(defs);

    fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project","exec_hello_c","hello.c");
    toname = os.path.join(defs["PROJ_DIR"],defs["filename"]);
    copy_file(defs,fromname,toname);

    add_to_project(defs,defs["filename"]);

    source_std_lastdefines(defs);
#end source_global_table_add_std


def source_c_edit_std(defs):
    verbose_print(defs,  'source_c_edit_std()');

    dirname, basename = os.path.split(defs["tf_diskname"]);
    newdiskname = os.path.join(dirname,defs["filename"]);

    absfromname = defs["tf_diskname"];
    abstoname = newdiskname;
    
    if (rename_file(defs,absfromname,abstoname,defs["LAST_FILENAME"],
                    defs["filename"]) != True):
	print "Unable to rename " + basename + " to " + defs["filename"];
	return;

    # fix up diskname
    npw2, uid = getNPW2Connection(defs);
    npw2.OverrideAttribute(uid,"tf_diskname",newdiskname);
    source_std_lastdefines(defs);
#end source_c_edit_std

def source_remove_std(defs):
    verbose_print(defs,  'source_remove_std()');
    npw2, uid = getNPW2Connection(defs);

    remove_item_from_self_project(defs);
    npw2.DeleteGuiNodes(uid);
#end source_remove_std

def source_delete_std(defs):
    verbose_print(defs,  'source_delete_std()');
    verbose_print(defs,  defs["tf_diskname"]);
#    fname = os.path.join(defs["PROJ_DIR"],defs["LAST_FILENAME"]);
#    os.remove(fname);
    delete_file_from_disk(defs,defs["tf_diskname"]);
    source_remove_std(defs);
#end source_delete_std


def source_parent_tf_name_edit_std(defs):
    verbose_print(defs,  'source_parent_tf_name_edit_std');
    npw2, uid = getNPW2Connection(defs);
    verbose_print(defs,  defs["filename"]);
    oldname = defs["filename"];
    
    oldnamesplit = string.split(oldname,".");
    last = len(oldnamesplit) -1;
    suffix = oldnamesplit[last];
    for word in oldnamesplit:
	verbose_print(defs,word);
    
    oldbasename = defs["KIDS_LAST_TF_NAME"];
    restr = oldbasename + "." + suffix + "$";
    verbose_print(defs,  restr);
    result= re.match(restr,defs["filename"]);
    if (result != None):
	newfname = defs["tf_name"] + "." + suffix ;
	verbose_print(defs,  newfname);
	npw2.OverrideAttribute(uid,"filename",newfname);
	pastemode = npw2.InPasteMode(uid);
	if (pastemode):	
	    npw2.AddGuiNodes(uid,newfname);
	else:
	    npw2.RefreshGuiNodes(uid,newfname);
	defs["filename"] = newfname;
	source_c_edit_std(defs);
#end source_parent_tf_name_edit_std

def source_integrate_file_parent_tf_name_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);
    verbose_print(defs,  defs["filename"]);
    oldbasename = defs["KIDS_LAST_INTAPP_NAME"];
    restr = oldbasename+".int$"
    verbose_print(defs,  restr);
    result= re.match(restr,defs["filename"]);
    if (result != None):
	newfname = defs["tf_name"] + ".int" ;
	verbose_print(defs,  newfname);
	npw2.OverrideAttribute(uid,"filename",newfname);
	pastemode = npw2.InPasteMode(uid);
	if (pastemode):	
	    npw2.AddGuiNodes(uid,newfname);
	else:
	    npw2.RefreshGuiNodes(uid,newfname);
	defs["filename"] = newfname;
	source_c_edit_std(defs);
#end source_parent_tf_name_edit_std


def source_paste_parent_local_std(defs):
    verbose_print(defs,  'source_paste_parent_local_std()');
    source_add_std(defs);

#    fromname = os.path.join(defs["COPY_DIR"],defs["COPY_FILENAME"]);
    fromname = defs["COPY_DISKNAME"];
    toname = os.path.join(defs["PROJ_DIR"],defs["COPY_FILENAME"]);
    copy_file(defs,fromname, toname);

    verbose_print(defs,  fromname);
    verbose_print(defs,  toname);
    source_std_lastdefines(defs);
#end source_paste_parent_local_std

def source_paste_local_std(defs):
    verbose_print(defs,  'source_paste_local_std()');

    new_cookie = -1;

    if defs.has_key("PASTE_AFTER_SIBLING_NAME"):
	verbose_print(defs,  defs["PASTE_AFTER_SIBLING_NAME"]);
	new_cookie = add_file_to_project_after(defs,defs["COPY_FILENAME"],defs["PASTE_AFTER_SIBLING_NAME"]);
    else:
	new_cookie = add_to_project(defs,defs["COPY_FILENAME"]);

    if (defs.has_key("COPY_ITEM_COOKIE")):
        wbuild = getWBuildConnection(defs);
        top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    	wbuild.CopyOptionsFromBuildItem(top_cookie, int(defs["COPY_ITEM_COOKIE"]), new_cookie, 1, 0);
	
    source_paste_parent_local_std(defs);
   
#end source_paste_local_std

def source_paste_link_std(defs):
    verbose_print(defs,  'source_paste_link_std()');

    new_cookie = -1;

    if defs.has_key("PASTE_AFTER_SIBLING_NAME"):
	verbose_print(defs,  defs["PASTE_AFTER_SIBLING_NAME"]);
	new_cookie = add_file_to_project_after(defs,defs["COPY_DISKNAME"],defs["PASTE_AFTER_SIBLING_NAME"]);
    else:
	new_cookie = add_to_project(defs,defs["COPY_DISKNAME"]);

    if (defs.has_key("COPY_ITEM_COOKIE")):
        wbuild = getWBuildConnection(defs);
        top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    	wbuild.CopyOptionsFromBuildItem(top_cookie, int(defs["COPY_ITEM_COOKIE"]), new_cookie, 1, 0);
	
    source_std_lastdefines(defs);
   
#end source_paste_link_std


def source_readin_std(defs):
    npw2, uid = getNPW2Connection(defs);
    filename = defs["filename"];
    if (os.path.basename(filename) == "global_table.c"):
	return; # global_table.c doesn't count
    langstr = "C"
    npw2.DefineProjectVariable(uid,"LANG_C",langstr);
#end source_readin_std
