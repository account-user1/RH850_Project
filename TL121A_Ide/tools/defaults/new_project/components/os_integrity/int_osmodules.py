import ide;
import os;
#import tempfile;
import shutil;
from int_utils import *;
from utils import *;
from projects import *;
import re;

def os_has_file_system(npw2,uid):
    npw2.DefineProjectVariable(uid,"HAS_FILE_SYSTEM","TRUE");

def os_no_file_system(npw2,uid):
    npw2.DefineProjectVariable(uid,"HAS_FILE_SYSTEM","FALSE");


def os_add_include(fd, incname):
    writestr = "addinclude " + incname + "\n";
    os.write(fd,writestr);
    os.write(fd,"addstring \n");
	    
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
    #set_in_base_project(defs,setstr);
    set_in_project(defs,setstr);
    
    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -set :sourceDir=$RTOS_DIR/modules/ghs/vfs_server" }
    setstr = ":sourceDir=" + macroservdir;
    #set_in_base_project(defs,setstr);
    set_in_project(defs,setstr);
    
    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -add_to_back -filetype \"Program\" \"ivfsserver_module.gpj\"" }
    #add_gpj_to_base_project(defs,"Program","ivfsserver_module");
    abs_file_name = os.path.join(absservdir,"ivfsserver_module");
    create_gpj_file_add_into(defs,"Program",abs_file_name);

    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -set -I$RTOS_DIR/modules/ghs/vfs_server" }
#    vfsservdir = os.path.join(defs["RTOS_DIR"],"modules","ghs","vfs_server");
#    setstr = "-I" + vfsservdir;
#    set_in_base_project(defs,setstr);
#
#    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -set :sourceDir=$RTOS_DIR/modules/ghs/vfs_server" }
#    setstr = ":sourceDir=" + vfsservdir;
#    set_in_base_project(defs,setstr);
# 
    # queue integrate commands
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	
	    os.write(fd,"addas ivfsserver_module ivfsserver_module C\n");	
	    os.write(fd,"setcurrentas ivfsserver_module\n");
	
	    os.write(fd,"setattr MemoryPoolSize 0x120000\n");
	    os.write(fd,"setcurrentobject Task Initial ivfsserver_module\n");			
	    os.write(fd,"setattr StartIt true\n");
	
	    close_int_file(defs,fd,fname);

    npw2.ShowDialog(uid,"EditINTFSClients");
#end os_fs_tf_name_add_std()

def os_fs_dist_remove_std(defs):
    verbose_print(defs,  'os_fs_remove_std()');
    npw2, uid = getNPW2Connection(defs);

    
    os_no_file_system(npw2,uid);
    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -remove \"ivfsserver_module.gpj\"" }
    remove_from_base_project(defs,"ivfsserver_module");
    
    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -unset -I$RTOS_DIR/modules/ghs/vfs_server" }
    servdir = os.path.join("modules","ghs","vfs_server");
    macroservdir = os.path.join("$__OS_DIR",servdir);
    absservdir = os.path.join(defs["RTOS_DIR"],servdir);
    setstr = "-I" + macroservdir;
    unset_in_base_project(defs,setstr);

    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -unset :sourceDir=$RTOS_DIR/modules/ghs/vfs_server" }
    setstr = ":sourceDir=" + macroservdir;
    unset_in_base_project(defs,setstr);

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_int_file(defs);
	
	    os.write(fd,"deleteas ivfsserver_module\n");	
	   
	    close_int_file(defs,fd,fname);
	
		
    npw2.DeleteGuiNodes(uid);
#end os_fs_remove_std()

def os_generic_add_std(defs,basename,servdir):
    macroservdir = os.path.join("$__OS_DIR",servdir);
    absservdir = os.path.join(defs["RTOS_DIR"],servdir);
    
    setstr = "-I" + macroservdir;
    #set_in_base_project(defs,setstr);
    set_in_project(defs,setstr);

    setstr = ":sourceDir=" + macroservdir;
    #set_in_base_project(defs,setstr);
    set_in_project(defs,setstr);
    
    absname = os.path.join(absservdir,basename);
    #add_gpj_to_base_project(defs,"Program",absname);
    create_gpj_file_add_into(defs,"Program",absname);
    
#end os_generic_add_std


def os_generic_remove_std(defs,basename,servdir):
    
    macroservdir = os.path.join("$__OS_DIR",servdir);
    remove_from_base_project(defs,basename);
    
    setstr = "-I" + macroservdir;
    unset_in_base_project(defs,setstr);

    setstr = ":sourceDir=" + macroservdir;
    unset_in_base_project(defs,setstr);

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_int_file(defs);
	
	    writestr = "deleteas " + basename + "\n";
	    os.write(fd,writestr);	
	   
	    close_int_file(defs,fd,fname);
			
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_generic_remove_std()

def os_generic_ip_stack_get_path(defs):
    servdir = None;
    basename = None;
    if (defs.has_key("STACKNAME")):
	basename = defs["STACKNAME"];
	if (basename == "itcpip_module"):
	    servdir = os.path.join("tcpip","modules","tcpip");
	elif (defs["STACKNAME"] == "ip4server_module"):
	    servdir = os.path.join("modules","ghs","ghnet2","source","kernel","integrity","ip4server");
	elif (defs["STACKNAME"] == "ip46server_module"):
	    servdir = os.path.join("modules","ghs","ghnet2","source","kernel","integrity","ip46server");	    
	elif (defs["STACKNAME"] == "ip46router_module"):
	    servdir = os.path.join("modules","ghs","ghnet2","source","kernel","integrity","ip46routerserver");	    
    return servdir, basename;

def os_generic_ip_stack_add_std(defs):
    verbose_print(defs,  'os_generic_ip_stack_add_std()');
    npw2, uid = getNPW2Connection(defs);

    servdir, basename = os_generic_ip_stack_get_path(defs);
    npw2.AddGuiNodes(uid,basename);
    #servdir = os.path.join("tcpip","modules","tcpip");
    #os_generic_add_std(defs,"itcpip_module",servdir);
    os_generic_add_std(defs,basename,servdir);
    # queue integrate commands
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);

	    writestr = "addas " + basename + " " + basename + " C\n";
	    os.write(fd,writestr);
	    writestr = "setcurrentas " + basename +  "\n"
	    os.write(fd,writestr);

	    if (basename == "ip4server_module" or basename == "ip46server_module" or basename == "ip46router_module" ):
		os.write(fd,"setattr HeapSize 0xa0000\n");
		
	    writestr = "setcurrentobject Task Initial " + basename +  "\n"
	    os.write(fd,writestr);
	    os.write(fd,"setattr StartIt true\n");
	
	    close_int_file(defs,fd,fname);
	
#end os_generic_ip_stack_add_std()


def os_generic_ip_stack_remove_std(defs):
    verbose_print(defs,  'os_generic_ip_stack_remove_std()');    
    servdir, basename = os_generic_ip_stack_get_path(defs);
    os_generic_remove_std(defs,basename,servdir);
 
#end os_generic_ip_stack_remove_std()


def os_net_server_module_tf_name_add_std(defs):
    verbose_print(defs,  'os_net_server_module_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
      
    servdir = os.path.join("modules","ghs","net_server");
    os_generic_add_std(defs,"net_server_module",servdir);
    # queue integrate commands
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	
	    os.write(fd,"addas net_server_module net_server_module C\n");	
	    os.write(fd,"setcurrentas net_server_module\n");
	    os.write(fd,"setattr MemoryPoolSize 0x20000\n");
	    os.write(fd,"setcurrentobject Task Initial net_server_module\n");			
	    os.write(fd,"setattr StartIt true\n");
	
	    close_int_file(defs,fd,fname);
	
#end os_net_server_module_tf_name_add_std()


def os_net_server_module_remove_std(defs):
    verbose_print(defs,  'os_net_server_module_remove_std()');
    servdir = os.path.join("modules","ghs","net_server");
    os_generic_remove_std(defs,"net_server_module",servdir);
 
#end os_itcpip_remove_std()


def os_posix_net_server_example_tf_name_add_std(defs):
    verbose_print(defs,  'os_posix_net_server_example_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
     
    servdir = os.path.join("examples","NetworkServer");
    os_generic_add_std(defs,"posix_net_server_example",servdir);

    # queue integrate commands
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	
	    os.write(fd,"addas posix_net_server_example posix_net_server_example C\n");	
	    os.write(fd,"setcurrentas posix_net_server_example\n");
	 
	    os.write(fd,"setattr MemoryPoolSize 0x40000\n");
	    os.write(fd,"setattr HeapSize 0x80000\n");
	    os.write(fd,"setcurrentobject Task Initial posix_net_server_example\n");			
	    os.write(fd,"setattr StartIt true\n");
	
	    close_int_file(defs,fd,fname);
	
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
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	
	    os.write(fd,"addas iftpserver_module iftpserver_module C\n");	
	    os.write(fd,"setcurrentas iftpserver_module\n");
	
	    os.write(fd,"setcurrentobject Task Initial iftpserver_module\n");			
	    os.write(fd,"setattr StartIt true\n");
	
	    close_int_file(defs,fd,fname);
	
#end os_ftp_server_tf_name_add_std()

def os_web_server_tf_name_add_std(defs):
    verbose_print(defs,  'os_web_server_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    npw2.AddGuiNodes(uid,defs["tf_name"]);
     
    servdir = os.path.join("modules","ghs","ghnet2-services", "webserver");
    os_generic_add_std(defs,"webserver2_module",servdir);

    # queue integrate commands
    if (defs.has_key("ABS_INT_FILE_NAME")):
        if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
            fd,fname = start_int_file(defs);
        
            os.write(fd,"addas webserver2_module webserver2_module C\n");       
            os.write(fd,"setcurrentas webserver2_module\n");
        
            os.write(fd,"setcurrentobject Task Initial webserver2_module\n");                   
            os.write(fd,"setattr StartIt true\n");
            os.write(fd,"setattr StackLength 2P\n");
        
            close_int_file(defs,fd,fname);
        
#end os_web_server_tf_name_add_std()

def os_web_server_remove_std(defs):
    verbose_print(defs,  'os_web_server_remove_std()');
    servdir = os.path.join("modules","ghs","ghnet2-services", "webserver");
    os_generic_remove_std(defs,"webserver2_module",servdir);
#end os_web_server_remove_std

def os_ftp_server_remove_std(defs):
    verbose_print(defs,  'os_ftp_server_remove_std()');
    servdir = os.path.join("tcpip","modules","ftpserver");
    os_generic_remove_std(defs,"iftpserver_module",servdir);
#end os_ftp_server_remove_std

def os_fs_copy_tf_name_edit_std(defs):
    verbose_print(defs,  'os_tf_name_edit_std()');
    fromname = os.path.join(defs["PROJ_DIR"],defs["LAST_FS_COPY_TF_NAME"]+".gpj");
    toname = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
 
    rename_gpj(defs,None,fromname,toname,defs["LAST_FS_COPY_TF_NAME"]+".gpj",defs["tf_name"]+".gpj");
    
    # queue integrate commands
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	    writestr = "deleteinclude " + defs["LAST_FS_COPY_TF_NAME"] + ".int" + "\n"
	    os.write(fd,writestr);      
	    close_int_file(defs,fd,fname);

    fromname = os.path.join(defs["PROJ_DIR"],defs["LAST_FS_COPY_TF_NAME"]+".int");
    toname = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".int");
    rename_file(defs,fromname,toname,None,None);

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	    incname = defs["tf_name"] + ".int";
	    os_add_include(fd, incname);
	    close_int_file(defs,fd,fname);

    # need to do this in a seperate stage
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	    intstr = "setcurrentas " + defs["LAST_FS_COPY_TF_NAME"] + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	    intstr = "renamecurrent " + defs["tf_name"] + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	    intstr = "setattr Filename " + defs["tf_name"] + "\n";
	    verbose_print(defs, intstr);
	    os.write(fd,intstr);
	
	    close_int_file(defs,fd,fname);

    npw2, uid = getNPW2Connection(defs);
    
    npw2.OverrideAttribute(uid,"tf_name",toname);
#end os_fs_copy_tf_name_edit_std

def os_fs_copy_tf_name_add_std(defs):
    verbose_print(defs,  'os_tf_name_add_std()');
    npw2, uid = getNPW2Connection(defs);

    
    npw2.AddGuiNodes(uid,defs["tf_name"]);
 
    os_has_file_system(npw2,uid);
    #5 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -add_to_back -filetype \"Program\" \"$tf_name.gpj\"" }
    #add_gpj_to_base_project(defs,"Program",defs["tf_name"]);
 
    #5 += { "system ${__MULTI_DIR__}/gpjmodify $PROJ_DIR/$tf_name.gpj -create \"Program\" -target $TARGET" }
    projbasestr = os.path.join(defs["ABS_PROJ_DIR"],defs["tf_name"]);
    projbasename = projbasestr + ".gpj"
    
    if (not os.access(projbasename, os.F_OK)):
	# make new one    
	create_gpj_file_add_into(defs,"Program",projbasestr);

	set_component_name(defs,"integrity_os_modules_file_system_copy");
    
	set_in_project(defs,"-DVFS_NO_MAP");
	set_in_project(defs,"-livfsserver");
	set_in_project(defs,"-lshm_client");
    
	# add link map
	add_virt_linkmap(defs);
    
	fromname = os.path.join(defs["RTOS_DIR"],"modules","ghs","vfs_server","vfs_main.c");
	defs["ABS_SRC_NAME"] = fromname;
	copy_file_into_project(defs);

	# queue integrate commands
	fsintfile = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".int");
	fd,fname = start_new_int_file(defs,fsintfile);
    
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
    
	close_int_file_saveas(defs,fd,fname,fsintfile);
    
    else:
	# add it back in
	create_gpj_file_add_into(defs,"Program",projbasestr);
	

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    fd,fname = start_int_file(defs);
	    os.write(fd,"clearcurrentobject\n");
	    relfsintfile =defs["tf_name"]+".int" ;# os.path.join(".",defs["tf_name"]+".int");
	    os_add_include(fd,relfsintfile);
	    close_int_file(defs,fd,fname);
    
    npw2.DefineLocalVariable(uid,"LAST_FS_NAME",defs["tf_name"]);

    
    npw2.ShowDialog(uid,"EditINTFSClients");
#end os_fs_copy_tf_name_add_std()

def figure_out_possible_rel_directory(defs, copy_fs_gpj):
    cp_dir = os.path.abspath(os.path.dirname(copy_fs_gpj));
    top_dir = os.path.abspath(defs["TOP_PROJ_DIR"]);
    myproj_dir = os.path.abspath(os.path.dirname(defs["ABS_INT_FILE_NAME"]));
    dirlist = [ cp_dir, myproj_dir];
    prefix = os.path.commonprefix(dirlist);
    
    verbose_print(defs, cp_dir );
    verbose_print(defs, top_dir );
    verbose_print(defs, myproj_dir );
    verbose_print(defs, prefix );

    if (prefix == None):
	use_common_dir = None;
    # because it's probably chopped funny not on a dir line (src80, src81->src8, which could exist independently)
    prefix = os.path.dirname(prefix);
    verbose_print(defs,prefix);
    if (os.access(prefix,os.F_OK)):
	use_common_dir = prefix;

    fsintfile = re.sub("\.gpj",".int",copy_fs_gpj);
    if (use_common_dir != None):
	verbose_print(defs,use_common_dir);
	reldir = None;
	while (myproj_dir and myproj_dir != use_common_dir):
	    verbose_print(defs,myproj_dir);
	    if (reldir == None):
		reldir = "..";
	    else:
		reldir = os.path.join(reldir,"..");
	    myproj_dir = os.path.dirname(myproj_dir);
	    verbose_print(defs,reldir);

	verbose_print(defs,reldir);
	dirstr = os.path.join(use_common_dir,"");
	verbose_print(defs,dirstr);
	dirlen = len(dirstr);
	cp_dir = cp_dir[dirlen:];
	#cp_dir = re.sub(dirstr,"",cp_dir);

	verbose_print(defs,cp_dir);
	cp_file = os.path.join(reldir,cp_dir,os.path.basename(fsintfile));
	verbose_print(defs,cp_file);
	fsintfile = cp_file;
    return fsintfile;


def os_fs_copy_paste_link_std(defs):
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    fsintfile = figure_out_possible_rel_directory(defs, defs["COPY_FS"]);
	
	    fd,fname = start_int_file(defs);
	    os.write(fd,"clearcurrentobject\n");
	   
	    #fsintfile =re.sub("\.gpj",".int",defs["COPY_FS"]);
	    
	    os_add_include(fd,fsintfile);
	    close_int_file(defs,fd,fname);

    
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

    oldf = re.sub("\.gpj",".int",defs["COPY_FS"]);
    fsintfile =re.sub("\.gpj",".int",newfsname);
    copy_file(defs,oldf,fsintfile);

    newfsname = re.sub("\.gpj","",newfsname);
    add_gpj_to_base_project(defs,"Program",newfsname);
    # fix link map reference
    
#    if (defs["copyResources"] == "1"):
#	#10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$tf_name.gpj -add_to_back $(BASE_PROJ_NAME)_INTEGRITY.ld" }
#	linkmapname =  defs["BASE_PROJ_NAME"] + "_INTEGRITY.ld";
#	lastlinkmapname = defs["COPY_BASE_PROJ_NAME"] + "_INTEGRITY.ld";
#	print lastlinkmapname;
#	print linkmapname;
#	replace_in_project(defs,lastlinkmapname,linkmapname);

   
    # add to int file
    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):    
	    fd,fname = start_int_file(defs);
	    os.write(fd,"clearcurrentobject\n");
	    relfsintfile =defs["tf_name"]+".int" ;# os.path.join(".",defs["tf_name"]+".int");
	    os_add_include(fd,relfsintfile);
	    close_int_file(defs,fd,fname);
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

    oldf = re.sub("\.gpj",".int",defs["COPY_FS"]);
    fsintfile =re.sub("\.gpj",".int",newfsname);
    copy_file(defs,oldf,fsintfile);
# end os_fs_copy_paste_parent_local_std

def os_fs_copy_parent_tf_name_edit_std(defs):
    verbose_print(defs,  'os_fs_copy_parent_tf_name_edit_std');
#    if (defs["copyResources"] == "1"):
#	replace_in_project(defs,defs["LAST_V_LINKFILE"],defs["V_LINKFILE"]);
#end os_fs_copy_parent_tf_name_edit_std

#def os_fs_copy_parent_bs_shared_objs_edit_std(defs):
#    print 'os_fs_copy_parent_bs_shared_objs_edit_std'    
#    parent_bs_shared_objs_fixup(defs);
##end os_fs_copy_parent_bs_shared_objs_edit_std

def os_fs_copy_posix_add_std(defs):
    verbose_print(defs,  'os_fs_copy_posix_add_std');
    
    set_component_name(defs,"integrity_os_modules_file_system_copy_posix");
    set_in_project(defs,"-lposix_authclient");

    
    npw2, uid = getNPW2Connection(defs);
    npw2.AddChildToComponent(uid,"integrity_os_modules_file_system_mntpoint","/","integrity_os_modules_file_system_mnttable",0);
    
    npw2.OverrideAnyChildAttribute(uid,"/","tf_rdname","ramroot");
    npw2.OverrideAnyChildAttribute(uid,"/","tf_rdsize","512k");
    npw2.OverrideAnyChildAttribute(uid,"/","bs_phys","0");
    npw2.OverrideAnyChildAttribute(uid,"/","bs_rd","1");
    npw2.OverrideAnyChildAttribute(uid,"/","bs_nfs","0");

    
#end os_fs_copy_posix_add_std

def os_fs_copy_remove_std(defs):
    verbose_print(defs,  'os_fs_copy_remove_std()');
    npw2, uid = getNPW2Connection(defs);
    
    #10 += { "system ${__MULTI_DIR__}/gpjmodify $TOP_PROJ_DIR/default.gpj @$PROJ_DIR/$BASE_PROJ_NAME.gpj -remove \"ivfsserver_module.gpj\"" }
    absfs = re.sub("\.gpj","",defs["tf_diskname"]);
    remove_from_base_project(defs,absfs);
    os_no_file_system(npw2,uid);

    if (defs.has_key("ABS_INT_FILE_NAME")):
	if (os.access(defs["ABS_INT_FILE_NAME"],os.F_OK)):
	    # queue integrate commands
	    fd,fname = start_int_file(defs);
	  #  fsintfile = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".int");
	    #fsintfile =re.sub("\.gpj",".int",defs["tf_diskname"]);
	    fsintfile = figure_out_possible_rel_directory(defs, defs["tf_diskname"]);

	    verbose_print(defs,  fsintfile);
	    
	# one of these will be in here, either abs or no path
	    #writestr = "deleteas " + defs["tf_name"] + "\n"
	    writestr = "deleteinclude " + fsintfile + "\n"
	    os.write(fd,writestr);	
	
	    relfsintfile =defs["tf_name"]+".int" ;# os.path.join(".",defs["tf_name"]+".int");
	    verbose_print(defs,  relfsintfile);
	    writestr = "deleteinclude " + relfsintfile + "\n"
	    os.write(fd,writestr);	
	 
	    close_int_file(defs,fd,fname);
	
		
    npw2.DeleteGuiNodes(uid);
#end os_fs_copy_remove_std

def os_fs_copy_delete_std(defs):
    verbose_print(defs,  'os_fs_copy_delete_std()');

#    absbase = defs["tf_diskname"];
#    fsbase = defs["tf_name"]+".gpj"
#    absdir = re.sub(fsbase,"",absbase);
#    print absdir;
#    if (defs["PROJ_DIR"] != absdir):
#	print "cannot delete linked file system";
#	os_fs_copy_remove_std(defs);
#	return;
	
    fname = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".gpj");
    delete_file_from_disk(defs,fname);
    fsintfile = os.path.join(defs["PROJ_DIR"],defs["tf_name"]+".int");
    
    os_fs_copy_remove_std(defs);
    # must be after the integrate deleteinclude , because it tries to open the included file    
    delete_file_from_disk(defs,fsintfile);
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
    npw2.ShowDialog(uid,"EditINTFSClients");
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
