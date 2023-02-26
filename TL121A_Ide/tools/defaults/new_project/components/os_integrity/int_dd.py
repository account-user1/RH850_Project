import ide;
import os;
import shutil;
from int_utils import *;
from intapp import *;
from utils import *;


def dd_tf_name_add_std(defs):
    intapp_tf_name_add_std(defs,False);

def dd_tf_name_edit_std(defs):
    intapp_tf_name_edit_std(defs,False);
 
def dd_std_lastdefines(defs):
    intapp_std_lastdefines(defs,False);

def dd_remove_std(defs):
    intapp_remove_std(defs,False);

def dd_delete_std(defs):
    intapp_delete_std(defs,False);

def dd_bs_shared_objs_add_std(defs):
    intapp_bs_shared_objs_add_std(defs,False);

def dd_bs_shared_objs_edit_std(defs):
    intapp_bs_shared_objs_edit_std(defs,False);

def dd_parent_target_edit_std(defs):
    intapp_parent_target_edit_std(defs,False);

def dd_copy_local_std(defs):
    intapp_copy_local_std(defs,False);

def dd_paste_local_std(defs):
    intapp_paste_local_std(defs,False);

def dd_paste_parent_local_std(defs):
    intapp_paste_parent_local_std(defs,False);

def dd_reload_int(defs):
    intapp_reload_int(defs,False);

def convert_dd_2_monolith_edit_std(defs):
    verbose_print(defs,'convert_dd_2_monolith_edit_std');
    convert_dd_2_monolith_general(defs);
#end convert_dd_2_monolith_edit_std
