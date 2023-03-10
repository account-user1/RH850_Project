Pynche - The PYthonically Natural Color and Hue Editor

Contact: Barry A. Warsaw
Email:   bwarsaw@python.org
Version: 1.3

Introduction

    Pynche is a color editor based largely on a similar program that I
    originally wrote back in 1987 for the Sunview window system.  That
    editor was called ICE, the Interactive Color Editor.  I'd always
    wanted to port this program to X but didn't feel like hacking X
    and C code to do it.  Fast forward many years, to where Python +
    Tkinter provides such a nice programming environment, with enough
    power, that I finally buckled down and re-implemented it.  I
    changed the name because these days, too many other systems have
    the acronym `ICE'.

    Pynche should work with any variant of Python after 1.5.2
    (e.g. 2.0.1 and 2.1.1), using Tk 8.0.x.  It's been tested on
    Solaris 2.6, Windows NT 4, and various Linux distros.  You'll want
    to be sure to have at least Tk 8.0.3 for Windows.  Also, Pynche is
    very colormap intensive, so it doesn't work very well on 8-bit
    graphics cards; 24bit+ graphics cards are so cheap these days,
    I'll probably never "fix" that.

    Pynche must find a text database of colors names in order to
    provide `nearest' color matching.  Pynche is distributed with an
    rgb.txt file from the X11R6.4 distribution for this reason, along
    with other "Web related" database (see below).  You can use a
    different file with the -d option.  The file xlicense.txt contains
    the license only for rgb.txt and both files are in the X/
    subdirectory.

    Pynche is pronounced: Pin'-chee


Running Standalone

    On Unix, start it by running the `pynche' script.  On Windows, run
    pynche.pyw to inhibit the console window.  When run from the
    command line, the following options are recognized:

    --database file
    -d file
        Alternate location of the color database file.  Without this
        option, the first valid file found will be used (see below).

    --initfile file
    -i file
        Alternate location of the persistent initialization file.  See 
        the section on Persistency below.

    --ignore
    -X
        Ignore the persistent initialization file when starting up.
        Pynche will still write the current option settings to the
        persistent init file when it quits.

    --help
    -h
        Print the help message.

    initialcolor
        a Tk color name or #rrggbb color spec to be used as the
        initially selected color.  This overrides any color saved in
        the persistent init file.  Since `#' needs to be escaped in
        many shells, it is optional in the spec (e.g. #45dd1f is the
        same as 45dd1f).


Running as a Modal Dialog

    Pynche can be run as a modal dialog, inside another application,
    say as a general color chooser.  In fact, Grail 0.6 uses Pynche
    and a future version of IDLE may as well.  Pynche supports the API
    implemented by the Tkinter standard tkColorChooser module, with a
    few changes as described below.  By importing pyColorChooser from
    the Pynche package, you can run

        pyColorChooser.askcolor()

    which will popup Pynche as a modal dialog, and return the selected 
    color.

    There are some UI differences when running as a modal
    vs. standalone.  When running as a modal, there is no "Quit" menu
    item under the "File" menu.  Instead there are "Okay" and "Cancel"
    buttons.

    When "Okay" is hit, askcolor() returns the tuple

        ((r, g, b), "name")

    where r, g, and b are red, green, and blue color values
    respectively (in the range 0 to 255).  "name" will be a color name
    from the color database if there is an exact match, otherwise it
    will be an X11 color spec of the form "#rrggbb".  Note that this
    is different than tkColorChooser, which doesn't know anything
    about color names.

    askcolor() supports the following optional keyword arguments:

        color
            the color to set as the initial selected color

        master[*]
            the master window to use as the parent of the modal
            dialog.  Without this argument, pyColorChooser will create 
            it's own Tkinter.Tk instance as the master.  This may not
            be what you want.

        databasefile
            similar to the --database option, the value must be a
            file name

        initfile[*]
            similar to the --initfile option, the value must be a
            file name

        ignore[*]
            similar to the --ignore flag, the value is a boolean

        wantspec
            When this is true, the "name" field in the return tuple
            will always be a color spec of the form "#rrggbb".  It
            will not return a color name even if there is a match;
            this is so pyColorChooser can exactly match the API of
            tkColorChooser.

        [*] these arguments must be specified the first time
        askcolor() is used and cannot be changed on subsequent calls.


The Colorstrip Window

    The top part of the main Pynche window contains the "variation
    strips".  Each strip contains a number of "color chips".  The
    strips always indicate the currently selected color by a highlight
    rectangle around the selected color chip, with an arrow pointing
    to the chip.  Each arrow has an associated number giving you the
    color value along the variation's axis.  Each variation strip
    shows you the colors that are reachable from the selected color by
    varying just one axis of the color solid.

    For example, when the selected color is (in Red/Green/Blue
    notation) 127/127/127, the Red Variations strip shows you every
    color in the range 0/127/127 to 255/127/127.  Similarly for the
    green and blue axes.  You can select any color by clicking on its
    chip.  This will update the highlight rectangle and the arrow, as
    well as other displays in Pynche.

    Click on "Update while dragging" if you want Pynche to update the
    selected color while you drag along any variation strip (this will
    be a bit slower).  Click on "Hexadecimal" to display the arrow
    numbers in hex.

    There are also two shortcut buttons in this window, which
    auto-select Black (0/0/0) and White (255/255/255).


The Proof Window

    In the lower left corner of the main window you see two larger
    color chips.  The Selected chip shows you a larger version of the
    color selected in the variation strips, along with its X11 color
    specification.  The Nearest chip shows you the closest color in
    the X11 database to the selected color, giving its X11 color
    specification, and below that, its X11 color name.  When the
    Selected chip color exactly matches the Nearest chip color, you
    will see the color name appear below the color specification for
    the Selected chip.
    
    Clicking on the Nearest color chip selects that color.  Color
    distance is calculated in the 3D space of the RGB color solid and
    if more than one color name is the same distance from the selected
    color, the first one found will be chosen.

    Note that there may be more than one X11 color name for the same
    RGB value.  In that case, the first one found in the text database
    is designated the "primary" name, and this is shown under the
    Nearest chip.  The other names are "aliases" and they are visible
    in the Color List Window (see below).

    Both the color specifications and color names are selectable for
    copying and pasting into another window.


The Type-in Window

    At the lower right of the main window are three entry fields.
    Here you can type numeric values for any of the three color axes.
    Legal values are between 0 and 255, and these fields do not allow
    you to enter illegal values.  You must hit Enter or Tab to select
    the new color.

    Click on "Update while typing" if you want Pynche to select the
    color on every keystroke (well, every one that produces a legal
    value!)  Click on "Hexadecimal" to display and enter color values
    in hex.


Other Views

    There are three secondary windows which are not displayed by
    default.  You can bring these up via the "View" menu on the main
    Pynche window.


The Text Window

    The "Text Window" allows you to see what effects various colors
    have on the standard Tk text widget elements.  In the upper part
    of the window is a plain Tk text widget and here you can edit the
    text, select a region of text, etc.  Below this is a button "Track
    color changes".  When this is turned on, any colors selected in
    the other windows will change the text widget element specified in
    the radio buttons below.  When this is turned off, text widget
    elements are not affected by color selection.

    You can choose which element gets changed by color selection by
    clicking on one of the radio buttons in the bottom part of this
    window.  Text foreground and background affect the text in the
    upper part of the window.  Selection foreground and background
    affect the colors of the primary selection which is what you see
    when you click the middle button (depending on window system) and
    drag it through some text.

    The Insertion is the insertion cursor in the text window, where
    new text will be inserted as you type.  The insertion cursor only
    has a background.


The Color List Window

    The "Color List" window shows every named color in the color name
    database (this window may take a while to come up).  In the upper
    part of the window you see a scrolling list of all the color names
    in the database, in alphabetical order.  Click on any color to
    select it.  In the bottom part of the window is displayed any
    aliases for the selected color (those color names that have the
    same RGB value, but were found later in the text database).  For
    example, find the color "Black" and you'll see that its aliases
    are "gray0" and "grey0".

    If the color has no aliases you'll see "<no aliases>" here.  If you
    just want to see if a color has an alias, and do not want to select a
    color when you click on it, turn off "Update on Click".

    Note that the color list is always updated when a color is selected
    from the main window.  There's no way to turn this feature off.  If
    the selected color has no matching color name you'll see
    "<no matching color>" in the Aliases window.


The Details Window

    The "Details" window gives you more control over color selection
    than just clicking on a color chip in the main window.  The row of
    buttons along the top apply the specified increment and decrement
    amounts to the selected color.  These delta amounts are applied to
    the variation strips specified by the check boxes labeled "Move
    Sliders".  Thus if just Red and Green are selected, hitting -10
    will subtract 10 from the color value along the red and green
    variation only.  Note the message under the checkboxes; this
    indicates the primary color level being changed when more than one
    slider is tied together.  For example, if Red and Green are
    selected, you will be changing the Yellow level of the selected
    color.

    The "At Boundary" behavior determines what happens when any color
    variation hits either the lower or upper boundaries (0 or 255) as
    a result of clicking on the top row buttons:

    Stop
        When the increment or decrement would send any of the tied
        variations out of bounds, the entire delta is discarded.

    Wrap Around
        When the increment or decrement would send any of the tied
        variations out of bounds, the out of bounds value is wrapped
        around to the other side.  Thus if red were at 238 and +25
        were clicked, red would have the value 7.

    Preserve Distance
        When the increment or decrement would send any of the tied
        variations out of bounds, all tied variations are wrapped as
        one, so as to preserve the distance between them.  Thus if
        green and blue were tied, and green was at 238 while blue was
        at 223, and +25 were clicked, green would be at 15 and blue
        would be at 0.

    Squash
        When the increment or decrement would send any of the tied
        variations out of bounds, the out of bounds variation is set
        to the ceiling of 255 or floor of 0, as appropriate.  In this
        way, all tied variations are squashed to one edge or the
        other.

    The top row buttons have the following keyboard accelerators:

    -25 == Shift Left Arrow
    -10 == Control Left Arrow
     -1 == Left Arrow
     +1 == Right Arrow
    +10 == Control Right Arrow
    +25 == Shift Right Arrow


Keyboard Accelerators

    Alt-w in any secondary window dismisses the window.  In the main
    window it exits Pynche (except when running as a modal).

    Alt-q in any window exits Pynche (except when running as a modal).


Persistency

    Pynche remembers various settings of options and colors between
    invocations, storing these values in a `persistent initialization
    file'.  The actual location of this file is specified by the
    --initfile option (see above), and defaults to ~/.pynche.

    When Pynche exits, it saves these values in the init file, and
    re-reads them when it starts up.  There is no locking on this
    file, so if you run multiple instances of Pynche at a time, you
    may clobber the init file.

    The actual options stored include

    - the currently selected color

    - all settings of checkbox and radio button options in all windows

    - the contents of the text window, the current text selection and
      insertion point, and all current text widget element color
      settings.

    - the name of the color database file (but not its contents)

    You can inhibit Pynche from reading the init file by supplying the
    --ignore option on the command line.  However, you cannot suppress
    the storing of the settings in the init file on Pynche exit.  If
    you really want to do this, use /dev/null as the init file, using
    --initfile.


Color Name Database Files

    Pynche uses a color name database file to calculate the nearest
    color to the selected color, and to display in the Color List
    view.  Several files are distributed with Pynche, described
    below.  By default, the X11 color name database file is selected.
    Other files:

    html40colors.txt -- the HTML 4.0 guaranteed color names

    websafe.txt -- the 216 "Web-safe" colors that Netscape and MSIE
    guarantee will not be dithered.  These are specified in #rrggbb
    format for both values and names

    webcolors.txt -- The 140 color names that Tim Peters and his
    sister say NS and MSIE both understand (with some controversy over 
    AliceBlue).

    namedcolors.txt -- an alternative set of Netscape colors.

    You can switch between files by choosing "Load palette..." from
    the "File" menu.  This brings up a standard Tk file dialog.
    Choose the file you want and then click "Ok".  If Pynche
    understands the format in this file, it will load the database and 
    update the appropriate windows.  If not, it will bring up an error 
    dialog.


To Do

    Here's a brief list of things I want to do (some mythical day):

    - Better support for resizing the top level windows

    - More output views, e.g. color solids

    - Have the notion of a `last color selected'; this may require a
      new output view

    - Support setting the font in the text view

    - Support distutils setup.py for installation

    I'm open to suggestions!



Local Variables:
indent-tabs-mode: nil
End:
