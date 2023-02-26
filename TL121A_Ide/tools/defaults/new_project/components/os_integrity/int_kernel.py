import ide;
import os;
import shutil;
from int_utils import *;
from utils import *;
import re;
from intapp import *;
from projects import *;

def standalone_kernel_tf_name_add_std(defs):
    os_standalone_kernel_tf_name_add_std(defs, "integrity_kernel_standalone");
#end standalone_kernel_tf_name_add_std


def monolith_kernel_tf_name_add_std(defs):
    os_monolith_kernel_tf_name_add_std(defs,"integrity_kernel_monolith"); 
#end monolith_kernel_tf_name_add_std

def common_kernel_tf_name_add_std(defs):
    verbose_print(defs,  'common_kernel_tf_name_add_std');
    add_lang_appropriate_file(defs,defs["INT_KERNEL_PROJ_NAME"]);

    # in rtos dir, we allow people to override the normal global_table.c
    # by putting their own version in the bsp dir.  Check there first.
    fromname = os.path.join(defs["RTOS_DIR"], defs["BSP_NAME"], "global_table.c");
    if (not os.path.isfile(fromname)):
	fromname = os.path.join(defs["RTOS_DIR"],"kernel","global_table.c");

    defs["ABS_SRC_NAME"] = fromname;
    copy_file_into_project(defs);
#end common_kernel_tf_name_add_std

#int_utils: def common_semukernel_tf_name_edit_std(defs,npw2,uid):


#int_utils: def standalone_kernel_tf_name_edit_std(defs):

#int_utils: def standalone_kernel_tf_name_edit_std_allbutparent(defs,npw2,uid):

#int_utils: def standalone_kernel_tf_name_edit_std_lastdefines(defs):

#int_utils: def monolith_kernel_tf_name_edit_std(defs):
 
#int_utils: def monolith_kernel_tf_name_edit_std_lastdefines(defs):

#int_utils: def common_kernel_remove_std(defs):


#int_utils: def common_kernel_delete_std(defs):


#int_utils: def standalone_kernel_remove_std(defs):


#int_utils: def standalone_kernel_delete_std(defs):

#int_utils: def monolith_kernel_remove_std(defs):

#int_utils: def monolith_kernel_delete_std(defs):

#int_utils: def common_kernel_pd_layout_add_std(defs):



#int_utils: def common_kernel_pd_layout_edit_std(defs):


#def kernel_lib_comment_std(defs):
#    verbose_print(defs,  'kernel_lib_comment_std()');
#
#    setstr = "-l" + defs["LIBNAME"];
#    unset_in_project(defs,setstr);
#    setstr = "\"#-l" + defs["LIBNAME"] + "\"";
#    set_in_project(defs,setstr);
#
#def kernel_lib_uncomment_std(defs):
#    verbose_print(defs,  'kernel_lib_uncomment_std()');
#
#    setstr = "\"#-l" + defs["LIBNAME"] + "\"";
#    unset_in_project(defs,setstr);
#    setstr = "-l" + defs["LIBNAME"];
#    set_in_project(defs,setstr);

    

#int_utils: def mono_kernel_parent_tf_name_edit_std(defs):

#int_utils: def common_kernel_parent_target_edit_std(defs):



#int_utils: def monolith_kernel_paste_parent_local_std(defs):

#int_utils: def standalone_semukernel_copy_local_std(defs):
    
#int_utils: def standalone_kernel_paste_local_std(defs):


#int_utils: def standalone_kernel_reload_int(defs):


def promote_standalone_2_monolith_edit_std(defs):
    verbose_print(defs,  'promote_standalone_2_monolith_edit_std');
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    
    # remark self as integrity_kernel_monolith
    set_component_name(defs,"integrity_kernel_monolith");
    # remove self from parent
    standalone_kernel_remove_std(defs);
    
    #defs["BASE_PROJ_NAME"] = defs["tf_name"];
    defs["BASE_PROJ_NAME"] = defs["standalone_2_monolith"];
    defs["tf_name"] = defs["standalone_2_monolith"];
    intapp_tf_name_add_std(defs,True,fromkernel=True);

    # add to monolith
    verbose_print(defs,  defs["INT_KERNEL_PROJ_NAME"]);
    add_gpj_to_self_project(defs,"Program",projbasestr,0)
    # open int cmd file
    fd,fname = start_int_file(defs);

    #13 += { "writetmpfile addas KernelSpace $INT_KERNEL_PROJ_NAME none" }	
    intstr = "addas KernelSpace " + defs["INT_KERNEL_PROJ_NAME"] + " none\n";
    os.write(fd,intstr);
    
    close_int_file(defs,fd,fname);
	
#end promote_standalone_2_monolith_edit_std


def monokernel_tf_name_sanity_check(defs):
    verbose_print(defs, 'monokernel_tf_name_sanity_check')
    if (not generic_filename_sanity_check(defs,defs["tf_name"])):
	# it will take care of the error message
	return;

    if (defs["tf_name"] == defs["BASE_PROJ_NAME"]):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Kernel name " + defs["tf_name"] + " cannot be the same as the parent project";
	npw2.ReadInString(uid,failstr);
	return;
#end monokernel_tf_name_sanity_check

def standalone_kernel_tf_ProjectName_sanity_check(defs):
    generic_filename_sanity_check(defs,defs["tf_ProjectName"])

def standalone_2_monolith_sanity_check(defs):
    verbose_print(defs, 'standalone_2_monolith_sanity_check')

    lastnamestr = None;
    newname = defs["standalone_2_monolith"];

    if (defs["NPW2_OP"] == "edit" and newname == "(null)"):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Must define name of attribute";
	npw2.ReadInString(uid,failstr);
	
#end standalone_2_monolith_sanity_check
