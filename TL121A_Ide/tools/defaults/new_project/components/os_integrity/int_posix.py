import ide;
import os;
import shutil;
from int_utils import *;
from utils import *;
import re;
import tempfile;


def os_pss_virt_tf_name_add_std(defs):
    verbose_print(defs,  'os_pss_virt_tf_name_add_std()')

    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
      
    #add_gpj_to_base_project(defs,"Program",defs["tf_name"]);

    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);
    projbasename = projbasestr + ".gpj"
    if (not os.access(projbasename, os.F_OK)):
	# make new one 
    
	create_gpj_file_add_into(defs,"Program",projbasestr);
    
	set_component_name(defs,"integrity_os_modules_posix_system_server_virtual");
    
	set_in_project(defs,"-lposix_sys_server");
	npw2.AddChildComponent(uid,"virtual_library_ivfs","File System Client",False);
	# add link map
	
	add_virt_linkmap(defs);
    else:
	# add old one back in
	create_gpj_file_add_into(defs,"Program",projbasestr);
	
    # queue integrate commands
    fd,fname = start_int_file(defs);

    writestr = "addas " + defs["tf_name"] + " " + defs["tf_name"] + " C\n";
    os.write(fd,writestr);
    writestr ="setcurrentas " + defs["tf_name"] + "\n"
    os.write(fd,writestr);
    
    os.write(fd,"setattr MaximumWeight 2550\n");
    os.write(fd,"setattr MemoryPoolSize 0x200000\n");

    #os.write(fd,"setattr MemoryPoolSize 0x120000\n");
    writestr = "setcurrentobject Task Initial " + defs["tf_name"] + "\n"
    os.write(fd,writestr);			
    os.write(fd,"setattr StartIt true\n");
    os.write(fd,"setattr TimeSlice NONPREEMPTIBLE\n");

    close_int_file(defs,fd,fname);
	
    npw2.DefineLocalVariable(uid,"LAST_PSS_NAME",defs["tf_name"]);
    npw2.DefineLocalVariable(uid,"PSS","VIRTUAL");

    # if monolith, switch kernel from libload to libvload_kernel_helper
    npw2.DeleteChildFromComponent(uid,"kernel_library_load","Dynamic Load","integrity_kernel");	
    npw2.AddChildToComponent(uid,"kernel_library_vload_kernel_helper","Virtual Dynamic Load Kernel Helper","integrity_kernel",1);
    
    npw2.DefineLocalVariable(uid,"LAST_TF_NAME",defs["tf_name"]);
#end os_pss_virt_tf_name_add_std

def os_pss_virt_remove_std(defs):
    verbose_print(defs,  'os_pss_virt_remove_std')
    npw2, uid = getNPW2Connection(defs);

    # remove reference in parent
    remove_from_base_project(defs,defs["tf_name"]);

    # if monolith, switch kernel from ibvload_kernel_helper to libload
    npw2.DeleteChildFromComponent(uid,"kernel_library_vload_kernel_helper","Virtual Dynamic Load Kernel Helper","integrity_kernel");
    npw2.AddChildToComponent(uid,"kernel_library_load","Dynamic Load","integrity_kernel",1);

    # Get rid of the now harmful POSIX auth client from the filesystem
    npw2.DeleteChildFromComponent(uid,"fs_kernel_library_posix_authclient","POSIX Authentication","integrity_kernel");
    npw2.DeleteChildFromComponent(uid,"fs_server_extra_library_posix_authclient","POSIX Authentication","integrity_os_modules_file_system_copy");
    		
    # queue integrate commands
    fd,fname = start_int_file(defs);
    intstr = "deleteas " + defs["tf_name"] + "\n";
    os.write(fd,intstr);
    close_int_file(defs,fd,fname);
    
    npw2.DeleteGuiNodes(uid);
#end os_pss_virt_remove_std

def os_pss_virt_delete_std(defs):
    verbose_print(defs,  'os_pss_virt_delete_std')
 
    # remove file
    projbasestr = os.path.join(defs["PROJ_DIR"],defs["tf_name"]);
    projstr = projbasestr + ".gpj";
    os.unlink(projstr);
		
    os_pss_virt_remove_std(defs);
#end os_pss_virt_delete_std

def os_pss_virt_tf_name_edit_std(defs):
    verbose_print(defs,  'os_pss_virt_tf_name_edit_std')

    oldname = defs["LAST_TF_NAME"] + ".gpj";
    newname = defs["tf_name"] + ".gpj";

    src = os.path.join(defs["PROJ_DIR"],oldname);
    dest = os.path.join(defs["PROJ_DIR"],newname);

    rename_gpj(defs,None,src,dest,oldname,newname);

    # queue integrate commands
    fd,fname = start_int_file(defs);
    
    intstr = "setcurrentas " + defs["LAST_TF_NAME"] + "\n";
    os.write(fd,intstr);
    intstr = "renamecurrent " + defs["tf_name"] + "\n";
    os.write(fd,intstr);
    intstr = "setattr Filename " + defs["tf_name"] + "\n";
    os.write(fd,intstr);

    close_int_file(defs,fd,fname);
    
    npw2, uid = getNPW2Connection(defs);
    npw2.DefineLocalVariable(uid,"LAST_TF_NAME",defs["tf_name"]);
#end os_pss_virt_tf_name_edit_std

def os_pss_find_mainfile_in_project(defs):
    wbuild = getWBuildConnection(defs);
    top_cookie = int(defs["TOP_GPJ_COOKIE"]);
    proj_cookie = int(defs["MY_GPJ_COOKIE"]); 
    child_cookie = wbuild.GetCookieForFirstChild(top_cookie, proj_cookie);
    while (child_cookie != -1):
        itemInfo = wbuild.GetInfoForBuildItem(top_cookie, child_cookie);
	diskname = itemInfo["DiskName"];
	print diskname
	if (os.access(diskname,os.F_OK)):
	    ret = pss_find_authtable(defs,[diskname],tell_mprojmgr=False);
	    if (ret != None):
		return ret;
	child_cookie = wbuild.GetCookieForNextChild(top_cookie, proj_cookie,
						    child_cookie);
    return None;

def os_pss_tf_mainfile_add_std(defs):
    verbose_print(defs,  'os_pss_tf_mainfile_add_std()');
    
    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mainfile"]);

    ret = os_pss_find_mainfile_in_project(defs)
    if (ret != None):
	# parent gpj already has one
	return;

    # somebody already made one, don't overwrite
    if (not os.access(mntname,os.F_OK)):
	if (not modify_file(defs,mntname)):
	    return;
    
	mntf = gen_safe_open(mntname,"w+");
	if (not mntf):
	    return;	
	
	writestr(mntf,"#include <INTEGRITY.h>");
	writestr(mntf,"#include <stdlib.h>");
	writestr(mntf,"#include <stdio.h>");
	writestr(mntf,"#include <sys/authtable.h>");
	writestr(mntf,"#include <unistd.h>");
	writestr(mntf,"\n\n");
    
	writestr(mntf,"UserEntry users[] = {");
	writestr(mntf,"\t{\"nobody\",\"\",__nobody,NULLObject,__nogroup,NULL,0,NULLObject,{0},\"/\"},");
	writestr(mntf,"};");  
	writestr(mntf,"int num_users = sizeof(users)/sizeof(UserEntry);");
	writestr(mntf,"\n\n");
	
	writestr(mntf,"GroupEntry groups[] = {");
	writestr(mntf,"\t{\"nogroup\",__nogroup,NULLObject},");
	writestr(mntf,"};");  
	writestr(mntf,"int num_groups = sizeof(groups)/sizeof(GroupEntry);");
	writestr(mntf,"\n\n");
    
	if (defs["PSS"] == "VIRTUAL"):
	    writestr(mntf,"int main() {");
	    writestr(mntf,"\tvoid InitPosixSysServer(void);\n");
	    
	    writestr(mntf,"\tInitPosixSysServer();");
	    writestr(mntf,"\tExit(0);");
	    writestr(mntf,"};");  
	mntf.close();

    add_to_project(defs,defs["tf_mainfile"]);
#end os_pss_tf_mainfile_add_std

def os_pss_tf_mainfile_edit_std(defs):
    verbose_print(defs,  'os_pss_tf_mainfile_edit_std()');
    fromname = os.path.join(defs["PROJ_DIR"],defs["LAST_TF_MAINFILE"]);
    toname = os.path.join(defs["PROJ_DIR"],defs["tf_mainfile"]);

    rename_file(defs,fromname,toname,defs["LAST_TF_MAINFILE"],defs["tf_mainfile"]);
    npw2, uid = getNPW2Connection(defs);
    
    npw2.OverrideAttribute(uid,"tf_diskname",toname);
#end os_pss_tf_mainfile_edit_std

def os_pss_tf_mainfile_delete_std(defs):
    verbose_print(defs,  'os_fsmnt_tf_mntfile_name_delete_std()')
    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mainfile"]);
    delete_file_from_disk(defs,mntname);

    remove_from_project(defs,defs["tf_mainfile"]);
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_pss_tf_mainfile_delete_std

def os_pss_kernel_add_std(defs):
    verbose_print(defs,  'os_pss_kernel_add_std')
    npw2, uid = getNPW2Connection(defs);
    set_in_project(defs,"-lposix_sys_server_kernel");
#    set_in_project(defs,"-livfs");
    npw2.DeleteChildFromComponent(uid,"kernel_library_load","Dynamic Load","integrity_kernel");

    npw2.AddChildToComponent(uid,"kernel_library_ivfs","File System Client","integrity_kernel",1);
    npw2.DefineLocalVariable(uid,"PSS","KERNEL");
    npw2.AddGuiNodes(uid,"POSIX System Server (Kernel)");
#end os_pss_kernel_add_std

def os_pss_kernel_delete_std(defs):
    verbose_print(defs,  'os_pss_kernel_delete_std')
    
    npw2, uid = getNPW2Connection(defs);
    unset_in_project(defs,"-lposix_sys_server_kernel");
    
    npw2.AddChildToComponent(uid,"kernel_library_load","Dynamic Load","integrity_kernel",1);
     
    # Get rid of the now harmful POSIX auth client from the filesystem
    npw2.DeleteChildFromComponent(uid,"fs_kernel_library_posix_authclient","POSIX Authentication","integrity_kernel");
    npw2.DeleteChildFromComponent(uid,"fs_server_extra_library_posix_authclient","POSIX Authentication","integrity_os_modules_file_system_copy");

    # this won't work anyway, because we delete children before we delete ourselves
    #npw2.DeleteChildFromComponent(uid,"kernel_library_ivfs","File System Client","integrity_kernel");
    npw2.DeleteGuiNodes(uid);
#end os_pss_kernel_delete_std


def add_user(defs):
    numsupgroups = "0";
    canonical_group = re.search("\(<gid>\d+\)?\((<groupname>\w+)\)?",defs["tf_group"]);
    
    outstr = "\t{\"" + defs["tf_id"] + "\",\"" + defs["tf_pwd"] + "\",(uid_t)" + defs["tf_uid"] + ",NULLObject,(gid_t)" + defs["tf_group"] + ",NULL," + numsupgroups + ",NULLObject,{" + defs["tf_supgroups"] + "},\"" + defs["tf_homedir"]  + "\"},"
    return outstr;
		
def os_pss_user_add_std(defs):
    verbose_print(defs,  'os_pss_user_add_std')

    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mainfile"]);
    if (not modify_file(defs,mntname)):
    	return;

    mntf = gen_safe_open(mntname,"rU");
    if (not mntf):
	return;

    lines = mntf.readlines();
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    tf = os.fdopen(tfd,"w+");

    phase = 0;
    for i in lines:
	if (phase == 0):
	    
	    newi1 = re.search("UserEntry users\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search("};",i);
	    if (newi1 != None):
		numsupgroups = "0";
		outstr = add_user(defs);
		writestr(tf,outstr);
		phase = 2;

	tf.write(i);

    tf.close();
    mntf.close();
    verbose_print(defs,  tfname)
    verbose_print(defs,  mntname)
    shutil.move(tfname,mntname);
    fix_perms(mntname);
    
    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["tf_id"]);
#end os_pss_user_add_std

def os_pss_user_edit_std(defs):
    verbose_print(defs,  'os_pss_user_edit_std')
    num = os_pss_find_user_index_by_name(defs,defs["tf_diskname"],defs["LAST_TF_ID"]);
    os_pss_edit_user_by_index(defs["tf_diskname"],num,defs,False);

#end os_pss_user_edit_std

def os_pss_user_delete_std(defs):
    verbose_print(defs,  'os_pss_user_delete_std')
    num = os_pss_find_user_index_by_name(defs, defs["tf_diskname"],defs["LAST_TF_ID"]);
    os_pss_delete_user_by_index(defs["tf_diskname"],num,defs);
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_pss_user_delete_std

def os_pss_user_paste_local_std(defs):
    verbose_print(defs,  'os_pss_user_paste_local_std')
    # if I'm the same parent, change the tf_id (won't read in correctly)
    verbose_print(defs,  defs["tf_diskname"]);
    verbose_print(defs,  defs["COPY_AUTHFILE"]);
    if (defs["tf_diskname"] == defs["COPY_AUTHFILE"]):
	defs["tf_id"] = defs["tf_id"] + "_2";
    os_pss_user_add_std(defs);
#end os_pss_user_paste_local_std

def os_pss_user_comment_std(defs):
    verbose_print(defs,  'os_pss_user_comment_std')
    num = os_pss_find_user_index_by_name(defs,defs["tf_diskname"],defs["LAST_TF_ID"]);
    os_pss_edit_user_by_index(defs["tf_diskname"],num,defs,True);
#end os_pss_user_comment_std

def os_pss_user_uncomment_std(defs):
    os_pss_user_edit_std(defs);
#end os_pss_user_uncomment_std

def pss_find_authtable(defs,all_c_files,tell_mprojmgr=True):
    verbose_print(defs,  'pss_find_authtable')
    # find all c files in this build file
    # search for the user array data structure
    # the one that has it, tell the gui
    fname = None;
    verbose_print(defs,  all_c_files);
    for mntname in all_c_files:
	verbose_print(defs,  mntname);
	mntf = gen_safe_open(mntname,"rU");
	if (not mntf):
	    return;
	lines = mntf.readlines();
	for i in lines:
	    newi1 = re.search("users\[\]",i);
	    if (newi1 != None):
		fname = mntname;
		break;
		
    if (fname != None):
	if (tell_mprojmgr):
	    npw2, uid = getNPW2Connection(defs);
	    npw2.ReadInString(uid,fname);
	else:
	    return fname;
    else:
	if (not tell_mprojmgr):
	    return None;

#end pss_find_authtable

__pss_user_match_string ="(?P<startcomment>(\/\*|//)?)\s*{\"(?P<name>\w+)\",\"(?P<pwd>[^\s]*)\",(\(uid_t\))?(?P<uid>(\d+|__nobody)),NULLObject,(\(gid_t\))?(?P<gid>(\d+|__nogroup)),NULL,(?P<numsup>\d+),NULLObject,{\d+},\"(?P<homedir>.+)\"},\s*(?P<endcomment>(\*\/)?)\s*";
__pss_group_match_string ="(?P<startcomment>(\/\*|//)?)\s*{\"(?P<name>\w+)\",(\(gid_t\))?(?P<gid>(\d+|__nogroup)),NULLObject},\s*(?P<endcomment>(\*\/)?)\s*";

def os_pss_find_users(defs,filename):
    verbose_print(defs,  'os_pss_find_users')
        # scan the mounttable file
    # find all mount points
    # create nodes for them in gui
    verbose_print(defs,  filename);
    #filename = "/tmp/proj2/src/mounttable.c"
    npw2, uid = getNPW2Connection(defs);

    fi = file(filename,"rU");
    lines = fi.readlines();
    phase = 0;

    for i in lines:
	verbose_print(defs,  i);
	if (phase == 0):
	    
	    newi1 = re.search("UserEntry users\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	   
	    newi1 = re.search(__pss_user_match_string,i);
	    if (newi1 != None):
		verbose_print(defs,  'got one');
		user_name = newi1.group('name');
		pwd = newi1.group('pwd');
		user_uid = newi1.group('uid');
		gid = newi1.group('gid');
		numsup = newi1.group('numsup');
		homedir = newi1.group('homedir');
		user_type = "integrity_os_modules_posix_system_server_user";
		startcomment = newi1.group('startcomment');
		endcomment = newi1.group('endcomment');
		commented_out = False;
#		print user_name
#		print startcomment
#		print endcomment
#		print len(endcomment)
		if (startcomment ==  "//" or (startcomment == "/*" and endcomment == "*/")):
		    commented_out = True;
		npw2.ReadIn_AddChildComponent(uid,user_type,user_name,commented_out);
		edit_attr_by_name_and_type(npw2, uid, user_name, user_type, "tf_id",user_name);
		#npw2.OverrideChildAttributeByNameAndType(uid,user_name,user_type,"tf_id",user_name);		
		edit_attr_by_name_and_type(npw2, uid, user_name, user_type, "tf_pwd",pwd);
		#npw2.OverrideChildAttributeByNameAndType(uid,user_name,user_type,"tf_pwd",pwd);
		edit_attr_by_name_and_type(npw2, uid, user_name, user_type, "tf_uid",user_uid);
		#npw2.OverrideChildAttributeByNameAndType(uid,user_name,user_type, "tf_uid",user_uid);
		edit_attr_by_name_and_type(npw2, uid, user_name, user_type, "tf_group",gid);
		#npw2.OverrideChildAttributeByNameAndType(uid,user_name,user_type,"tf_group",gid);
		edit_attr_by_name_and_type(npw2, uid, user_name, user_type, "tf_homedir",homedir);
		#npw2.OverrideChildAttributeByNameAndType(uid,user_name,user_type,"tf_homedir",homedir);
		    
	    else:
		newi1 = re.search("};",i);
		if (newi1 != None):
		    break;

#end os_pss_find_users


def os_pss_find_user_index_by_name(defs, filename,the_mntname):
    verbose_print(defs,  'os_pss_find_user_index_by_name')
    verbose_print(defs,  filename);
    verbose_print(defs,  the_mntname);

    fi = file(filename,"rU");
    lines = fi.readlines();
    phase = 0;
    cnt = 0;
    for i in lines:
	if (phase == 0):
	    
	    newi1 = re.search("UserEntry users\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	   
	    newi1 = re.search(__pss_user_match_string,i);
	    if (newi1 != None):
		mnt_name =  newi1.group('name');
		if (mnt_name == the_mntname):
		    verbose_print(defs,  cnt);
		    break;
		else:
		    cnt = cnt + 1;
	    else:
		newi1 = re.search("};",i);
		if (newi1 != None):
		    break;
    return cnt;
#end os_pss_find_user_index_by_name

def os_pss_edit_user_by_index(filename,index,defs,comment_out):
    verbose_print(defs,  'os_pss_edit_user_by_index');
    if (not modify_file(defs,filename)):
    	return;
	
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname)
    tf = os.fdopen(tfd,"w+");

    verbose_print(defs,  index)
    lines = fi.readlines();
    phase = 0;
    cnt = 0;
    linenum = 0;
    for i in lines:
	if (phase == 0):
	    newi1 = re.search("UserEntry users\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search(__pss_user_match_string,i);
            if (newi1 != None):
		if (cnt == index):
		    if (comment_out):
			lines[linenum] = "/* " + add_user(defs) + "*/\n";
		    else:
			lines[linenum] = add_user(defs) + "\n";
		cnt = cnt+1;
	linenum = linenum+1;
    
    for i in lines:
	#print i
	tf.write(i);
    tf.close();
    fi.close();
    shutil.move(tfname,filename); 
    fix_perms(filename);
#end os_pss_edit_user_by_index

def os_pss_delete_user_by_index(filename,index,defs):
    verbose_print(defs,  'os_pss_delete_user_by_index')
        
    verbose_print(defs,  filename);

    if (not modify_file(defs,filename)):
    	return;
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname)
    tf = os.fdopen(tfd,"w+");
  
    lines = fi.readlines();
    new_lines = [];
    phase = 0;
    cnt = 0;
    linenum = 0;
    for i in lines:
	add_line = 1;
	if (phase == 0):
	    newi1 = re.search("UserEntry users\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search(__pss_user_match_string,i)
	    if (newi1 != None):
		if (cnt == index):
		    add_line = 0;
		cnt = cnt+1;
	linenum = linenum+1;
	if (add_line == 1):
	    new_lines.append(i);
	    
    for i in new_lines:
	tf.write(i);
    tf.close();
    fi.close();
    shutil.move(tfname,filename); 
    fix_perms(filename);
#end os_pss_delete_user_by_index






def add_group(defs):
    numsupgroups = "0";
    outstr = "\t{\"" + defs["tf_id"] + "\",(gid_t)" + defs["tf_gid"] + ",NULLObject},";
    return outstr;
		
def os_pss_group_add_std(defs):
    verbose_print(defs,  'os_pss_group_add_std')

    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mainfile"]);
    if (not modify_file(defs,mntname)):
    	return;

    mntf = gen_safe_open(mntname,"rU");
    if (not mntf):
	return;
	
    lines = mntf.readlines();
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    tf = os.fdopen(tfd,"w+");

    phase = 0;
    for i in lines:
	if (phase == 0):
	    
	    newi1 = re.search("GroupEntry groups\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search("};",i);
	    if (newi1 != None):
		numsupgroups = "0";
		outstr = add_group(defs);
		writestr(tf,outstr);
		phase = 2;

	tf.write(i);

    tf.close();
    mntf.close();
    verbose_print(defs,  tfname)
    verbose_print(defs,  mntname)
    shutil.move(tfname,mntname);
    fix_perms(mntname);

    npw2, uid = getNPW2Connection(defs);
    npw2.AddGuiNodes(uid,defs["tf_id"]);
#end os_pss_group_add_std

def os_pss_group_edit_std(defs):
    verbose_print(defs,  'os_pss_group_edit_std')
    num = os_pss_find_group_index_by_name(defs, defs["tf_diskname"],defs["LAST_TF_ID"]);
    os_pss_edit_group_by_index(defs["tf_diskname"],num,defs,False);

#end os_pss_group_edit_std

def os_pss_group_delete_std(defs):
    verbose_print(defs,  'os_pss_group_delete_std')
    num = os_pss_find_group_index_by_name(defs, defs["tf_diskname"],defs["LAST_TF_ID"]);
    os_pss_delete_group_by_index(defs["tf_diskname"],num,defs);
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_pss_group_delete_std

def os_pss_group_paste_local_std(defs):
    verbose_print(defs,  'os_pss_group_paste_local_std')
    # if I'm the same parent, change the tf_id (won't read in correctly)
    verbose_print(defs,  defs["tf_diskname"]);
    verbose_print(defs,  defs["COPY_AUTHFILE"]);
    if (defs["tf_diskname"] == defs["COPY_AUTHFILE"]):
	defs["tf_id"] = defs["tf_id"] + "_2";
    os_pss_group_add_std(defs);
#end os_pss_group_paste_local_std

def os_pss_group_comment_std(defs):
    verbose_print(defs,  'os_pss_group_comment_std')
    num = os_pss_find_group_index_by_name(defs,defs["tf_diskname"],defs["LAST_TF_ID"]);
    os_pss_edit_group_by_index(defs["tf_diskname"],num,defs,True);
#end os_pss_group_comment_std

def os_pss_group_uncomment_std(defs):
    os_pss_group_edit_std(defs);
#end os_pss_group_uncomment_std

def os_pss_find_groups(defs,filename):
    verbose_print(defs,  'os_pss_find_groups')
        # scan the mounttable file
    # find all mount points
    # create nodes for them in gui
    verbose_print(defs,  filename);
    #filename = "/tmp/proj2/src/mounttable.c"
    npw2, uid = getNPW2Connection(defs);

    fi = file(filename,"rU");
    lines = fi.readlines();
    phase = 0;

    for i in lines:
	verbose_print(defs,  i);
	if (phase == 0):
	    
	    newi1 = re.search("GroupEntry groups\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):	   
	    newi1 = re.search(__pss_group_match_string,i);
	    if (newi1 != None):
		verbose_print(defs,  'got one');
		group_name = newi1.group('name');
		group_type = "integrity_os_modules_posix_system_server_group";
		gid = newi1.group('gid');
		startcomment = newi1.group('startcomment');
		endcomment = newi1.group('endcomment');
		commented_out = False;
		if (startcomment ==  "//" or (startcomment == "/*" and endcomment == "*/")):
		    commented_out = True;
		npw2.ReadIn_AddChildComponent(uid,group_type,group_name,commented_out);
		#npw2.OverrideChildAttribute(uid,group_name,"tf_id",group_name);
		edit_attr_by_name_and_type(npw2, uid, group_name, group_type, "tf_id",group_name);
		#npw2.OverrideChildAttribute(uid,group_name,"tf_gid",gid);
		edit_attr_by_name_and_type(npw2, uid, group_name, group_type, "tf_gid",gid);
	    else:
		newi1 = re.search("};",i);
		if (newi1 != None):
		    break;

#end os_pss_find_groups


def os_pss_find_group_index_by_name(defs, filename,the_mntname):
    verbose_print(defs,  'os_pss_find_group_index_by_name')
    verbose_print(defs,  filename);
    verbose_print(defs,  the_mntname);

    fi = file(filename,"rU");
    lines = fi.readlines();
    phase = 0;
    cnt = 0;
    for i in lines:
	if (phase == 0):
	    
	    newi1 = re.search("GroupEntry groups\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	   
	    newi1 = re.search(__pss_group_match_string,i);
	    if (newi1 != None):
		mnt_name =  newi1.group('name');
		if (mnt_name == the_mntname):
		    verbose_print(defs,  cnt);
		    break;
		else:
		    cnt = cnt + 1;
	    else:
		newi1 = re.search("};",i);
		if (newi1 != None):
		    break;
    return cnt;
#end os_pss_find_group_index_by_name

def os_pss_edit_group_by_index(filename,index,defs,comment_out):
    verbose_print(defs,  'os_pss_edit_group_by_index');
    
    if (not modify_file(defs,filename)):
    	return;
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname)
    tf = os.fdopen(tfd,"w+");

    verbose_print(defs,  index)
    lines = fi.readlines();
    phase = 0;
    cnt = 0;
    linenum = 0;
    for i in lines:
	if (phase == 0):
	    newi1 = re.search("GroupEntry groups\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search(__pss_group_match_string,i);
	    if (newi1 != None):
		if (cnt == index):
		    if (comment_out):
			lines[linenum] = "/* " + add_group(defs) + "*/\n";
		    else:
			lines[linenum] = add_group(defs) + "\n";
		cnt = cnt+1;
	linenum = linenum+1;
    
    for i in lines:
	#print i
	tf.write(i);
    tf.close();
    fi.close();
    shutil.move(tfname,filename); 
    fix_perms(filename);
#end os_pss_edit_group_by_index

def os_pss_delete_group_by_index(filename,index,defs):
    verbose_print(defs,  'os_pss_delete_group_by_index')
        
    verbose_print(defs,  filename);
 
    if (not modify_file(defs,filename)):
    	return;
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname)
    tf = os.fdopen(tfd,"w+");
  
    lines = fi.readlines();
    new_lines = [];
    phase = 0;
    cnt = 0;
    linenum = 0;
    for i in lines:
	add_line = 1;
	if (phase == 0):
	    newi1 = re.search("GroupEntry groups\[\]",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search(__pss_group_match_string,i);
	    if (newi1 != None):
		if (cnt == index):
		    add_line = 0;
		cnt = cnt+1;
	linenum = linenum+1;
	if (add_line == 1):
	    new_lines.append(i);
	    
    for i in new_lines:
	tf.write(i);
    tf.close();
    fi.close();
    shutil.move(tfname,filename); 
    fix_perms(filename);
#end os_pss_delete_group_by_index

def edit_attr_by_name_and_type(npw2, uid, obj_name, obj_type, attr_name, attr_val):
    npw2.OverrideChildAttributeByNameAndType(uid,obj_name,obj_type,attr_name,attr_val);
    	
