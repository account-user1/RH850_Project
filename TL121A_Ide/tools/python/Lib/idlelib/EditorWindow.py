import sys
import os
import re
import imp
from Tkinter import *
import tkSimpleDialog
import tkMessageBox

import webbrowser
import idlever
import WindowList
import SearchDialog
import GrepDialog
import ReplaceDialog
import PyParse
from configHandler import idleConf
import aboutDialog, textView, configDialog

# The default tab setting for a Text widget, in average-width characters.
TK_TABWIDTH_DEFAULT = 8

def _find_module(fullname, path=None):
    """Version of imp.find_module() that handles hierarchical module names"""

    file = None
    for tgt in fullname.split('.'):
        if file is not None:
            file.close()            # close intermediate files
        (file, filename, descr) = imp.find_module(tgt, path)
        if descr[2] == imp.PY_SOURCE:
            break                   # find but not load the source file
        module = imp.load_module(tgt, file, filename, descr)
        try:
            path = module.__path__
        except AttributeError:
            raise ImportError, 'No source for module ' + module.__name__
    return file, filename, descr

class EditorWindow:
    from Percolator import Percolator
    from ColorDelegator import ColorDelegator
    from UndoDelegator import UndoDelegator
    from IOBinding import IOBinding
    import Bindings
    from Tkinter import Toplevel
    from MultiStatusBar import MultiStatusBar

    vars = {}
    help_url = None

    def __init__(self, flist=None, filename=None, key=None, root=None):
        if EditorWindow.help_url is None:
            dochome =  os.path.join(sys.prefix, 'Doc', 'index.html')
            if sys.platform.count('linux'):
                # look for html docs in a couple of standard places
                pyver = 'python-docs-' + '%s.%s.%s' % sys.version_info[:3]
                if os.path.isdir('/var/www/html/python/'):  # "python2" rpm
                    dochome = '/var/www/html/python/index.html'
                else:
                    basepath = '/usr/share/doc/'  # standard location
                    dochome = os.path.join(basepath, pyver,
                                           'Doc', 'index.html')
            elif sys.platform.count('win') or sys.platform.count('nt'):
                # Try the HTMLHelp file
                chmpath = os.path.join(sys.prefix, 'Doc',
                                       'Python%d%d.chm' % sys.version_info[:2])
                if os.path.isfile(chmpath):
                    dochome = chmpath
            dochome = os.path.normpath(dochome)
            if os.path.isfile(dochome):
                EditorWindow.help_url = dochome
            else:
                EditorWindow.help_url = "http://www.python.org/doc/current"
        currentTheme=idleConf.CurrentTheme()
        self.flist = flist
        root = root or flist.root
        self.root = root
        self.menubar = Menu(root)
        self.top = top = self.Toplevel(root, menu=self.menubar)
        if flist:
            self.vars = flist.vars
            #self.top.instanceDict makes flist.inversedict avalable to
            #configDialog.py so it can access all EditorWindow instaces
            self.top.instanceDict=flist.inversedict
        self.recentFilesPath=os.path.join(idleConf.GetUserCfgDir(),
                'recent-files.lst')
        self.vbar = vbar = Scrollbar(top, name='vbar')
        self.text_frame = text_frame = Frame(top)
        self.width = idleConf.GetOption('main','EditorWindow','width')
        self.text = text = Text(text_frame, name='text', padx=5, wrap='none',
                foreground=idleConf.GetHighlight(currentTheme,
                        'normal',fgBg='fg'),
                background=idleConf.GetHighlight(currentTheme,
                        'normal',fgBg='bg'),
                highlightcolor=idleConf.GetHighlight(currentTheme,
                        'hilite',fgBg='fg'),
                highlightbackground=idleConf.GetHighlight(currentTheme,
                        'hilite',fgBg='bg'),
                insertbackground=idleConf.GetHighlight(currentTheme,
                        'cursor',fgBg='fg'),
                width=self.width,
                height=idleConf.GetOption('main','EditorWindow','height') )

        self.createmenubar()
        self.apply_bindings()

        self.top.protocol("WM_DELETE_WINDOW", self.close)
        self.top.bind("<<close-window>>", self.close_event)
        text.bind("<<cut>>", self.cut)
        text.bind("<<copy>>", self.copy)
        text.bind("<<paste>>", self.paste)
        text.bind("<<center-insert>>", self.center_insert_event)
        text.bind("<<help>>", self.help_dialog)
        text.bind("<<python-docs>>", self.python_docs)
        text.bind("<<about-idle>>", self.about_dialog)
        text.bind("<<open-config-dialog>>", self.config_dialog)
        text.bind("<<open-module>>", self.open_module)
        text.bind("<<do-nothing>>", lambda event: "break")
        text.bind("<<select-all>>", self.select_all)
        text.bind("<<remove-selection>>", self.remove_selection)
        text.bind("<<find>>", self.find_event)
        text.bind("<<find-again>>", self.find_again_event)
        text.bind("<<find-in-files>>", self.find_in_files_event)
        text.bind("<<find-selection>>", self.find_selection_event)
        text.bind("<<replace>>", self.replace_event)
        text.bind("<<goto-line>>", self.goto_line_event)
        text.bind("<3>", self.right_menu_event)
        text.bind("<<smart-backspace>>",self.smart_backspace_event)
        text.bind("<<newline-and-indent>>",self.newline_and_indent_event)
        text.bind("<<smart-indent>>",self.smart_indent_event)
        text.bind("<<indent-region>>",self.indent_region_event)
        text.bind("<<dedent-region>>",self.dedent_region_event)
        text.bind("<<comment-region>>",self.comment_region_event)
        text.bind("<<uncomment-region>>",self.uncomment_region_event)
        text.bind("<<tabify-region>>",self.tabify_region_event)
        text.bind("<<untabify-region>>",self.untabify_region_event)
        text.bind("<<toggle-tabs>>",self.toggle_tabs_event)
        text.bind("<<change-indentwidth>>",self.change_indentwidth_event)
        text.bind("<Left>", self.move_at_edge_if_selection(0))
        text.bind("<Right>", self.move_at_edge_if_selection(1))

        if flist:
            flist.inversedict[self] = key
            if key:
                flist.dict[key] = self
            text.bind("<<open-new-window>>", self.new_callback)
            text.bind("<<close-all-windows>>", self.flist.close_all_callback)
            text.bind("<<open-class-browser>>", self.open_class_browser)
            text.bind("<<open-path-browser>>", self.open_path_browser)

        self.set_status_bar()
        vbar['command'] = text.yview
        vbar.pack(side=RIGHT, fill=Y)
        text['yscrollcommand'] = vbar.set
        fontWeight='normal'
        if idleConf.GetOption('main','EditorWindow','font-bold',type='bool'):
            fontWeight='bold'
        text.config(font=(idleConf.GetOption('main','EditorWindow','font'),
                idleConf.GetOption('main','EditorWindow','font-size'),
                fontWeight))
        text_frame.pack(side=LEFT, fill=BOTH, expand=1)
        text.pack(side=TOP, fill=BOTH, expand=1)
        text.focus_set()

        self.per = per = self.Percolator(text)
        if self.ispythonsource(filename):
            self.color = color = self.ColorDelegator()
            per.insertfilter(color)
        else:
            self.color = None

        self.undo = undo = self.UndoDelegator()
        per.insertfilter(undo)
        text.undo_block_start = undo.undo_block_start
        text.undo_block_stop = undo.undo_block_stop
        undo.set_saved_change_hook(self.saved_change_hook)

        # IOBinding implements file I/O and printing functionality
        self.io = io = self.IOBinding(self)
        io.set_filename_change_hook(self.filename_change_hook)

        #create the Recent Files submenu
        self.menuRecentFiles=Menu(self.menubar)
        self.menudict['file'].insert_cascade(3,label='Recent Files',
                underline=0,menu=self.menuRecentFiles)
        self.UpdateRecentFilesList()

        if filename:
            if os.path.exists(filename) and not os.path.isdir(filename):
                io.loadfile(filename)
            else:
                io.set_filename(filename)
        self.saved_change_hook()

        self.load_extensions()

        menu = self.menudict.get('windows')
        if menu:
            end = menu.index("end")
            if end is None:
                end = -1
            if end >= 0:
                menu.add_separator()
                end = end + 1
            self.wmenu_end = end
            WindowList.register_callback(self.postwindowsmenu)

        # Some abstractions so IDLE extensions are cross-IDE
        self.askyesno = tkMessageBox.askyesno
        self.askinteger = tkSimpleDialog.askinteger
        self.showerror = tkMessageBox.showerror

        if self.extensions.has_key('AutoIndent'):
            self.extensions['AutoIndent'].set_indentation_params(
                self.ispythonsource(filename))

    def new_callback(self, event):
        dirname, basename = self.io.defaultfilename()
        self.flist.new(dirname)
        return "break"

    def set_status_bar(self):
        self.status_bar = self.MultiStatusBar(self.top)
        self.status_bar.set_label('column', 'Col: ?', side=RIGHT)
        self.status_bar.set_label('line', 'Ln: ?', side=RIGHT)
        self.status_bar.pack(side=BOTTOM, fill=X)
        self.text.bind('<KeyRelease>', self.set_line_and_column)
        self.text.bind('<ButtonRelease>', self.set_line_and_column)
        self.text.after_idle(self.set_line_and_column)

    def set_line_and_column(self, event=None):
        line, column = self.text.index(INSERT).split('.')
        self.status_bar.set_label('column', 'Col: %s' % column)
        self.status_bar.set_label('line', 'Ln: %s' % line)

    def wakeup(self):
        if self.top.wm_state() == "iconic":
            self.top.wm_deiconify()
        else:
            self.top.tkraise()
        self.text.focus_set()

    menu_specs = [
        ("file", "_File"),
        ("edit", "_Edit"),
        ("format", "F_ormat"),
        ("run", "_Run"),
        ("options", "_Options"),
        ("windows", "_Windows"),
        ("help", "_Help"),
    ]

    def createmenubar(self):
        mbar = self.menubar
        self.menudict = menudict = {}
        for name, label in self.menu_specs:
            underline, label = prepstr(label)
            menudict[name] = menu = Menu(mbar, name=name)
            mbar.add_cascade(label=label, menu=menu, underline=underline)
        self.fill_menus()
        self.base_helpmenu_length = self.menudict['help'].index(END)
        self.reset_help_menu_entries()

    def postwindowsmenu(self):
        # Only called when Windows menu exists
        menu = self.menudict['windows']
        end = menu.index("end")
        if end is None:
            end = -1
        if end > self.wmenu_end:
            menu.delete(self.wmenu_end+1, end)
        WindowList.add_windows_to_menu(menu)

    rmenu = None

    def right_menu_event(self, event):
        self.text.tag_remove("sel", "1.0", "end")
        self.text.mark_set("insert", "@%d,%d" % (event.x, event.y))
        if not self.rmenu:
            self.make_rmenu()
        rmenu = self.rmenu
        self.event = event
        iswin = sys.platform[:3] == 'win'
        if iswin:
            self.text.config(cursor="arrow")
        rmenu.tk_popup(event.x_root, event.y_root)
        if iswin:
            self.text.config(cursor="ibeam")

    rmenu_specs = [
        # ("Label", "<<virtual-event>>"), ...
        ("Close", "<<close-window>>"), # Example
    ]

    def make_rmenu(self):
        rmenu = Menu(self.text, tearoff=0)
        for label, eventname in self.rmenu_specs:
            def command(text=self.text, eventname=eventname):
                text.event_generate(eventname)
            rmenu.add_command(label=label, command=command)
        self.rmenu = rmenu

    def about_dialog(self, event=None):
        aboutDialog.AboutDialog(self.top,'About IDLE')

    def config_dialog(self, event=None):
        configDialog.ConfigDialog(self.top,'Settings')

    def help_dialog(self, event=None):
        fn=os.path.join(os.path.abspath(os.path.dirname(__file__)),'help.txt')
        textView.TextViewer(self.top,'Help',fn)

    def python_docs(self, event=None):
        if sys.platform.count('win') or sys.platform.count('nt'):
            os.startfile(self.help_url)
            return "break"
        else:
            webbrowser.open(self.help_url)
            return "break"

    def display_docs(self, url):
        if not (url.startswith('www') or url.startswith('http')):
            url = os.path.normpath(url)
        if sys.platform.count('win') or sys.platform.count('nt'):
            os.startfile(url)
        else:
            webbrowser.open(url)

    def cut(self,event):
        self.text.event_generate("<<Cut>>")
        return "break"

    def copy(self,event):
        self.text.event_generate("<<Copy>>")
        return "break"

    def paste(self,event):
        self.text.event_generate("<<Paste>>")
        return "break"

    def select_all(self, event=None):
        self.text.tag_add("sel", "1.0", "end-1c")
        self.text.mark_set("insert", "1.0")
        self.text.see("insert")
        return "break"

    def remove_selection(self, event=None):
        self.text.tag_remove("sel", "1.0", "end")
        self.text.see("insert")

    def move_at_edge_if_selection(self, edge_index):
        """Cursor move begins at start or end of selection

        When a left/right cursor key is pressed create and return to Tkinter a
        function which causes a cursor move from the associated edge of the
        selection.

        """
        self_text_index = self.text.index
        self_text_mark_set = self.text.mark_set
        edges_table = ("sel.first+1c", "sel.last-1c")
        def move_at_edge(event):
            if (event.state & 5) == 0: # no shift(==1) or control(==4) pressed
                try:
                    self_text_index("sel.first")
                    self_text_mark_set("insert", edges_table[edge_index])
                except TclError:
                    pass
        return move_at_edge

    def find_event(self, event):
        SearchDialog.find(self.text)
        return "break"

    def find_again_event(self, event):
        SearchDialog.find_again(self.text)
        return "break"

    def find_selection_event(self, event):
        SearchDialog.find_selection(self.text)
        return "break"

    def find_in_files_event(self, event):
        GrepDialog.grep(self.text, self.io, self.flist)
        return "break"

    def replace_event(self, event):
        ReplaceDialog.replace(self.text)
        return "break"

    def goto_line_event(self, event):
        text = self.text
        lineno = tkSimpleDialog.askinteger("Goto",
                "Go to line number:",parent=text)
        if lineno is None:
            return "break"
        if lineno <= 0:
            text.bell()
            return "break"
        text.mark_set("insert", "%d.0" % lineno)
        text.see("insert")

    def open_module(self, event=None):
        # XXX Shouldn't this be in IOBinding or in FileList?
        try:
            name = self.text.get("sel.first", "sel.last")
        except TclError:
            name = ""
        else:
            name = name.strip()
        name = tkSimpleDialog.askstring("Module",
                 "Enter the name of a Python module\n"
                 "to search on sys.path and open:",
                 parent=self.text, initialvalue=name)
        if name:
            name = name.strip()
        if not name:
            return
        # XXX Ought to insert current file's directory in front of path
        try:
            (f, file, (suffix, mode, type)) = _find_module(name)
        except (NameError, ImportError), msg:
            tkMessageBox.showerror("Import error", str(msg), parent=self.text)
            return
        if type != imp.PY_SOURCE:
            tkMessageBox.showerror("Unsupported type",
                "%s is not a source module" % name, parent=self.text)
            return
        if f:
            f.close()
        if self.flist:
            self.flist.open(file)
        else:
            self.io.loadfile(file)

    def open_class_browser(self, event=None):
        filename = self.io.filename
        if not filename:
            tkMessageBox.showerror(
                "No filename",
                "This buffer has no associated filename",
                master=self.text)
            self.text.focus_set()
            return None
        head, tail = os.path.split(filename)
        base, ext = os.path.splitext(tail)
        import ClassBrowser
        ClassBrowser.ClassBrowser(self.flist, base, [head])

    def open_path_browser(self, event=None):
        import PathBrowser
        PathBrowser.PathBrowser(self.flist)

    def gotoline(self, lineno):
        if lineno is not None and lineno > 0:
            self.text.mark_set("insert", "%d.0" % lineno)
            self.text.tag_remove("sel", "1.0", "end")
            self.text.tag_add("sel", "insert", "insert +1l")
            self.center()

    def ispythonsource(self, filename):
        if not filename:
            return True
        base, ext = os.path.splitext(os.path.basename(filename))
        if os.path.normcase(ext) in (".py", ".pyw"):
            return True
        try:
            f = open(filename)
            line = f.readline()
            f.close()
        except IOError:
            return False
        return line.startswith('#!') and line.find('python') >= 0

    def close_hook(self):
        if self.flist:
            self.flist.close_edit(self)

    def set_close_hook(self, close_hook):
        self.close_hook = close_hook

    def filename_change_hook(self):
        if self.flist:
            self.flist.filename_changed_edit(self)
        self.saved_change_hook()
        self.top.update_windowlist_registry(self)
        if self.ispythonsource(self.io.filename):
            self.addcolorizer()
        else:
            self.rmcolorizer()

    def addcolorizer(self):
        if self.color:
            return
        self.per.removefilter(self.undo)
        self.color = self.ColorDelegator()
        self.per.insertfilter(self.color)
        self.per.insertfilter(self.undo)

    def rmcolorizer(self):
        if not self.color:
            return
        self.per.removefilter(self.undo)
        self.per.removefilter(self.color)
        self.color = None
        self.per.insertfilter(self.undo)

    def ResetColorizer(self):
        "Update the colour theme if it is changed"
        # Called from configDialog.py
        if self.color:
            self.color = self.ColorDelegator()
            self.per.insertfilter(self.color)

    def ResetFont(self):
        "Update the text widgets' font if it is changed"
        # Called from configDialog.py
        fontWeight='normal'
        if idleConf.GetOption('main','EditorWindow','font-bold',type='bool'):
            fontWeight='bold'
        self.text.config(font=(idleConf.GetOption('main','EditorWindow','font'),
                idleConf.GetOption('main','EditorWindow','font-size'),
                fontWeight))

    def ResetKeybindings(self):
        "Update the keybindings if they are changed"
        # Called from configDialog.py
        self.Bindings.default_keydefs=idleConf.GetCurrentKeySet()
        keydefs = self.Bindings.default_keydefs
        for event, keylist in keydefs.items():
            self.text.event_delete(event)
        self.apply_bindings()
        #update menu accelerators
        menuEventDict={}
        for menu in self.Bindings.menudefs:
            menuEventDict[menu[0]]={}
            for item in menu[1]:
                if item:
                    menuEventDict[menu[0]][prepstr(item[0])[1]]=item[1]
        for menubarItem in self.menudict.keys():
            menu=self.menudict[menubarItem]
            end=menu.index(END)+1
            for index in range(0,end):
                if menu.type(index)=='command':
                    accel=menu.entrycget(index,'accelerator')
                    if accel:
                        itemName=menu.entrycget(index,'label')
                        event=''
                        if menuEventDict.has_key(menubarItem):
                            if menuEventDict[menubarItem].has_key(itemName):
                                event=menuEventDict[menubarItem][itemName]
                        if event:
                            #print 'accel was:',accel
                            accel=get_accelerator(keydefs, event)
                            menu.entryconfig(index,accelerator=accel)
                            #print 'accel now:',accel,'\n'

    def reset_help_menu_entries(self):
        "Update the additional help entries on the Help menu"
        help_list = idleConf.GetAllExtraHelpSourcesList()
        helpmenu = self.menudict['help']
        # first delete the extra help entries, if any
        helpmenu_length = helpmenu.index(END)
        if helpmenu_length > self.base_helpmenu_length:
            helpmenu.delete((self.base_helpmenu_length + 1), helpmenu_length)
        # then rebuild them
        if help_list:
            helpmenu.add_separator()
            for entry in help_list:
                cmd = self.__extra_help_callback(entry[1])
                helpmenu.add_command(label=entry[0], command=cmd)
        # and update the menu dictionary
        self.menudict['help'] = helpmenu

    def __extra_help_callback(self, helpfile):
        "Create a callback with the helpfile value frozen at definition time"
        def display_extra_help(helpfile=helpfile):
            self.display_docs(helpfile)
        return display_extra_help

    def UpdateRecentFilesList(self,newFile=None):
        "Load or update the recent files list, and menu if required"
        rfList=[]
        if os.path.exists(self.recentFilesPath):
            RFfile=open(self.recentFilesPath,'r')
            try:
                rfList=RFfile.readlines()
            finally:
                RFfile.close()
        if newFile:
            newFile=os.path.abspath(newFile)+'\n'
            if newFile in rfList:
                rfList.remove(newFile)
            rfList.insert(0,newFile)
        rfList=self.__CleanRecentFiles(rfList)
        #print self.flist.inversedict
        #print self.top.instanceDict
        #print self
        ullist = "1234567890ABCDEFGHIJ"
        if rfList:
            for instance in self.top.instanceDict.keys():
                menu = instance.menuRecentFiles
                menu.delete(1,END)
                i = 0 ; ul = 0; ullen = len(ullist)
                for file in rfList:
                    fileName=file[0:-1]
                    callback = instance.__RecentFileCallback(fileName)
                    if i > ullen: # don't underline menuitems
                        ul=None
                    menu.add_command(label=ullist[i] + " " + fileName,
                                     command=callback,
                                     underline=ul)
                    i += 1

    def __CleanRecentFiles(self,rfList):
        origRfList=rfList[:]
        count=0
        nonFiles=[]
        for path in rfList:
            if not os.path.exists(path[0:-1]):
                nonFiles.append(count)
            count=count+1
        if nonFiles:
            nonFiles.reverse()
            for index in nonFiles:
                del(rfList[index])
        if len(rfList)>19:
            rfList=rfList[0:19]
        #if rfList != origRfList:
        RFfile=open(self.recentFilesPath,'w')
        try:
            RFfile.writelines(rfList)
        finally:
            RFfile.close()
        return rfList

    def __RecentFileCallback(self,fileName):
        def OpenRecentFile(fileName=fileName):
            self.io.open(editFile=fileName)
        return OpenRecentFile

    def saved_change_hook(self):
        short = self.short_title()
        long = self.long_title()
        if short and long:
            title = short + " - " + long
        elif short:
            title = short
        elif long:
            title = long
        else:
            title = "Untitled"
        icon = short or long or title
        if not self.get_saved():
            title = "*%s*" % title
            icon = "*%s" % icon
        self.top.wm_title(title)
        self.top.wm_iconname(icon)

    def get_saved(self):
        return self.undo.get_saved()

    def set_saved(self, flag):
        self.undo.set_saved(flag)

    def reset_undo(self):
        self.undo.reset_undo()

    def short_title(self):
        filename = self.io.filename
        if filename:
            filename = os.path.basename(filename)
        return filename

    def long_title(self):
        return self.io.filename or ""

    def center_insert_event(self, event):
        self.center()

    def center(self, mark="insert"):
        text = self.text
        top, bot = self.getwindowlines()
        lineno = self.getlineno(mark)
        height = bot - top
        newtop = max(1, lineno - height//2)
        text.yview(float(newtop))

    def getwindowlines(self):
        text = self.text
        top = self.getlineno("@0,0")
        bot = self.getlineno("@0,65535")
        if top == bot and text.winfo_height() == 1:
            # Geometry manager hasn't run yet
            height = int(text['height'])
            bot = top + height - 1
        return top, bot

    def getlineno(self, mark="insert"):
        text = self.text
        return int(float(text.index(mark)))

    def get_geometry(self):
        "Return (width, height, x, y)"
        geom = self.top.wm_geometry()
        m = re.match(r"(\d+)x(\d+)\+(-?\d+)\+(-?\d+)", geom)
        tuple = (map(int, m.groups()))
        return tuple

    def close_event(self, event):
        self.close()

    def maybesave(self):
        if self.io:
            if not self.get_saved():
                if self.top.state()!='normal':
                    self.top.deiconify()
                self.top.lower()
                self.top.lift()
            return self.io.maybesave()

    def close(self):
        reply = self.maybesave()
        if reply != "cancel":
            self._close()
        return reply

    def _close(self):
        #print self.io.filename
        if self.io.filename:
            self.UpdateRecentFilesList(newFile=self.io.filename)
        WindowList.unregister_callback(self.postwindowsmenu)
        if self.close_hook:
            self.close_hook()
        self.flist = None
        colorizing = 0
        self.unload_extensions()
        self.io.close(); self.io = None
        self.undo = None # XXX
        if self.color:
            colorizing = self.color.colorizing
            doh = colorizing and self.top
            self.color.close(doh) # Cancel colorization
        self.text = None
        self.vars = None
        self.per.close(); self.per = None
        if not colorizing:
            self.top.destroy()

    def load_extensions(self):
        self.extensions = {}
        self.load_standard_extensions()

    def unload_extensions(self):
        for ins in self.extensions.values():
            if hasattr(ins, "close"):
                ins.close()
        self.extensions = {}

    def load_standard_extensions(self):
        for name in self.get_standard_extension_names():
            try:
                self.load_extension(name)
            except:
                print "Failed to load extension", `name`
                import traceback
                traceback.print_exc()

    def get_standard_extension_names(self):
        return idleConf.GetExtensions()

    def load_extension(self, name):
        mod = __import__(name, globals(), locals(), [])
        cls = getattr(mod, name)
        ins = cls(self)
        self.extensions[name] = ins
        keydefs=idleConf.GetExtensionBindings(name)
        if keydefs:
            self.apply_bindings(keydefs)
            for vevent in keydefs.keys():
                methodname = vevent.replace("-", "_")
                while methodname[:1] == '<':
                    methodname = methodname[1:]
                while methodname[-1:] == '>':
                    methodname = methodname[:-1]
                methodname = methodname + "_event"
                if hasattr(ins, methodname):
                    self.text.bind(vevent, getattr(ins, methodname))
        if hasattr(ins, "menudefs"):
            self.fill_menus(ins.menudefs, keydefs)
        return ins

    def apply_bindings(self, keydefs=None):
        if keydefs is None:
            keydefs = self.Bindings.default_keydefs
        text = self.text
        text.keydefs = keydefs
        for event, keylist in keydefs.items():
            if keylist:
                text.event_add(event, *keylist)

    def fill_menus(self, defs=None, keydefs=None):
        """Add appropriate entries to the menus and submenus

        Menus that are absent or None in self.menudict are ignored.
        """
        if defs is None:
            defs = self.Bindings.menudefs
        if keydefs is None:
            keydefs = self.Bindings.default_keydefs
        menudict = self.menudict
        text = self.text
        for mname, itemlist in defs:
            menu = menudict.get(mname)
            if not menu:
                continue
            for item in itemlist:
                if not item:
                    menu.add_separator()
                else:
                    label, event = item
                    checkbutton = (label[:1] == '!')
                    if checkbutton:
                        label = label[1:]
                    underline, label = prepstr(label)
                    accelerator = get_accelerator(keydefs, event)
                    def command(text=text, event=event):
                        text.event_generate(event)
                    if checkbutton:
                        var = self.getrawvar(event, BooleanVar)
                        menu.add_checkbutton(label=label, underline=underline,
                            command=command, accelerator=accelerator,
                            variable=var)
                    else:
                        menu.add_command(label=label, underline=underline,
                                         command=command,
                                         accelerator=accelerator)

    def getvar(self, name):
        var = self.getrawvar(name)
        if var:
            return var.get()

    def setvar(self, name, value, vartype=None):
        var = self.getrawvar(name, vartype)
        if var:
            var.set(value)

    def getrawvar(self, name, vartype=None):
        var = self.vars.get(name)
        if not var and vartype:
            self.vars[name] = var = vartype(self.text)
        return var

    # Tk implementations of "virtual text methods" -- each platform
    # reusing IDLE's support code needs to define these for its GUI's
    # flavor of widget.

    # Is character at text_index in a Python string?  Return 0 for
    # "guaranteed no", true for anything else.  This info is expensive
    # to compute ab initio, but is probably already known by the
    # platform's colorizer.

    def is_char_in_string(self, text_index):
        if self.color:
            # Return true iff colorizer hasn't (re)gotten this far
            # yet, or the character is tagged as being in a string
            return self.text.tag_prevrange("TODO", text_index) or \
                   "STRING" in self.text.tag_names(text_index)
        else:
            # The colorizer is missing: assume the worst
            return 1

    # If a selection is defined in the text widget, return (start,
    # end) as Tkinter text indices, otherwise return (None, None)
    def get_selection_indices(self):
        try:
            first = self.text.index("sel.first")
            last = self.text.index("sel.last")
            return first, last
        except TclError:
            return None, None

    # Return the text widget's current view of what a tab stop means
    # (equivalent width in spaces).

    def get_tabwidth(self):
        current = self.text['tabs'] or TK_TABWIDTH_DEFAULT
        return int(current)

    # Set the text widget's current view of what a tab stop means.

    def set_tabwidth(self, newtabwidth):
        text = self.text
        if self.get_tabwidth() != newtabwidth:
            pixels = text.tk.call("font", "measure", text["font"],
                                  "-displayof", text.master,
                                  "n" * newtabwidth)
            text.configure(tabs=pixels)

### begin autoindent code ###

    # usetabs true  -> literal tab characters are used by indent and
    #                  dedent cmds, possibly mixed with spaces if
    #                  indentwidth is not a multiple of tabwidth
    #         false -> tab characters are converted to spaces by indent
    #                  and dedent cmds, and ditto TAB keystrokes
    # indentwidth is the number of characters per logical indent level.
    # tabwidth is the display width of a literal tab character.
    # CAUTION:  telling Tk to use anything other than its default
    # tab setting causes it to use an entirely different tabbing algorithm,
    # treating tab stops as fixed distances from the left margin.
    # Nobody expects this, so for now tabwidth should never be changed.
    usetabs = 0
    indentwidth = 4
    tabwidth = 8    # for IDLE use, must remain 8 until Tk is fixed

    # If context_use_ps1 is true, parsing searches back for a ps1 line;
    # else searches for a popular (if, def, ...) Python stmt.
    context_use_ps1 = 0

    # When searching backwards for a reliable place to begin parsing,
    # first start num_context_lines[0] lines back, then
    # num_context_lines[1] lines back if that didn't work, and so on.
    # The last value should be huge (larger than the # of lines in a
    # conceivable file).
    # Making the initial values larger slows things down more often.
    num_context_lines = 50, 500, 5000000

    def config(self, **options):
        for key, value in options.items():
            if key == 'usetabs':
                self.usetabs = value
            elif key == 'indentwidth':
                self.indentwidth = value
            elif key == 'tabwidth':
                self.tabwidth = value
            elif key == 'context_use_ps1':
                self.context_use_ps1 = value
            else:
                raise KeyError, "bad option name: %s" % `key`

    # If ispythonsource and guess are true, guess a good value for
    # indentwidth based on file content (if possible), and if
    # indentwidth != tabwidth set usetabs false.
    # In any case, adjust the Text widget's view of what a tab
    # character means.

    def set_indentation_params(self, ispythonsource, guess=1):
        if guess and ispythonsource:
            i = self.guess_indent()
            if 2 <= i <= 8:
                self.indentwidth = i
            if self.indentwidth != self.tabwidth:
                self.usetabs = 0

        self.set_tabwidth(self.tabwidth)

    def smart_backspace_event(self, event):
        text = self.text
        first, last = self.get_selection_indices()
        if first and last:
            text.delete(first, last)
            text.mark_set("insert", first)
            return "break"
        # Delete whitespace left, until hitting a real char or closest
        # preceding virtual tab stop.
        chars = text.get("insert linestart", "insert")
        if chars == '':
            if text.compare("insert", ">", "1.0"):
                # easy: delete preceding newline
                text.delete("insert-1c")
            else:
                text.bell()     # at start of buffer
            return "break"
        if  chars[-1] not in " \t":
            # easy: delete preceding real char
            text.delete("insert-1c")
            return "break"
        # Ick.  It may require *inserting* spaces if we back up over a
        # tab character!  This is written to be clear, not fast.
        tabwidth = self.tabwidth
        have = len(chars.expandtabs(tabwidth))
        assert have > 0
        want = ((have - 1) // self.indentwidth) * self.indentwidth
        # Debug prompt is multilined....
        last_line_of_prompt = sys.ps1.split('\n')[-1]
        ncharsdeleted = 0
        while 1:
            if chars == last_line_of_prompt:
                break
            chars = chars[:-1]
            ncharsdeleted = ncharsdeleted + 1
            have = len(chars.expandtabs(tabwidth))
            if have <= want or chars[-1] not in " \t":
                break
        text.undo_block_start()
        text.delete("insert-%dc" % ncharsdeleted, "insert")
        if have < want:
            text.insert("insert", ' ' * (want - have))
        text.undo_block_stop()
        return "break"

    def smart_indent_event(self, event):
        # if intraline selection:
        #     delete it
        # elif multiline selection:
        #     do indent-region & return
        # indent one level
        text = self.text
        first, last = self.get_selection_indices()
        text.undo_block_start()
        try:
            if first and last:
                if index2line(first) != index2line(last):
                    return self.indent_region_event(event)
                text.delete(first, last)
                text.mark_set("insert", first)
            prefix = text.get("insert linestart", "insert")
            raw, effective = classifyws(prefix, self.tabwidth)
            if raw == len(prefix):
                # only whitespace to the left
                self.reindent_to(effective + self.indentwidth)
            else:
                if self.usetabs:
                    pad = '\t'
                else:
                    effective = len(prefix.expandtabs(self.tabwidth))
                    n = self.indentwidth
                    pad = ' ' * (n - effective % n)
                text.insert("insert", pad)
            text.see("insert")
            return "break"
        finally:
            text.undo_block_stop()

    def newline_and_indent_event(self, event):
        text = self.text
        first, last = self.get_selection_indices()
        text.undo_block_start()
        try:
            if first and last:
                text.delete(first, last)
                text.mark_set("insert", first)
            line = text.get("insert linestart", "insert")
            i, n = 0, len(line)
            while i < n and line[i] in " \t":
                i = i+1
            if i == n:
                # the cursor is in or at leading indentation in a continuation
                # line; just inject an empty line at the start
                text.insert("insert linestart", '\n')
                return "break"
            indent = line[:i]
            # strip whitespace before insert point unless it's in the prompt
            i = 0
            last_line_of_prompt = sys.ps1.split('\n')[-1]
            while line and line[-1] in " \t" and line != last_line_of_prompt:
                line = line[:-1]
                i = i+1
            if i:
                text.delete("insert - %d chars" % i, "insert")
            # strip whitespace after insert point
            while text.get("insert") in " \t":
                text.delete("insert")
            # start new line
            text.insert("insert", '\n')

            # adjust indentation for continuations and block
            # open/close first need to find the last stmt
            lno = index2line(text.index('insert'))
            y = PyParse.Parser(self.indentwidth, self.tabwidth)
            for context in self.num_context_lines:
                startat = max(lno - context, 1)
                startatindex = `startat` + ".0"
                rawtext = text.get(startatindex, "insert")
                y.set_str(rawtext)
                bod = y.find_good_parse_start(
                          self.context_use_ps1,
                          self._build_char_in_string_func(startatindex))
                if bod is not None or startat == 1:
                    break
            y.set_lo(bod or 0)
            c = y.get_continuation_type()
            if c != PyParse.C_NONE:
                # The current stmt hasn't ended yet.
                if c == PyParse.C_STRING:
                    # inside a string; just mimic the current indent
                    text.insert("insert", indent)
                elif c == PyParse.C_BRACKET:
                    # line up with the first (if any) element of the
                    # last open bracket structure; else indent one
                    # level beyond the indent of the line with the
                    # last open bracket
                    self.reindent_to(y.compute_bracket_indent())
                elif c == PyParse.C_BACKSLASH:
                    # if more than one line in this stmt already, just
                    # mimic the current indent; else if initial line
                    # has a start on an assignment stmt, indent to
                    # beyond leftmost =; else to beyond first chunk of
                    # non-whitespace on initial line
                    if y.get_num_lines_in_stmt() > 1:
                        text.insert("insert", indent)
                    else:
                        self.reindent_to(y.compute_backslash_indent())
                else:
                    assert 0, "bogus continuation type " + `c`
                return "break"

            # This line starts a brand new stmt; indent relative to
            # indentation of initial line of closest preceding
            # interesting stmt.
            indent = y.get_base_indent_string()
            text.insert("insert", indent)
            if y.is_block_opener():
                self.smart_indent_event(event)
            elif indent and y.is_block_closer():
                self.smart_backspace_event(event)
            return "break"
        finally:
            text.see("insert")
            text.undo_block_stop()

    # Our editwin provides a is_char_in_string function that works
    # with a Tk text index, but PyParse only knows about offsets into
    # a string. This builds a function for PyParse that accepts an
    # offset.

    def _build_char_in_string_func(self, startindex):
        def inner(offset, _startindex=startindex,
                  _icis=self.is_char_in_string):
            return _icis(_startindex + "+%dc" % offset)
        return inner

    def indent_region_event(self, event):
        head, tail, chars, lines = self.get_region()
        for pos in range(len(lines)):
            line = lines[pos]
            if line:
                raw, effective = classifyws(line, self.tabwidth)
                effective = effective + self.indentwidth
                lines[pos] = self._make_blanks(effective) + line[raw:]
        self.set_region(head, tail, chars, lines)
        return "break"

    def dedent_region_event(self, event):
        head, tail, chars, lines = self.get_region()
        for pos in range(len(lines)):
            line = lines[pos]
            if line:
                raw, effective = classifyws(line, self.tabwidth)
                effective = max(effective - self.indentwidth, 0)
                lines[pos] = self._make_blanks(effective) + line[raw:]
        self.set_region(head, tail, chars, lines)
        return "break"

    def comment_region_event(self, event):
        head, tail, chars, lines = self.get_region()
        for pos in range(len(lines) - 1):
            line = lines[pos]
            lines[pos] = '##' + line
        self.set_region(head, tail, chars, lines)

    def uncomment_region_event(self, event):
        head, tail, chars, lines = self.get_region()
        for pos in range(len(lines)):
            line = lines[pos]
            if not line:
                continue
            if line[:2] == '##':
                line = line[2:]
            elif line[:1] == '#':
                line = line[1:]
            lines[pos] = line
        self.set_region(head, tail, chars, lines)

    def tabify_region_event(self, event):
        head, tail, chars, lines = self.get_region()
        tabwidth = self._asktabwidth()
        for pos in range(len(lines)):
            line = lines[pos]
            if line:
                raw, effective = classifyws(line, tabwidth)
                ntabs, nspaces = divmod(effective, tabwidth)
                lines[pos] = '\t' * ntabs + ' ' * nspaces + line[raw:]
        self.set_region(head, tail, chars, lines)

    def untabify_region_event(self, event):
        head, tail, chars, lines = self.get_region()
        tabwidth = self._asktabwidth()
        for pos in range(len(lines)):
            lines[pos] = lines[pos].expandtabs(tabwidth)
        self.set_region(head, tail, chars, lines)

    def toggle_tabs_event(self, event):
        if self.askyesno(
              "Toggle tabs",
              "Turn tabs " + ("on", "off")[self.usetabs] + "?",
              parent=self.text):
            self.usetabs = not self.usetabs
        return "break"

    # XXX this isn't bound to anything -- see class tabwidth comments
    def change_tabwidth_event(self, event):
        new = self._asktabwidth()
        if new != self.tabwidth:
            self.tabwidth = new
            self.set_indentation_params(0, guess=0)
        return "break"

    def change_indentwidth_event(self, event):
        new = self.askinteger(
                  "Indent width",
                  "New indent width (2-16)",
                  parent=self.text,
                  initialvalue=self.indentwidth,
                  minvalue=2,
                  maxvalue=16)
        if new and new != self.indentwidth:
            self.indentwidth = new
        return "break"

    def get_region(self):
        text = self.text
        first, last = self.get_selection_indices()
        if first and last:
            head = text.index(first + " linestart")
            tail = text.index(last + "-1c lineend +1c")
        else:
            head = text.index("insert linestart")
            tail = text.index("insert lineend +1c")
        chars = text.get(head, tail)
        lines = chars.split("\n")
        return head, tail, chars, lines

    def set_region(self, head, tail, chars, lines):
        text = self.text
        newchars = "\n".join(lines)
        if newchars == chars:
            text.bell()
            return
        text.tag_remove("sel", "1.0", "end")
        text.mark_set("insert", head)
        text.undo_block_start()
        text.delete(head, tail)
        text.insert(head, newchars)
        text.undo_block_stop()
        text.tag_add("sel", head, "insert")

    # Make string that displays as n leading blanks.

    def _make_blanks(self, n):
        if self.usetabs:
            ntabs, nspaces = divmod(n, self.tabwidth)
            return '\t' * ntabs + ' ' * nspaces
        else:
            return ' ' * n

    # Delete from beginning of line to insert point, then reinsert
    # column logical (meaning use tabs if appropriate) spaces.

    def reindent_to(self, column):
        text = self.text
        text.undo_block_start()
        if text.compare("insert linestart", "!=", "insert"):
            text.delete("insert linestart", "insert")
        if column:
            text.insert("insert", self._make_blanks(column))
        text.undo_block_stop()

    def _asktabwidth(self):
        return self.askinteger(
            "Tab width",
            "Spaces per tab? (2-16)",
            parent=self.text,
            initialvalue=self.indentwidth,
            minvalue=2,
            maxvalue=16) or self.tabwidth

    # Guess indentwidth from text content.
    # Return guessed indentwidth.  This should not be believed unless
    # it's in a reasonable range (e.g., it will be 0 if no indented
    # blocks are found).

    def guess_indent(self):
        opener, indented = IndentSearcher(self.text, self.tabwidth).run()
        if opener and indented:
            raw, indentsmall = classifyws(opener, self.tabwidth)
            raw, indentlarge = classifyws(indented, self.tabwidth)
        else:
            indentsmall = indentlarge = 0
        return indentlarge - indentsmall

# "line.col" -> line, as an int
def index2line(index):
    return int(float(index))

# Look at the leading whitespace in s.
# Return pair (# of leading ws characters,
#              effective # of leading blanks after expanding
#              tabs to width tabwidth)

def classifyws(s, tabwidth):
    raw = effective = 0
    for ch in s:
        if ch == ' ':
            raw = raw + 1
            effective = effective + 1
        elif ch == '\t':
            raw = raw + 1
            effective = (effective // tabwidth + 1) * tabwidth
        else:
            break
    return raw, effective

import tokenize
_tokenize = tokenize
del tokenize

class IndentSearcher:

    # .run() chews over the Text widget, looking for a block opener
    # and the stmt following it.  Returns a pair,
    #     (line containing block opener, line containing stmt)
    # Either or both may be None.

    def __init__(self, text, tabwidth):
        self.text = text
        self.tabwidth = tabwidth
        self.i = self.finished = 0
        self.blkopenline = self.indentedline = None

    def readline(self):
        if self.finished:
            return ""
        i = self.i = self.i + 1
        mark = `i` + ".0"
        if self.text.compare(mark, ">=", "end"):
            return ""
        return self.text.get(mark, mark + " lineend+1c")

    def tokeneater(self, type, token, start, end, line,
                   INDENT=_tokenize.INDENT,
                   NAME=_tokenize.NAME,
                   OPENERS=('class', 'def', 'for', 'if', 'try', 'while')):
        if self.finished:
            pass
        elif type == NAME and token in OPENERS:
            self.blkopenline = line
        elif type == INDENT and self.blkopenline:
            self.indentedline = line
            self.finished = 1

    def run(self):
        save_tabsize = _tokenize.tabsize
        _tokenize.tabsize = self.tabwidth
        try:
            try:
                _tokenize.tokenize(self.readline, self.tokeneater)
            except _tokenize.TokenError:
                # since we cut off the tokenizer early, we can trigger
                # spurious errors
                pass
        finally:
            _tokenize.tabsize = save_tabsize
        return self.blkopenline, self.indentedline

### end autoindent code ###

def prepstr(s):
    # Helper to extract the underscore from a string, e.g.
    # prepstr("Co_py") returns (2, "Copy").
    i = s.find('_')
    if i >= 0:
        s = s[:i] + s[i+1:]
    return i, s


keynames = {
 'bracketleft': '[',
 'bracketright': ']',
 'slash': '/',
}

def get_accelerator(keydefs, event):
    keylist = keydefs.get(event)
    if not keylist:
        return ""
    s = keylist[0]
    s = re.sub(r"-[a-z]\b", lambda m: m.group().upper(), s)
    s = re.sub(r"\b\w+\b", lambda m: keynames.get(m.group(), m.group()), s)
    s = re.sub("Key-", "", s)
    s = re.sub("Cancel","Ctrl-Break",s)   # dscherer@cmu.edu
    s = re.sub("Control-", "Ctrl-", s)
    s = re.sub("-", "+", s)
    s = re.sub("><", " ", s)
    s = re.sub("<", "", s)
    s = re.sub(">", "", s)
    return s


def fixwordbreaks(root):
    # Make sure that Tk's double-click and next/previous word
    # operations use our definition of a word (i.e. an identifier)
    tk = root.tk
    tk.call('tcl_wordBreakAfter', 'a b', 0) # make sure word.tcl is loaded
    tk.call('set', 'tcl_wordchars', '[a-zA-Z0-9_]')
    tk.call('set', 'tcl_nonwordchars', '[^a-zA-Z0-9_]')


def test():
    root = Tk()
    fixwordbreaks(root)
    root.withdraw()
    if sys.argv[1:]:
        filename = sys.argv[1]
    else:
        filename = None
    edit = EditorWindow(root=root, filename=filename)
    edit.set_close_hook(root.quit)
    root.mainloop()
    root.destroy()

if __name__ == '__main__':
    test()
