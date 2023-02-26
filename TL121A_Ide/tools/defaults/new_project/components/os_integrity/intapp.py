import ide;
import os;
import shutil;
from int_utils import *;
from utils import *;

  
def intapp_tf_name_add_std(defs,ismono,fromkernel=False):
    npw2, uid = getNPW2Connection(defs);

    if (not fromkernel):
	npw2.AddGuiNodes(uid,defs["tf_name"]);

    npw2.CopyDefineLocal(uid,"PROJ_DIR", "PROJ_DIR");
    npw2.CopyDefineLocal(uid,"REL_PROJ_DIR", "REL_PROJ_DIR");
    npw2.CopyDefineLocal(uid,"ABS_PROJ_DIR", "ABS_PROJ_DIR");

    #create gpj
    filebasename = os.path.join(defs["ABS_PROJ_DIR"],defs["BASE_PROJ_NAME"]);
    #create_proj_file(defs,"INTEGRITY Application",filebasename);

    #add to default.gpj
    #bpathstr = os.path.join(defs["REL_PROJ_DIR"],defs["BASE_PROJ_NAME"]);
    #add_to_real_parent(defs,"INTEGRITY Application",bpathstr);
    if (fromkernel):
	#print "add from kernel" 
	add_gpj_to_base_project(defs,"INTEGRITY Application",filebasename);
	#print defs["MY_GPJ_COOKIE"]
    else:
	create_gpj_file_add_into(defs,"INTEGRITY Application",filebasename);

    if (ismono):
	set_component_name(defs,"integrity_monolith");
    else:
	set_component_name(defs,"integrity_dynamic_download");
	# this is here so if you delete the int file, it still builds as dynamic
	# (and there's no warning for redundant switch, so it should be innocuous)
	# if we ever want to switch DD->Mono, we'd have to delete this option
	set_in_project(defs,"-dynamic");

	
    if (defs["copyResources"] == "1"):
        resdir = "tgt";
        if (defs.has_key("LAST_RES_FILE")):
            resdir = os.path.dirname(defs["LAST_RES_FILE"]);
	bspfile = os.path.join(resdir, "default.bsp");
	add_to_self_project(defs,bspfile);
	absbspfile = os.path.join(defs["TOP_PROJ_DIR"],bspfile);
	npw2.DefineLocalVariable(uid,"ABS_BSP_FILE_NAME",absbspfile);
	defs["ABS_BSP_FILE_NAME"] = absbspfile;

    intfile = defs["BASE_PROJ_NAME"] + ".int";
    #add_to_base_project(defs,intfile);
    add_to_self_project(defs,intfile);

    absintfile = os.path.join(defs["PROJ_DIR"],intfile);
    npw2.DefineLocalVariable(uid,"ABS_INT_FILE_NAME",absintfile);
    defs["ABS_INT_FILE_NAME"] = absintfile;
    make_new_int_file(defs);
    
#end intapp_tf_name_add_std

def intapp_std_lastdefines(defs,ismono):
    npw2, uid = getNPW2Connection(defs);
    npw2.DefineLocalVariable(uid,"LAST_BASE_PROJ_NAME",defs["tf_name"]);
    

def intapp_copy_main_file(defs,ismono,isedit):
    oldname = defs["LAST_BASE_PROJ_NAME"] + ".gpj";
    newname = defs["BASE_PROJ_NAME"] + ".gpj";
    oldfname = os.path.join(defs["PROJ_DIR"],oldname);
    newfname = os.path.join(defs["PROJ_DIR"],newname);

    if (isedit):
	rename_gpj(defs,None,oldfname,newfname,oldname,newname);
    else:
	shutil.move(oldfname,newfname);
   

def intapp_tf_name_edit_std(defs,ismono):
    npw2, uid = getNPW2Connection(defs);

    npw2.CopyDefineLocal(uid,"tf_name","BASE_PROJ_NAME");

    intapp_copy_main_file(defs,ismono,True);
    
    intapp_tf_name_edit_std_allbutparent(defs,ismono,npw2,uid);
#end intapp_tf_name_edit_std
    
def intapp_tf_name_edit_std_allbutparent(defs,ismono,npw2,uid):
    npw2.DefineLocalVariable(uid,"KIDS_LAST_BASE_PROJ_NAME",defs["LAST_BASE_PROJ_NAME"]);    
    npw2.DefineLocalVariable(uid,"KIDS_LAST_INTAPP_NAME",defs["LAST_BASE_PROJ_NAME"]);    
    npw2.MarkChildrenAttributeEdit(uid,"parent_tf_name");
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_projname");
#end intapp_tf_name_edit_std_allbutparent


def intapp_remove_std(defs,ismono):
    verbose_print(defs,  'intapp_remove_std');
    npw2, uid = getNPW2Connection(defs);

    kpathstr = os.path.join(defs["REL_PROJ_DIR"],defs["BASE_PROJ_NAME"]);
    remove_from_real_parent(defs,kpathstr);

    npw2.DeleteGuiNodes(uid);
#end intapp_remove_std


def intapp_delete_std(defs,ismono):
    verbose_print(defs,  'intapp_delete_std');
    newname= os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"] + ".gpj");
    delete_file_from_disk(defs,newname);

#    delete_top_proj_link_maps_kernel(defs);
#    delete_top_proj_link_maps_virtual(defs);

    intapp_remove_std(defs,ismono);
#end intapp_delete_std


def intapp_bs_shared_objs_add_std(defs,ismono):
    npw2, uid = getNPW2Connection(defs);
    set_in_project(defs,defs["SHARED_LIB_STR"]);
    npw2.DefineLocalVariable(uid,"LAST_SHARED_LIB_STR",defs["SHARED_LIB_STR"]);
#end intapp_bs_shared_objs_add_std

def intapp_bs_shared_objs_edit_std(defs,ismono):
    npw2, uid = getNPW2Connection(defs);
    unset_in_project(defs,defs["LAST_SHARED_LIB_STR"]);
    set_in_project(defs,defs["SHARED_LIB_STR"]);
    #npw2.MarkChildrenAttributeEdit(uid,"parent_bs_shared_objs");
    npw2.DefineLocalVariable(uid,"LAST_SHARED_LIB_STR",defs["SHARED_LIB_STR"]);
#end intapp_bs_shared_objs_edit_std

def intapp_parent_target_edit_std(defs,ismono):
    # should check for fileischanged first, save off a copy
    verbose_print(defs,  'intapp_parent_target_edit_std');
    get_top_proj_link_maps_kernel(defs);
    get_top_proj_link_maps_virtual(defs);

def intapp_paste_parent_local_std(defs,ismono):
    # if I'm from the RTOS_DIR distribution, add a -headerfiledir, so they won't
    # get generated in the RTOS_DIR/BSP directory.
    verbose_print(defs,defs["COPY_IS_OUTSIDE_RTOS_DIR"]);
    if (defs["COPY_IS_OUTSIDE_RTOS_DIR"] == "0"):
	newname = defs["BASE_PROJ_NAME"] + ".gpj";
	newfname = os.path.join(defs["PROJ_DIR"],newname);
	if (os.access(newfname,os.F_OK)):
	    wbuild = getWBuildConnection(defs);
	    setstr = "-headerfiledir " + defs["REL_PROJ_DIR"];
	    verbose_print(defs,setstr);
	    set_option_in_self_project(defs,setstr);


def intapp_paste_local_std(defs,ismono):
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["BASE_PROJ_NAME"]);

    #shutil.copytree(defs["COPY_PROJ_DIR"],defs["PROJ_DIR"]);
    newdir = defs["PROJ_DIR"];
    if (not os.access(newdir,os.F_OK)):
	os.makedirs(newdir);
	
    fromstr = os.path.join(defs["COPY_PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+".gpj");
    tostr = os.path.join(defs["PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+".gpj");
    copy_file(defs,fromstr,tostr);
	    
    #add to default.gpj
    bpathstr = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]);
    #add_to_real_parent(defs,"INTEGRITY Application",bpathstr);
    add_gpj_to_base_project(defs,"INTEGRITY Application",bpathstr);
    # rename
    intapp_copy_main_file(defs,ismono,False);

    # if I'm from the RTOS_DIR distribution, add a -headerfiledir, so they won't
    # get generated in the RTOS_DIR/BSP directory.
    verbose_print(defs,defs["COPY_IS_OUTSIDE_RTOS_DIR"]);
    if (defs["COPY_IS_OUTSIDE_RTOS_DIR"] == "0"):
    	newname = defs["BASE_PROJ_NAME"] + ".gpj";
	newfname = os.path.join(defs["PROJ_DIR"],newname);
	if (os.access(newfname,os.F_OK)):
	    setstr = "-headerfiledir " + defs["REL_PROJ_DIR"];
	    verbose_print(defs,setstr);
	    set_in_project(defs,setstr);

 
    # intapp_tf_name_edit_std_allbutparent(defs,ismono,npw2,uid);
    #npw2.MarkAttributeEdit(uid,"tf_name");
    npw2.MarkForReload(uid);
#end intapp_paste_std

def intapp_reload_int(defs, ismono):
    npw2, uid = getNPW2Connection(defs);
#    npw2.SaveAttributeAcrossReload(uid,"tf_name");
    npw2.SaveAttributeAcrossReload(uid,"LAST_BASE_PROJ_NAME");

def intapp_copy_local_std(defs,ismono):
    npw2, uid = getNPW2Connection(defs);
    npw2.OverrideAttribute(uid,"tf_ProjectDir","$BASE_PROJ_DIR/src");
    npw2.OverrideAttribute(uid,"tf_ProjectName",defs["BASE_PROJ_NAME"]);
    npw2.DefineLocalVariable(uid,"COPY_IS_OUTSIDE_RTOS_DIR",defs["projIsOutsideRtosDir"]);
