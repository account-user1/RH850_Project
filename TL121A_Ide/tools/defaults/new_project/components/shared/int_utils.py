import ide;
import os;
import tempfile;
import shutil;
import re;
import fnmatch;
import sys;
from utils import *;
from projects import *;
#import ghs_util;
   
def os_standalone_kernel_tf_name_add_std(defs, component_name):
    verbose_print(defs,  'standalone_kernel_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);
    
    npw2.AddGuiNodes(uid,defs["tf_name"]);
    npw2.CopyDefineLocal(uid,"PROJ_DIR", "PROJ_DIR");
    npw2.CopyDefineLocal(uid,"REL_PROJ_DIR", "REL_PROJ_DIR");
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    
    create_gpj_file_add_into(defs,"Program",projbasestr);

    set_component_name(defs,component_name);
    # set -kernel
    set_in_project(defs,"-kernel");

    # very last thing, set variable			    
    npw2.DefineLocalVariable(uid,"LAST_INT_KERNEL_PROJ_NAME",defs["tf_name"]);   
    npw2.DefineLocalVariable(uid,"LAST_BASE_PROJ_NAME",defs["tf_name"]);
#end standalone_kernel_tf_name_add_std

def os_monolith_kernel_tf_name_add_std(defs, component_name):
    verbose_print(defs,  'monolith_kernel_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);

    #5 += { "system ${__MULTI_DIR__}/gpjmodify $PROJ_DIR/$tf_name.gpj -create \"Program\" -target $TARGET" }
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    
    #create_proj_file(defs,"Program",projbasestr);


    #5 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -add_to_back -filetype \"Program\" \"$INT_KERNEL_PROJ_NAME.gpj\"" }
    #add_gpj_to_base_project(defs,"Program",defs["INT_KERNEL_PROJ_NAME"]);
    create_gpj_file_add_into(defs,"Program",projbasestr);

    #6 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$tf_name.gpj -set_component_name integrity_kernel_monolith" }
    set_component_name(defs,component_name);
			
    # set -kernel
    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$tf_name.gpj -set -kernel" }
    set_in_project(defs,"-kernel");

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # open int cmd file
	    fd,fname = start_int_file(defs);
	
	    #13 += { "writetmpfile addas KernelSpace $INT_KERNEL_PROJ_NAME none" }	
	    intstr = "addas KernelSpace " + defs["INT_KERNEL_PROJ_NAME"] + " none\n";
	    verbose_print(defs,  intstr);
	    os.write(fd,intstr);
	    
	    close_int_file(defs,fd,fname);
			    

    # very last thing, set variable			    
    #1000000 += { "defineLocal LAST_INT_KERNEL_PROJ_NAME $tf_name" }
    npw2.DefineLocalVariable(uid,"LAST_INT_KERNEL_PROJ_NAME",defs["tf_name"]); 
#end monolith_kernel_tf_name_add_std

def standalone_kernel_reload_int(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.SaveAttributeAcrossReload(uid,"LAST_BASE_PROJ_NAME");
    npw2.SaveAttributeAcrossReload(uid,"LAST_INT_KERNEL_PROJ_NAME");

def standalone_kernel_paste_local_std(defs):
    verbose_print(defs,  'standalone_kernel_paste_local_std');
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["BASE_PROJ_NAME"]);

    #shutil.copytree(defs["COPY_PROJ_DIR"],defs["PROJ_DIR"]);
    newdir = defs["PROJ_DIR"];
    if (not os.access(newdir,os.F_OK)):
	os.makedirs(newdir);    
  
    fromstr = os.path.join(defs["COPY_PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+".gpj");
    tostr = os.path.join(defs["PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+".gpj");
    copy_file(defs,fromstr,tostr);
    
    fromstr = os.path.join(defs["COPY_PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+"_default.ld");
    if os.access(fromstr,os.R_OK):
	tostr = os.path.join(defs["PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+"_default.ld");
	copy_file(defs,fromstr,tostr);
    
    fromstr = os.path.join(defs["COPY_PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+"_flash.ld");
    if os.access(fromstr,os.R_OK):
	tostr = os.path.join(defs["PROJ_DIR"],defs["LAST_BASE_PROJ_NAME"]+"_flash.ld");
	copy_file(defs,fromstr,tostr);     

    #add to default.gpj
    kpathstr = os.path.join(defs["PROJ_DIR"],defs["INT_KERNEL_PROJ_NAME"]);
    add_to_real_parent(defs,"Program",kpathstr);

    # rename
    common_kernel_tf_name_edit_std(defs,npw2,uid,False);
    #standalone_kernel_tf_name_edit_std_allbutparent(defs,npw2,uid);
    npw2.MarkForReload(uid);
#end standalone_kernel_paste_std

def standalone_kernel_copy_local_std(defs):
    npw2, uid = getNPW2Connection(defs);
    npw2.OverrideAttribute(uid,"tf_ProjectDir","$BASE_PROJ_DIR/src");
    npw2.OverrideAttribute(uid,"tf_ProjectName",defs["BASE_PROJ_NAME"]);

def common_kernel_parent_target_edit_std(defs):
    # should check for fileischanged first, save off a copy
    get_top_proj_link_maps_kernel(defs);

def intlib_add_std(defs):
    verbose_print(defs,  'intlib_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["display_name"]);
    
    setstr = "-l" + defs["LIBNAME"];
    set_in_project(defs,setstr);
#end intlib_add_std

def intlib_paste_local_std(defs):
    verbose_print(defs,  'kernel_lib_paste_local_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["display_name"]);
    
    setstr = "-l" + defs["LIBNAME"];
    # remove silently in case we are copying a parent, so we don't get 2 copies
    unset_in_project(defs,setstr);
    set_in_project(defs,setstr);
#end intlib_paste_local_std

def intlib_delete_std(defs):
    verbose_print(defs,  'kernel_lib_delete_std()');
    npw2, uid = getNPW2Connection(defs);

    setstr = "-l" + defs["LIBNAME"];
    unset_in_project(defs,setstr);
    npw2.DeleteGuiNodes(uid);
#end intlib_delete_std


def common_kernel_pd_layout_edit_std(defs):
    verbose_print(defs,  'common_kernel_pd_layout_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    #11 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$tf_name.gpj -replace_with $(LAST_BASE_PROJ_NAME)_flash.ld $(BASE_PROJ_NAME)_default.ld" }
    oldname = defs["LAST_BASE_PROJ_NAME"] + defs["LAST_LD_SUFFIX"];
    absoldname = os.path.join(defs["PROJ_DIR"],oldname);
    if (os.access(absoldname,os.F_OK)):
	newname = defs["BASE_PROJ_NAME"] + defs["LD_SUFFIX"];
    else:
	realname1 = defs["LAST_LD_SUFFIX"][1:None]; # remove _
	realname2 = defs["LD_SUFFIX"][1:None]; # remove _
	oldname =  realname1;
	newname = realname2;
    verbose_print(defs,  oldname);
    verbose_print(defs,  newname);

    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    p_cookie = int(defs["MY_GPJ_COOKIE"]);
    old_cookie = wbuild.GetCookieForBuildItem(top_cookie,p_cookie,oldname);
    if (old_cookie != -1):
	replace_in_project(defs,oldname,newname);
    else:
	add_to_project(defs,newname);
    npw2.DefineProjectVariable(uid,"LAST_LD_SUFFIX",defs["LD_SUFFIX"]);
#end common_kernel_pd_layout_edit_std

def common_kernel_pd_layout_add_std(defs):
    verbose_print(defs,  'common_kernel_pd_layout_add_std()');
    npw2, uid = getNPW2Connection(defs);

    if (defs["copyResources"] == "1"):
	#11 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$tf_name.gpj -add_to_back $(BASE_PROJ_NAME)_default.ld" }
	#fname = defs["BASE_PROJ_NAME"] + defs["LD_SUFFIX"];
	realname = defs["LD_SUFFIX"][1:None]; # remove _
	resdir = "tgt";
	if (defs.has_key("LAST_RES_FILE")):
  	    resdir = os.path.dirname(defs["LAST_RES_FILE"]);
	fname = os.path.join(resdir, realname);
	add_to_project(defs,fname);

    npw2.DefineProjectVariable(uid,"LAST_LD_SUFFIX",defs["LD_SUFFIX"]);
#end common_kernel_pd_layout_add_std

def standalone_kernel_delete_std(defs):
    verbose_print(defs,  'standalone_kernel_delete_std()');
    #delete_top_proj_link_maps_kernel(defs);
    standalone_kernel_remove_std(defs);
#end standalone_kernel_delete_std

def standalone_kernel_remove_std(defs):
    verbose_print(defs,  'standalone_kernel_remove_std()');
    #5 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj $REAL_PARENT_AT_FULL_PATH -remove \"$REL_PROJ_DIR/$INT_KERNEL_PROJ_NAME.gpj\"" }
    kpathstr = os.path.join(defs["REL_PROJ_DIR"],defs["INT_KERNEL_PROJ_NAME"]);
    remove_from_real_parent(defs,kpathstr);
#end standalone_kernel_remove_std

def common_kernel_delete_std(defs):
    verbose_print(defs,  'common_kernel_delete_std()');

    # delete files
    fname = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    delete_file_from_disk(defs,fname);

    common_kernel_remove_std(defs);
#end common_kernel_delete_std

def common_kernel_remove_std(defs):
    verbose_print(defs,  'common_kernel_remove_std()');
    npw2, uid = getNPW2Connection(defs);
    # remove gui node
    npw2.DeleteGuiNodes(uid);
#end common_kernel_delete_std

def standalone_kernel_tf_name_edit_std_lastdefines(defs):
    verbose_print(defs,  'standalone_kernel_tf_name_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.DefineLocalVariable(uid,"LAST_BASE_PROJ_NAME",defs["tf_name"]);
    npw2.DefineLocalVariable(uid,"LAST_INT_KERNEL_PROJ_NAME",defs["tf_name"]);
#end standalone_kernel_tf_name_edit_std_lastdefines

def standalone_kernel_tf_name_edit_std_allbutparent(defs,npw2,uid):
    verbose_print(defs,  'standalone_kernel_tf_name_edit_std_allbutparent');

    # move .ld files
    #move_top_proj_link_maps_kernel(defs);
				
    # when we have bools, we need if (LAST_LD_SUFFIX == LD_SUFFIX), so we don't have an error if we changed the pd_layout first
#    if (defs["LAST_LD_SUFFIX"] == defs["LD_SUFFIX"]):
#	#16 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$tf_name.gpj -replace_with $(LAST_BASE_PROJ_NAME)$(LD_SUFFIX) $(BASE_PROJ_NAME)$(LD_SUFFIX)" }
#	oldname = defs["LAST_BASE_PROJ_NAME"] + defs["LD_SUFFIX"];
#	newname = defs["BASE_PROJ_NAME"] + defs["LD_SUFFIX"];
#	replace_in_project(defs,oldname,newname);

    npw2.DefineLocalVariable(uid,"KIDS_LAST_TF_NAME",defs["LAST_INT_KERNEL_PROJ_NAME"]);
    npw2.DefineLocalVariable(uid,"KIDS_LAST_BASE_PROJ_NAME",defs["LAST_INT_KERNEL_PROJ_NAME"]);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_tf_name");    
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_projname");
#end standalone_kernel_tf_name_edit_std_allbutparent

def standalone_kernel_tf_name_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);

    verbose_print(defs,  'standalone_kernel_tf_name_edit_std()');

    common_kernel_tf_name_edit_std(defs,npw2,uid,True);
  
    standalone_kernel_tf_name_edit_std_allbutparent(defs,npw2,uid);
#end standalone_kernel_tf_name_edit_std


def monolith_kernel_tf_name_edit_std(defs):
    verbose_print(defs,  'monolith_kernel_tf_name_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    common_kernel_tf_name_edit_std(defs,npw2,uid,True);

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # open int cmd file
	    fd,fname = start_int_file(defs);
	
	    intstr = "setcurrentas KernelSpace\n";
	    verbose_print(defs,  intstr);
	    os.write(fd,intstr);
	    intstr = "setattr Filename " + defs["tf_name"] + "\n";
	    verbose_print(defs,  intstr);
	    os.write(fd,intstr);
	    
	    close_int_file(defs,fd,fname);
		    
    
    npw2.DefineLocalVariable(uid,"KIDS_LAST_TF_NAME",defs["LAST_INT_KERNEL_PROJ_NAME"]);
    npw2.MarkChildrenAttributeEditRecursive(uid,"parent_tf_name");
#end monolith_kernel_tf_name_edit_std

def monolith_kernel_tf_name_edit_std_lastdefines(defs):
    verbose_print(defs,  'monolith_kernel_tf_name_edit_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.DefineLocalVariable(uid,"LAST_INT_KERNEL_PROJ_NAME",defs["tf_name"]);
#end monolith_kernel_tf_name_edit_std_lastdefines


def common_kernel_tf_name_edit_std(defs,npw2,uid,isEdit):
    # move gpj
    oldname = defs["LAST_INT_KERNEL_PROJ_NAME"] + ".gpj";
    newname = defs["INT_KERNEL_PROJ_NAME"] + ".gpj";
    
    fromfile = os.path.join(defs["PROJ_DIR"],oldname);
    tofile = os.path.join(defs["PROJ_DIR"],newname);

    if (isEdit):
	rename_gpj(defs,None,fromfile,tofile,oldname,newname);
    else:
	shutil.move(fromfile,tofile);
	
    fixUpDiskname(defs,npw2,uid);
#end common_kernel_tf_name_edit_std

def monolith_kernel_remove_std(defs):
    verbose_print(defs,  'monolith_kernel_remove_std()');
    convert_monolith_2_dd_general(defs,fromkernel=True);
#end monolith_kernel_remove_std

def monolith_kernel_delete_std(defs):
    #monolith_kernel_remove_std(defs);
    remove_from_base_project(defs,defs["INT_KERNEL_PROJ_NAME"]);
    
    # removing a monolith kernel turns it into a dynamic download
    set_parent_component_name(defs,"integrity_dynamic_download");
    set_in_base_project(defs,"-dynamic");

    # open int cmd file
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    fd,fname = start_int_file(defs);
	    intstr = "deleteas KernelSpace\n";
	    os.write(fd,intstr);
	    close_int_file(defs,fd,fname);
#end monolith_kernel_delete_std

def mono_kernel_parent_tf_name_edit_std(defs):
    npw2, uid = getNPW2Connection(defs);

    oldbasename = defs["KIDS_LAST_BASE_PROJ_NAME"];
    restr = oldbasename+"_kernel$"
    verbose_print(defs,  restr);
    result= re.match(restr,defs["tf_name"]);
    if (result != None):
	newtfname = defs["BASE_PROJ_NAME"] + "_kernel";
	verbose_print(defs,  newtfname);
	npw2.OverrideAttribute(uid,"tf_name",newtfname);
	#npw2.OverrideAttribute(uid,"INT_KERNEL_PROJ_NAME",newtfname);
	npw2.DefineProjectVariable(uid,"INT_KERNEL_PROJ_NAME",newtfname);
	pastemode = npw2.InPasteMode(uid);
	if (pastemode):	
	    npw2.AddGuiNodes(uid,newtfname);
	else:
	    npw2.RefreshGuiNodes(uid,newtfname);
	defs["tf_name"] = newtfname;
	defs["INT_KERNEL_PROJ_NAME"] = newtfname;
	monolith_kernel_tf_name_edit_std(defs);
#end mono_kernel_parent_tf_name_edit_std

def monolith_kernel_paste_parent_local_std(defs):
    verbose_print(defs,  'monolith_kernel_paste_local_std()');
    npw2, uid = getNPW2Connection(defs);
    
    npw2.AddGuiNodes(uid,defs["tf_name"]);
       
    fromstr = defs["COPY_DISKNAME"];
    tostr = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    copy_file(defs,fromstr,tostr);
    	    
    npw2.DefineLocalVariable(uid,"LAST_INT_KERNEL_PROJ_NAME",defs["tf_name"]); 
#end monolith_kernel_paste_parent_local_std

def do_integrate_cmdline(defs, tmpfname):
    intexecstr = os.path.join(defs["__MULTI_DIR__"], "integrate");

    if (defs["copyResources"] == "1" and defs.has_key("ABS_BSP_FILE_NAME")):
	bspfile = defs["ABS_BSP_FILE_NAME"]
	if (not os.access(bspfile,os.F_OK)):
	    bspfile = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"],"default.bsp");
    else:
	bspfile = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"],"default.bsp");

    # no matter how many trailing slashes there are, this seems to get us to 0
    no_trailing_slash_os_dir,dummybasename = os.path.split(os.path.join(defs["RTOS_DIR"],"fake"));
    sysstr = intexecstr + " -testguiquiet=\"" + tmpfname + "\" -target \"" + bspfile+ "\" -nodisplay -os_dir \"" + no_trailing_slash_os_dir + "\" -bsp " + defs["BSP_NAME"] ;
    verbose_print(defs, sysstr);

    if (defs.has_key("NPW2_USELOCALINTEGRATE") and defs["NPW2_USELOCALINTEGRATE"] == "0"):
	do_system(sysstr);
    else:
	npw2, uid = getNPW2Connection(defs);
	npw2.RunIntegrateCommandList(uid,sysstr);


def make_new_int_file(defs):
    parentintfile = defs["ABS_INT_FILE_NAME"]
    fd, fname = tempfile.mkstemp();
    os.write(fd,"new\n");
    if (not modify_file(defs,parentintfile)):
	return;
	
    intstr = "saveas " + parentintfile + "\n";
    os.write(fd,intstr);
    os.close(fd);
    
    #18 += { "system ${__MULTI_DIR__}/integrate -testguiquiet=$TMPFILE -target=$PROJ_DIR/$BASE_PROJ_NAME.bsp -nodisplay" }

    verbose_print(defs,  defs["copyResources"]);
    verbose_print(defs,  defs["RTOS_DIR"]);
    verbose_print(defs,  defs["BSP_NAME"]);
    do_integrate_cmdline(defs,fname);
    os.unlink(fname);

def start_new_int_file(defs,intfilename):
    if (not modify_file(defs,intfilename)):
	return;
	
    intstr = "new\n";
    
    fd, fname = tempfile.mkstemp();
    os.write(fd,intstr);
    return (fd, fname);

def start_int_file_name(defs,intname):
    if (not modify_file(defs,intname)):
	return;
	
    intstr = "open " + intname + "\n";
    
    fd, fname = tempfile.mkstemp();
    os.write(fd,intstr);
    return (fd, fname);

    
def start_int_file(defs):
#    parentintfile = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+".int");
    parentintfile = defs["ABS_INT_FILE_NAME"];
    return start_int_file_name(defs,parentintfile);

def finish_int_file(defs,fd,fname):
    do_integrate_cmdline(defs,fname);
    os.unlink(fname);
    
def close_int_file(defs,fd,fname):
    intstr = "save\n";
    os.write(fd,intstr);
    os.close(fd);
    finish_int_file(defs,fd,fname);


def close_int_file_saveas(defs,fd,fname,intfname):
    intstr = "saveas " + intfname + "\n";
    os.write(fd,intstr);
    os.close(fd);
    finish_int_file(defs,fd,fname);


def get_top_proj_link_maps_kernel(defs):
    if (defs["copyResources"] == "1"):
	# get the top project provided files 
	fromfile = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"], "default.ld");
	tofile = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+"_default.ld");
	if (os.access(tofile,os.R_OK)):
	    verbose_print(defs,  fromfile);
	    verbose_print(defs,  tofile);
	    copy_file(defs,fromfile,tofile);
      
	fromfile = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"], "flash.ld");
	if os.access(fromfile,os.R_OK):
	    tofile = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+"_flash.ld"); 
	    if (os.access(tofile,os.R_OK)):
		copy_file(defs,fromfile,tofile);
	
def get_top_proj_link_maps_virtual(defs):
    # get the top project provided files    
    if (defs["copyResources"] == "1"):
	fromfile = os.path.join(defs["RTOS_DIR"], "INTEGRITY.ld");
	tofile = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+"_INTEGRITY.ld"); 
	if (os.access(tofile,os.R_OK)):
	    verbose_print(defs,  fromfile);
	    verbose_print(defs,  tofile);
	    copy_file(defs,fromfile,tofile);
      
	fromfile = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"], "default.bsp");
	tofile = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+"_default.bsp");
	if (os.access(tofile,os.R_OK)):
	    verbose_print(defs,  fromfile);
	    verbose_print(defs,  tofile	);
	    copy_file(defs,fromfile,tofile);

def get_top_proj_link_maps_reloc(defs):
    # get the top project provided files    
    if (defs["copyResources"] == "1"):
	fromfile = os.path.join(defs["RTOS_DIR"], "reloc.ld");
	tofile = os.path.join(defs["PROJ_DIR"],defs["BASE_PROJ_NAME"]+"_reloc.ld"); 
	if (os.access(tofile,os.R_OK)):
	    verbose_print(defs,  fromfile);
	    verbose_print(defs,  tofile);
	    copy_file(defs,fromfile,tofile);
      
  
def add_virt_linkmap(defs):
    # add link map
    verbose_print(defs, "add_virt_linkmap()");
    if (defs["copyResources"] == "1"):
	#linkmapname =  defs["BASE_PROJ_NAME"] + "_INTEGRITY.ld";
	resdir = "tgt";
	if (defs.has_key("LAST_RES_FILE")):
  	    resdir = os.path.dirname(defs["LAST_RES_FILE"]);
	linkmapname =  os.path.join(resdir, "INTEGRITY.ld");
	add_to_project(defs,linkmapname);

def add_lang_appropriate_file(defs,basename):
    fromname = None;
    intdir = os.path.join(defs["__MULTI_DEFAULTS_DIR__"],"new_project","components", "os_integrity", "executable");
    
    if (defs.has_key("LANG_ADA")):
	if (defs.has_key("IS_KERNEL")):
	    fromname = os.path.join(intdir,"hello_kernel.ada");
	    set_in_project(defs,"--ada_preprocess");
	    set_in_project(defs,":ada_main_program=hello_kernel");
	else :
	    fromname = os.path.join(intdir,"hello_vas.ada");
	    set_in_project(defs,"--ada_preprocess");
	    set_in_project(defs,":ada_main_program=hello_vas");
    elif (defs.has_key("LANG_CXX")):
	fromname = os.path.join(intdir,"hello.cc");
    else : #if (defs["LANG"] == "C"):
	fromname = os.path.join(intdir,"hello.c");
    if (fromname):
	copy_basenamed_file_into_project(defs,fromname,basename);

def add_vel_lang_appropriate_file(defs,basename):
    fromname = None;
    veldir = os.path.join(defs["__MULTI_DEFAULTS_DIR__"],"new_project","components","os_velosity");

    if (defs.has_key("LANG_ADA")):
	fromname = os.path.join(veldir,"executable_ada_kernel","hello.ada");
    elif (defs.has_key("LANG_CXX")):
	fromname = os.path.join(veldir,"executable_cxx_kernel","mykernel.cc");
    else : #if (defs["LANG"] == "C"):
	fromname = os.path.join(veldir,"executable_c_kernel","hello.c");
    if (fromname):
	copy_basenamed_file_into_project(defs,fromname,basename);

def copy_basenamed_file_into_project(defs,fromname,basename):
    npw2, uid = getNPW2Connection(defs);

    #base_file_name = os.path.basename(defs["ABS_SRC_NAME"]);
    root, extension = os.path.splitext(fromname);
    verbose_print(defs,  extension);
    base_file_name = basename + extension;

    topath = os.path.join(defs["ABS_PROJ_DIR"], base_file_name);
    copy_diskfile_into_project(defs,fromname,topath,base_file_name)

def top_add_macros(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.AddMacro(top_cookie, "__OS_DIR", defs["RTOS_DIR"], None);
    #bspdir = os.path.join(defs["RTOS_DIR"],defs["BSP_NAME"]);
    bspdir = os.path.join("$__OS_DIR", defs["BSP_NAME"]);
    wbuild.AddMacro(top_cookie, "__BSP_DIR", bspdir, None);
    wbuild.AddMacro(top_cookie, "__BUILD_DIR", "%expand_path(.)",None);

    # try to get lower case os_dir
    osdirsetting = None;
    osdirsettingequals = None;
    try:
	osdirsetting = wbuild.GetStringSettingForOptionByOptionName(top_cookie,top_cookie,"OsDir",True,True);
	if (osdirsetting != None):
	    # so leave it as the setting if they are the same, otherwise use what we had before.
	    lowerosdir = defs["RTOS_DIR"].lower()
	    if (osdirsetting.lower() != defs["RTOS_DIR"].lower()):
		osdirsetting = defs["RTOS_DIR"]
	else:
	    osdirsetting = defs["RTOS_DIR"]
    except AttributeError:
	osdirsetting = defs["RTOS_DIR"]
    
#   Preliminary work for using macros to set the os dir.
    needsMacroedOsDir = False;
    if (wbuild.IsOptionSetOnBuildItem(top_cookie, top_cookie, "-os_dir " + osdirsetting)):
	wbuild.UnsetOption(top_cookie, top_cookie, "-os_dir " + osdirsetting);
	needsMacroedOsDir = True;
    if (wbuild.IsOptionSetOnBuildItem(top_cookie, top_cookie, "-os_dir=" + osdirsetting)):
	wbuild.UnsetOption(top_cookie, top_cookie, "-os_dir=" + osdirsetting);
	needsMacroedOsDir = True;
    if (needsMacroedOsDir):
    	wbuild.SetOption(top_cookie, top_cookie, "-os_dir $__OS_DIR");
	
    custbase = os.path.join("target","integrity.bod");
    abscustfile = os.path.join(defs["RTOS_DIR"],custbase);
    if (os.access(abscustfile,os.F_OK)):
	custfile = os.path.join("$__OS_DIR",custbase);
	wbuild.AddCustomization(top_cookie, {"_full_pathname": custfile});

    resdir = os.path.dirname(defs["LAST_RES_FILE"]);
    optstr = "-I" + resdir
    set_option_in_top_project(defs,optstr);
    
def top_edit_macros(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    wbuild.DeleteMacro(top_cookie,"__BSP_DIR");
    wbuild.DeleteMacro(top_cookie,"__OS_DIR");
    wbuild.AddMacro(top_cookie, "__OS_DIR", defs["RTOS_DIR"], None);
    bspdir = os.path.join("$__OS_DIR", defs["BSP_NAME"]);
    wbuild.AddMacro(top_cookie, "__BSP_DIR", bspdir, None);

#   Preliminary work for using macros to set the os dir.
    needsMacroedOsDir = False;
    if (wbuild.IsOptionSetOnBuildItem(top_cookie, top_cookie, "-os_dir " + defs["RTOS_DIR"])):
	wbuild.UnsetOption(top_cookie, top_cookie, "-os_dir " + defs["RTOS_DIR"]);
	needsMacroedOsDir = True;
    if (wbuild.IsOptionSetOnBuildItem(top_cookie, top_cookie, "-os_dir=" + defs["RTOS_DIR"])):
	wbuild.UnsetOption(top_cookie, top_cookie, "-os_dir=" + defs["RTOS_DIR"]);
	needsMacroedOsDir = True;
    if (needsMacroedOsDir):
    	wbuild.SetOption(top_cookie, top_cookie, "-os_dir $__OS_DIR");
    
    custbase = os.path.join("target","integrity.bod");
    abscustfile = os.path.join(defs["RTOS_DIR"],custbase);
    #always remove do we don't have duplicates, or in case we don't have it anymore
    custfile = os.path.join("$__OS_DIR",custbase);
    wbuild.RemoveCustomization(top_cookie,{"_full_pathname": custfile});
    if (os.access(abscustfile,os.F_OK)):
	wbuild.AddCustomization(top_cookie, {"_full_pathname": custfile});

def find_file(defs,all_c_files,searchstr):
    # find all c files in this build file
    # search for the one we want
    # the one that has it, tell the gui
    fname = None;
    verbose_print(defs, all_c_files);
    for mntname in all_c_files:
	verbose_print(defs,  mntname);
	if (not os.access(mntname,os.R_OK)):
	    continue;
	mntf = open(mntname,"rU");
	lines = mntf.readlines();
	for i in lines:
	    newi1 = re.search(searchstr,i);
	    if (newi1 != None):
		fname = mntname;
		break;
		
    if (fname != None):
	verbose_print(defs,  "Right File=" + fname);
	npw2, uid = getNPW2Connection(defs);
	npw2.ReadInString(uid,fname);

def grep_in_file_return_line(defs,filename,searchstr):
    mntf = open(filename,"rU");
    lines = mntf.readlines();
    foundmatch = None;
    for i in lines:
	newi1 = re.search(searchstr,i);
	if (newi1 != None):
	    foundmatch = i;
	    break;
    mntf.close();
    return foundmatch;

def edit_line_in_file(defs,filename,searchstr,replacestr):
    verbose_print(defs,  filename);
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname);
    tf = os.fdopen(tfd,"w+");
    
    lines = fi.readlines();
    linenum = 0;

    for i in lines:
	newi1 = re.search(searchstr,i);
	if (newi1 != None):
	    lines[linenum] = replacestr+"\n";
	linenum = linenum+1;

    for i in lines:
	tf.write(i);

    tf.close();
    fi.close();
    shutil.move(tfname,filename);
    fix_perms(filename);

def remove_line_in_file(defs,filename,searchstr):
    verbose_print(defs,  filename);
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname);
    tf = os.fdopen(tfd,"w+");
    
    lines = fi.readlines();
    linenum = 0;
    
    for i in lines:
	newi1 = re.search(searchstr,i);
	if (newi1 == None):
	    lines2[linenum] = i;
	    linenum = linenum+1;

    for i in lines2:
	tf.write(i);

    tf.close();
    fi.close();
    shutil.move(tfname,filename);
    fix_perms(filename);
    
def apply_comment_as(defs, as_name, comment_cmd):
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_int_file(defs);
		
	    intstr = "setcurrentas " + as_name + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	 
	    intstr = comment_cmd + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);

	    close_int_file(defs,fd,fname);
#end apply_comment_vas

def comment_vas(defs):
    verbose_print(defs, 'comment_vas');
    apply_comment_as(defs, defs["tf_name"], "comment");
#end comment_vas

def uncomment_vas(defs):
    verbose_print(defs, 'uncomment_vas');
    apply_comment_as(defs, defs["tf_name"], "uncomment");
#end uncomment_vas

def comment_kernel(defs):
    verbose_print(defs, 'comment_kernel');
    apply_comment_as(defs, "KernelSpace", "comment");
#end comment_kernel

def uncomment_kernel(defs):
    verbose_print(defs, 'uncomment_kernel');
    apply_comment_as(defs, "KernelSpace", "uncomment");
#end uncomment_kernel


def convert_monolith_2_dd_general(defs,fromkernel):
    if (fromkernel):
	set_parent_component_name(defs,"integrity_dynamic_download");
	set_in_base_project(defs,"-dynamic");
    else:
	set_component_name(defs,"integrity_dynamic_download");
	set_in_project(defs,"-dynamic");
    if (defs.has_key("INT_KERNEL_GPJ_COOKIE")):
	top_cookie = int(defs["TOP_GPJ_COOKIE"]);
	k_cookie = int(defs["INT_KERNEL_GPJ_COOKIE"]);
	wbuild = getWBuildConnection(defs);
	wbuild.AddConditionForBuildItem(top_cookie, k_cookie, "comment");
	wbuild.AddConditionForBuildItem(top_cookie, k_cookie, "isdefined(INTEGRITY_DYNAMIC_DOWNLOAD_COMMENTED_KERNEL)");

    # take care of .int file entry
    comment_kernel(defs);

#end convert_monolith_2_dd_edit_std

def convert_dd_2_monolith_general(defs):
    set_component_name(defs,"integrity_monolith");
    unset_in_project(defs,"-dynamic");

    # find the kernel to uncomment
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    proj_cookie = int(defs["MY_GPJ_COOKIE"]); 
    
    child_cookie = wbuild.GetCookieForFirstChild(top_cookie,
                                                 proj_cookie);
    commented_kern_opt = "--integrity_dd_commented_kernel"
    found_old_kernel = False;
    while (child_cookie != -1):
	next_cookie = wbuild.GetCookieForNextChild(top_cookie,
		                                   proj_cookie,
						   child_cookie);
						   
	k_cond_str =  "{isdefined(INTEGRITY_DYNAMIC_DOWNLOAD_COMMENTED_KERNEL)}";
	if (wbuild.IsConditionSetOnBuildItem(top_cookie, child_cookie,
                                          k_cond_str)):
	    wbuild.ClearConditionForBuildItem(top_cookie, child_cookie, "{comment}");
	    wbuild.ClearConditionForBuildItem(top_cookie, child_cookie, k_cond_str);
	 
	    # do all the integrate work to uncomment the kernel
	    uncomment_kernel(defs);
	    found_old_kernel = True;
	    break;
	child_cookie = next_cookie;

    if (not found_old_kernel):
	# add one
	npw2, uid = getNPW2Connection(defs);
	kname  = defs["BASE_PROJ_NAME"] + "_kernel"
	# bleah, how could I run intermediate actions for the new component?  Have to just hard code it
	npw2.DefineLocalVariable(uid,"INT_KERNEL_PROJ_NAME",kname);
	npw2.DefineLocalVariable(uid,"LD_SUFFIX","_default.ld");
	npw2.AddChildComponent(uid,"integrity_kernel_monolith",kname,False);
#end convert_dd_2_monolith_general

def child_tf_name_sanity_check(defs,basename,lastname,errorstrtype):
    verbose_print(defs, 'vas_tf_name_sanity_check')

    if (defs["NPW2_OP"] == "edit" and lastname != None and basename == lastname):
	# we didn't actually edit this field, good to go
	return;

    if (basename == defs["BASE_PROJ_NAME"]):
	npw2, uid = getNPW2Connection(defs);
	failstr = errorstrtype + " name " + basename + " cannot be the same as the parent project";
	npw2.ReadInString(uid,failstr);
	return;

    if not (os.access(defs["PROJ_DIR"], os.F_OK)):
	return;

    wantedfilename = os.path.join(defs["PROJ_DIR"],basename+".gpj");
    if (os.access(wantedfilename, os.F_OK)):
	# don't overwrite files if they are already there
	npw2, uid = getNPW2Connection(defs);
	failstr = basename+".gpj" + " already exists in directory " + defs["PROJ_DIR"];
	npw2.ReadInString(uid,failstr);
	return;

    for filename in os.listdir(defs["PROJ_DIR"]):
	# look for <base>.*
	matchstr = basename + ".*"
	if fnmatch.fnmatch(filename, matchstr):
	    # we already have stuff in this directory with that basename, don't allow
	    npw2, uid = getNPW2Connection(defs);
	    failstr = "You must choose a different base name, because file " + filename + " already exists in directory:\n" + defs["PROJ_DIR"];
	    npw2.ReadInString(uid,failstr);
	    return;
#end child_tf_name_sanity_check


integrity_rsv = ["KernelSpace"];

def integrity_reserved_filename(defs,basename):
    return (basename in integrity_rsv);
   
	
def generic_filename_sanity_check(defs,basename):
    # do the shared checks
    if (shared_filename_sanity_check(defs, basename) == False):
        return False;

    # do integrity-specific checks
    if (integrity_reserved_filename(defs,basename)):
	npw2, uid = getNPW2Connection(defs);
	failstr = "Cannot used reserved name: '" + basename + "'";
	npw2.ReadInString(uid,failstr);
	return False;
	
    return True;
#end generic_filename_sanity_check


def intproj_t_sanity_check(defs):
    generic_filename_sanity_check(defs,defs["tf_ProjectName"]);
