#! python
"""Nexteer Python Library
Copyright 2016 Nexteer.
"""

# *********************************************************************************************************************
# * Nexteer Confidential
# *
# * Module File Name:   __init__.py
# * Module Description: Library for commonly-used Nexteer functions
# * Project:            All
# * Author:             Owen Tosh
# *********************************************************************************************************************
# * Version Control:
# *-------------------------------------------------------------------------------------------------------------------
# * Date      Rev      Author    Change Description                                                         SCR #
# * --------  -------  --------  -------------------------------------------------------------------------  ---------
# * 10/04/16   1       OT        Initial version                                                            EA4#632
# * 12/01/16   1       OT        Added utility functions
# *********************************************************************************************************************


import os
import shutil
import Tkinter as tk


################################################################################
##  UTILITY FUNCTIONS
################################################################################

def write_if_changed(file_contents, target_file_path):
    """Write contents to file if not already the same.
    
    Ignore differences in non-universal newlines.  Return True if the file is
    changed, otherwise False.
    
    Note that this function reads the target file entirely into memory.  May not
    be efficient with very large files.
    
    Required arguments:
    file_contents -- string, contents of file
    target_file_path -- string, path to target file (relative or absolute)
    """
    # compare files
    if os.path.exists(target_file_path):
        with open(target_file_path) as target_file:
            if target_file.read().replace('\r', '') == file_contents:
                # no update required
                return False
    else:
        # if parent folders don't exist, create them
        if not os.path.exists(os.path.dirname(target_file_path)):
            os.makedirs(os.path.dirname(target_file_path))
    
    # write to target file
    with open(target_file_path, 'w') as target_file:
        target_file.write(file_contents)
    
    return True


def copy_if_changed(from_file_path, to_file_path):
    """Copy a file if not already the same.
    
    Ignore differences in non-universal newlines.  Return False if the target
    file is already up-to-date.
    
    Note that this function reads both files entirely into memory.  May not be
    efficient with very large files.
    
    Required arguments:
    from_file_path -- string, path to source file (relative or absolute)
    to_file_path -- string, path to destination file (relative or absolute)
    """
    # ensure original file exists
    if os.path.exists(to_file_path):
        with open(from_file_path) as from_file, open(to_file_path) as to_file:
            if from_file.read().replace('\r', '') == to_file.read().replace('\r', ''):
                # no update required
                return False
    else:
        # if parent folders don't exist, create them
        if not os.path.exists(os.path.dirname(to_file_path)):
            os.makedirs(os.path.dirname(to_file_path))
    
    # write to target file
    shutil.copy(from_file_path, to_file_path)
    
    return True


def move_if_changed(from_file_path, to_file_path):
    """Move a file if the files are different.  Otherwise, remove 'from' file.
    
    Ignore differences in non-universal newlines.
    
    Note that this function reads both files entirely into memory.  May not be
    efficient with very large files.
    
    Required arguments:
    from_file_path -- string, path to source file (relative or absolute)
    to_file_path -- string, path to destination file (relative or absolute)
    """
    # compare files (don't update if there are no differences)
    if os.path.exists(to_file_path):
        same = False
        with open(from_file_path) as from_file:
            with open(to_file_path) as to_file:
                if from_file.read().replace('\r', '') == to_file.read().replace('\r', ''):
                    same = True
        if same:
            # no update required
            os.remove(from_file_path)
            return
        else:
            os.remove(to_file_path)
    else:
        # if parent folders don't exist, create them
        if not os.path.exists(os.path.dirname(to_file_path)):
            os.makedirs(os.path.dirname(to_file_path))
    
    # write to target file
    shutil.move(from_file_path, to_file_path)


def copy_dir_tree(from_dir_root, to_dir_root):
    """Recursively copy files and folders that have changes.
    
    Ignore differences in non-universal newlines.  Return True if files changed.
    
    Note that this function reads files entirely into memory.  May not be
    efficient with very large files.
    
    Required arguments:
    from_dir_root -- string, path to source folder (relative or absolute)
    to_dir_root -- string, path to destination folder (relative or absolute)
    """
    # recursively copies files and folders, but only ones that are changed - returns True if files changed
    # TODO: check for extra files/folders in the destination folder structure?
    
    files_changed = False
    
    # analyze each file and folder in the template tree
    for from_dir, dir_list, file_list in os.walk(from_dir_root):
        
        # determine destination folder
        to_dir = from_dir.replace(from_dir_root, to_dir_root, 1)
        
        # create folder if current folder doesn't exist in component
        if not os.path.exists(to_dir):
            os.makedirs(to_dir)
        
        # copy all files in folder
        for file_name in file_list:
            
            # get absolute paths for template and component folders
            from_file_path = os.path.join(from_dir, file_name)
            to_file_path = os.path.join(to_dir, file_name)
            
            # write to component file if needed
            files_changed |= copy_if_changed(from_file_path, to_file_path)
    
    return files_changed


################################################################################
##  GUI CLASSES
################################################################################

class Menu(tk.Toplevel):
    """General parent window class for Nexteer scripts.
    
    Child of Tkinter.Toplevel.  In addition, implements centering and includes
    the common window tasks.  Child classes should override the body method.
    """
    
    def __init__(self, parent, window_title):
        
        # save parent info
        self.parent = parent
        
        # run standard toplevel init
        tk.Toplevel.__init__(self, parent)
        
        # hide initially
        self.withdraw()
        
        # set title
        self.title(window_title)
        
        # add body
        body = tk.Frame(self)
        self.body(body)
        body.pack(padx=10, pady=10, fill='both', expand=True)
        
        # center window
        self.__center_window()
        
        # show window
        self.deiconify()
    
    
    def __center_window(self):
        
        # update info for main window
        self.update_idletasks()
        
        # get center reference point
        center_x = self.winfo_screenwidth() // 2
        center_y = self.winfo_screenheight() // 2
        
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
    
    
    def body(self, frame):
        """Body function.  To be overridden."""
        pass
