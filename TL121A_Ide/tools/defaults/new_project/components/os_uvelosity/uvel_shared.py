import ide;
import os;
from utils import *;
import re;

def add_uvel_generic_file(defs,fromdir,tobasename,addToProject):
    toname = os.path.join(defs["PROJ_DIR"],tobasename);
    fromname = os.path.join(fromdir,tobasename);
    copy_file(defs, fromname, toname);
    if(addToProject):
        add_to_project(defs,toname);

def add_uvel_example_file(defs, fileDir, fileName, addToProject):
    fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project",fileDir);
    add_uvel_generic_file(defs, fromname, fileName, addToProject);

### "Hello World" Application Example

def source_uvel_app_add_std(defs):
    verbose_print(defs,  'source_uvel_app_add_std()');
    if(defs.has_key("LANG_CXX")):
        fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project","exec_hello_cxx");
	add_uvel_generic_file(defs,fromname,"hello.cc",True);	
    else: #use C
        fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project","exec_hello_c");
	add_uvel_generic_file(defs,fromname,"hello.c",True);

### Producer/Consumer Example:

def source_uvel_prodcons_add_std(defs):
    verbose_print(defs,  'source_uvel_prodcons_add_std()');
    fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project","producer_consumer");
    add_uvel_generic_file(defs, fromname,"prodcons.c",True);

### Timer Example:

def add_timer_file(defs, myStr, addToProject, mandatory=True):
    fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project","timer_driver_c");
    if (mandatory or os.access(fromname, os.F_OK)):
	add_uvel_generic_file(defs,fromname,myStr,addToProject);

def source_uvel_timer_add_std(defs):
    verbose_print(defs,  'source_uvel_timer_add_std()');
    #source_add_std(defs);

    add_timer_file(defs,"timer_driver.c",True);
    add_timer_file(defs,"example_app.c",True);
    add_timer_file(defs,"timer_driver.h",False);
    add_timer_file(defs,"timer_example.h",False);
    add_timer_file(defs,"timer_driver_at91eb40a.h",False, False);
    add_timer_file(defs,"at91_std_c.h",False, False);
    add_timer_file(defs,"at91_aic.h",False, False);
    add_timer_file(defs,"at91_tc.h",False, False);
    add_timer_file(defs,"timer_driver_M5223EVB.h",False, False);
    add_timer_file(defs,"mcf5223.h",False, False);
    add_timer_file(defs,"mcf5223_dtim.h",False, False);
    add_timer_file(defs,"mcf5223_eport.h",False, False);
    add_timer_file(defs,"mcf5223_intc.h",False, False);
    add_timer_file(defs,"mcf5223_pit.h",False, False);
    add_timer_file(defs,"mcf5223_scm.h",False, False);
    add_timer_file(defs,"timer_driver_M5485EVB.h",False, False);
    add_timer_file(defs,"M54X5EVB.h",False, False);
    add_timer_file(defs,"timer_driver_at91rm9200.h",False, False);
    add_timer_file(defs,"AT91RM9200.h",False, False);
    add_timer_file(defs,"lib_AT91RM9200.h",False, False);

### USB Examples:

def add_usb_device_file(defs, myStr, addToProject):
    fromname = os.path.join(defs["RTOS_DIR"],"multi","new_project","usb_device");
    add_uvel_generic_file(defs,fromname,myStr,addToProject);

def configure_usb_project(defs, heapSize):
    add_usb_device_file(defs,"readme.txt",False);
    modify_in_project(defs,"-Cistack_reserve=1K",True);
    modify_in_project(defs,"-Cheap_reserve=%s" % heapSize,True);
    modify_in_project(defs,"-ludc",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/INTEGRITY",True);

def source_uvel_usb_device_driver_at91rm9200_add(defs):
    add_usb_device_file(defs,"at91rm9200_udc_driver.c",True);
    add_usb_device_file(defs,"at91rm9200_udc_driver.h",False);
    add_usb_device_file(defs,"at91rm9200_interrupt.c",True);
    add_usb_device_file(defs,"lib_AT91RM9200.h",False);
    add_usb_device_file(defs,"AT91RM9200.h",False);

def source_uvel_usb_device_driver_add(defs):
    if (defs.has_key('INSTALL_AT91RM9200_USB_DRIVER')):
	source_uvel_usb_device_driver_at91rm9200_add(defs);

def source_uvel_usb_device_audio_source_add_std(defs):
    verbose_print(defs,  'source_uvel_usb_device_audio_source_add_std()');
    #source_add_std(defs);

    add_usb_device_file(defs,"audio_source_device.c",True);

    source_uvel_usb_device_driver_add(defs);
    configure_usb_project(defs, heapSize="15K");

def source_uvel_usb_device_mass_storage_add_std(defs):
    verbose_print(defs,  'source_uvel_usb_device_mass_storage_add_std()');
    #source_add_std(defs);

    add_usb_device_file(defs,"mass_storage_device.c",True);
    add_usb_device_file(defs,"mass_storage_device.h",False);

    source_uvel_usb_device_driver_add(defs);
    configure_usb_project(defs, heapSize="15K");

def source_uvel_usb_device_mouse_device_add_std(defs):
    verbose_print(defs,  'source_uvel_usb_device_mouse_device_add_std()');
    #source_add_std(defs);

    add_usb_device_file(defs,"mouse_device.c",True);

    source_uvel_usb_device_driver_add(defs);
    configure_usb_project(defs, heapSize="20K");

def source_uvel_usb_device_serial_device_add_std(defs):
    verbose_print(defs,  'source_uvel_usb_device_serial_device_add_std()');
    #source_add_std(defs);

    add_usb_device_file(defs,"serial_usb_device.c",True);

    source_uvel_usb_device_driver_add(defs);
    configure_usb_project(defs, heapSize="30K");
    modify_in_project(defs,"-lserialusbdev",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/POSIX",True);

def source_uvel_usb_device_serial_device_fd_add_std(defs):
    verbose_print(defs,  'source_uvel_usb_device_serial_device_fd_add_std()');
    #source_add_std(defs);

    add_usb_device_file(defs,"serial_usb_device_fd.c",True);

    source_uvel_usb_device_driver_add(defs);
    configure_usb_project(defs, heapSize="30K");
    modify_in_project(defs,"-lserialusbdev",True);
    modify_in_project(defs,"-lserialfd",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/POSIX",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/src/modules/ghs/udc/serialfd",True);

# File System RAM Disk Example
    
def source_uvel_fs_ramdisk_add_std(defs):
    verbose_print(defs,  'source_uvel_fs_ramdisk_add_std()');
    add_uvel_example_file(defs, "fs_ramdisk_c", "fs_ramdisk.c", True);
    add_uvel_example_file(defs, "fs_ramdisk_c", "readme.txt", True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/POSIX",True);
    modify_in_project(defs,"-lfsutil",True);
    modify_in_project(defs,"-lfsblockdev",True);
    modify_in_project(defs,"-lmsdosfs",True);
    modify_in_project(defs,"-lfsck_msdos",True);
    modify_in_project(defs,"-lnewfs_msdos",True);
    modify_in_project(defs,"-lramdisk",True);
    modify_in_project(defs,"-lnk=-Cheap_reserve=0x100000", True);

# File System WLFS2 Example	
def source_uvel_fs_wlfs2_add_std(defs):
    verbose_print(defs,  'source_uvel_fs_wlfs2_add_std()');
    add_uvel_example_file(defs, "fs_wlfs2_c", "fs_wlfs2.c", True);
    simnandLoc = os.path.join(defs["RTOS_DIR"],"src","modules","ghs","wlfs2","uvelosity","nand");
    add_uvel_generic_file(defs, simnandLoc, "simnand.c", True);
    add_uvel_example_file(defs, "fs_wlfs2_c", "readme.txt", True);
    modify_in_project(defs,"-DENABLE_WLFS_FORMAT",True);
    modify_in_project(defs,"-DENABLE_MSDOS_FORMAT",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/POSIX",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/src/modules/ghs/wlfs2/uvelosity",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/src/modules/ghs/wlfs2/indep",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/src/modules/ghs/wlfs2/uvelosity/nand",True);
    modify_in_project(defs,"-lfsutil",True);
    modify_in_project(defs,"-lfsblockdev",True);
    modify_in_project(defs,"-lmsdosfs",True);
    modify_in_project(defs,"-lfsck_msdos",True);
    modify_in_project(defs,"-lnewfs_msdos",True);
    modify_in_project(defs,"-lwlfs2_format",True);
    modify_in_project(defs,"-lwlfs2_blockdev_eval",True);
    modify_in_project(defs,"-lnk=-Cheap_reserve=0x100000", True);

### GHNet v2 Examples:

def source_uvel_ghnet2_svc_example_common_add_driver_at91rm9200(defs):
    add_uvel_example_file(defs, "ghnet2_svc", "enet_driver_at91rm9200.gpj", True);
    location = os.path.join(defs["RTOS_DIR"],"src","modules","ghs","ghnet2","source","kernel","uvelosity","enet_driver","at91rm9200");
    add_uvel_generic_file(defs, location, "at91rm9200.c", False);
    add_uvel_generic_file(defs, location, "AT91RM9200.h", False);
    add_uvel_generic_file(defs, location, "lib_AT91RM9200.h", False);
    add_uvel_generic_file(defs, location, "miiphy.c", False);
    add_uvel_generic_file(defs, location, "miiphy.h", False);
    add_uvel_generic_file(defs, location, "arm_cache.c", False);

def source_uvel_ghnet2_svc_example_common_add_std(defs):
    # Add ethernet driver and TCP/IP stack options
    add_uvel_example_file(defs, "ghnet2_svc", "global_table.c", True);
    if (defs.has_key('INSTALL_AT91RM9200_ETHERNET_DRIVER')):
	source_uvel_ghnet2_svc_example_common_add_driver_at91rm9200(defs)
    add_uvel_example_file(defs, "ghnet2_svc", "readme.txt", True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/src/modules/ghs/ghnet2/source/kernel/uvelosity",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/src/modules/ghs/ghnet2/include",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/INTEGRITY",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/INTEGRITY/bsp",True);
    modify_in_project(defs,"-I${%option_value(-os_dir)}/include/os_port/POSIX",True);
    modify_in_project(defs,"-I.",True);
    modify_in_project(defs,"-lip4_eval",True);
    modify_in_project(defs,"-lenetglue",True);
    modify_in_project(defs,"-lnk=-Cheap_reserve=1M", True);
    modify_in_project(defs,"-lnk=-Cstack_reserve=2K", True);

def source_uvel_ghnet2_svc_httpd_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_httpd_example_add_std()');
    location = os.path.join(defs["__MULTI_DIR__"],"defaults","new_project","components","os_uvelosity","subprojects")
    add_uvel_generic_file(defs, location, "ghnet2_httpd.gpj", True);
    add_uvel_example_file(defs, "ghnet2_svc", "ghnet2_httpd.c", False);
    location = os.path.join(defs["RTOS_DIR"],"src","modules","ghs","ghnet2","examples","httpd");
    add_uvel_generic_file(defs, location, "txcgi.c", False);
    add_uvel_generic_file(defs, location, "txssi.c", False);
    location = os.path.join(defs["__MULTI_DIR__"],"defaults","new_project","components","os_uvelosity","subprojects")
    add_uvel_generic_file(defs, location, "ghnet2_romfs.gpj", True);
    location = os.path.join(defs["RTOS_DIR"],"src","modules","ghs","ghnet2","examples","romfs_ghs");
    add_uvel_generic_file(defs, location, "txrom0.c", False);
    add_uvel_generic_file(defs, location, "txrom1.c", False);
    add_uvel_generic_file(defs, location, "txrom2.c", False);
    add_uvel_generic_file(defs, location, "txrom3.c", False);
    add_uvel_generic_file(defs, location, "txrom4.c", False);
    add_uvel_generic_file(defs, location, "txrom5.c", False);
    add_uvel_generic_file(defs, location, "trrombld.h", False);
    location = os.path.join(defs["RTOS_DIR"],"src","modules","ghs","ghnet2","source");
    add_uvel_generic_file(defs, location, "trromfs.c", False);
    source_uvel_ghnet2_svc_example_common_add_std(defs)

def source_uvel_ghnet2_svc_ftpd_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_ftpd_example_add_std()');
    location = os.path.join(defs["__MULTI_DIR__"],"defaults","new_project","components","os_uvelosity","subprojects")
    add_uvel_generic_file(defs, location, "ghnet2_ftpd.gpj", True);
    add_uvel_example_file(defs, "ghnet2_svc", "ghnet2_ftpd.c", False);
    add_uvel_example_file(defs, "ghnet2_svc", "fs_setup.c", False);
    location = os.path.join(defs["RTOS_DIR"],"src","modules","ghs","ghnet2","source","kernel","uvelosity");
    add_uvel_generic_file(defs, location, "fs_port.c", False);
    modify_in_project(defs,"-lfsutil",True);
    modify_in_project(defs,"-lfsblockdev",True);
    modify_in_project(defs,"-lmsdosfs",True);
    modify_in_project(defs,"-lfsck_msdos",True);
    modify_in_project(defs,"-lnewfs_msdos",True);
    modify_in_project(defs,"-lramdisk",True);
    source_uvel_ghnet2_svc_example_common_add_std(defs)

def source_uvel_ghnet2_svc_snmpd_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_snmpd_example_add_std()');
    add_uvel_example_file(defs, "ghnet2_svc", "ghnet2_snmpd.c", True);
    modify_in_project(defs,"-lsnmp_eval",True);
    source_uvel_ghnet2_svc_example_common_add_std(defs)

def source_uvel_ghnet2_svc_loopback_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_loopback_example_add_std()');
    add_uvel_example_file(defs, "ghnet2_svc/sockets", "ghnet2_loopback.c", True);
    source_uvel_ghnet2_svc_example_common_add_std(defs)

def source_uvel_ghnet2_svc_echo_tcp_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_echo_tcp_example_add_std()');
    add_uvel_example_file(defs, "ghnet2_svc/sockets", "ghnet2_echo_tcp.c", True);
    source_uvel_ghnet2_svc_example_common_add_std(defs)

def source_uvel_ghnet2_svc_echo_udp_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_echo_udp_example_add_std()');
    add_uvel_example_file(defs, "ghnet2_svc/sockets", "ghnet2_echo_udp.c", True);
    source_uvel_ghnet2_svc_example_common_add_std(defs)

def source_uvel_ghnet2_svc_echo_tcp_zc_example_add_std(defs):
    verbose_print(defs,  'source_uvel_ghnet2_svc_echo_tcp_zc_example_add_std()');
    add_uvel_example_file(defs, "ghnet2_svc/zerocopy", "ghnet2_echo_tcp_zc.c", True);
    source_uvel_ghnet2_svc_example_common_add_std(defs)
