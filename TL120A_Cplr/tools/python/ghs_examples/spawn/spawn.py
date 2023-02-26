
# spawn.py
# script for opening a current target in a new debugger window
#
# script usage: py -f spawn.py [target_name]
#
# function usage: spawn.spawn([target_name])
#
# If no target_name is provided, the currently selected target is opened
# in the new window
#
# If the target_name is provided, the attempt is made to select
# target_name within the target list.  If the selection fails, then 
# an error message is printed and False is returned.
#
# True is returned upon success

import sys;
import string;
import ghs_misc;

# Figure out the row number for the currently selected target

def GetCurrentSelectedRowNumber(dbw, mslTree):
    # Get the current Target tree selection
    if (dbw.DumpMslSelection(mslTree, True, False) == False):
        print "Unable to find selection for '"+mslTree+"'";
	return None;
    str = dbw.cmdExecOutput;
    # Split the string into its columns
    parse_str = string.split(str, "\t");
    # Get the Target tree
    t = dbw.GetMslTree(mslTree);
    if (t == None):
    	print "Unable to get tree for '"+mslTree+"'";
	return None;
    # Find the selected column by value
    c = t.SearchChildByColumnValue(parse_str[0]);
    if (c == None):
    	print "Unable to find selected row in tree for '"+mslTree+"'";
	return None;
    return c.row;

# Select a line other than the currently selected line

def SelectOtherTarget(dbw, mslTree, cur_row):
    # Get the Target tree
    t = dbw.GetMslTree(mslTree);
    if (t == None):
    	print "Unable to get tree for '"+mslTree+"'";
	return False;
    # Get the number of children in the tree
    cnt = t.GetChildrenNumber();
    # If not at the last child, select the next child, if at the last
    # child then select the previous row
    if (cur_row+1 < cnt):
	return dbw.SelectMslCell(mslTree, cur_row+1, -1, True, False);
    else:
	if (cur_row > 1):
	    return dbw.SelectMslCell(mslTree, cur_row-1, -1, True, False);
    return False;
	
# If function was passed an argument, then attempt to select it
# function for selecting a row that contains text, instead of needing
# to match by the exact name

def SelectMslSubtreeContaining(dbw,mslTree,rowText):
    # Get the requested MSL tree
    t = dbw.GetMslTree(mslTree);
    if (t == None):
        print "Could not get tree '"+mslTree+"'";
        return False;
    # Search for the row containing the text
    c = t.SearchChildByColumnValue(rowText);
    if (c == None):
        print "Could not find row containing text '"+rowText+"'";
        return False;
    # Get the currently selected row
    cur_row = GetCurrentSelectedRowNumber(dbw, mslTree);
    # Select the row containing the text
    if (dbw.DoubleClickMslCell(mslTree,c.row,-1,True,False)):
   	# If this was the currently selected row, then select another row
	if (cur_row == c.row):
	    SelectOtherTarget(dbw, mslTree, cur_row);
        return True;
    else:
        print "Could not select row containing text '"+rowText+"'";
	return False;

# If imported, then run from the function name

def spawn(name=None):
    dbw = ghs_misc.GetGlobal("self_dbw");
    if name is None:
    	# Get the selected row number
	cur_row = GetCurrentSelectedRowNumber(dbw, "mslTargets");
	# Spawn the currently selected row number
	if (dbw.DoubleClickMslCell("mslTargets", -1, 0)):
	    # Select a new target
	    SelectOtherTarget(dbw, "mslTargets", cur_row);
	    return True;
	return False;
    else:
	# Spawn the target with the given name
        return SelectMslSubtreeContaining(dbw,"mslTargets",name);

# If run as a script, call the function

if __name__ == "__main__":
    if (len(sys.argv) > 1):
        spawn(sys.argv[1]);
    else:
	spawn();
