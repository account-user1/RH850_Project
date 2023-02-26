#! python

# *********************************************************************************************************************
# * Copyright 2016 Nexteer 
# * Nexteer Confidential
# *
# * Module File Name:   updatedd.py
# * Module Description: Updates the data dictionary module types from the Data Management project in eroom.
# * Project:            TL109A_SwcSuprt
# * Author:             Owen Tosh
# *********************************************************************************************************************
# * Version Control:
# *-------------------------------------------------------------------------------------------------------------------
# * Date      Rev      Author    Change Description                                                           SCR #
# * --------  -------  --------  ---------------------------------------------------------------------------  -------
# * 12/01/16   1       OT        Initial version
# *********************************************************************************************************************


import os
import sys
import mako.template
import nxtr
import Tkinter as tk
import tkMessageBox as tkMB
import tkFileDialog as tkFD


# general constants
window_title = 'Update Data Dictionary Types'
script_dir = os.path.dirname(os.path.realpath(sys.argv[0]))
types_template_path = os.path.join(script_dir, 'ddtypes.py.tpl')


################################################################################
##  MAIN FUNCTION
################################################################################

def main():
    
    # initialize Tk
    root = tk.Tk()
    root.withdraw()
    
    # set up window icon
    icon_image = tk.Image('photo', file=os.path.join(script_dir, 'icon.gif'))
    root.tk.call('wm', 'iconphoto', root._w, '-default', icon_image)
    
    # update data dictionary
    update(root)
    
    # release Tk resources
    root.quit()


################################################################################
##  UPDATE FUNCTION
################################################################################

def update(root):
    
    # get path to data management folder
    dm_path = tkFD.askdirectory(parent=root, title='Select Data Management folder', mustexist=True)
    if not dm_path:
        return
    
    # initialize data type collections
    numeric_types = []
    fixed_point_types = []
    enum_types = []
    struct_types = []
    
    
    ## get numeric and fixed point data types
    dt_path = os.path.join(dm_path, '+dt')
    if os.path.exists(dt_path):
        
        for dir in os.listdir(dt_path):
            # remove @ symbol
            name = dir[1:]
            
            if (name[0] == 's' or name[0] == 'u') and 'p' in name:
                fixed_point_types.append(name)
            else:
                numeric_types.append({'name': name, 'c_type': _c_type(name)})
    
    
    ## get enumeration types
    enum_path = os.path.join(dm_path, 'Enumerations', 'EA4')
    if os.path.exists(enum_path):
        for file_name in os.listdir(enum_path):
            
            file_path = os.path.join(enum_path, file_name)
            
            if not os.path.exists(file_path):
                continue
            
            with open(file_path, 'r') as file:
                
                # find class definition
                line = _next_line(file)
                while line is not None and not line.startswith('classdef'):
                    line = _next_line(file)
                
                if not line:
                    continue
                
                # save enumeration name
                line_split = line.split()
                enum_name = line_split[1]
                
                # find enumeration definition
                line = _next_line(file)
                while line is not None and line != 'enumeration':
                    line = _next_line(file)
                
                # initialize enum collection
                enums = []
                
                # loop over enumeration members
                line = _next_line(file)
                while line is not None and line != 'end':
                    
                    line_split = line.split()
                    if len(line_split) < 2:
                        line = _next_line(file)
                        continue
                    
                    name = line_split[0]
                    val = line_split[1]
                    
                    if val.startswith('(') and val.endswith(')'):
                        val = val[1:-1]
                    
                    # add to list
                    enums.append({'name': name, 'val': val})
                    
                    # get next line
                    line = _next_line(file)
                
                if enums:
                    enum_types.append({'name': enum_name, 'enums': enums})
    
    
    ## get struct types
    struct_base_path = os.path.join(dm_path, '+struct')
    if os.path.exists(struct_base_path):
        for dir_name in os.listdir(struct_base_path):
            dir_path = os.path.join(struct_base_path, dir_name)
            if not os.path.isdir(dir_path):
                continue
            
            for file_name in os.listdir(dir_path):
                
                file_path = os.path.join(dir_path, file_name)
                
                with open(file_path, 'r') as file:
                    
                    # find class definition
                    line = _next_line(file)
                    while line is not None and not line.startswith('classdef'):
                        line = _next_line(file)
                    
                    if not line:
                        continue
                    
                    # save structure name
                    line_split = line.split()
                    struct_name = line_split[1]
                    
                    # initialize element list
                    elements = []
                    
                    # find first element definition
                    line = _next_line(file)
                    while line is not None and 'bt.structelement' not in line:
                        line = _next_line(file)
                    
                    # loop through all structure elements
                    while line is not None and line != 'end':
                        
                        # new element found - go to next line
                        line = _next_line(file)
                        
                        # initialize element info
                        el_name = None
                        el_type = None
                        el_min = None
                        el_max = None
                        
                        # loop until next element definition or end of structure
                        while line is not None and line != 'end' and 'bt.structelement' not in line:
                            
                            line_split = line.split('=')
                            if len(line_split) < 2:
                                line = _next_line(file)
                                continue
                            
                            name = line_split[0].strip()
                            val = line_split[1].strip()
                            
                            if val.endswith(';'):
                                val = val[:-1]
                            
                            if name.endswith('.Name'):
                                if val.startswith('\'') and val.endswith('\''):
                                    val = val[1:-1]
                                el_name = val
                            elif name.endswith('.EngDT'):
                                el_type = val
                            elif name.endswith('.EngMin'):
                                el_min = val
                            elif name.endswith('.EngMax'):
                                el_max = val
                            
                            line = _next_line(file)
                        
                        if el_name is not None and el_type is not None:
                            min = _conv_val(el_min, el_type)
                            max = _conv_val(el_max, el_type)
                            elements.append({'name': el_name, 'type': el_type, 'min': min, 'max': max})
                    
                    if elements:
                        struct_types.append({'name': struct_name, 'elements': elements})
    
    
    ## generate types.py
    
    # render file from template
    types_template = mako.template.Template(filename=types_template_path)
    types_rendered = types_template.render(numeric_types=numeric_types, fixed_point_types=fixed_point_types, enum_types=enum_types, struct_types=struct_types).replace('\r', '')
    
    # determine target file name
    file_path = os.path.normpath(os.path.join(script_dir, '..', 'datadict', 'ddtypes.py'))
    
    # update file
    files_changed = nxtr.write_if_changed(types_rendered, file_path)
    
    # show confirmation message
    if files_changed:
        message = 'Types updated successfully!\n'
    else:
        message = 'Types are already up to date.\n'
    tkMB.showinfo(window_title, message, parent=root)


################################################################################
##  UTILITY FUNCTIONS
################################################################################

def _next_line(file):
    
    line = file.readline()
    
    while True:
        
        if not line:
            return None
        
        if '%' in line:
            line = line[:line.index('%')]
        
        line = line.strip()
        
        if line:
            return line
        
        line = file.readline()
    
    return None


def _conv_val(val, type):
    
    if val.startswith('[') and val.endswith(']'):
        val = val[1:-1]
    
    if not val:
        return 'None'
    
    if type.startswith('dt.float'):
        try:
            val = str(float(val))
            if val.endswith('.0'):
                val = val[:-2]
            return val
        except ValueError:
            return 'None'
    
    elif type.startswith('dt.'):
        try:
            val = str(int(val))
            return val
        except ValueError:
            pass
        
        try:
            val = str(int(eval(val)))
            return val
        except ValueError:
            return 'None'
    
    elif type.startswith('enum.'):
        try:
            val = str(int(val))
            return val
        except ValueError:
            pass
        
        if not val.startswith('\'') or not val.endswith('\''):
            val = '\'' + val + '\''
        return val
    
    return 'None'


def _c_type(type):
    
    if type == 'lgc' or type == 'Phy':
        return 'boolean'
    
    if type.startswith('float'):
        return type
    
    if len(type) == 3:
        
        if type[0] == 's':
            prefix = 's'
        else:
            prefix = 'u'
        
        if type[1:] == '08':
            suffix = '8'
        elif type[1:] == '16':
            suffix = '16'
        elif type[1:] == '64':
            suffix = '64'
        else:
            suffix = '32'
        
        return prefix + 'int' + suffix
    
    # if unknown, take a guess
    return 'uint32'


################################################################################
##  MAIN EXECUTION
################################################################################

if __name__ == '__main__':
    main()