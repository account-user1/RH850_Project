import ide;
import os;
from utils import *;
from shared_demos import *;
from std_libraries import *;
from uvel_shared import *;

def simple_std_lastdefines(defs):
    npw2, uid = getNPW2Connection(defs);
    # very last thing, set variable			    
    npw2.DefineLocalVariable(uid,"LAST_SIMPLE_NAME",defs["tf_name"]);
    npw2.DefineLocalVariable(uid,"LAST_BASE_PROJ_NAME",defs["tf_name"]);

def simple_tf_name_add_std(defs):
    verbose_print(defs,  'simple_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);

    npw2.CopyDefineLocal(uid,"PROJ_DIR", "PROJ_DIR");
    npw2.CopyDefineLocal(uid,"REL_PROJ_DIR", "REL_PROJ_DIR");

    npw2.CopyDefineLocal(uid,"ABS_PROJ_DIR", "ABS_PROJ_DIR");

    filebasename = os.path.join(defs["ABS_PROJ_DIR"],defs["BASE_PROJ_NAME"]);    
    create_gpj_file_add_into(defs,"Program",filebasename);

    set_component_name(defs,"uvelosity_application");

#end simple_tf_name_add_std


def simple_tf_name_edit_std_allbutparent(defs,npw2,uid):
    verbose_print(defs,  'simple_tf_name_edit_std_allbutparent()');
    npw2.CopyDefineLocal(uid,"tf_name",defs["BASE_PROJ_NAME"]);

    npw2.DefineLocalVariable(uid,"KIDS_LAST_TF_NAME",defs["LAST_SIMPLE_NAME"]);
    npw2.MarkChildrenAttributeEdit(uid,"parent_tf_name");
#end simple_tf_name_edit_std_allbutparent

def simple_rename_main_file(defs):
    # move gpj
    oldname = os.path.join(defs["PROJ_DIR"],defs["LAST_SIMPLE_NAME"]+".gpj");
    newname = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+".gpj");
    rename_file(defs, oldname, newname, None, None);

def simple_tf_name_edit_std(defs):
    verbose_print(defs,  'simple_tf_name_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    simple_copy_main_file(defs);

    # fix up parent ref
    oldname = defs["LAST_SIMPLE_NAME"]+".gpj";
    newname = defs["tf_name"]+".gpj"
    replace_in_real_parent(defs,None,oldname,newname);
    
    fix_object_dir(defs);
    
    simple_tf_name_edit_std_allbutparent(defs,npw2,uid);
#end simple_tf_name_edit_std

def simple_copy_main_file(defs):
    verbose_print(defs,  "simple_copy_main_file()");
    oldname = defs["LAST_SIMPLE_NAME"] + ".gpj";
    newname = defs["tf_name"] + ".gpj";
    oldfname = os.path.join(defs["PROJ_DIR"],oldname);
    newfname = os.path.join(defs["PROJ_DIR"],newname);
    verbose_print(defs,  oldfname);
    verbose_print(defs,  newfname);
    rename_file(defs, oldfname, newfname, None, None);

def simple_remove_std(defs):
    verbose_print(defs,  'simple_remove_std()');
    npw2, uid = getNPW2Connection(defs);
    
    relpathstr = os.path.join(defs["REL_PROJ_DIR"],defs["tf_name"]);
    remove_from_real_parent(defs,relpathstr);
    
    npw2.DeleteGuiNodes(uid);
#end simple_remove_std


def simple_delete_std(defs):
    verbose_print(defs,  'simple_delete_std()');
    
    fname = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    delete_file_from_disk(defs, fname);

    simple_remove_std(defs);
#end simple_delete_std


def do_uvoptions(defs,set,typename):
    if (typename == "debug"):
	modify_in_project(defs,"-syslib=uv_debug",set);
	modify_in_project(defs,"-DUV_DEBUG_OBJECTS",set);
	modify_in_project(defs,"-DUV_EXTRA_ERROR_CHECKING",set);
	modify_in_project(defs,"-Xstackcheck",set);
    elif (typename == "maxperf"):
	modify_in_project(defs,"-syslib=uv",set);
    elif (typename == "minsize"):
	modify_in_project(defs,"-syslib=uv_min",set);
	modify_in_project(defs,"-DUV_MINIMUM_OBJECT_SIZE",set);
	
def simple_bs_uvOptions_add_std(defs):
    verbose_print(defs,  'simple_bs_shared_objs_add_std()');
    npw2, uid = getNPW2Connection(defs);
    do_uvoptions(defs,1,defs["UV_LIB"]);
    
    npw2.DefineLocalVariable(uid,"LAST_UV_LIB",defs["UV_LIB"]);
#end simple_bs_shared_objs_add_std


def simple_bs_uvOptions_edit_std(defs):
    verbose_print(defs,  'simple_bs_shared_objs_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    do_uvoptions(defs,0,defs["LAST_UV_LIB"]);
    do_uvoptions(defs,1,defs["UV_LIB"]);
    npw2.DefineLocalVariable(uid,"LAST_UV_LIB",defs["UV_LIB"]);
#end simple_bs_shared_objs_edit_std

def fix_object_dir(defs):
    defs["OPTION_STRING"] = "-object_dir=objs/" + defs["LAST_BASE_PROJ_NAME"];
    unset_option_in_self_project(defs);
    defs["OPTION_STRING"] = "-object_dir=objs/" + defs["BASE_PROJ_NAME"];
    set_option_in_self_project(defs);
    
def simple_paste_local_std(defs):
    verbose_print(defs,  'simple_paste_local_std');
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["BASE_PROJ_NAME"]);

    os.mkdir(defs["PROJ_DIR"]);
    fromstr = os.path.join(defs["COPY_PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+".gpj");
    tostr = os.path.join(defs["PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+".gpj");
    copy_file(defs, fromstr, tostr);

    #add to default.gpj
    kpathstr = os.path.join(defs["REL_PROJ_DIR"],defs["BASE_PROJ_NAME"]);
    add_to_real_parent(defs,"Program",kpathstr);

    # rename    
    simple_rename_main_file(defs);
    
    npw2.MarkForReload(uid);
#end simple_paste_local_std

def simple_reload_int(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.SaveAttributeAcrossReload(uid,"LAST_BASE_PROJ_NAME");
    npw2.SaveAttributeAcrossReload(uid,"LAST_SIMPLE_NAME");


def source_uvel_custom_libstartup_add(defs):
    # Make sure uv library is listed before custom startup library
    modify_in_project(defs,"-l${%option_value(-syslib)}",True);
    # Call the shared function
    add_custom_libstartup(defs)

def source_uvel_custom_libstartup_remove(defs):
    npw2, uid = getNPW2Connection(defs)
    npw2.DefineLocalVariable(uid, "LAST_SIMPLE_NAME", defs["tf_name"]);
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"])
    using_custom_libsys = wbuild.IsOptionSetOnBuildItem(top_cookie,
    		int(defs["MY_GPJ_COOKIE"]), "-lsys")
    if (using_custom_libsys):
	# Remove libsys to avoid conflicts
	remove_custom_libsys(defs)
    remove_custom_libstartup(defs)
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-l${%option_value(-syslib)}");
    if (using_custom_libsys):
	# Add back in including -syslib library include option
	source_uvel_custom_libsys_add(defs)

def source_uvel_custom_libsys_add(defs):
    # Make sure uv library is listed before custom startup library
    modify_in_project(defs,"-l${%option_value(-syslib)}",True);
    # Call the shared function
    add_custom_libsys(defs)

def source_uvel_custom_libsys_remove(defs):
    npw2, uid = getNPW2Connection(defs)
    npw2.DefineLocalVariable(uid, "LAST_SIMPLE_NAME", defs["tf_name"]);
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"])
    using_custom_libstartup = wbuild.IsOptionSetOnBuildItem(top_cookie,
    		int(defs["MY_GPJ_COOKIE"]), "-lstartup")
    if (using_custom_libstartup):
	# Remove libsys to avoid conflicts
	remove_custom_libstartup(defs)
    remove_custom_libsys(defs)
    wbuild.UnsetOption(top_cookie, int(defs["MY_GPJ_COOKIE"]),
                       "-l${%option_value(-syslib)}");
    if (using_custom_libstartup):
	# Add back in including -syslib library include option
	source_uvel_custom_libstartup_add(defs)
