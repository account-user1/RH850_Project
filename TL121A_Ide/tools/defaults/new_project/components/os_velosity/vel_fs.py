import ide;
import os;
import shutil;
from int_utils import *;
from utils import *;
import re;
import tempfile;

  
fstypes = { 'FFS': 'MOUNT_FFS',
            'ISO9660': 'MOUNT_CD9660',
            'NFS Client': 'MOUNT_NFS',
            'MSDOS FAT': 'MOUNT_MSDOS' }

            
fsmnt_opts_names = {    'MOUNT_FFS' : "msl_opts",
                        'MOUNT_CD9660' : "msl_cd9660opts",
                        'MOUNT_NFS' : "msl_nfsopts",
                        'MOUNT_MSDOS' : "msl_msdosfsopts" }
            
fsmnt_opts_names_by_type = {    'FFS' : "msl_opts",
                                'ISO9660' : "msl_cd9660opts",
                                'NFS Client' : "msl_nfsopts",
                                'MSDOS FAT' : "msl_msdosfsopts" }
    
def os_fsmnt_tf_mntfile_name_add_std(defs):
    verbose_print(defs,  'os_fsmnt_tf_mntfile_name_add_std()');
    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mntfile_name"]);

    if (not modify_file(defs,mntname)):
	return;
    mntf = gen_safe_open(mntname,"w+");
    if (not mntf):
	return;
	
    writestr(mntf,"/* This file was automatically generated by the MULTI Project Manager  */");
    writestr(mntf,"/* To configure mountpoints, right-click on the file then select       */");
    writestr(mntf,"/*   Modify Project -> Add INTEGRITY File System Mount Point           */");
    writestr(mntf,"\n");
    writestr(mntf,"#include <stdio.h>");
    writestr(mntf,"#include <sys/mnttab.h>");
    writestr(mntf,"\n\n");
    writestr(mntf,"vfs_MountEntry vfs_MountTable[] = {");
    writestr(mntf,"\t{NULL, NULL, NULL, NULL, 0, 0} /* Must end with NULL/0 entry */");
    writestr(mntf,"};");
       
    mntf.close();

    
    add_to_project(defs,defs["tf_mntfile_name"]);
#end os_fsmnt_tf_mntfile_name_add_std

def os_fsmnt_tf_mntfile_name_edit_std(defs):
    verbose_print(defs,  'os_fsmnt_tf_mntfile_name_edit_std()');
    absfromname = os.path.join(defs["PROJ_DIR"],defs["LAST_TF_MNTFILE_NAME"]);
    abstoname = os.path.join(defs["PROJ_DIR"],defs["tf_mntfile_name"]);
    
    rename_file(defs,absfromname,abstoname,defs["LAST_TF_MNTFILE_NAME"],defs["tf_mntfile_name"]);

    npw2, uid = getNPW2Connection(defs);
    
    npw2.OverrideAttribute(uid,"tf_diskname",abstoname);
#end os_fsmnt_tf_mntfile_name_edit_std

def os_fsmnt_tf_mntfile_name_delete_std(defs):
    verbose_print(defs,  'os_fsmnt_tf_mntfile_name_delete_std()');
    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mntfile_name"]);
    delete_file_from_disk(defs,mntname);

    remove_from_project(defs,defs["tf_mntfile_name"]);
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_fsmnt_tf_mntfile_name_delete_std

def os_fsmnt_add_std(defs):
    verbose_print(defs,  'os_fsmnt_add_std()');
    #npw2, uid = getNPW2Connection(defs);

    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_mntfile_name"]);
    if (not modify_file(defs,mntname)):
    	return;
	
    mntf = gen_safe_open(mntname,"rU");
    if (not mntf):
	return;

    lines = mntf.readlines();
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    tf = os.fdopen(tfd,"w+");
    
    for i in lines:
	newi1 = re.search("{NULL, NULL, NULL, NULL, 0, 0}",i);
	if (newi1 != None):
	    writestr(tf,"\t{");
	    #
	    os_fsmnt_pd_dev_add_std(defs,tf);
	    os_fsmnt_tf_dir_add_std(defs,tf);
	    os_fsmnt_pd_type_add_std(defs,tf);
	    os_fsmnt_options_add_std(defs,tf);
	    os_fsmnt_toptions_add_std(defs,tf);
	    #
	    writestr(tf,"\t\t0");
	    writestr(tf,"\t},");

	tf.write(i);

    tf.close();
    mntf.close();
    verbose_print(defs,  tfname);
    verbose_print(defs,  mntname);
    shutil.move(tfname,mntname);
    fix_perms(mntname);
#end os_fsmnt_add_std

def add_dev(defs):
    if ( defs["bt_phys"] == "on"):    
	if (defs["tf_slice"] == "" or defs["tf_slice"] == "All"):
	    slicestr = "\","
	else:
	    slicestr = ":" + defs["tf_slice"] + "\","
	newstr = "\t\t\"" + defs["pd_dev"] + slicestr;
	return newstr;
    elif ( defs["bt_rd"] == "on"):
	if (defs["tf_rdsize"] != "(null)"):
	    newstr = "\t\t\"<ram:" + defs["tf_rdsize"] + ">" + defs["tf_rdname"]+ ":a\",";
	else:
	    newstr = "\t\t\"<ram>" + defs["tf_rdname"]+ ":a\",";
	return newstr;
    elif ( defs["bt_nfs"] == "on"):
        newstr = "\t\t\"" + defs["tf_servname"] + ":" + defs["tf_sharename"] + "\",";
        return newstr;
    else:
	return "\t\tNULL,";
# end add_dev

def os_fsmnt_pd_dev_add_std(defs,mntf):
    verbose_print(defs,  'os_fsmnt_pd_dev_add_std_add_std_that_i_changed()');
    newstr = add_dev(defs);
    writestr(mntf,newstr);
#end os_fsmnt_pd_dev_add_std

def add_dir(defs):
    newstr = "\t\t\"" + defs["tf_dir"] + "\"," ;
    return newstr;
    
def os_fsmnt_tf_dir_add_std(defs,mntf):
    verbose_print(defs,  'os_fsmnt_tfdir_add_std_add_std()');
    
    newstr = add_dir(defs);
    writestr(mntf,newstr);
#end os_fsmnt_tf_dev_add_std

def add_type(defs):
    newstr = "\t\t" + fstypes[defs["pd_type"]] + "," ;
    return newstr;
    
def os_fsmnt_pd_type_add_std(defs,mntf):
    verbose_print(defs,  'os_fsmnt_pd_type_add_std_add_std()');
    
    newstr = add_type(defs);
    writestr(mntf,newstr);
#end os_fsmnt_pd_type_add_std

def add_opts(defs):
    mnt_opts_name = fsmnt_opts_names_by_type[defs["pd_type"]];
    opts_value = defs[mnt_opts_name];
    if (opts_value == "Use Defaults"):
	optstr = "NULL";
    elif (opts_value == "NULL"):
	optstr = "NULL";
    else:
	optstr = "\"" + opts_value + "\"" ;
    newstr = "\t\t" + optstr + "," ;
    return newstr;
    
def os_fsmnt_options_add_std(defs,mntf):
    verbose_print(defs,  'os_fsmnt_options_add_std()');

    newstr = add_opts(defs);
    writestr(mntf,newstr);
#end os_fsmnt_options_add_std

def add_topts(defs):
    newstr = "\t\t" + defs["msl_topts"] + "," ;
    return newstr;
    
def os_fsmnt_toptions_add_std(defs,mntf):
    verbose_print(defs,  'os_fsmnt_toptions_add_std()');
    newstr = add_topts(defs);
    writestr(mntf,newstr);
#end os_fsmnt_toptions_add_std


#def edit_sub(defs,oldstr,newstr):
#    mntname = os.path.join(defs["PROJ_DIR"], defs["tf_name"]);
#    mntf = open(mntname,"rU");
#
#    lines = mntf.readlines();
#    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
#    tf = os.fdopen(tfd,"w+");
#    
#    for i in lines:
#	newi1 = re.sub(oldstr,newstr,i);
#	tf.write(newi1);
#
#    tf.close();
#    #os.close(tfd);
#    mntf.close();
#    verbose_print(defs,  tfname);
#    verbose_print(defs,  mntname);
#    shutil.move(tfname,mntname); 

# function for fixing up the runtime placer variables
def os_fsmnt_vel(defs):
    verbose_print(defs,  'os_fsmnt_vel()');
    npw2, uid = getNPW2Connection(defs);
    os_fsmnt_guifixup(defs,npw2, uid, None, defs["pd_type"], defs["bt_rd"]);

def os_fsmnt_do_override(npw2, uid, mnt_name, attribute, value):
    if(mnt_name == None):
	npw2.OverrideAttribute(uid,attribute,value);
    else:
	npw2.OverrideChildAttribute(uid,mnt_name,attribute,value);

def os_fsmnt_guifixup(defs, npw2, uid, mnt_name, pd_type,bt_rd):
	verbose_print(defs,  'GUI fixup %s %s %s'  % (mnt_name, pd_type, bt_rd));
        if (pd_type == "NFS Client"):
		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_rd","off");
 		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_phys","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_nfs","on");
		npw2.MarkAttributeReadOnly(uid,"tf_sharename",0);
                npw2.MarkAttributeReadOnly(uid,"tf_servname",0);
        elif (pd_type != "FFS"):
		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_rd","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_phys","on");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_nfs","off");
		npw2.MarkAttributeReadOnly(uid,"pd_dev",0);
		if (pd_type == "ISO9660"):
		    os_fsmnt_do_override(npw2,uid,mnt_name,"tf_slice","All");
		    npw2.MarkAttributeReadOnly(uid,"tf_slice",1);
		else:
		    npw2.MarkAttributeReadOnly(uid,"tf_slice",0);
        else :
		os_fsmnt_do_override(npw2,uid,mnt_name,"bt_nfs","off");
                if(bt_rd == "on"):
		    os_fsmnt_do_override(npw2,uid,mnt_name,"bt_phys","off");
		    if (mnt_name != None):
			os_fsmnt_do_override(npw2,uid,mnt_name,"bt_rd","on");
			npw2.MarkAttributeReadOnly(uid,"tf_rdname",0);
                        npw2.MarkAttributeReadOnly(uid,"tf_rdsize",0);
		else:
		    os_fsmnt_do_override(npw2,uid,mnt_name,"bt_phys","on");
		    npw2.MarkAttributeReadOnly(uid,"pd_dev",0);
                    npw2.MarkAttributeReadOnly(uid,"tf_slice",0);
		    if (mnt_name != None):
			os_fsmnt_do_override(npw2,uid,mnt_name,"bt_rd","off");

        if (pd_type == "ISO9660"):
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_ffsopts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_nfsopts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_cd9660opts","on");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_msdosfsopts","off");
        elif (pd_type == "FFS"):
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_ffsopts","on");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_nfsopts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_cd9660opts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_msdosfsopts","off");
        elif (pd_type == "NFS Client"):
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_ffsopts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_nfsopts","on");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_cd9660opts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_msdosfsopts","off");
        else :
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_ffsopts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_nfsopts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_cd9660opts","off");
		os_fsmnt_do_override(npw2,uid,mnt_name,"bs_msdosfsopts","on");
        
#end os_fsmnt_guifixup

def os_fsmnt_edit_std(defs):
    verbose_print(defs,  'os_fsmnt_edit_std()');
    num = fs_find_mountpoint_number_by_name(defs,defs["tf_diskname"],defs["LAST_TF_DIR"]);
    fs_edit_mountpoint_by_number(defs["tf_diskname"],num,defs);
#end os_fsmnt_edit_std

def os_fsmnt_delete_std(defs):
    verbose_print(defs,  'os_fsmnt_delete_std()');
    num = fs_find_mountpoint_number_by_name(defs,defs["tf_diskname"],defs["LAST_TF_DIR"]);
    fs_delete_mountpoint_by_number(defs["tf_diskname"],num,defs);
    npw2, uid = getNPW2Connection(defs);
    npw2.DeleteGuiNodes(uid);
#end os_fsmnt_delete_std

def os_fsmnt_comment_std(defs):
    verbose_print(defs,  'os_fsmnt_comment_std()');
#end os_fsmnt_comment_std

def os_fsmnt_uncomment_std(defs):
    verbose_print(defs,  'os_fsmnt_uncomment_std()');
#end os_fsmnt_uncomment_std

def os_fsmnt_paste_local_std(defs):
    verbose_print(defs,  'os_fsmnt_paste_local_std()');
    # if I'm the same parent, change the tf_dir (won't read in correctly)
    verbose_print(defs,  defs["tf_diskname"]);
    verbose_print(defs,  defs["COPY_MNTFILE"]);
    if (defs["tf_diskname"] == defs["COPY_MNTFILE"]):
	defs["tf_dir"] = defs["tf_dir"] + "_2";
    os_fsmnt_add_std(defs);
#end os_fsmnt_paste_local_std

def fs_find_mounttable(defs,all_c_files):
    # find all c files in this build file
    # search for the mounttable data structure
    # the one that has it, tell the gui
    fname = None;
    verbose_print(defs, all_c_files);
    for mntname in all_c_files:
	verbose_print(defs,  mntname);
	mntf = gen_safe_open(mntname,"rU");
	if (not mntf):
	    return;
	lines = mntf.readlines();
	for i in lines:
	    newi1 = re.search("vfs_MountTable",i);
	    if (newi1 != None):
		fname = mntname;
		break;
		
    #fname = "mounttable.c"
    if (fname != None):
	verbose_print(defs,  "Mounttable=" + fname);
	npw2, uid = getNPW2Connection(defs);
	npw2.ReadInString(uid,fname);
	
def fs_mounttable_readin_std(defs):
    verbose_print(defs,  'fs_mounttable_readin_std()');
    
#end os_fsmnt_tf_dir_edit_std
#/* Devname should be in one of the following forms:
#     *   <ram>diskname [canonical format]
#     *   <ram:MR:name>
#     *   <ram:size>diskname
#     * where size should be one of the following forms:
#     *    # (size in bytes)
#     *    #K (size in Kilobytes)
#     *    #M (size in Megabytes)
#     *    #G (size in Gigabytes)
#     * # may be a fraction.
#     * and name is the name of a memory region in the resource manager.
#     */
def fs_mp_parse_device(line):
    newi1 = re.search("\"(((?P<nfsservCOLON>[\w\-\.]+):(?P<nfsshareCOLON>\/[\w_\-\.\/]+))|((?P<nfsshareAT>\/.+)@(?P<nfsservAT>[\w\-\.]+))|(((?P<device>\w+)|(<ram(:(?P<sizestr>[0-9]+[KMGkmg]?))?>(?P<ramname>\w+)))(:(?P<slice>\w+))?))\"|(?P<nodev>\NULL),",line);
    return newi1
    
#phase 0 - find structure
#phase 1 - find mntpoint begin
#phase 2 - parse dev/slice string
#phase 3 - parse mount point name
#phase 4 - parse file system type

def fs_find_mountpoints(defs,filename, info_only=False):
    verbose_print(defs,  'fs_find_mountpoints');
        # scan the mounttable file
    # find all mount points
    # create nodes for them in gui
    verbose_print(defs,  filename);
    npw2, uid = getNPW2Connection(defs);
    mpnamelist = [];

    fi = file(filename,"rU");
    lines = fi.readlines();
    phase = 0;
    for i in lines:
	#print phase;
	#print i;
	if (phase == 0):
	    newi1 = re.search("vfs_MountTable",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search("{",i);
	    if (newi1 != None):
		phase = 2;
	elif (phase == 2):
	    newi1 = fs_mp_parse_device(i);
	    if (newi1 != None):
		phase = 3;
		mnt_ramname = newi1.group('ramname');
                mnt_nfsservAT = newi1.group('nfsservAT');
                mnt_nfsservCOLON = newi1.group('nfsservCOLON');
		mnt_nfsserv = None;
		if (mnt_ramname != None):
		    mnt_sizestr = newi1.group('sizestr');
		    if (mnt_sizestr != None):
			mnt_dev = "<ram:"+newi1.group('sizestr')+">"+mnt_ramname;
		    else:
			mnt_dev = "<ram>:"+mnt_ramname;
		    mnt_slice = "a";
                elif (mnt_nfsservAT != None):
                    mnt_nfsshare = newi1.group('nfsshareAT');
                    mnt_dev = mnt_nfsshare + "@" + mnt_nfsservAT;
		    mnt_nfsserv = mnt_nfsservAT;
                    mnt_slice = "";
		elif (mnt_nfsservCOLON != None):
		    mnt_nfsshare = newi1.group('nfsshareCOLON');
                    mnt_dev = mnt_nfsservCOLON + ":" + mnt_nfsshare;
		    mnt_nfsserv = mnt_nfsservCOLON;
                    mnt_slice = "";
		else:
                    mnt_dev = newi1.group('device');
		    if (newi1.group('slice') == None):
			mnt_slice = "All";
		    else:
			mnt_slice = newi1.group('slice');
		verbose_print(defs,  mnt_dev);
		verbose_print(defs,  mnt_slice);
	elif (phase == 3):
	    newi1 = re.search("\"(?P<mnt_name>.+)\",",i);
	    if (newi1 != None):
		phase = 4;
		mnt_name =  newi1.group('mnt_name');
		verbose_print(defs,  mnt_name);
	elif (phase == 4):
	    newi1 = re.search("(?P<mnt_type>\w+),",i);
	    if (newi1 != None):
		phase = 5;
		mnt_type = newi1.group('mnt_type');
		verbose_print(defs,  mnt_type);
	elif (phase == 5):
	    newi1 = re.search("(\s+(?P<mnt_opts1>NULL),)|(\"(?P<mnt_opts2>.*)\",)",i);
	    if (newi1 != None):
		phase = 6;
		mnt_opts1 = newi1.group('mnt_opts1');
		mnt_opts2 = newi1.group('mnt_opts2');
		if (mnt_opts1 != None):
		    mnt_opts = mnt_opts1
		else:
		    mnt_opts = mnt_opts2
		verbose_print(defs,  mnt_opts);
	elif (phase == 6):
	    newi1 = re.search("(\s+(?P<mnt_topts1>0),)|(\s+(?P<mnt_topts2>.*),)",i);
	    if (newi1 != None):
		phase = 7;
		mnt_topts1 = newi1.group('mnt_topts1');
		mnt_topts2 = newi1.group('mnt_topts2');
		if (mnt_topts1 != None):
		    mnt_topts = mnt_topts1
		else:
		    mnt_topts = mnt_topts2
		verbose_print(defs,  mnt_topts);
	elif (phase == 7):
	    newi1 = re.search("0",i);
	    if (newi1 != None):
		phase = 8;
	elif (phase == 8):
	    newi1 = re.search("}",i);
	    if (newi1 != None):
		phase = 1;
		if (mnt_name in mpnamelist):
		    continue;
		if (not fsmnt_opts_names.has_key(mnt_type)):
		    print "Ignoring unknown mount point type  " + mnt_name + ": " + mnt_type;
		    continue;		    
		mpnamelist.append(mnt_name);
		# for sanity check, don't talk back to the mprojmgr
		if (info_only):
		    continue;
		npw2.ReadIn_AddChildComponent(uid,"velosity_os_modules_file_system_mntpoint",mnt_name,False);
		npw2.OverrideChildAttribute(uid,mnt_name,"tf_dir",mnt_name);
		matched_bsrd = "off";
		if (mnt_ramname != None):
#		    npw2.OverrideChildAttribute(uid,mnt_name,"bt_phys","off");
#                    npw2.OverrideChildAttribute(uid,mnt_name,"bt_rd","on");
#                    npw2.OverrideChildAttribute(uid,mnt_name,"bt_nfs","off");
		    npw2.OverrideChildAttribute(uid,mnt_name,"tf_rdname",mnt_ramname);
		    matched_bsrd = "on";
		    if (mnt_sizestr != None):
			npw2.OverrideChildAttribute(uid,mnt_name,"tf_rdsize",mnt_sizestr);
		elif (mnt_nfsserv != None):
#                    npw2.OverrideChildAttribute(uid,mnt_name,"bt_phys","off");
#                    npw2.OverrideChildAttribute(uid,mnt_name,"bt_rd","off");
#                    npw2.OverrideChildAttribute(uid,mnt_name,"bt_nfs","on");
                    npw2.OverrideChildAttribute(uid,mnt_name,"tf_servname",mnt_nfsserv);
                    npw2.OverrideChildAttribute(uid,mnt_name,"tf_sharename",mnt_nfsshare);
                else:
#		    npw2.OverrideChildAttribute(uid,mnt_name,"bt_phys","on");
#		    npw2.OverrideChildAttribute(uid,mnt_name,"bt_rd","off");
#                    npw2.OverrideChildAttribute(uid,mnt_name,"bt_nfs","off");
		    npw2.OverrideChildAttribute(uid,mnt_name,"pd_dev",mnt_dev);
		    npw2.OverrideChildAttribute(uid,mnt_name,"tf_slice",mnt_slice);
                for fstype in fstypes.keys():
                    if(fstypes[fstype] == mnt_type):
                        npw2.OverrideChildAttribute(uid,mnt_name,"pd_type",fstype);
			matched_fstype = fstype;
                        break;

		mnt_opts_name = fsmnt_opts_names[mnt_type];
		if (mnt_opts == "NULL"):
		    npw2.OverrideChildAttribute(uid,mnt_name,mnt_opts_name,"Use Defaults");
		else:
                    mnt_opts_name = fsmnt_opts_names[mnt_type];
		    npw2.OverrideChildAttribute(uid,mnt_name,mnt_opts_name,mnt_opts);
		    
		npw2.OverrideChildAttribute(uid,mnt_name,"msl_topts",mnt_topts);
		os_fsmnt_guifixup(defs,npw2, uid, mnt_name, matched_fstype, matched_bsrd);
    verbose_print(defs, mpnamelist)
    return mpnamelist
#end fs_find_mountpoints


def fs_find_mountpoint_number_by_name(defs,filename,the_mntname):
    verbose_print(defs,  'fs_find_mountpoint_number_by_name');
        # scan the mounttable file
    # find all mount points
    # create nodes for them in gui
    verbose_print(defs,  filename);
    verbose_print(defs,  the_mntname);
    npw2, uid = getNPW2Connection(defs);

    fi = file(filename,"rU");
    lines = fi.readlines();
    phase = 0;
    cnt = 0;
    for i in lines:
	#print phase;
	#print i;
	if (phase == 0):
	    newi1 = re.search("vfs_MountTable",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search("{",i);
	    if (newi1 != None):
		phase = 2;
	elif (phase == 2):
	    newi1 = fs_mp_parse_device(i);	        
	    if (newi1 != None):
		phase = 3;
	elif (phase == 3):
	    newi1 = re.search("\"(?P<mnt_name>.+)\",",i);
	    if (newi1 != None):
		phase = 4;
		mnt_name =  newi1.group('mnt_name');
		if (mnt_name == the_mntname):
		    verbose_print(defs,  cnt);
		    break;
	elif (phase == 4):
	    newi1 = re.search("(?P<mnt_type>\w+),",i);
	    if (newi1 != None):
		phase = 5;
	elif (phase == 5):
	    newi1 = re.search("(\s+(?P<mnt_opts1>NULL),)|(\"(?P<mnt_opts2>.*)\",)",i);
	    if (newi1 != None):
		phase = 6;
	elif (phase == 6):
	    newi1 = re.search("(\s+(?P<mnt_topts1>0),)|(\s+(?P<mnt_topts2>.*),)",i);
	    if (newi1 != None):
		phase = 7;
	elif (phase == 7):
	    newi1 = re.search("0",i);
	    if (newi1 != None):
		phase = 8;
	elif (phase == 8):
	    newi1 = re.search("}",i);
	    if (newi1 != None):
		phase = 1;	
		cnt = cnt + 1;
    return cnt;
#end fs_find_mountpoints


def fs_edit_mountpoint_by_number(filename,index,defs):
    verbose_print(defs,  'fs_edit_mountpoint_by_number');
        # scan the mounttable file
    # find all mount points
    # create nodes for them in gui
    verbose_print(defs,  filename);
    npw2, uid = getNPW2Connection(defs);
    if (not modify_file(defs,filename)):
    	return;
    fi = file(filename,"rU");
    tfd, tfname = tempfile.mkstemp("",'tmp',None,True);
    verbose_print(defs,  tfname);
    tf = os.fdopen(tfd,"w+");

    verbose_print(defs,  index)
    lines = fi.readlines();
    phase = 0;
    cnt = 0;
    linenum = 0;
    for i in lines:
	#print phase;
	#print i;
	if (phase == 0):
	    newi1 = re.search("vfs_MountTable",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search("{",i);
	    if (newi1 != None):
		phase = 2;
	elif (phase == 2):
	    newi1 = fs_mp_parse_device(i);
	    if (newi1 != None):
		phase = 3;
		if (cnt == index):
		    lines[linenum] = add_dev(defs) + "\n";
	elif (phase == 3):
	    newi1 = re.search("\"(?P<mnt_name>.+)\",",i);
	    if (newi1 != None):
		phase = 4;
		if (cnt == index):
		    lines[linenum] = add_dir(defs) + "\n";
	elif (phase == 4):
	    newi1 = re.search("(?P<mnt_type>\w+),",i);
	    if (newi1 != None):
		phase = 5;
		if (cnt == index):
		    lines[linenum] = add_type(defs) + "\n";
	elif (phase == 5):
	    newi1 = re.search("(\s+(?P<mnt_opts1>NULL),)|(\"(?P<mnt_opts2>.*)\",)",i);
	    if (newi1 != None):
		phase = 6;
		if (cnt == index):
		    lines[linenum] = add_opts(defs) + "\n";
	elif (phase == 6):
	    newi1 = re.search("(\s+(?P<mnt_topts1>0),)|(\s+(?P<mnt_topts2>.*),)",i);
	    if (newi1 != None):
		phase = 7;
		if (cnt == index):
		    lines[linenum] = add_topts(defs) + "\n";
	elif (phase == 7):
	    newi1 = re.search("0",i);
	    if (newi1 != None):
		phase = 8;
	elif (phase == 8):
	    newi1 = re.search("}",i);
	    if (newi1 != None):
		phase = 1;
		cnt = cnt +1;
	linenum = linenum+1;
    for i in lines:
	#print i
	tf.write(i);
    tf.close();
    fi.close();
    shutil.move(tfname,filename);
    fix_perms(filename);
    
    npw2.ResolveRequires(uid);
#end fs_edit_mountpoint_by_number


def fs_delete_mountpoint_by_number(filename,index,defs):
    verbose_print(defs,  'fs_delete_mountpoint_by_number')
        # scan the mounttable file
    # find all mount points
    # create nodes for them in gui
    verbose_print(defs,  filename);
    npw2, uid = getNPW2Connection(defs);

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
	#print phase;
	#print i;
	add_line = 1;
	if (phase == 0):
	    newi1 = re.search("vfs_MountTable",i);
	    if (newi1 != None):
		phase = 1;
	elif (phase == 1):
	    newi1 = re.search("{",i);
	    if (newi1 != None):
		phase = 2;		
		if (cnt == index):
		    add_line = 0;
	elif (phase == 2):
	    newi1 = fs_mp_parse_device(i);
	    if (newi1 != None):
		phase = 3;
		if (cnt == index):
		    add_line = 0;
	elif (phase == 3):
	    newi1 = re.search("\"(?P<mnt_name>.+)\",",i);
	    if (newi1 != None):
		phase = 4;
		if (cnt == index):
		    add_line = 0;
	elif (phase == 4):
	    newi1 = re.search("(?P<mnt_type>\w+),",i);
	    if (newi1 != None):
		phase = 5;
		if (cnt == index):
		    add_line = 0;
	elif (phase == 5):
	    newi1 = re.search("(\s+(?P<mnt_opts1>NULL),)|(\"(?P<mnt_opts2>.*)\",)",i);
	    if (newi1 != None):
		phase = 6;
		if (cnt == index):
		    add_line = 0;
	elif (phase == 6):
	    newi1 = re.search("(\s+(?P<mnt_topts1>0),)|(\s+(?P<mnt_topts2>.*),)",i);
	    if (newi1 != None):
		phase = 7;
		if (cnt == index):
		    add_line = 0;
	elif (phase == 7):
	    newi1 = re.search("0",i);
	    if (newi1 != None):
		phase = 8;		
		if (cnt == index):
		    add_line = 0;
	elif (phase == 8):
	    newi1 = re.search("}",i);
	    if (newi1 != None):
		phase = 1;
		if (cnt == index):
		    add_line = 0;		    
		cnt = cnt +1;
	linenum = linenum+1;
	if (add_line == 1):
	    new_lines.append(i);
    for i in new_lines:
	tf.write(i);
    tf.close();
    fi.close();
    shutil.move(tfname,filename); 
    fix_perms(filename);
#end fs_delete_mountpoint_by_number


def fslib_check_licensing_std(defs):
    verbose_print(defs,  'fslib_check_licensing_std()')
    npw2, uid = getNPW2Connection(defs);
    gpjfilename = os.path.join(defs["RTOS_DIR"],"modules");
    gpjfilename = os.path.join(gpjfilename,"ghs");
    gpjfilename = os.path.join(gpjfilename,"ffs");
    if (defs["LIBNAME"] == "iso9660"):
        gpjfilename = os.path.join(gpjfilename,"cd9660");
    else:
        gpjfilename = os.path.join(gpjfilename,defs["LIBNAME"]);
    gpjfilename = os.path.join(gpjfilename,"lib" + defs["LIBNAME"] + ".gpj");
    if (os.access(gpjfilename,os.R_OK) == False):
	npw2.SetIconName(uid,"unlicensed_comp");
#end fslib_check_licensing_std


def fs_ramdisk_on_add_std(defs):
    verbose_print(defs,  'fs_ramdisk_on_add_std');
    set_in_project(defs,"-lramdisk");
#end fs_ramdisk_on_add_std

def fs_ramdisk_on_edit_std(defs):
    fs_ramdisk_on_add_std(defs);
#end fs_ramdisk_on_edit_std

def fs_ramdisk_off_edit_std(defs):
    unset_in_project(defs,"-lramdisk");
#end fs_ramdisk_off_edit_std

def fs_tf_rdname_sanity_check(defs):
    verbose_print(defs, "Do vas_tf_rdname_sanity_check %s %s" % (defs["tf_rdname"], defs["bt_rd"]));
	
    if (defs["bt_rd"] != "off" and defs["tf_rdname"] == "(null)"):
        npw2, uid = getNPW2Connection(defs);
        failstr = "RAMDisk must have a name";
        npw2.ReadInString(uid,failstr);
        return;
#end vas_tf_rdname_sanity_check

def fs_tf_rdsize_sanity_check(defs):
    verbose_print(defs, "Do vas_tf_rdsize_sanity_check %s %s" % (defs["tf_rdsize"], defs["bt_rd"]));

    sizestr = defs["tf_rdsize"];
    if (defs["bt_rd"] != "off" and not sizestr.isalnum()):
        npw2, uid = getNPW2Connection(defs);
        failstr = "RAMDisk must have an alphanumeric size";
        npw2.ReadInString(uid,failstr);
        return;


def fs_tf_sharename_sanity_check(defs):
    verbose_print(defs, "Do vas_tf_sharename_sanity_check %s %s" % (defs["tf_sharename"], defs["bt_nfs"]));

    if (defs["bt_nfs"] != "off" and not defs["tf_sharename"].count('/')):
        npw2, uid = getNPW2Connection(defs);
        failstr = "Share Name must be a path starting with /";
        npw2.ReadInString(uid,failstr);
        return;

def fs_tf_servname_sanity_check(defs):
    verbose_print(defs, "Do vas_tf_servname_sanity_check %s %s" % (defs["tf_servname"], defs["bt_nfs"]));

    if (defs["bt_nfs"] != "off"):
        npw2, uid = getNPW2Connection(defs);
        if (defs["tf_servname"].count('/')):
                failstr = "Server Name must be a hostname, with no /"
                npw2.ReadInString(uid,failstr);
        if (defs["tf_servname"].__len__() == 0):
                failstr = "Server Name mut be filled in";
                npw2.ReadInString(uid,failstr);
        return;        

def fs_tf_dir_sanity_check(defs):
    if (not defs.has_key("tf_dir")):
	return;

    verbose_print(defs, "Do vas_tf_dir_sanity_check %s" % defs["tf_dir"]);

    if (not defs["tf_dir"].count('/')):
        npw2, uid = getNPW2Connection(defs);
        failstr = "Mount Directory must be a path starting with /";
        npw2.ReadInString(uid,failstr);
        return;
    basename = defs["tf_dir"];
    lastname = None;
    filename = None;
    if (defs.has_key("LAST_TF_DIR")):
    	lastname = defs["LAST_TF_DIR"];
    if (defs.has_key("tf_diskname")):
	filename = defs["tf_diskname"];
    
    if ((defs["NPW2_OP"] == "add" or (defs["NPW2_OP"] == "edit" and lastname != None and basename != lastname)) and filename != None):
	# make sure it's not already there (add)
	# we edited this field, make sure we don't have someone else with that name
	mpnamelist = fs_find_mountpoints(defs,filename,info_only=True)
	if (basename in mpnamelist):
	    npw2, uid = getNPW2Connection(defs);
	    failstr = "MountPoint already defined with name: " + basename;
	    npw2.ReadInString(uid,failstr);
	    return;


#move to vel_localutils if I create it someday
def readin_add_child_component(npw2,uid,child_type,child_name,commented_out):
    # commented_out field got added in 5.0.5
    try:
	npw2.ReadIn_AddChildComponent(uid,child_type,child_name,commented_out);
    except TypeError:
	npw2.ReadIn_AddChildComponent(uid,child_type,child_name);
