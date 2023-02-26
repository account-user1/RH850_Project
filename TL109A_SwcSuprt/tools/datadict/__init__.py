#! python

# *********************************************************************************************************************
# * Copyright 2016, 2017 Nexteer 
# * Nexteer Confidential
# *
# * Module File Name:   __init__.py
# * Module Description: Data dictionary classes and functions
# * Project:            TL109A_SwcSuprt
# * Author:             Owen Tosh
# *********************************************************************************************************************
# * Version Control:
# *-------------------------------------------------------------------------------------------------------------------
# * Date      Rev      Author    Change Description                                                           SCR #
# * --------  -------  --------  ---------------------------------------------------------------------------  -------
# * 12/01/16   1       OT        Initial version
# * 06/26/17   2       ML        Update to correctly define init values that are arrays. Also will now        EA4#11992
# *                              correctly define NoneRte variables that are Rec types. 
# *********************************************************************************************************************


import os
import sys
import ddtypes



################################################################################
##  DDOBJ CLASS
################################################################################

class DDObj():
    """Data Dictionary Object.
    
    Represents a generic object from the data dictionary.
    
    Contains the following members:
    name -- string, name of object
    value -- string, object value (or type)
    children -- list, child objects
    """
    
    def __init__(self, name, value):
        """DDObj class initializer.
        
        Required arguments:
        name -- string, name of object
        value -- string, value or type
        """
        self.name = name
        self.value = value
        self.children = []
    
    def __str__(self):
        """Return JSON representation of object."""
        return self.__str_rec(self)
    
    def __str_rec(self, obj):
        """Recursively return object and children in JSON format.
        
        Required arguments:
        obj -- DDObj, object to convert to JSON
        """
        # initialize string representation
        st = []
        st.append('{"name":"')
        st.append(obj.name)
        st.append('",')
        
        # recursively add children
        if obj.children:
            # not a leaf node - value member contains type
            st.append('"type":"')
            st.append(obj.value)
            st.append('","attributes":[')
            children = []
            for child in obj.children:
                children.append(self.__str_rec(child))
            st.append(','.join(children))
            st.append(']')
        else:
            # if no children, treat as a leaf node - show value instead
            st.append('"value":"')
            st.append(obj.value)
            st.append('"')
        
        # close string representation
        st.append('}')
        
        return ''.join(st)
    
    def get_drs(self, prefix):
        """Return a list of DRS file statements."""
        drs = []
        
        # find data type
        name = None
        type = None
        min = None
        max = None
        rw_type = None
        for obj in self.children:
            if obj.name == 'EngDT' or obj.name == 'Type':
                type = obj.value.strip('\'')
            elif obj.name == 'EngMin' or obj.name == 'Min':
                min = obj.value
            elif obj.name == 'EngMax' or obj.name == 'Max':
                max = obj.value
            elif obj.name == 'Name':
                name = obj.value.strip('\'')
            elif obj.name == 'ReadType' or obj.name == 'WriteType':
                rw_type = obj.value.strip('\'')
        
        if not type or type == 'None':
            return []
        
        if not name:
            name = self.name
        
        if rw_type == 'NonRte':
            if "Rec" in type:
                sym_name = ''.join([prefix, '_', name])
            else:
                sym_name = 'MOTCTRLMGR_' + name
        else:
            sym_name = ''.join([prefix, '_', name])
        
        return _get_drs(sym_name, type, min, max)
    
    def get_rte_stub(self, prefix):
        """Return a dictionary to be used as an RTE stub."""
        name_attr = None
        type = None
        direction = None
        init_row_col = None
        eng_val = None
        eng_init = None
        rw_type = None
        read_in = None
        written_in = None
        
        # parse children for attributes
        for obj in self.children:
            if obj.name == 'EngDT' or obj.name == 'Type':
                type = obj.value.strip('\'')
            elif obj.name == 'Name':
                name_attr = obj.value.strip('\'')
            elif obj.name == 'Direction':
                direction = obj.value.strip('\'')
            elif obj.name == 'InitRowCol':
                init_row_col = obj.value.lstrip('[').rstrip(']').strip()
            elif obj.name == 'EngVal':
                eng_val = obj.value
            elif obj.name == 'EngInit':
                eng_init = obj.value
            elif obj.name == 'ReadType' or obj.name == 'WriteType':
                rw_type = obj.value.strip('\'')
            elif obj.name == 'ReadIn':
                read_in = obj.value.lstrip('{').rstrip('}').strip()
            elif obj.name == 'WrittenIn':
                written_in = obj.value.lstrip('{').rstrip('}').strip()
        
        if type == 'None':
            return None
        
        if not name_attr:
            name_attr = self.name
        
        if rw_type == 'NonRte':
            if "Rec" in type:
                sym_name = name_attr
            else:
                sym_name = 'MOTCTRLMGR_' + name_attr
        else:
            sym_name = ''.join([prefix, '_', name_attr])
        
        
        suffix = None
        array_dim = []
        if init_row_col:
            init_split = init_row_col.split(None, 1)
            if len(init_split) >= 2:
                if init_split[0] != '1' and init_split[1] != '1':
                    suffix = '_Ary2D'
                    array_dim.append(init_split[0])
                    array_dim.append(init_split[1])
                elif init_split[0] != '1':
                    suffix = '_Ary1D'
                    array_dim.append(init_split[0])
                elif init_split[1] != '1':
                    suffix = '_Ary1D'
                    array_dim.append(init_split[1])
        elif eng_val and '[' in eng_val:
            if '\n' in eng_val:
                suffix = '_Ary2D'
                eng_val_split = eng_val.split('\n')
                first_line = eng_val_split[0].strip().lstrip('[').strip()
                array_dim.append(str(len(first_line.split())))
                array_dim.append(str(eng_val.count('\n') + 1))
            else:
                suffix = '_Ary1D'
                first_line = eng_val.strip().lstrip('[').rstrip(']').strip()
                if first_line:
                    array_dim.append(str(len(first_line.split())))     
        elif eng_init and '[' in eng_init:
              first_line = eng_init.strip().lstrip('[').rstrip(']').strip()
              if first_line:         
                  array_dim.append(str(len(first_line.split())))
             
        if not suffix:
            if self.value == 'DataDict.CSArguments':
                suffix = '_Arg'
            elif type == 'dt.lgc':
                suffix = '_Logl'
            else:
                suffix = '_Val'
        
        if rw_type == 'NonRte':
            rte_name = None
        elif self.value == 'DataDict.IpSignal':
            rte_name = ''.join(['Rte_Read_', name_attr, suffix])
        elif self.value == 'DataDict.OpSignal':
            rte_name = ''.join(['Rte_Write_', name_attr, suffix])
        elif self.value == 'DataDict.Calibration' or self.value == 'DataDict.ImprtdCal':
            rte_name = ''.join(['Rte_Prm_', name_attr, suffix])
        elif self.value == 'DataDict.CSArguments':
            rte_name = ''.join([name_attr, suffix])
        elif self.value == 'DataDict.NVM' or self.value == 'DataDict.PIM' or self.value == 'DataDict.Display':
            rte_name = ''.join(['Rte_Pim_', name_attr])
        elif self.value == 'DataDict.IRV':
            rte_name = name_attr
        else:
            rte_name = name_attr
        
        c_type = _c_type(type)
        if not c_type:
            return None
        
        # only applies to IRVs
        read_func = []
        if read_in:
            read_func = [func.strip().strip('\'').strip() for func in read_in.split(',')]
        
        write_func = []
        if written_in:
            write_func = [func.strip().strip('\'').strip() for func in written_in.split(',')]
        
        pass_ref = False
        if type is not None and type.startswith('struct.'):
            pass_ref = True
        elif array_dim:
            pass_ref = True
        elif direction is not None and 'Out' in direction:
            pass_ref = True
        
        return {
            'sym_name': sym_name,
            'rte_name': rte_name,
            'type': c_type,
            'array_dim': array_dim,
            'direction': direction,
            'pass_ref': pass_ref,
            'read_func': read_func,
            'write_func': write_func
        }



################################################################################
##  API FUNCTIONS
################################################################################

def parse_data_dict(data_dict_path):
    """Return a list of DDObjs, representative of the data dictionary.
    
    Return None if unable to open the data dictionary.
    
    Required arguments:
    data_dict_path -- string, path to the data dictionary M file
    """
    # check file exists
    if not os.path.exists(data_dict_path):
        return None
    
    # open file
    with open(data_dict_path, 'r') as dd:
        
        objects = []
        
        while True:
            
            # get next statement in file
            statement = ''
            while ';' not in statement:
                line = dd.readline()
                
                # check for end of file
                if line == '':
                    return objects
                
                # remove comments
                if '%' in line:
                    line = line[:line.find('%')]
                
                # strip whitespace
                line = line.strip()
                
                # strip continuation string
                if line.endswith('...'):
                    line = line[:-3].strip()
                
                # for multi-line statements, keep newlines
                if len(statement) > 0:
                    statement += '\n'
                
                statement += line
            
            # parse statement
            statement = statement[:statement.index(';')]
            
            # split on the assignment operator
            if '=' not in statement:
                continue
            split_statement = statement.split('=', 1)
            name = split_statement[0].strip()
            value = split_statement[1].strip()
            
            # add object to object collection
            if '.' in name:
                # split on the dot operator
                split_name = name.rsplit('.', 1)
                parent_name = split_name[0]
                leaf_name = split_name[1]
                
                # find object
                object = _find_object(objects, parent_name)
                if object is not None:
                    object.children.append(DDObj(leaf_name, value))
                
            else:
                # new object
                objects.append(DDObj(name, value))
    
    return None



################################################################################
##  UTILITY FUNCTIONS
################################################################################

def _c_type(type):
    """Return the C data type based on the data dictionary type.
    
    Required arguments:
    type -- string, data dictionary type
    """
    # check for special case of standard return type
    if type == 'Standard':
        return 'Std_ReturnType'
    
    # split on the dot
    split_type = type.strip().split('.')
    if len(split_type) < 2:
        return None
    
    first = split_type[0]
    second = split_type[1]
    
    # check for numeric type
    if first == 'dt' and second in ddtypes.numeric_types:
        return ddtypes.numeric_types[second]
    
    # otherwise, assume the type matches the C type
    return second


def _get_drs(name, type, min, max):
    """Return a list of DRS statements.  Recursive.
    
    Required arguments:
    name -- string, DRS symbol name
    type -- string, data type
    min -- string, minimum value
    max -- string, maximum value
    """
    # initialize list (must use list for cases of recursion)
    drs = []
    
    if type.startswith('struct.'):
        
        struct_name = type[len('struct.'):]
        
        if struct_name not in ddtypes.struct_types:
            return drs
        
        min_struct = _parse_struct_statement(min)
        max_struct = _parse_struct_statement(max)
        
        for key, dict in ddtypes.struct_types[struct_name].iteritems():
            
            if key in min_struct:
                min = min_struct[key]
            elif dict['min']:
                min = str(dict['min'])
            else:
                min = 'min'
            
            if key in max_struct:
                max = max_struct[key]
            elif dict['max']:
                max = str(dict['max'])
            else:
                max = 'max'
            
            drs.extend(_get_drs(name + '.' + key, dict['type'], min, max))
    
    else:
        st = []
        
        st.append(name)
        
        minval = _get_val(min, type)
        min = str(minval)
        if minval is None:
            min = 'min'
        elif min.endswith('.0'):
            min = min[:-2]
        st.append(min)
        
        maxval = _get_val(max, type)
        max = str(maxval)
        if maxval is None:
            max = 'max'
        elif max.endswith('.0'):
            max = max[:-2]
        st.append(max)
        
        st.append('permanent')
        
        drs.append(' '.join(st))
    
    return drs


def _parse_struct_statement(st):
    """Parse through a min or max structure statement.
    
    Return a dictionary with member names and values.
    
    Required arguments:
    st -- string, min or max data dictionary statement
    """
    
    st = st.strip()
    
    if st.startswith('[') and st.endswith(']'):
        st = st[1:-1].strip()
    
    if st.startswith('struct'):
        st = st[len('struct'):].strip()
    
    if st.startswith('(') and st.endswith(')'):
        st = st[1:-1].strip()
    
    st_split = st.split(',')
    for spl in st_split:
        spl = spl.strip()
    
    struct = {}
    for i in range(0, len(st_split), 2):
        if i + 1 >= len(st_split):
            continue
        
        member = st_split[i]
        if member.startswith('\'') and member.endswith('\''):
            member = member[1:-1].strip()
        
        val = st_split[i+1]
        
        struct[member] = val
    
    return struct


def _get_val(val, type):
    """Get value based on type.
    
    Return None if val or type is not understood.
    
    This is based on the Data Management M file collection, part of the following eroom:
    http://eroom1.nexteer.com/eRoom/erooms8/NextGeneration/0_1b5260
    
    Required arguments:
    val -- string, value
    type -- string, data type
    """
    # check for bad arguments
    if val is None or type is None:
        return None
    
    # check for enums with integer data types
    if '.' in val and type.startswith('dt.'):
        enum_type = val[:val.index('.')]
        if enum_type in ddtypes.enum_types:
            type = 'enum.' + enum_type
    
    # check for number-based type
    if type.startswith('dt.'):
        num_type = type[3:]
        
        # check for 'plain' number type
        if num_type in ddtypes.numeric_types:
            
            # distinguish floating point numbers from integers
            if num_type.startswith('float'):
                try:
                    return float(val)
                except ValueError:
                    return None
            else:
                try:
                    return int(val)
                except ValueError:
                    return None
        
        # check for fixed point type
        elif num_type in ddtypes.fixed_point_types:
            
            # check for 'p' in data type name
            if 'p' not in num_type:
                return None
            
            # isolate precision bits
            prec = num_type[num_type.index('p')+1:]
            if not prec:
                return None
            
            # consider signage
            if prec[0] == 'm':
                prec = '-' + prec[1:]
            
            # convert to float
            try:
                div = int(prec)
                num = float(val)
            except ValueError:
                return None
            
            # convert to counts
            return int(num * (2 ** div))
    
    # check for enumeration type
    elif type.startswith('enum.'):
        enum_type = type[5:]
        
        # ensure the enumeration type is known
        if enum_type not in ddtypes.enum_types:
            return None
        
        # get enumeration
        enum = ddtypes.enum_types[enum_type]
        
        # check that val matches the specified enum type
        if not val.startswith(enum_type):
            return None
        
        # strip enum type from val
        val = val[len(enum_type)+1:]
        
        # check that val is in enum
        if val not in enum:
            return None
        
        return enum[val]
    
    # check for standard return type
    elif type == 'Standard':
        try:
            return int(val)
        except ValueError:
            return None
    
    # didn't match any known type - return None
    return None


def _find_object(objects, name):
    """Recursively look through a list of DDObj and return the found child.
    
    Return None if no child object found.
    
    Required arguments:
    objects -- list of DDObj, collection of objects to search
    name -- string, name of object to search for
    """
    if '.' in name:
        # split on the dot operator
        split_name = name.split('.', 1)
        base_name = split_name[0]
        remainder = split_name[1]
        
        # search child objects
        for object in objects:
            if object.name == base_name:
                return _find_object(object.children, remainder)
        
    else:
        # leaf node
        for object in objects:
            if object.name == name:
                return object
    
    # object not found
    return None

