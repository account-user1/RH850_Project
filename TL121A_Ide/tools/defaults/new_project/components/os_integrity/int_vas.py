import ide;
import os;
import shutil;
from int_utils import *;
from utils import *;
import re;


def add_vas_to_int_file(defs):
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_int_file(defs);
	
	    langstr = "C";
	    if (defs.has_key("LANG_CXX")):
		langstr = "C++";
	    if (defs.has_key("LANG_ADA")):
		langstr = "Ada";
		
	    nostrname = defs["tf_name"].replace(" ", "_");
	    # quotes around the filename in case of spaces
	    intstr = "addas " + nostrname + " \"" + defs["tf_name"] + "\" " + langstr + "\n";
	
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	    intstr = "setcurrentas " + defs["tf_name"] + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	 
	    close_int_file(defs,fd,fname);


#end add_vas_to_int_file


def vas_tf_name_add_std(defs):
    verbose_print(defs, 'vas_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["tf_name"]);
 
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    
    create_gpj_file_add_into(defs,"Program",projbasestr);

    set_component_name(defs,"integrity_virtual_address_space");

    add_virt_linkmap(defs);

    add_vas_to_int_file(defs);
    
    add_lang_appropriate_file(defs,defs["tf_name"]);

    npw2.DefineLocalVariable(uid,"LAST_AS_NAME",defs["tf_name"]);
#end vas_tf_name_add_std

    
def vas_tf_name_edit_std(defs):
    verbose_print(defs, 'vas_tf_name_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    src = os.path.join(defs["PROJ_DIR"],defs["LAST_AS_NAME"]+".gpj");
    dest = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    oldname = defs["LAST_AS_NAME"] + ".gpj";
    newname = defs["tf_name"] + ".gpj";

    rename_gpj(defs,None,src,dest,oldname,newname);

    # fix up diskname
    fixUpDiskname(defs,npw2,uid);
    
    # queue integrate commands
    fd,fname = start_int_file(defs);
    
    intstr = "setcurrentas " + defs["LAST_AS_NAME"] + "\n";
    verbose_print(defs, intstr);
    os.write(fd,intstr);

    nostrname = defs["tf_name"].replace(" ", "_");
    intstr = "renamecurrent " + nostrname + "\n";
    verbose_print(defs, intstr);
    os.write(fd,intstr);
    
    # quotes around the filename in case of spaces
    intstr = "setattr Filename " + "\"" + defs["tf_name"] + "\"" + "\n";
    verbose_print(defs, intstr);
    os.write(fd,intstr);

    close_int_file(defs,fd,fname);
    npw2.DefineLocalVariable(uid,"KIDS_LAST_TF_NAME",defs["LAST_AS_NAME"]);
    npw2.DefineLocalVariable(uid,"LAST_AS_NAME",defs["tf_name"]);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_tf_name");
#end vas_tf_name_edit_std


def vas_tf_name_readin_std(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.DefineLocalVariable(uid,"LAST_AS_NAME",defs["tf_name"]);
#end vas_tf_name_readin_std

def vas_remove_std(defs):
    verbose_print(defs, 'vas_remove_std');
    npw2, uid = getNPW2Connection(defs);

    # remove reference in parent
    remove_from_base_project(defs,defs["tf_name"]);

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_int_file(defs);
	    intstr = "deleteas " + defs["tf_name"] + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	    close_int_file(defs,fd,fname);
    
    npw2.DeleteGuiNodes(uid);
#end vas_remove_std


def vas_delete_std(defs):
    verbose_print(defs, 'vas_delete_std');

    # remove file
    projstr = defs["tf_diskname"];
    os.unlink(projstr);
		
    vas_remove_std(defs);
#end vas_delete_std

def vas_parent_tf_name_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);

    oldbasename = defs["KIDS_LAST_BASE_PROJ_NAME"];
    restr = oldbasename+"_as(?P<digit>\d+)$"
    verbose_print(defs, restr);
    result= re.match(restr,defs["tf_name"]);
    if (result != None):
	digit = result.group('digit');
	newtfname = defs["BASE_PROJ_NAME"] + "_as" + digit;
	verbose_print(defs, newtfname);
	npw2.OverrideAttribute(uid,"tf_name",newtfname);
	pastemode = npw2.InPasteMode(uid);
	if (pastemode):	
	    npw2.AddGuiNodes(uid,newtfname);
	else:
	    npw2.RefreshGuiNodes(uid,newtfname);
	defs["tf_name"] = newtfname;
	vas_tf_name_edit_std(defs);


def vas_paste_parent_local_std(defs):
    verbose_print(defs, 'vas_paste_parent_local_std()');
    
    fromstr = defs["COPY_DISKNAME"];
    tostr = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    copy_file(defs,fromstr,tostr);
    
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["tf_name"]);
    npw2.DefineLocalVariable(uid,"LAST_AS_NAME",defs["tf_name"]);
#end vas_paste_parent_local_std


def vas_paste_local_std(defs):
    verbose_print(defs, 'vas_paste_local_std()');
     
    vas_paste_parent_local_std(defs);
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    

    add_gpj_to_base_project(defs,"Program",projbasestr);
    add_vas_to_int_file(defs);

    npw2, uid = getNPW2Connection(defs);
    npw2.DefineLocalVariable(uid,"KIDS_LAST_BASE_PROJ_NAME",defs["COPY_KIDS_LAST_BASE_PROJ_NAME"]);
    npw2.MarkForReload(uid);
#end vas_paste_local_std

def vas_reload_int(defs):
    verbose_print(defs, 'vas_reload_int')
    npw2, uid = getNPW2Connection(defs);
    npw2.SaveAttributeAcrossReload(uid,"COPY_DIR");
    npw2.SaveAttributeAcrossReload(uid,"COPY_LAST_V_LINKFILE");
    npw2.SaveAttributeAcrossReload(uid,"KIDS_LAST_BASE_PROJ_NAME");

def vas_reload_std(defs):
    verbose_print(defs, 'vas_reload_std')
    npw2, uid = getNPW2Connection(defs);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_projname");
#end vas_reload_std


def vas_tf_name_sanity_check(defs):
    verbose_print(defs, 'vas_tf_name_sanity_check')

    lastnamestr = None;
    if (defs.has_key("LAST_AS_NAME")):
	lastnamestr = defs["LAST_AS_NAME"]
	
    if (not generic_filename_sanity_check(defs,defs["tf_name"])):
	# it will take care of the error message
	return;
	
    child_tf_name_sanity_check(defs,defs["tf_name"],lastnamestr,"AddressSpace");
#end vas_tf_name_sanity_check


def virlib_ivfs_default_select(defs):
    verbose_print(defs, 'virlib_ivfs_default_select');
    if (defs.has_key("IS_VAS") and defs["IS_VAS"] == "TRUE"):
	return; # vas already exists, only force this on new ones
    if (defs.has_key("HAS_FILE_SYSTEM") and defs["HAS_FILE_SYSTEM"] == "TRUE"):
	npw2, uid = getNPW2Connection(defs);
	retstr = "TRUE"
	npw2.ReadInString(uid,retstr);
	return;
#end virlib_ivfs_default_select

def num_vas_sanity_check(defs):
    verbose_print(defs, 'num_vas_sanity_check')
    numstr = defs["tx_num_vas"];

    if (defs["num_vas"] != "on"):
	return; # it's not enabled, we don't care
    if (not numstr.isdigit()):
    	npw2, uid = getNPW2Connection(defs);
	failstr = "Number of Virtual Address Spaces must be numeric: " + numstr;
	npw2.ReadInString(uid,failstr);
	return;

    if (int(numstr) > 1000):
	# multi will run out of memory if you make too many address spaces,
	# doubtful you'd have a target with enough memory to build this anyway
	npw2, uid = getNPW2Connection(defs);
	failstr = "Too many Virtual Address Spaces";
	npw2.ReadInString(uid,failstr);
	return;
	
    if (defs["INT_APP_TYPE"] == "DynamicDownload"):
	if (int(numstr) == 0):
	    npw2, uid = getNPW2Connection(defs);
	    failstr = "A Dynamic Download project may not have 0 Virtual Address Spaces";
	    npw2.ReadInString(uid,failstr);
	    return;
	
	
#end num_vas_sanity_check

def names_vas_sanity_check(defs):
    verbose_print(defs, 'names_vas_sanity_check')
    nmstr = defs["tx_names_vas"];

    if (defs["names_vas"] != "on"):
	return; # it's not enabled, we don't care

    # tokenize the names with " ,"
    vas_list = re.split("\s*,?\s*",nmstr);
    unique_dict = {}
    for vas in vas_list:
	if (vas == ""):
	    continue; # skip empty strings
	if (unique_dict.has_key(vas)):
	    npw2, uid = getNPW2Connection(defs);
	    failstr = "Names of Virtual Address Spaces must contain unique entries, duplicate entry: " + vas;
	    npw2.ReadInString(uid,failstr);
	    return;
	if (not generic_filename_sanity_check(defs,vas)):
	    # it will take care of the error message
	    return;	    
	unique_dict[vas] = vas;

    vcount = len(unique_dict);
    if (vcount > 1000):
	# multi will run out of memory if you make too many address spaces,
	# doubtful you'd have a target with enough memory to build this anyway
	npw2, uid = getNPW2Connection(defs);
	failstr = "Too many Virtual Address Spaces";
	npw2.ReadInString(uid,failstr);
	return;    
#end names_vas_sanity_check
