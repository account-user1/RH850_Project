import ide;
import os;
#import tempfile;
from int_utils import *;
from utils import *;
from projects import *;
import re;

def os_has_file_system(npw2,uid):
    npw2.DefineProjectVariable(uid,"HAS_FILE_SYSTEM","TRUE");

def os_no_file_system(npw2,uid):
    npw2.DefineProjectVariable(uid,"HAS_FILE_SYSTEM","FALSE");

    
def os_fs_dist_add_std(defs):
    verbose_print(defs,  'os_fs_dist_add_std()');
    npw2, uid = getNPW2Connection(defs);

    os_has_file_system(npw2,uid);
    npw2.AddGuiNodes(uid,defs["tf_name"]);
    # until we add the file, use MY_GPJ_COOKIE instead of PARENT_GPJ_COOKIE
    
    # have to set sourcedirs before adding the project
    servdir = os.path.join("modules","ghs","vfs_server");
    macroservdir = os.path.join("$__OS_DIR",servdir);
    absservdir = os.path.join(defs["RTOS_DIR"],servdir);
    setstr = "-I" + macroservdir;
    set_in_project(defs,setstr);
    setstr = ":sourceDir=" + macroservdir;
    set_in_project(defs,setstr);
    abs_file_name = os.path.join(absservdir,"ivfsserver_module");
    create_gpj_file_add_into(defs,"Program",abs_file_name);

    # queue integrate commands
    fd,fname = start_vel_file(defs);

    os.write(fd,"addas ivfsserver_module ivfsserver_module C\n");	
    os.write(fd,"setcurrentas ivfsserver_module\n");

    os.write(fd,"setattr MemoryPoolSize 0x120000\n");
    os.write(fd,"setcurrentobject Task Initial ivfsserver_module\n");			
    os.write(fd,"setattr StartIt true\n");

    close_vel_file(defs,fd,fname);

    npw2.ShowDialog(uid,"EditVELFSClients");
#end os_fs_tf_name_add_std()

def os_fs_dist_remove_std(defs):
    verbose_print(defs,  'os_fs_remove_std()');
    npw2, uid = getNPW2Connection(defs);

    
    os_no_file_system(npw2,uid);
    remove_from_base_project(defs,"ivfsserver_module");

    servdir = os.path.join("modules","ghs","vfs_server");
    macroservdir = os.path.join("$__OS_DIR",servdir);
    absservdir = os.path.join(defs["RTOS_DIR"],servdir);

    setstr = "-I" + macroservdir;
    unset_in_base_project(defs,setstr);

    setstr = ":sourceDir=" + macroservdir;
    unset_in_base_project(defs,setstr);

    if (defs.has_key("ABS_VEL_FILE_NAME")):
	if (os.access(defs["ABS_VEL_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_vel_file(defs);
	
	    os.write(fd,"deleteas ivfsserver_module\n");	
	   
	    close_vel_file(defs,fd,fname);
	
		
    npw2.DeleteGuiNodes(uid);
#end os_fs_remove_std()

def os_generic_add_std(defs,basename,servdir):
    macroservdir = os.path.join("$__OS_DIR",servdir);
    absservdir = os.path.join(defs["RTOS_DIR"],servdir);
    
    setstr = "-I" + macroservdir;
    set_in_project(defs,setstr);

    setstr = ":sourceDir=" + macroservdir;
    set_in_project(defs,setstr);
    
    absname = os.path.join(absservdir,basename);
    create_gpj_file_add_into(defs,"Program",absname);
    
#end os_generic_add_std


def os_generic_remove_std(defs,basename,servdir):
    macroservdir = os.path.join("$__OS_DIR",servdir);

    remove_from_base_project(defs,basename);
    
    setstr = "-I" + macroservdir;
    unset_in_base_project(defs,setstr);

    setstr = ":sourceDir=" + macroservdir;
    unset_in_base_project(defs,setstr);

    if (defs.has_key("ABS_VEL_FILE_NAME")):
	if (os.access(defs["ABS_VEL_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_vel_file(defs);
	
	    writestr = "deleteas " + basename + "\n";
	    os.write(fd,writestr);	
	   
	    close_vel_file(defs,fd,fname);
			
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_generic_remove_std()

def os_itcpip_tf_name_add_std(defs):
    verbose_print(defs,  'os_itcpip_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
      
    servdir = os.path.join("tcpip","modules","tcpip");
    os_generic_add_std(defs,"itcpip_module",servdir);
    # queue integrate commands
    fd,fname = start_vel_file(defs);

    os.write(fd,"addas itcpip_module itcpip_module C\n");	
    os.write(fd,"setcurrentas itcpip_module\n");

    os.write(fd,"setcurrentobject Task Initial itcpip_module\n");			
    os.write(fd,"setattr StartIt true\n");

    close_vel_file(defs,fd,fname);
	
#end os_itcpip_tf_name_add_std()


def os_itcpip_remove_std(defs):
    verbose_print(defs,  'os_itcpip_remove_std()');
    servdir = os.path.join("tcpip","modules","tcpip");
    os_generic_remove_std(defs,"itcpip_module",servdir);
 
#end os_itcpip_remove_std()

def os_posix_net_server_example_tf_name_add_std(defs):
    verbose_print(defs,  'os_posix_net_server_example_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
     
    servdir = os.path.join("examples","NetworkServer");
    os_generic_add_std(defs,"posix_net_server_example",servdir);

    # queue integrate commands
    fd,fname = start_vel_file(defs);

    os.write(fd,"addas posix_net_server_example posix_net_server_example C\n");	
    os.write(fd,"setcurrentas posix_net_server_example\n");
 
    os.write(fd,"setattr MemoryPoolSize 0x40000\n");
    os.write(fd,"setattr HeapSize 0x80000\n");
    os.write(fd,"setcurrentobject Task Initial posix_net_server_example\n");			
    os.write(fd,"setattr StartIt true\n");

    close_vel_file(defs,fd,fname);
	
#end os_posix_net_server_example_tf_name_add_std()


def os_posix_net_server_example_remove_std(defs):
    verbose_print(defs,  'os_posix_net_server_example_remove_std()');
    servdir = os.path.join("examples","NetworkServer");
    os_generic_remove_std(defs,"posix_net_server_example",servdir);
#end os_posix_net_server_example_remove_std

def os_ftp_server_tf_name_add_std(defs):
    verbose_print(defs,  'os_ftp_server_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
     
    servdir = os.path.join("tcpip","modules","ftpserver");
    os_generic_add_std(defs,"iftpserver_module",servdir);

    # queue integrate commands
    fd,fname = start_vel_file(defs);

    os.write(fd,"addas iftpserver_module iftpserver_module C\n");	
    os.write(fd,"setcurrentas iftpserver_module\n");

    os.write(fd,"setcurrentobject Task Initial iftpserver_module\n");			
    os.write(fd,"setattr StartIt true\n");

    close_vel_file(defs,fd,fname);
	
#end os_ftp_server_tf_name_add_std()


def os_ftp_server_remove_std(defs):
    verbose_print(defs,  'os_ftp_server_remove_std()');
    servdir = os.path.join("tcpip","modules","ftpserver");
    os_generic_remove_std(defs,"iftpserver_module",servdir);
#end os_ftp_server_remove_std

def os_fs_copy_tf_name_add_std(defs):
    verbose_print(defs,  'os_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
 
    os_has_file_system(npw2,uid);
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);    
    create_gpj_file_add_into(defs,"Program",projbasestr);

    set_component_name(defs,"velosity_os_modules_file_system_copy");

    set_in_project(defs,"-DVFS_NO_MAP");
    set_in_project(defs,"-livfsserver");
    set_in_project(defs,"-lshm_client");

    # add link map
    add_virt_linkmap(defs);

    # queue integrate commands
    fsvelfile = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".vel");
    fd,fname = start_new_vel_file(defs);

    os.write(fd,"nokernel\n");
    os.write(fd,"noreopen\n");
    writestr = "addas " + defs["tf_name"] + " " + defs["tf_name"] + " C\n";
    os.write(fd,writestr);
    writestr ="setcurrentas " + defs["tf_name"] + "\n"
    os.write(fd,writestr);

    os.write(fd,"setattr MemoryPoolSize 0x120000\n");
    writestr = "setcurrentobject Task Initial " + defs["tf_name"] + "\n"
    os.write(fd,writestr);			
    os.write(fd,"setattr StartIt true\n");

    close_vel_file_saveas(defs,fd,fname,fsvelfile);

    fd,fname = start_vel_file(defs);
    os.write(fd,"clearcurrentobject\n");
    relfsvelfile =defs["tf_name"]+".vel" ;
    writestr = "addinclude " + relfsvelfile + "\n";
    os.write(fd,writestr);
    os.write(fd,"addstring \n");
    close_vel_file(defs,fd,fname);
    
    npw2.DefineLocalVariable(uid,"LAST_FS_NAME",defs["tf_name"]);

    fromname = os.path.join(defs["RTOS_DIR"],"modules","ghs","vfs_server","vfs_main.c");
    defs["ABS_SRC_NAME"] = fromname;
    copy_file_into_project(defs);
    
    npw2.ShowDialog(uid,"EditVELFSClients");
#end os_fs_copy_tf_name_add_std()

def os_fs_copy_paste_link_std(defs):
    fd,fname = start_vel_file(defs);
    os.write(fd,"clearcurrentobject\n");
   
    fsvelfile =re.sub("\.gpj",".vel",defs["COPY_FS"]);
    writestr = "addinclude " + fsvelfile + "\n";
    os.write(fd,writestr);
    os.write(fd,"addstring \n");
    close_vel_file(defs,fd,fname);

    
    npw2, uid = getNPW2Connection(defs);
    os_has_file_system(npw2,uid);
# end os_fs_copy_paste_link_std


def os_fs_copy_paste_local_std(defs):
    verbose_print(defs,  'os_fs_copy_paste_local_std');
    dirname, basename = os.path.split(defs["COPY_FS"]);
    newfsname = os.path.join(defs["PROJ_DIR"],basename);
    
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
 
    os_has_file_system(npw2,uid);

    # copy all the files for now- we should do this by reading the build file?
    copy_file(defs,defs["COPY_FS"],newfsname);
    oldf = re.sub("\.gpj",".vel",defs["COPY_FS"]);
    fsvelfile =re.sub("\.gpj",".vel",newfsname);
    copy_file(defs,oldf,fsvelfile);

    newfsname = re.sub("\.gpj","",newfsname);
    add_gpj_to_base_project(defs,"Program",newfsname);
   
    # add to vel file
    fd,fname = start_vel_file(defs);
    os.write(fd,"clearcurrentobject\n");
    relfsvelfile =defs["tf_name"]+".vel" ;
    writestr = "addinclude " + relfsvelfile + "\n";
    os.write(fd,writestr);
    os.write(fd,"addstring \n");
    close_vel_file(defs,fd,fname);
# end os_fs_copy_paste_local_std


def os_fs_copy_paste_parent_local_std(defs):
    verbose_print(defs,  'os_fs_copy_paste_parent_local_std');
    dirname, basename = os.path.split(defs["COPY_FS"]);
    newfsname = os.path.join(defs["PROJ_DIR"],basename);
    
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);   
    os_has_file_system(npw2,uid);
    # copy all the files for now- we should do this by reading the build file?
    copy_file(defs,defs["COPY_FS"],newfsname);

    oldf = re.sub("\.gpj",".vel",defs["COPY_FS"]);
    fsvelfile =re.sub("\.gpj",".vel",newfsname);
    copy_file(defs,oldf,fsvelfile);
# end os_fs_copy_paste_parent_local_std

def os_fs_copy_parent_tf_name_edit_std(defs):
    verbose_print(defs,  'os_fs_copy_parent_tf_name_edit_std');
#end os_fs_copy_parent_tf_name_edit_std

def os_fs_copy_posix_add_std(defs):
    verbose_print(defs,  'os_fs_copy_posix_add_std');
    
    set_component_name(defs,"velosity_os_modules_file_system_copy_posix");
    set_in_project(defs,"-lposix_authclient");

    
    npw2, uid = getNPW2Connection(defs);
    npw2.AddChildToComponent(uid,"velosity_os_modules_file_system_mntpoint","/","velosity_os_modules_file_system_mnttable",0);
    
    npw2.OverrideAnyChildAttribute(uid,"/","tf_rdname","ramroot");
    npw2.OverrideAnyChildAttribute(uid,"/","tf_rdsize","512k");
    npw2.OverrideAnyChildAttribute(uid,"/","bs_phys","0");
    npw2.OverrideAnyChildAttribute(uid,"/","bs_rd","1");
    npw2.OverrideAnyChildAttribute(uid,"/","bs_nfs","0");

    
#end os_fs_copy_posix_add_std

def os_fs_copy_remove_std(defs):
    verbose_print(defs,  'os_fs_copy_remove_std()');
    npw2, uid = getNPW2Connection(defs);
    
    absfs = re.sub("\.gpj","",defs["tf_diskname"]);
    remove_from_base_project(defs,absfs);
    os_no_file_system(npw2,uid);

    if (defs.has_key("ABS_VEL_FILE_NAME")):
	if (os.access(defs["ABS_VEL_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_vel_file(defs);
	    fsvelfile =re.sub("\.gpj",".vel",defs["tf_diskname"]);
	
	    verbose_print(defs,  fsvelfile);
	    
	# one of these will be in here, either abs or no path
	    writestr = "deleteinclude " + fsvelfile + "\n"
	    os.write(fd,writestr);	
	
	    relfsvelfile =defs["tf_name"]+".vel" ;
	    verbose_print(defs,  relfsvelfile);
	    writestr = "deleteinclude " + relfsvelfile + "\n"
	    os.write(fd,writestr);	
	 
	    close_vel_file(defs,fd,fname);
	
		
    npw2.DeleteGuiNodes(uid);
#end os_fs_copy_remove_std

def os_fs_copy_delete_std(defs):
    verbose_print(defs,  'os_fs_copy_delete_std()');

    fname = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    os.remove(fname);
    fsvelfile = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".vel");
    
    os_fs_copy_remove_std(defs);
    # must be after the integrate deleteinclude , because it tries to open the included file
    os.remove(fsvelfile);
#end os_fs_copy_delete_std

def os_fs_copy_readin_std(defs):
    verbose_print(defs,  'os_fs_copy_readin_std()');
    verbose_print(defs, defs["tf_diskname"]);

    absbase = defs["tf_diskname"];
    fsbase = defs["tf_name"]+".gpj"

    verbose_print(defs, fsbase);

    absdir = re.sub(fsbase,"",absbase);
    verbose_print(defs, absdir);

    absdir2 = os.path.abspath(absdir);
    projdir2 = os.path.abspath(defs["PROJ_DIR"]);
    verbose_print(defs, absdir2);
    verbose_print(defs, projdir2);
    if (projdir2 != absdir2):
	verbose_print(defs,  "not a match");
	npw2, uid = getNPW2Connection(defs);
	npw2.DefineLocalVariable(uid,"IS_COPY","1");
#end os_fs_copy_readin_std

def os_fs_kernel_add_std(defs):
    verbose_print(defs,  'os_fs_kernel_add_std');
    
    npw2, uid = getNPW2Connection(defs);
    set_in_project(defs,"-livfsserver");
    npw2.AddGuiNodes(uid,"File System (Kernel, User Configured)");
    
    os_has_file_system(npw2,uid);
    npw2.ShowDialog(uid,"EditVELFSClients");
#end os_fs_kernel_add_std

def os_fs_kernel_delete_std(defs):
    verbose_print(defs,  'os_fs_kernel_delete_std');
    
    npw2, uid = getNPW2Connection(defs);
    os_no_file_system(npw2,uid);
    unset_in_project(defs,"-livfsserver");
    npw2.DeleteGuiNodes(uid);
#end os_fs_kernel_delete_std


def os_dist_paste_parent_local_std(defs):
    verbose_print(defs,  'os_dist_paste_parent_local_std');
    npw2, uid = getNPW2Connection(defs);
    npw2.CancelChildrenActions(uid,1);
#end os_dist_paste_parent_local_std
