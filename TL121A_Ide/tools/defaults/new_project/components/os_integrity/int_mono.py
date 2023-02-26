import ide;
import os;
import shutil;
from int_utils import *;
from utils import *;
from intapp import *;


def mono_tf_name_add_std(defs):
    intapp_tf_name_add_std(defs,True);
    
def mono_tf_name_edit_std(defs):
    intapp_tf_name_edit_std(defs,True);
 
def mono_std_lastdefines(defs):
    intapp_std_lastdefines(defs,True);

def mono_remove_std(defs):
    intapp_remove_std(defs,True);

def mono_delete_std(defs):
    intapp_delete_std(defs,True);

def mono_bs_shared_objs_add_std(defs):
    intapp_bs_shared_objs_add_std(defs,True);

def mono_bs_shared_objs_edit_std(defs):
    intapp_bs_shared_objs_edit_std(defs,True);

def mono_parent_target_edit_std(defs):
    intapp_parent_target_edit_std(defs,True);

def mono_copy_local_std(defs):
    intapp_copy_local_std(defs,True);

def mono_paste_local_std(defs):
    intapp_paste_local_std(defs,True);

def mono_paste_parent_local_std(defs):
    intapp_paste_parent_local_std(defs,True);

def mono_reload_int(defs):
    intapp_reload_int(defs,True);

def convert_monolith_2_dd_edit_std(defs):
    verbose_print(defs,'convert_monolith_2_dd_edit_std');
    convert_monolith_2_dd_general(defs,fromkernel=False);
#end convert_monolith_2_dd_edit_std
