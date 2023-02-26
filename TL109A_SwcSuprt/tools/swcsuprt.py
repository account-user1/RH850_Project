#! python
"""Software Component Support
Copyright 2016, 2017 Nexteer.

Usage:
    swcsuprt.py ["/path/to/component" [command]]

SWCSuprt is a component support script for EA4 component development.  It
automates many redundant tasks, and is useful to easily update a component to
the latest standards.

Both GUI and command-line interfaces are supported.  If this script is run with
both a path to a component and a command, the script continues running in the
command line.  Otherwise, the GUI is initialized.

See the usage documentation in the doc directory of this component for more
details.
"""

# *********************************************************************************************************************
# * Nexteer Confidential
# *
# * Module File Name:   swcsuprt.py
# * Module Description: Support script for SWC development
# * Project:            TL109A_SwcSuprt
# * Author:             Owen Tosh
# *********************************************************************************************************************
# * Version Control:
# *-------------------------------------------------------------------------------------------------------------------
# * Date      Rev      Author    Change Description                                                           SCR #
# * --------  -------  --------  ---------------------------------------------------------------------------  -------
# * 12/01/16   1       OT        Initial version
# * 12/07/16   2       OT        Added Polyspace report generation
# * 12/07/16   3       OT        Corrected constant name overlap
# * 12/08/16   4       OT        Corrected path error in TL101A, 											  EA4#9522
# *								 Considering local/autosar in RTE header generation, removed extra quotes
# * 03/30/17   5       ML        Added Sandbox Project Creation feature, Changed Configurator Button name 
#                                to Rte Gen
# * 04/17/17   6       ML        Removes files no longer needed when migrating component over 
# *                              (QAC/Polyspace Results, QAC Project File), Open Sandbox Project when created
# *********************************************************************************************************************


import os
import re
import shutil
import sys
import traceback
import errno
import subprocess
import glob
import mako.template
import nxtr
import datadict
import Tkinter as tk
import ttk
import tkMessageBox as tkMB
import tkFileDialog as tkFD
import tkSimpleDialog as tkSD
import zipfile


# general constants
_window_title = 'SWC Support'
_script_dir = os.path.dirname(os.path.realpath(sys.argv[0]))
_template_dir = os.path.join(_script_dir, 'template')
_doc_dir = os.path.normpath(os.path.join(_script_dir, '..', 'doc'))
_help_doc_path = os.path.join(_doc_dir, 'SwcSuprt_Usage.docx')

# migration constants
_swcsupport_launcher_file = os.path.join(_template_dir, 'SWCSupport.bat');

# DaVinci constants
_davinci_template_file = os.path.join(_template_dir, 'Component.dpa.tpl')
_ecuc_template_dir = os.path.join(_template_dir, 'ECUC')
_component_ecuc_template = os.path.join(_template_dir, 'Component.ecuc.arxml.tpl')

# Green Hills project constants
_greenhills_template_file = os.path.join(_template_dir, 'GreenHillsProject.gpj.tpl')

# Sandbox project constants
_sandbox_template_file = os.path.join(_template_dir, 'Sandbox.gpj.tpl')

# integration script constants
_integrate_template_file = os.path.join(_template_dir, 'Integrate.bat.tpl')
_settings_template_file = os.path.join(_template_dir, 'Settings.xml.tpl')

# generation script constants
_generate_template_file = os.path.join(_template_dir, 'Generate.bat.tpl')

# polyspace constants
_codeprover_template_file = os.path.join(_template_dir, 'Polyspace.psprj.tpl')
_bugfinder_template_file = os.path.join(_template_dir, 'Polyspace.bf.psprj.tpl')
_misra_template_file = os.path.join(_template_dir, 'MISRASettings.cfg')
_stub_c_template_file = os.path.join(_template_dir, 'Rte_Stubs.c.tpl')
_stub_h_template_file = os.path.join(_template_dir, 'Rte_Stubs.h.tpl')
#_globals_template_file = os.path.join(_template_dir, 'CDD_MotCtrlMgr_Data.h.tpl')
_bugfinder_report_template_file = os.path.join(_template_dir, 'BugFinder.rpt')
_codeprover_report_template_file = os.path.join(_template_dir, 'Developer.rpt')


################################################################################
##  MAIN FUNCTION
################################################################################

def _main():
    """Launch the GUI, or run the specified command from the command line."""
    root = None
    
    # check for interactive session
    if len(sys.argv) <= 2:
        
        # initialize Tk
        root = tk.Tk()
        root.withdraw()
        
        # set up window icon
        icon_image = tk.Image('photo', file=os.path.join(_script_dir, 'resources', 'icon.gif'))
        root.tk.call('wm', 'iconphoto', root._w, '-default', icon_image)
        
        # configure styles
        style = ttk.Style()
        style.configure('TButton', font=('Segoe UI', 9, 'normal'))
        style.configure('Small.TButton', font=('Segoe UI', 7, 'normal'))
    
    
    # check argument validity
    error_text = _check_argument_validity()
    if error_text is None:
        
        # if a command is provided, run the operation directly
        if len(sys.argv) >= 3:
            execute_command(sys.argv[1], sys.argv[2])
        # otherwise, show the appropriate menu
        elif len(sys.argv) == 2:
            _ComponentMenu(root, sys.argv[1]).wait_window()
        else:
            _MainMenu(root, _window_title).wait_window()
        
    else:
        if len(sys.argv) <= 2: # interactive session
            tkMB.showerror(_window_title, error_text, parent=root)
        else: # command-line session
            print(error_text)
            sys.exit(2)
    
    if root is not None:
        # release Tk resources
        root.quit()


################################################################################
##  UTILITY CLASSES AND FUNCTIONS
################################################################################

def _ps_stub_suffix(obj):
    """Return suffix (string) depending on data dictionary type.
    
    Return None no appropriate suffix found.
    
    Required arguments:
    obj -- DDObj, object
    """
    suffix = None
    
    if obj.value == 'DataDict.IpSignal':
        suffix = '_Ip'
    elif obj.value == 'DataDict.OpSignal':
        suffix = '_Op'
    elif obj.value == 'DataDict.Calibration' or obj.value == 'DataDict.ImprtdCal':
        suffix = '_Cal'
    elif obj.value == 'DataDict.PIM' or obj.value == 'DataDict.NVM' or obj.value == 'DataDict.Display':
        suffix = '_Pim'
    elif obj.value == 'DataDict.IRV':
        suffix = '_Irv'
    
    return suffix


def _check_header(header, name):
    """Check the header for name, and valid permutations of name.
    
    Return None if not found.  If no header specified, return name.  Otherwise,
    return the name permutation that was found in the header file.
    
    Required arguments:
    header -- string, entire RTE header file
    name -- string, name to search
    """
    # check validity of inputs
    if not name:
        return None
    
    if not header:
        return name
    
    # set up prefix options
    prefixes = []
    prefixes.append('Rte_Call_')
    prefixes.append('Rte_Call_CDD_')
    prefixes.append('')
    
    # set up suffix options
    suffixes = []
    suffixes.append('_Oper')
    suffixes.append('')
    
    # get lower-case version of header
    header_lc = header.lower()
    
    # try each prefix/suffix combination
    for prefix in prefixes:
        for suffix in suffixes:
            
            # create search string
            str = prefix + name + suffix
            
            # check for string in header
            if str in header:
                return str
            
            # try searching case-insensitive
            str_lc = str.lower()
            if str_lc in header_lc:
                # different cases - take the name of the case in header
                index = header_lc.index(str_lc)
                return header[index:index+len(str)]
    
    # not found
    return None


def usage_doc():
    """Load usage documentation."""
    os.system('start "SWC Support Help" "' + _help_doc_path + '"')


def _find_polyspace_bin_directory():
    """Locate the Polyspace 'bin' directory.
    
    Return a string with the absolute path if found, otherwise None.
    """
    path = 'C:\\Program Files\\MATLAB\\'
    if not os.path.exists(path):
        return None
    
    for dir in os.listdir(path):
        if 'polyspace' in os.listdir(os.path.join(path, dir)):
            if 'bin' in os.listdir(os.path.join(path, dir, 'polyspace')):
                return os.path.join(path, dir, 'polyspace', 'bin')
    
    return None


def _find_file(dir, file):
    """Walk through the specified directory and look for file.
    
    Return a string with the absolute path if found, otherwise None.
    
    Required arguments:
    dir -- string, path to begin search
    file -- string, name to search
    """
    if not os.path.exists(dir):
        return None
    
    for root, dirs, files in os.walk(dir):
        if file in files:
            return os.path.join(root, file)
    
    return None


def _find_dir(start_dir, find_dir):
    """Walk through the specified directory and look for find_dir.
    
    Return a string with the absolute path if found, otherwise None.
    
    Required arguments:
    start_dir -- string, path to begin search
    find_dir -- string, directory name to search
    """
    if not os.path.exists(start_dir):
        return None
    
    for root, dirs, files in os.walk(start_dir):
        if find_dir in dirs:
            return os.path.join(root, find_dir)
    
    return None
################################################################################
##  COMMAND LINE HANDLING
################################################################################

def _check_argument_validity():
    """Check validity of command-line arguments.
    
    Return error text, or None if successful.
    """
    # check path argument
    if len(sys.argv) >= 2:
        path_arg = sys.argv[1]
        if not os.path.exists(path_arg):
            return 'Path does not exist:\n' + path_arg + '\nSpecify a path to a component, or run the script without arguments.'
    
    # all arguments are valid
    return None

def execute_command(component_dir, command):
    """Execute a command from the command-line interface.
    
    Call sys.exit if an error occurs.
    """
    # initialize component
    try:
        component = _Component(component_dir)
    except IOError as e:
        if e.errno == errno.ENOENT:
            message = 'The path does not exist:\n{}\nProvide a valid path.'.format(component_dir)
        else:
            try:
                message = 'Could not open the component:\n' + str(e)
            except:
                message = 'There was an error loading the component.'
        print(message)
        sys.exit(2)
    
    # execute and show feedback to user
    err_code, msg = component.execute(command)
    print(msg)
    if err_code != 0:
        sys.exit(err_code)


################################################################################
##  COMPONENT FUNCTIONS AND CLASSES
################################################################################

class _Component():
    """Component Object.
    
    Represents a software component file structure.  Contains all members for
    direct component manipulation.
    """
    
    def __init__(self, component_dir):
        """Initialize component.
        
        Required arguments:
        component_dir -- string, path to component (relative or absolute)
        """
        # test path
        if not os.path.exists(component_dir):
            raise IOError(errno.ENOENT, 'The path does not exist: ' + component_dir)
        
        # absolute/normalize and save path
        self.path = os.path.abspath(component_dir)
        
        # get full name from path
        self.name = os.path.basename(self.path)
        
        # get short name
        name_split = self.name.split('_')
        if len(name_split) > 1:
            short_name = name_split[-2]
        else:
            short_name = self.name
        self.short_name = short_name
        
        # save component paths
        self.autosar_dir = os.path.join(self.path, 'autosar')
        self.doc_dir = os.path.join(self.path, 'doc')
        self.generate_dir = os.path.join(self.path, 'generate')
        self.include_dir = os.path.join(self.path, 'include')
        self.make_dir = os.path.join(self.path, 'make')
        self.src_dir = os.path.join(self.path, 'src')
        self.parent_dir = os.path.normpath(os.path.join(self.path, '..'))
        
        self.tools_dir = os.path.join(self.path, 'tools')
        self.integrate_dir = os.path.join(self.tools_dir, 'integrate')
        self._template_dir = os.path.join(self.tools_dir, 'template')
        
        self.local_dir = os.path.join(self.tools_dir, 'local')
        self.local_autosar_dir = os.path.join(self.local_dir, 'autosar',)
        self.local_ecuc_dir = os.path.join(self.local_autosar_dir, 'ECUC')
        self.local_include_dir = os.path.join(self.local_dir, 'include')
        self.local_generate_dir = os.path.join(self.local_dir, 'generate')
        self.local_src_dir = os.path.join(self.local_dir, 'src')

        self.polyspace_dir = os.path.join(self.tools_dir, 'Polyspace')
        self.bugfinder_dir = os.path.join(self.polyspace_dir, '~BugFinder')
        self.codeprover_dir = os.path.join(self.polyspace_dir, '~CodeProver')
        self.bugfinder_path = os.path.join(self.polyspace_dir, 'Polyspace.bf.psprj')
        self.codeprover_path = os.path.join(self.polyspace_dir, 'Polyspace.psprj')
        self.archive_dir = os.path.join(self.polyspace_dir, 'Saved')
        self.bugfinder_archive_path = os.path.join(self.archive_dir, 'BugFinder.zip')
        self.codeprover_archive_path = os.path.join(self.archive_dir, 'CodeProver.zip')
        
        self.swcsupport_path = os.path.join(self.tools_dir, 'SWCSupport.bat')
    
    
    def basic_dirs_valid(self):
        """Check that the basic component folders exist.
        
        Return True if valid, otherwise False.
        """
        if (not os.path.exists(self.autosar_dir)) or \
           (not os.path.exists(self.generate_dir)) or \
           (not os.path.exists(self.include_dir)) or \
           (not os.path.exists(self.src_dir)) or \
           (not os.path.exists(self.tools_dir)):
            return False
        else:
            return True
    
    
    def migration_recommended(self):
        """Determine whether migration is recommended for this component.
        
        Return True if recommended, otherwise False.
        """
        if os.path.exists(os.path.join(self.tools_dir, 'contract')) or \
            os.path.exists(os.path.join(self.tools_dir, 'Config')) or \
            os.path.exists(os.path.join(self.tools_dir, 'Integrate.bat')) or \
            (not os.path.exists(self.swcsupport_path)):
            return True
        
        return False
    
    
    def execute(self, command, **kwargs):
        """Execute a publicly-accessible command, and catch all exceptions.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        
        Keyword arguments vary by command, and are passed directly to the
        command.
        """
        # check command validity
        if type(command) != type('') or command.startswith('_') or command == 'execute':
            return 1, 'Invalid command.'
        
        # get method to execute
        method = getattr(self, command, None)
        if type(method) != type(self.__init__):
            return 1, 'Invalid command.'
        
        # try running command
        try:
            if kwargs:
                err_code, msg = method(**kwargs)
            else:
                err_code, msg = method()
        except (IOError, WindowsError) as e:
            # common exception - files are read-only
            err_code = 2
            if e.errno == errno.EACCES:
                msg = 'Some files in the project are read only.'
            else:
                err_code = 2
                t, i, tb = sys.exc_info()
                msg = ''.join(['Exception:\n', str(i), '\n\nTraceback:\n', '\n'.join(traceback.format_tb(tb, 5))])
        except:
            # all other exceptions
            err_code = 2
            t, i, tb = sys.exc_info()
            msg = ''.join(['Exception:\n', str(i), '\n\nTraceback:\n', '\n'.join(traceback.format_tb(tb, 5))])
        
        return err_code, msg
    
    
    def initialize(self):
        """Create basic directories if they don't already exist.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        # collect basic directories
        dirs = []
        dirs.append(self.autosar_dir)
        dirs.append(self.doc_dir)
        dirs.append(self.generate_dir)
        dirs.append(self.include_dir)
        dirs.append(self.make_dir)
        dirs.append(self.src_dir)
        dirs.append(self.tools_dir)
        dirs.append(self.local_dir)
        
        # create them if they don't exist
        for dir in dirs:
            if not os.path.exists(dir):
                os.makedirs(dir)
        
        # copy SWCSupport.bat
        nxtr.copy_if_changed(_swcsupport_launcher_file, self.swcsupport_path)
        
        return 0, None
    
    
    def migrate(self):
        """Perform component migration to latest directory format.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        ## delete tools/Config
        
        config_dir = os.path.join(self.tools_dir, 'Config')
        if os.path.exists(config_dir):
            shutil.rmtree(config_dir)
            
        ## delete QAC
        
        qac_dir = os.path.join(self.tools_dir, 'QAC')
        if os.path.exists(qac_dir):
            shutil.rmtree(qac_dir)
        
        ## delete QAC_Results
        
        qacresults_dir = os.path.join(self.doc_dir, 'QAC_results')
        if os.path.exists(qacresults_dir):
            shutil.rmtree(qacresults_dir)
        
        ## delete Polyspace_results
        
        polyresults_dir = os.path.join(self.doc_dir, 'Polyspace_results')
        if os.path.exists(polyresults_dir):
            shutil.rmtree(polyresults_dir)
            
        ## delete requirements    
        
        require_dir = os.path.join(self.doc_dir, 'requirements.csv')
        if os.path.exists(require_dir):
            os.remove(require_dir)
        
        ## delete ECUC and batch files in tools directory
        
        old_files = glob.glob(os.path.join(self.tools_dir, '*ecuc.arxml'))
        old_files.extend(glob.glob(os.path.join(self.tools_dir, '*.bat')))
        for file in old_files:
            os.remove(file)
        
        ## copy SWCSupport.bat
        
        nxtr.copy_if_changed(_swcsupport_launcher_file, self.swcsupport_path)
        
        ## migrate contract folder
        
        # set up paths
        contract_dir = os.path.join(self.tools_dir, 'contract')
        
        # check whether contract folder exists
        if os.path.exists(contract_dir):
            
            # get all known generated files
            generated_files = glob.glob(os.path.join(contract_dir, 'Rte*.h'))
            for file in glob.glob(os.path.join(contract_dir, '*' + self.short_name + '*.h')):
                if file not in generated_files:
                    generated_files.append(file)
            
            # move generated files to tools/local/generate
            if len(generated_files) > 0:
                
                if not os.path.exists(self.local_generate_dir):
                    os.makedirs(self.local_generate_dir)
                
                for file in generated_files:
                    to_file = os.path.join(self.local_generate_dir, os.path.basename(file))
                    nxtr.move_if_changed(file, to_file)
            
            # get remaining header files
            include_files = glob.glob(os.path.join(contract_dir, '*.h'))
            
            # move remaining header files to tools/local/include
            if len(include_files) > 0:
                
                if not os.path.exists(self.local_include_dir):
                    os.makedirs(self.local_include_dir)
                
                for file in include_files:
                    to_file = os.path.join(self.local_include_dir, os.path.basename(file))
                    nxtr.move_if_changed(file, to_file)
            
            # remove contract folder if it's empty
            try:
                os.rmdir(contract_dir)
            except OSError as e:
                # if folder not empty, ignore error
                if e.errno != errno.ENOTEMPTY:
                    raise
        
        ## move generation files into template folder
        
        # set up paths and patterns
        artt_from_pattern = os.path.join(self.generate_dir, '*.tt')
        script_from_pattern = os.path.join(self.generate_dir, '*.bat')
        
        # ensure destination folder exists
        if not os.path.exists(self._template_dir):
            os.makedirs(self._template_dir)
        
        # create glob
        from_files = glob.glob(artt_from_pattern)
        from_files.extend(glob.glob(script_from_pattern))
        
        # check for manual templates
        for file in os.listdir(self.tools_dir):
            if os.path.isfile(os.path.join(self.tools_dir, file)):
                if 'template' in file.lower():
                    from_files.append(os.path.join(self.tools_dir, file))
        
        if len(from_files) > 0:
            
            # move files
            for file in from_files:
                to_file = os.path.join(self._template_dir, os.path.basename(file))
                nxtr.move_if_changed(file, to_file)
            
            # update generation script
            err_code, msg = self.generate_generation_script()
            if err_code != 0:
                return err_code, msg
        
        ## update green hills project if it exists
        
        greenhills_files = glob.glob(os.path.join(self.tools_dir, '*.gpj'))
        
        if len(greenhills_files) > 0:
            for file in greenhills_files:
                os.remove(file)
            err_code, msg = self.generate_greenhills()
            if err_code != 0:
                return err_code, msg
        
        ## update DaVinci files if they exist
        
        davinci_files = glob.glob(os.path.join(self.tools_dir, '*.dpa'))
        
        if len(davinci_files) > 0:
            for file in davinci_files:
                os.remove(file)
            err_code, msg = self.generate_davinci()
            if err_code != 0:
                return err_code, msg
        
        ## migrate IntegrationCopy folder
        
        integrationcopy_dir = os.path.join(self.tools_dir, 'IntegrationCopy')
        if os.path.exists(integrationcopy_dir):
            
            # copy all files to tools/integrate
            for from_dir, dir_list, file_list in os.walk(integrationcopy_dir):
                for file in file_list:
                    from_file_path = os.path.join(from_dir, file)
                    to_file_path = os.path.join(self.integrate_dir, file)
                    nxtr.move_if_changed(from_file_path, to_file_path)
            
            # remove IntegrationCopy folder
            shutil.rmtree(integrationcopy_dir)
        
        ## update Polyspace project if it exists
        
        if os.path.exists(self.polyspace_dir):
            err_code, msg = self.generate_polyspace_files()
            if err_code != 0:
                return err_code, msg
        
        # return response message
        return 0, 'Project migration complete.'
    
    
    def generate_greenhills(self):
        """Generate Green Hills project file.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # get a list of all source and header files
        source_paths = [os.path.basename(file_name) for file_name in glob.glob(os.path.join(self.src_dir, '*.c'))]
        header_paths = [os.path.basename(file_name) for file_name in glob.glob(os.path.join(self.include_dir, '*.h'))]
        
        # render project file from template
        greenhills_template = mako.template.Template(filename=_greenhills_template_file)
        greenhills_rendered = greenhills_template.render(component=self, source_paths=source_paths, header_paths=header_paths).replace('\r', '')
        
        # determine target file name
        file_path = os.path.join(self.tools_dir, self.name + '.gpj')
        
        # compare files (don't update if there are no differences)
        files_changed |= nxtr.write_if_changed(greenhills_rendered, file_path)
        
        # return response message
        if files_changed:
            msg = 'The project file was updated successfully.'
        else:
            msg = 'The project file is already up to date.'
        return 0, msg
    
    
    def generate_davinci(self):
        """Generate DaVinci component files.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # check for generation script
        generation_script = None
        generation_script_pattern = os.path.join(self._template_dir, '*' + self.short_name + '*.bat')
        generation_script_files = [os.path.basename(file_name) for file_name in glob.glob(generation_script_pattern)]
        if len(generation_script_files) > 0:
            generation_script = generation_script_files[0]
        
        # check for component ECUC file
        component_ecuc_file = None
        component_ecuc_pattern = os.path.join(self.local_ecuc_dir, '*' + self.short_name + '*_ecuc.arxml')
        component_ecuc_files = [os.path.basename(file_name) for file_name in glob.glob(component_ecuc_pattern)]
        if len(component_ecuc_files) > 0:
            component_ecuc_file = component_ecuc_files[0]
        
        # render DaVinci project file from template
        davinci_template = mako.template.Template(filename=_davinci_template_file)
        davinci_rendered = davinci_template.render(component=self, generation_script=generation_script, component_ecuc_file=component_ecuc_file).replace('\r', '')
        
        # update DaVinci project file
        davinci_file_path = os.path.join(self.tools_dir, 'Component.dpa')
        files_changed |= nxtr.write_if_changed(davinci_rendered, davinci_file_path)
        
        # update static component ECUC files
        files_changed |= nxtr.copy_dir_tree(_ecuc_template_dir, self.local_ecuc_dir)
        
        # get list of splitter ECUC files
        splitter_file_pattern = os.path.join(self.local_ecuc_dir, 'Component_*_ecuc.arxml')
        splitter_re = re.compile(r'Component_(.+)_ecuc\.arxml', re.IGNORECASE)
        splitter_components = [splitter_re.search(file_name).group(1) for file_name in glob.glob(splitter_file_pattern)]
        
        # render main component ECUC file from temlpate
        ecuc_template = mako.template.Template(filename=_component_ecuc_template)
        ecuc_rendered = ecuc_template.render(splitter_components=splitter_components).replace('\r', '')
        
        # update main component ECUC file
        ecuc_file_path = os.path.join(self.local_ecuc_dir, 'Component.ecuc.arxml')
        files_changed |= nxtr.write_if_changed(ecuc_rendered, ecuc_file_path)
        
        # return response message
        if files_changed:
            msg = 'The DaVinci files were updated successfully.'
        else:
            msg = 'The DaVinci files are already up to date.'
        return 0, msg
    
    
    def generate_integration_files(self):
        """Generate integration files.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # set up component paths
        bswmd_file_pattern = os.path.join(self.autosar_dir, '*' + self.short_name + '*_bswmd.arxml')
        integrate_script_path = os.path.join(self.integrate_dir, 'Integrate.bat')
        configurator_dir = os.path.join(self.integrate_dir, 'Configurator')
        settings_path = os.path.join(configurator_dir, 'Settings_' + self.short_name + '.xml')
        
        # get list of bswmd files
        bswmd_files = [os.path.basename(file_name) for file_name in glob.glob(bswmd_file_pattern)]
        
        if len(bswmd_files) > 0:
            # a BSWMD file was found - this component needs an integration script
            
            # render integration script from template
            integrate_template = mako.template.Template(filename=_integrate_template_file)
            integrate_rendered = integrate_template.render(component=self, bswmd_file=bswmd_files[0]).replace('\r', '')
            
            # update integration script file
            files_changed |= nxtr.write_if_changed(integrate_rendered, integrate_script_path)
            
            # create configurator folder if it doesn't already exist
            if not os.path.exists(configurator_dir):
                os.mkdir(configurator_dir)
                files_changed = True
            
            # render settings file from template
            settings_template = mako.template.Template(filename=_settings_template_file)
            settings_rendered = settings_template.render(component=self).replace('\r', '')
            
            # update settings file
            files_changed |= nxtr.write_if_changed(settings_rendered, settings_path)
            
        else:
            # no BSWMD files were found - this component does not need an integration script
            
            # delete integration script, if it exists
            if os.path.exists(integrate_script_path):
                os.remove(integrate_script_path)
                files_changed = True
            
            # delete settings file, if it exists
            if os.path.exists(settings_path):
                os.remove(settings_path)
                files_changed = True
            
            # delete integrate/Configurator folder, if it is empty
            if os.path.exists(configurator_dir):
                if not os.listdir(configurator_dir):
                    os.rmdir(configurator_dir)
                    files_changed = True
        
        # return response message
        if files_changed:
            msg = 'The integration files were updated successfully.'
        else:
            msg = 'The integration files are already up to date.'
        return 0, msg
    
    
    def generate_generation_script(self):
        """Generate generation batch script, or remove it if not necessary.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # set up component paths
        artt_file_pattern = os.path.join(self._template_dir, '*.tt')
        generate_script_path = os.path.join(self._template_dir, self.short_name + '_Generate.bat')
        
        # get list of artt files
        artt_templates = [os.path.basename(file_name) for file_name in glob.glob(artt_file_pattern)]
        
        if len(artt_templates) > 0:
            # a template file was found - this component needs a generation script
            
            # render generation script from template
            generate_template = mako.template.Template(filename=_generate_template_file)
            generate_rendered = generate_template.render(component=self, artt_templates=artt_templates).replace('\r', '')
            
            # update generation script file
            files_changed |= nxtr.write_if_changed(generate_rendered, generate_script_path)
            
        else:
            # no template files were found - this component does not need a generation script
            
            # delete generation script, if it exists
            if os.path.exists(generate_script_path):
                os.remove(generate_script_path)
                files_changed = True
        
        # return response message
        if files_changed:
            msg = 'The generation files were updated successfully.'
        else:
            msg = 'The generation files are already up to date.'
        return 0, msg
        
    def generate_sandbox(self):
        """Generate Sandbox project file.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        sandbox_name = self.name[:-5]
        
        # render project file from sandbox template
        sandbox_template = mako.template.Template(filename=_sandbox_template_file)
        sandbox_rendered = sandbox_template.render(component=self).replace('\r', '')
        
        # determine target file name
        file_path = os.path.join(self.parent_dir, sandbox_name + '_Sandbox' + '.gpj')  
        
        # compare files (don't update if there are no differences)
        files_changed |= nxtr.write_if_changed(sandbox_rendered, file_path)

        # open up sandbox project 
        os.system("start " + file_path)
        
        # return response message
        if files_changed:
            msg = 'The sandbox project was created successfully.'
        else:
            msg = 'The sandbox project is already up to date.'
        return 0, msg
        
    def generate_local_headers(self):
        """Generate local header files from Configurator.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        # check for support component
        davinci_exe = _find_file(os.path.normpath(os.path.join(self.path, '..', 'TL101A_CptRteGen', 'tools')), 'DVCfgCmd.exe')
        if davinci_exe is None:
            return 3, 'Unable to locate DVCfgCmd.exe in the support component TL101A_CptRteGen.'
        
        # get RTE component name
        component_name = self.short_name # use short name by default
        component_types_dir = _find_dir(self.autosar_dir, 'ComponentTypes')
        if component_types_dir is None:
            component_types_dir = _find_dir(self.local_autosar_dir, 'ComponentTypes')
        if component_types_dir is not None:
            component_types_pattern = os.path.join(component_types_dir, '*.arxml')
            component_files = glob.glob(component_types_pattern)
            component_files = [os.path.basename(file_name) for file_name in component_files]
            component_names = [os.path.splitext(file_name)[0] for file_name in component_files]
            component_name = ';'.join(component_names)
        
        # set up generation command
        gen_arg = r'Rte: -m {} -g i -g c -o c="{}" -o i="{}"'.format(component_name, self.local_generate_dir, self.src_dir)
        command = [davinci_exe,
                   '-p',
                   'Component.dpa',
                   '-m',
                   '/MICROSAR/Rte',
                   '-g',
                   '--genArg={}'.format(gen_arg)]
        
        # run generation command and catch errors
        msg = None
        err_code = 0
        try:
            subprocess.check_output(command, cwd=self.tools_dir, stderr=subprocess.STDOUT, shell=True)
        except subprocess.CalledProcessError as e:
            msg = e.output
            err_code = 3
        
        # clean up files if generation was successful
        if msg is None:
            # delete log file
            log_path = os.path.join(self.tools_dir, 'DVCfgCmd.log')
            if os.path.exists(log_path):
                os.remove(log_path)
            
            # remove backup files
            for file in os.listdir(self.local_generate_dir):
                if file.endswith('.bak'):
                    os.remove(os.path.join(self.local_generate_dir, file))
            
            msg = 'The headers were generated successfully.'
        
        return err_code, msg
    
    
    def generate_polyspace_files(self, dd_path=None):
        """Generate Polyspace project files and stubs.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # check arguments
        if dd_path is not None and not os.path.exists(dd_path):
            return 3, 'Specified data dictionary does not exist.'
        
        # set up paths
        parent_dir = os.path.normpath(os.path.join(self.path, '..'))
        
        # set up standard includes
        standard_includes = (
            'TL103A_CplrSuprt/include/2013.5.5/ansi',
            'AR202A_MicroCtrlrSuprt_Impl/include/P1M/R7F701311',
            'AR200A_ArSuprt_Impl/include/ASR4.0.3',
            'AR200A_ArSuprt_Impl/tools/contract',
            'AR201A_ArCplrSuprt_Impl/include/ASR4.0.3',
            'AR201A_ArCplrSuprt_Impl/tools/contract',
            'AR100A_NxtrMath_Impl/include',
            'AR101A_NxtrIntrpn_Impl/include',
            'AR104A_NxtrFil_Impl/include',
            'AR102A_NxtrTi_Impl/include',
            'AR103A_NxtrFixdPt_Impl/include',
            'AR999A_ArchGlbPrm_Impl/include',
            'ES999A_ElecGlbPrm_Impl/include',
            'SF999A_SysGlbPrm_Impl/include'
        )
        
        # set stub file paths
        stub_c_path = os.path.join(self.local_generate_dir, 'Rte_Stubs.c').replace('\\', '/')
        stub_h_path = os.path.join(self.local_generate_dir, 'Rte_Stubs.h').replace('\\', '/')
        #globals_path = os.path.join(self.local_generate_dir, 'CDD_MotCtrlMgr_Data.h').replace('\\', '/')
        
        # get source files
        search_dirs = []
        search_dirs.append(self.src_dir)
        search_dirs.append(self.local_generate_dir)
        search_dirs.append(self.local_src_dir)
        
        source_paths = []
        for dir in search_dirs:
            if not os.path.exists(dir):
                continue
            for file in os.listdir(dir):
                if file.endswith('.c'):
                    source_paths.append(os.path.join(dir, file).replace('\\', '/'))
        
        if dd_path and stub_c_path not in source_paths:
            source_paths.append(stub_c_path)
        
        # set up include paths
        include_dirs = []
        include_dirs.append(self.include_dir.replace('\\', '/'))
        include_dirs.append(self.local_generate_dir.replace('\\', '/'))
        include_dirs.append(self.local_include_dir.replace('\\', '/'))
        for include in standard_includes:
            include_dirs.append(os.path.join(parent_dir, include).replace('\\', '/'))
        include_dirs.append('C:/ghs/comp_201517/include/v800')
        
        # set up ignore paths
        ignores = []
        for include in standard_includes:
            ignores.append(os.path.join(parent_dir, include).replace('\\', '/'))
        ignores.append('C:/ghs/comp_201517/include/v800')
        
        # collect template names (don't ignore local files created from templates)
        templates = []
        if os.path.exists(self._template_dir):
            for file in os.listdir(self._template_dir):
                if file.endswith('.tt'):
                    templates.append(file[:-3])
                elif '_template' in file.lower():
                    idx = file.lower().index('_template')
                    templates.append(file[:idx] + file[idx+9:])
                elif file.endswith('.c') or file.endswith('.h'):
                    templates.append(file)
        
        # check local directories for files to ignore
        check_dirs = []
        check_dirs.append(self.local_generate_dir)
        check_dirs.append(self.local_include_dir)
        check_dirs.append(self.local_src_dir)
        
        for dir in check_dirs:
            if os.path.exists(dir):
                for file in os.listdir(dir):
                    if file.endswith('.c') or file.endswith('.h'):
                        if file not in templates:
                            ignores.append(os.path.join(dir, file).replace('\\', '/'))
        
        # add stub files if not already added
        if dd_path:
            if stub_c_path not in ignores:
                ignores.append(stub_c_path)
            if stub_h_path not in ignores:
                ignores.append(stub_h_path)
            #if globals_path not in ignores:
                #ignores.append(globals_path)
        
        # use a DRS file in CodeProver?
        use_drs = True if dd_path else False
        
        # set polyspace path for templates
        polyspace_dir = self.polyspace_dir.replace('\\', '/')
        
        # render codeprover project file from template
        codeprover_template = mako.template.Template(filename=_codeprover_template_file)
        codeprover_rendered = codeprover_template.render(polyspace_dir=polyspace_dir, include_dirs=include_dirs, source_paths=source_paths, ignores=ignores, use_drs=use_drs).replace('\r', '')
        
        # update codeprover project file
        files_changed |= nxtr.write_if_changed(codeprover_rendered, self.codeprover_path)
        
        # render bugfinder project file from template
        bugfinder_template = mako.template.Template(filename=_bugfinder_template_file)
        bugfinder_rendered = bugfinder_template.render(polyspace_dir=polyspace_dir, include_dirs=include_dirs, source_paths=source_paths, ignores=ignores).replace('\r', '')
        
        # update bugfinder project file
        files_changed |= nxtr.write_if_changed(bugfinder_rendered, self.bugfinder_path)
        
        # copy MISRA settings configuration file
        misra_config_path = os.path.join(self.polyspace_dir, 'MISRASettings.cfg')
        files_changed |= nxtr.copy_if_changed(_misra_template_file, misra_config_path)
        
        # if data dictionary provided, create stub files
        if dd_path:
            
            # parse data dictionary
            dd_objs = datadict.parse_data_dict(dd_path)
            
            # open RTE header file
            header = None
            header_file = 'Rte_' + self.short_name + '.h'
            header_path = os.path.join(self.local_generate_dir, header_file)
            if not os.path.exists(header_path):
                header_file = 'Rte_CDD_' + self.short_name + '.h'
                header_path = os.path.join(self.local_generate_dir, header_file)
                if not os.path.exists(header_path):
                    header_file = None
                    header_path = None
            
            # read RTE header for later use
            if header_path:
                with open(header_path, 'r') as file:
                    header = file.read()
                include_tag = '\n#include "Rte_Stubs.h"\n'
                if not header.endswith(include_tag):
                    with open(header_path, 'a') as file:
                        file.write(include_tag)
                        files_changed = True
            
            # get DRS statements
            drs = []
            for dd_obj in dd_objs:
                
                # check for client/server port objects
                if dd_obj.value == 'DataDict.Client' or dd_obj.value == 'DataDict.SrvRunnable':
                    
                    # ignore fault injection ports
                    if 'FltInj_' in dd_obj.name:
                        continue
                    
                    # set name and symbol prefix
                    if dd_obj.value == 'DataDict.Client':
                        name = self.short_name + '_' + dd_obj.name
                        prefix = '_Srv_'
                    else:
                        name = dd_obj.name
                        prefix = '_Cli_'
                    
                    # if port name not found in RTE header, skip this object
                    if _check_header(header, name) is None:
                        continue
                    
                    # get DRS statements for return value and arguments
                    for sub_obj in dd_obj.children:
                        if sub_obj.value == 'DataDict.CSArguments' or sub_obj.value == 'DataDict.CSReturn':
                            drs.extend(sub_obj.get_drs(''.join([self.short_name, prefix, dd_obj.name])))
                
                # check for other DRS objects
                else:
                    suffix = _ps_stub_suffix(dd_obj)
                    
                    if suffix:
                        drs.extend(dd_obj.get_drs(self.short_name + suffix))
            
            # additional DRS statements for math.h stubs
            drs.append('sqrtf.return 0 max permanent')
            drs.append('fabsf.return 0 max permanent')
            drs.append('fmodf.return 0 max permanent')
            drs.append('expf.return 0 max permanent')
            drs.append('sinf.return -1 1 permanent')
            drs.append('cosf.return -1 1 permanent')
            drs.append('atan2f.return -3.1412 3.1412 permanent')
            
            # write DRS file
            drs_path = os.path.join(self.polyspace_dir, 'DRS.txt')
            files_changed |= nxtr.write_if_changed('\n'.join(drs), drs_path)
            
            # collect stub objects
            stubs = {}
            stubs['ip'] = []
            stubs['op'] = []
            stubs['cal'] = []
            stubs['pim'] = []
            stubs['irv'] = []
            servers = []
            clients = []
            globals = []
            
            for dd_obj in dd_objs:
                
                # check for runnable objects
                if dd_obj.value == 'DataDict.Runnable':
                    
                    name = dd_obj.name
                    
                    if header is not None and name not in header:
                        # check context for NonRte
                        non_rte = False
                        for obj in dd_obj.children:
                            if obj.name == 'Context':
                                if obj.value == '\'NonRte\'':
                                    non_rte = True
                        if not non_rte:
                            continue
                    
                    clients.append({'name': name, 'return': None, 'args': []})
                
                # check for client/server port objects
                elif dd_obj.value == 'DataDict.Client' or dd_obj.value == 'DataDict.SrvRunnable':
                    
                    # ignore fault injection ports
                    if 'FltInj_' in dd_obj.name:
                        continue
                    
                    # set name and symbol prefix
                    if dd_obj.value == 'DataDict.Client':
                        name = self.short_name + '_' + dd_obj.name
                        prefix = '_Srv_'
                    else:
                        name = dd_obj.name
                        prefix = '_Cli_'
                    
                    # get actual RTE name from RTE header file - if not found, skip
                    name = _check_header(header, name)
                    if name is None:
                        continue
                    
                    # get arguments and return objects for this port
                    args = []
                    ret = None
                    for sub_obj in dd_obj.children:
                        if sub_obj.value == 'DataDict.CSArguments' or sub_obj.value == 'DataDict.CSReturn':
                            stub_obj = sub_obj.get_rte_stub(''.join([self.short_name, prefix, dd_obj.name]))
                            if stub_obj:
                                if sub_obj.value == 'DataDict.CSArguments':
                                    args.append(stub_obj)
                                else:
                                    ret = stub_obj
                    
                    # add to client/server list
                    if dd_obj.value == 'DataDict.Client':
                        servers.append({'name': name, 'return': ret, 'args': args})
                    else:
                        clients.append({'name': name, 'return': ret, 'args': args})
                
                # check for other stub objects
                else:
                    suffix = _ps_stub_suffix(dd_obj)
                    
                    if suffix:
                        stub_obj = dd_obj.get_rte_stub(self.short_name + suffix)
                        
                        # if object needs a stub, add to appropriate list
                        if stub_obj:
                            if stub_obj['rte_name'] is None:
                                globals.append(stub_obj)
                            elif dd_obj.value == 'DataDict.IpSignal':
                                stubs['ip'].append(stub_obj)
                            elif dd_obj.value == 'DataDict.OpSignal':
                                stubs['op'].append(stub_obj)
                            elif dd_obj.value == 'DataDict.Calibration' or dd_obj.value == 'DataDict.ImprtdCal':
                                stubs['cal'].append(stub_obj)
                            elif dd_obj.value == 'DataDict.PIM' or dd_obj.value == 'DataDict.NVM' or dd_obj.value == 'DataDict.Display':
                                stubs['pim'].append(stub_obj)
                            elif dd_obj.value == 'DataDict.IRV':
                                stubs['irv'].append(stub_obj)
            
            # render RTE stub files from template
            stub_c_template = mako.template.Template(filename=_stub_c_template_file)
            stub_h_template = mako.template.Template(filename=_stub_h_template_file)
            stub_c_rendered = stub_c_template.render(rte_header=header_file, servers=servers, clients=clients, irvs=stubs['irv']).replace('\r', '')
            stub_h_rendered = stub_h_template.render(stubs=stubs, servers=servers, clients=clients).replace('\r', '')
            
            # write RTE stub files
            stub_c_path = os.path.join(self.local_generate_dir, 'Rte_Stubs.c')
            stub_h_path = os.path.join(self.local_generate_dir, 'Rte_Stubs.h')
            files_changed |= nxtr.write_if_changed(stub_c_rendered, stub_c_path)
            files_changed |= nxtr.write_if_changed(stub_h_rendered, stub_h_path)
            
            # render and write MotCtrl stub file if necessary
            #if globals:
            #    globals_template = mako.template.Template(filename=_globals_template_file)
            #    globals_rendered = globals_template.render(rte_header=header_file, globals=globals).replace('\r', '')
            #    globals_path = os.path.join(self.local_generate_dir, 'CDD_MotCtrlMgr_Data.h')
            #    files_changed |= nxtr.write_if_changed(globals_rendered, globals_path)
        
        # return response message
        if files_changed:
            msg = 'The Polyspace files were updated successfully.'
        else:
            msg = 'The Polyspace files are already up to date.'
        if not dd_path:
            msg += '\n\nNo Data Dictionary was available, so CodeProver results may be inaccurate.'
        return 0, msg
    
    
    def unzip_polyspace(self):
        """Unzip Polyspace archives.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # check archive folder exists
        if not os.path.exists(self.archive_dir):
            return 0, 'No Polyspace archives were found.'
        
        # check for codeprover archive
        if os.path.exists(self.codeprover_archive_path):
            
            # remove current results if they exist
            if os.path.exists(self.codeprover_dir):
                shutil.rmtree(self.codeprover_dir)
            
            # create results directory
            os.makedirs(self.codeprover_dir)
            
            # unzip archive
            with zipfile.ZipFile(self.codeprover_archive_path, 'r') as zip_file:
                zip_file.extractall(self.codeprover_dir)
                zip_file.close()
            
            files_changed = True
        
        # check for bugfinder archive
        if os.path.exists(self.bugfinder_archive_path):
            
            # remove current results if they exist
            if os.path.exists(self.bugfinder_dir):
                shutil.rmtree(self.bugfinder_dir)
            
            # create results directory
            os.makedirs(self.bugfinder_dir)
            
            # unzip archive
            with zipfile.ZipFile(self.bugfinder_archive_path, 'r') as zip_file:
                zip_file.extractall(self.bugfinder_dir)
                zip_file.close()
            
            files_changed = True
        
        # return response message
        if files_changed:
            msg = 'The Polyspace archives were extracted successfully.'
        else:
            msg = 'No Polyspace archives were found.'
        return 0, msg
    
    
    def open_bugfinder(self):
        """Open Polyspace Bug Finder project.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        # check project exists
        if not os.path.exists(self.bugfinder_path):
            return 0, 'No Bug Finder project file was found.'
        
        # form command
        command = []
        command.append('polyspace-bug-finder')
        command.append(self.bugfinder_path)
        
        # initialize startupinfo (don't show a console window)
        sinfo = subprocess.STARTUPINFO()
        sinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        
        # start process
        process = subprocess.Popen(command, cwd=self.polyspace_dir, startupinfo=sinfo)
        
        return 0, None
    
    
    def open_codeprover(self):
        """Open Polyspace Code Prover project.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        # check project exists
        if not os.path.exists(self.codeprover_path):
            return 0, 'No Code Prover project file was found.'
        
        # form command
        command = []
        command.append('polyspace-code-prover')
        command.append(self.codeprover_path)
        
        # initialize startupinfo (don't show a console window)
        sinfo = subprocess.STARTUPINFO()
        sinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        
        # start process
        process = subprocess.Popen(command, cwd=self.polyspace_dir, startupinfo=sinfo)
        
        return 0, None
    
    
    def create_reports(self):
        """Create Polyspace reports.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        # get bin directory
        # - report generator must be run directly from the bin directory (it's not so smart)
        polyspace_bin_dir = _find_polyspace_bin_directory()
        if not polyspace_bin_dir:
            return 3, 'Could not find the Polyspace bin directory.  Generate the report manually by opening the results, then select Run -> Run Report.\n'
        
        msg = 'No project files found.'
        
        project_path = False
        
        if os.path.exists(self.bugfinder_dir):
            # form command
            command = []
            command.append('polyspace-report-generator')
            command.append('-template')
            command.append(_bugfinder_report_template_file)
            command.append('-format')
            command.append('XML')
            command.append('-output-name')
            command.append(os.path.join(self.doc_dir, 'Polyspace', 'BugFinder'))
            command.append('-results-dir')
            command.append(self.bugfinder_dir)           
            
            # run command
            try:
                subprocess.check_output(command, cwd=polyspace_bin_dir, stderr=subprocess.STDOUT, shell=True)
            except subprocess.CalledProcessError as e:
                return 3, e.output
        
            project_path = True
        
        if os.path.exists(self.codeprover_dir):
            # form command
            command = []
            command.append('polyspace-report-generator')
            command.append('-template')
            command.append(_codeprover_report_template_file)
            command.append('-format')
            command.append('XML')
            command.append('-output-name')
            command.append(os.path.join(self.doc_dir, 'Polyspace', 'CodeProver'))
            command.append('-results-dir')
            command.append(self.codeprover_dir)      
        
            # run command
            try:
                subprocess.check_output(command, cwd=polyspace_bin_dir, stderr=subprocess.STDOUT, shell=True)
            except subprocess.CalledProcessError as e:
                return 3, e.output
        
            project_path = True
        
        if project_path:
            msg = 'Files were successfully generated.'
        else:
            msg = 'No results were generated because no files were found. Please make sure results are unzipped.'
        return 0, msg
    
    
    def zip_polyspace(self):
        """Zip current Polyspace results into archives.
        
        Return error code and completion message.  If erronious, message
        contains error information.
        """
        files_changed = False
        
        # set up paths
        bugfinder_backup_dir = os.path.join(self.bugfinder_dir, 'comments_bak')
        
        # create archive folder if it doesn't exist
        if not os.path.exists(self.archive_dir):
            os.makedirs(self.archive_dir)
            files_changed = True
        
        # check for codeprover results
        if os.path.exists(self.codeprover_dir) and len(os.listdir(self.codeprover_dir)) > 0:
            
            # remove old archive if it exists
            if os.path.exists(self.codeprover_archive_path):
                os.remove(self.codeprover_archive_path)
            
            # zip archive
            with zipfile.ZipFile(self.codeprover_archive_path, 'w') as zip_file:
                for root, directories, files in os.walk(self.codeprover_dir):
                    for file in files:
                        file_path = os.path.join(root, file)
                        rel_path = os.path.relpath(file_path, self.codeprover_dir)
                        zip_file.write(file_path, rel_path)
            
            # remove results folder
            shutil.rmtree(self.codeprover_dir)
            
            files_changed = True
        
        # check for bugfinder results
        if os.path.exists(self.bugfinder_dir) and len(os.listdir(self.bugfinder_dir)) > 0:
            
            # remove old archive if it exists
            if os.path.exists(self.bugfinder_archive_path):
                os.remove(self.bugfinder_archive_path)
            
            # remove backup folder if it exists
            if os.path.exists(bugfinder_backup_dir):
                shutil.rmtree(bugfinder_backup_dir)
            
            # zip archive
            with zipfile.ZipFile(self.bugfinder_archive_path, 'w') as zip_file:
                for root, directories, files in os.walk(self.bugfinder_dir):
                    for file in files:
                        file_path = os.path.join(root, file)
                        rel_path = os.path.relpath(file_path, self.bugfinder_dir)
                        zip_file.write(file_path, rel_path)
            
            # remove results folder
            shutil.rmtree(self.bugfinder_dir)
            
            files_changed = True
        
        # return response message
        if files_changed:
            msg = 'The Polyspace results were archived successfully.'
        else:
            msg = 'No Polyspace results were found.'
        return 0, msg


################################################################################
##  GUI FUNCTIONS AND CLASSES
################################################################################


class _ErrorDialog(tkSD.Dialog):
    """An error window with a scroll-able text area."""
    
    def __init__(self, parent, error_header, error_details):
        """Initialize error dialog.
        
        Required arguments:
        parent -- Toplevel, parent window
        error_header -- string, header statement
        error_details -- string, error message (in text area)
        """
        # save error message and data
        self.header = error_header
        self.details = error_details
        
        # run standard dialog init function
        tkSD.Dialog.__init__(self, parent, _window_title)
    
    
    def body(self, frame):
        """Initialize window elements (override).
        
        Required arguments:
        frame -- Frame, containing TK frame object
        """
        # create header
        ttk.Label(frame, text=self.header).pack(pady=10)
        
        # set up frame for details and scrollbar
        box = tk.Frame(frame)
        
        scrollbar = ttk.Scrollbar(box)
        text_area = tk.Text(box)
        
        scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        text_area.pack(side=tk.LEFT, fill=tk.Y)
        
        scrollbar.config(command=text_area.yview)
        text_area.config(yscrollcommand=scrollbar.set, width=60, height=12)
        
        text_area.insert(tk.END, self.details)
        
        box.pack()
    
    
    def buttonbox(self):
        """Initialize window buttons (override)."""
        # Close button
        ttk.Button(self, text="Close", width=10, command=self.cancel).pack(padx=5, pady=5)


class _WaitDialog(tk.Toplevel):
    """A modal dialog with a 'wait' message."""
    
    def __init__(self, parent, message):
        """Initialize wait dialog.
        
        Required arguments:
        parent -- Toplevel, parent window
        message -- string, message to display
        """
        # run standard toplevel init
        tk.Toplevel.__init__(self, parent)
        
        # hide initially
        self.withdraw()
        
        # set as transient of parent
        self.transient(parent)
        
        # set title
        self.title(_window_title)
        
        # add body
        ttk.Label(self, text=message).pack(pady=10)
        
        # center window
        self.__center_window(parent)
        
        # show window
        self.deiconify()
        
        # once visible, update
        self.wait_visibility()
        self.update()
    
    def __center_window(self, parent):
        """Center the dialog window on the parent window."""
        # update info for main window
        self.update_idletasks()
        
        # get center reference point
        parent.update_idletasks()
        center_x = parent.winfo_x() + (parent.winfo_width() // 2)
        center_y = parent.winfo_y() + ((parent.winfo_height() + 30) // 2)
        
        # get width and height of window
        width = max(self.winfo_width(), 100)
        height = max(self.winfo_height(), 40)
        
        # determine offset
        # frame width is 8px, titlebar height is 30px
        x = center_x - ((width + 16) // 2)
        x = max(x, 100)
        y = center_y - ((height + 38) // 2)
        y = max(y, 100)
        
        # set window geometry
        self.geometry('{}x{}+{}+{}'.format(width, height, x, y))


class _MainMenu(nxtr.Menu):
    """Main menu window."""
    
    def __new_component(self):
        """Create a new component.  Prompt for path and check validity."""
        # get component name
        name = tkSD.askstring(_window_title,
                              'Enter component short name.\nformat example: XX000A_ShortName_Impl',
                              parent=self)
        
        # check for cancel
        if not name:
            return
        
        # test name validity
        name_re = re.compile(r'[^A-Za-z0-9_]')
        while name_re.search(name):
            name = tkSD.askstring(_window_title,
                                  'Names may only use alphanumerics and underscores.\nformat example: XX000A_ShortName_Impl',
                                  parent=self)
            if not name:
                return
        
        # get desired path
        parent_dir = tkFD.askdirectory(parent=self, title='Choose parent directory for component.')
        
        # check for cancel
        if not parent_dir:
            return
        
        # test to see whether it already exists
        component_dir = os.path.join(parent_dir, name)
        while os.path.exists(component_dir):
            parent_dir = tkFD.askdirectory(
                              parent=self,
                              title='Component already exists in selected directory.\nChoose another parent directory.')
            if not parent_dir:
                return
            component_dir = os.path.join(parent_dir, name)
        
        # create the component and basic directories
        os.makedirs(component_dir)
        err_code, msg = _Component(component_dir).execute('initialize')
        
        # check for errors and open component
        if err_code != 0:
            _ErrorDialog(self, 'There was a problem creating the component:', msg)
        else:
            # open selected component
            self.__open_component(component_dir)
    
    
    def __select_component(self):
        """Select an existing component.  Prompt for path."""
        # get component path
        component_dir = tkFD.askdirectory(parent=self, title='Select component directory.', mustexist=True)
        
        # check for cancel
        if not component_dir:
            return
        
        # open selected component
        self.__open_component(component_dir)
    
    
    def __open_component(self, component_dir):
        """Open a component menu window.
        
        Required arguments:
        component_dir -- string, path to component
        """
        self.destroy()
        _ComponentMenu(self.parent, component_dir).wait_window()
    
    
    def body(self, frame):
        """Initialize window elements (override).
        
        Required arguments:
        frame -- Frame, containing TK frame object
        """
        sec_pad = 6   # section padding
        b_width = 17  # button width
        
        ttk.Label(frame, text='Main Menu').pack(pady=sec_pad, padx=sec_pad)
        
        box = tk.Frame(frame)
        ttk.Button(box, width=b_width, text='New Component', command=self.__new_component).pack()
        ttk.Button(box, width=b_width, text='Select Existing', command=self.__select_component).pack()
        box.pack(pady=sec_pad, padx=sec_pad)
        
        ttk.Button(frame, width=2, text='?', command=usage_doc, style='Small.TButton').pack(pady=sec_pad, padx=sec_pad)
        ttk.Button(frame, width=7, text='Quit', command=self.destroy).pack(pady=sec_pad, padx=sec_pad)


class _ComponentMenu(nxtr.Menu):
    """Component menu window.
    
    self.component contains an instance of the _Component class.
    """
    
    def __init__(self, parent, component_dir):
        """Initialize component menu window.
        
        Required arguments:
        parent -- Toplevel, parent window
        component_dir -- string, path to component
        """
        # initialize component object
        self.component = _Component(component_dir)
        
        # check basic folder validity
        if not self.component.basic_dirs_valid():
            if not tkMB.askokcancel(_window_title, 'The basic folder structure of this component doesn\'t look right.\nDo you want to proceed?', parent=parent):
                return
        
        # run standard init sequence
        nxtr.Menu.__init__(self, parent, _window_title)
    
    
    def __exe_general(self, command):
        """Execute a component command and show feedback to user.
        
        Required arguments:
        command -- string, command to execute
        """
        # execute command
        err_code, msg = self.component.execute(command)
        
        # show feedback
        if err_code != 0:
            tkMB.showerror(_window_title, msg, parent=self)
        elif msg:
            tkMB.showinfo(_window_title, msg, parent=self)
    
    
    def __exe_wait_dialog(self, command):
        """Execute the command, showing a wait dialog.
        
        Required arguments:
        command -- string, command to execute
        """
        # show wait dialog
        wait_win = _WaitDialog(self, "Generating...")
        
        # generate
        try:
            err_code, msg = self.component.execute(command)
        except Exception as e:
            err_code = 4
            msg = 'There was an unexpected error.'
        finally:
            # remove wait dialog
            wait_win.destroy()
        
        # show feedback
        if err_code != 0:
            _ErrorDialog(self, 'There was a problem during generation:', msg)
        else:
            tkMB.showinfo(_window_title, msg, parent=self)
    
    
    def __update_polyspace_files(self):
        """Execute the generate_polyspace_files command.
        
        Check for the corresponding design component.  If not found, prompt the
        user to select the design component directory.  The user may also choose
        to continue without a data dictionary.
        """
        # get component base name
        name = self.component.name
        if name.endswith('_Impl'):
            name = name[:-5]
        
        # get parent directory
        parent_dir = os.path.normpath(os.path.join(self.component.path, '..'))
        
        # form default path to data dictionary file
        dd_path = os.path.join(parent_dir, name + '_Design', 'Design', name + '_DataDict.m')
        
        # if not found, prompt the user
        if not os.path.exists(dd_path):
            retval = tkMB.askyesnocancel(_window_title, 'Could not find a data dictionary for this component.  Click Yes to locate it manually, or No to generate without a data dictionary.', parent=self)
            if retval is None:
                return
            if retval:
                dd_path = tkFD.askopenfilename(parent=self, title='Select data dictionary file.', filetypes=[('M files', '.m'), ('all files', '.*')], initialdir=parent_dir)
                if not dd_path:
                    return
            else:
                # generate without a data dictionary
                dd_path = None
        
        # generate
        err_code, msg = self.component.execute('generate_polyspace_files', dd_path=dd_path)
        
        # show feedback
        if err_code != 0:
            tkMB.showerror(_window_title, msg, parent=self)
        else:
            tkMB.showinfo(_window_title, msg, parent=self)
    
    
    def body(self, frame):
        """Initialize window elements (override).
        
        Required arguments:
        frame -- Frame, containing TK frame object
        """
        sec_pad = 6   # section padding
        int_pad = 6   # internal padding
        b_width = 17  # button width
        
        # Component header section
        box = ttk.LabelFrame(frame, text='Component', padding=int_pad, labelanchor='n')
        ttk.Label(box, text=self.component.short_name).pack()
        if self.component.migration_recommended():
            ttk.Button(box, width=b_width, text='Migrate', command=lambda: self.__exe_general('migrate')).pack()
        box.pack(pady=sec_pad, fill='x')
        
        # Create/Update section
        box = ttk.LabelFrame(frame, text='Create/Update', padding=int_pad, labelanchor='n')
        button_specs = (
            ('Green Hills',         lambda: self.__exe_general('generate_greenhills')),
            ('DaVinci',             lambda: self.__exe_general('generate_davinci')),
            ('Integration Files',   lambda: self.__exe_general('generate_integration_files')),
            ('Generation Script',   lambda: self.__exe_general('generate_generation_script')),
            ('Sandbox Project',     lambda: self.__exe_general('generate_sandbox'))
        )
        for spec in button_specs:
            ttk.Button(box, width=b_width, text=spec[0], command=spec[1]).pack()
        box.pack(pady=sec_pad, fill='x')
        
        # Generate section
        box = ttk.LabelFrame(frame, text='Davinci', padding=int_pad, labelanchor='n')
        ttk.Button(box, width=b_width, text='Generate', command=lambda: self.__exe_wait_dialog('generate_local_headers')).pack()
        box.pack(pady=sec_pad, fill='x')
        
        # Polyspace section
        box = ttk.LabelFrame(frame, text='Polyspace', padding=int_pad, labelanchor='n')
        button_specs = (
            ('Generate Files',      self.__update_polyspace_files),
            ('Unzip Results',       lambda: self.__exe_general('unzip_polyspace')),
            ('Open Bug Finder',     lambda: self.__exe_general('open_bugfinder')),
            ('Open Code Prover',    lambda: self.__exe_general('open_codeprover')),
            ('Create Reports',      lambda: self.__exe_wait_dialog('create_reports')),
            ('Zip Results',         lambda: self.__exe_general('zip_polyspace'))
        )
        for spec in button_specs:
            ttk.Button(box, width=b_width, text=spec[0], command=spec[1]).pack()
        box.pack(pady=sec_pad, fill='x')
        
        # remaining buttons
        ttk.Button(frame, text='?', width=2, command=usage_doc, style='Small.TButton').pack(pady=sec_pad)
        ttk.Button(frame, text='Quit', width=7, command=self.destroy).pack(pady=sec_pad)


################################################################################
##  MAIN EXECUTION
################################################################################

if __name__ == '__main__':
    _main()

