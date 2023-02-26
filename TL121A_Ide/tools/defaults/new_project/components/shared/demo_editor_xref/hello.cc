#include "shop.h"
#include "labels.h"
#include <iostream>

using namespace std;

INTENTIONAL_COMPILE_ERROR_Edit_this_file_using_the_multi_editor_to_begin_this_demonstration;
/**
 * Welcome to the demonstration of the MULTI Editor. This
 * demonstration will focus on the advanced cross reference
 * capabilities of the MULTI Editor. The demonstration is split up
 * into stages. At each stage we will suggest that you try an action
 * to demonstrate a particular feature of the editor.
 **/

/**
 * Step 1 (Autocompletion): The Editor parses header files as they are
 * included to extract function definitions so it can autocomplete
 * functions and provide calling conventions in tooltips when
 * appropriate. This is done in the background so for large groups of
 * header files it may take a moment for them all to be parsed.
 *
 * Try typing "AutocompleteCatalogFileName" in the space below. This will
 * not autocomplete because it is not defined in any header file
 * included. Remove the text after you have experimented to avoid
 * syntax errors later.
 **/


/**
 * Uncomment the following header file.
 **/
//#include "catalog.h"

/**
 * Now try typing "AutocompleteCatalogFileName(" again. While doing this
 * notice that the function is autocompleted and the prototype is
 * shown in the status bar at the bottom of the editor. Hit tab to
 * accept the autocompletion. Once you enter the "(" we show the
 * arguments in a tooltip below the cursor. Remove the text after you
 * have experimented to avoid syntax errors later.
 **/



/**
 * Step 2 (Autocompleting when there are Multiple Similar Function
 * Names): Now try typing just "Aut". Notice that it is partially
 * autocompleted to read "Auto".  This is because there is more than 1
 * function which begins with the string "Aut", though all of them begin
 * with "Auto". Try the following key combinations to:
 *
 *     <tab>           Accept current completion
 *     <ctrl>-[        Move backwards through list of completions
 *     <ctrl>-]        Move forwards through list of completions
 *     <ctrl>-/        Show list of completions
 *     <ctrl>-'        Show list of completions with full definitions
 *
 * Remove the text after you have experimented to avoid syntax errors
 * later.
 **/



/**
 * Step 3 (Jump to Function Definition): At the top of the editor there
 * is an editable pull down menu with the text "<enter procedure>" in
 * it.  You can jump the cursor to the definition of any function
 * defined in the current file by selecting it from this pull down
 * menu or typing it into the text area and hitting enter.
 *
 * Select the "bar" function from the pull down.
 **/
void foo() { }
void bar() { }



/**
 * Step 4 (Complete Cross Reference Information): The features
 * demonstrated so far are automatic, but limited to functions within
 * the current file and files included from the current file. It is
 * possible to request that the Editor generate full information for
 * functions and variables within an entire project. Since this
 * operation can take some time to complete it is done in the
 * background and only when the user requests it.
 *
 * Save the file and generate cross reference information by selecting
 * "View->Generate Cross References" or right click and select
 * "Generate Cross References".
 *
 * (If you have started your Editor from the Debugger this step is not
 * necessary and these options are not available. The information has
 * already been generated as part of the build process.)
 **/



/**
 * Step 5 (Browse References): Now that complete cross reference information
 * has been generated you should be able to right click on functions
 * or variables and browse their references.
 *
 * Right click the "Shop" function below and select 'Browse References
 * of "Shop"'.  A window will appear showing the definition,
 * declaration and uses of this function throughout the project. Select
 * entries within this window to jump the editor to those uses.
 *
 * (The Next/Previous arrows will undim, allowing you to move back to
 * the file which you came from easily.)
 *
 * For more information about the cross reference capabilities of the
 * MULTI Editor please refer to the Editor documentation.
 **/

static void AutoShop(char * catalogFile)
{
    Shop(catalogFile);
}

static void AutocompleteHelloWorld()
{
    cout << "Hello, World!" << endl;
}

int main (int argc, char **argv)
{
    int x=71;
InMain:
    AutocompleteHelloWorld();
PrintedHelloWorld:
    switch (x) {
        case 1:
            break;
        case 2:
            break;
        default: // we will always fall through to the default for this demo
	    char * catalogFile = AutocompleteCatalogFileName(argv[0],
							     argv[argc-1]);
	    AutoShop(catalogFile);
    }
    return 0;
}
