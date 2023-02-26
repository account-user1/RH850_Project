import ide;
import os;
from int_utils import *;
from utils import *;
import re;
#from velapp import *;
from projects import *;

def standalone_kernel_tf_name_add_std(defs):
    os_standalone_kernel_tf_name_add_std(defs, "velosity_kernel_standalone");
    
#end standalone_kernel_tf_name_add_std

def common_kernel_tf_name_add_std(defs):
    verbose_print(defs,  'common_kernel_tf_name_add_std');
    veldir = os.path.join(defs["__MULTI_DEFAULTS_DIR__"],"new_project","components","os_velosity");

    add_vel_lang_appropriate_file(defs,defs["INT_KERNEL_PROJ_NAME"]);
    
    fromname = os.path.join(defs["RTOS_DIR"],"kernel","global_table.c");
    defs["ABS_SRC_NAME"] = fromname;
    copy_file_into_project(defs);
    
    set_in_project(defs,"-libbsp");
#end common_kernel_tf_name_add_std

def monolith_kernel_tf_name_add_std(defs):
    os_monolith_kernel_tf_name_add_std(defs,"velosity_kernel_monolith");
    set_in_project(defs,"-extractall=-lkernel_vel");
    set_in_project(defs,"-lnk=-C__INTEGRITY_HeapSize=0x100000");

#end monolith_kernel_tf_name_add_std

def vel_monolith_kernel_tf_name_edit_std(defs):
    monolith_kernel_tf_name_edit_std(defs);
    
#int_utils: def common_kernel_tf_name_edit_std(defs,npw2,uid):

#int_utils: def standalone_kernel_tf_name_edit_std(defs):

#int_utils: def standalone_kernel_tf_name_edit_std_allbutparent(defs,npw2,uid):


#int_utils: def common_kernel_remove_std(defs):

#int_utils: def common_kernel_delete_std(defs):

#int_utils: def standalone_kernel_remove_std(defs):

#int_utils: def standalone_kernel_delete_std(defs):

#int_utils: def common_kernel_pd_layout_add_std(defs):


#int_utils: def common_kernel_pd_layout_edit_std(defs):


#int_utils: def common_kernel_parent_target_edit_std(defs):

#int_utils: def standalone_semukernel_copy_local_std(defs):
    
#int_utils: def standalone_kernel_paste_local_std(defs):

#int_utils: def standalone_kernel_reload_int(defs):

def promote_standalone_2_monolith_edit_std(defs):
    verbose_print(defs,  'promote_standalone_2_monolith_edit_std');
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    
    # remark self as integrity_kernel_monolith
    set_component_name(defs,"velosity_kernel_monolith");
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
