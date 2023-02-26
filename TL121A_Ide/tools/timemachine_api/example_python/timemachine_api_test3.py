import os
import sys
from timemachine_api import *

# ------------------------------------------------------------------------------
#  TimeMachine API - Third python example
# ------------------------------------------------------------------------------

# Load and initialize the TimeMachine API
my_timemachine_api = timemachine_api()

# Connect to the MULTI Debugger which started this script
live_connection = my_timemachine_api.live_connect()

if not live_connection:
    script_name = os.path.basename(sys.argv[0])
    print "%s: error: failed to connect to MULTI Debugger" % script_name
    sys.exit(1)

# Capture output of this script to the command pane of the MULTI Debugger
#   (unless this script is run with the "-nooutputcapture" argument)
if not "-nooutputcapture" in sys.argv:
    live_connection.capture_output_to_multi()
else:
    sys.argv.remove("-nooutputcapture")

# Verify that the symbol table is initialized
if not live_connection.is_symbol_table_initialized():
    print "Warning: symbol table is not initialized"

# Look up the address of an instruction symbol
if len(sys.argv) > 1:
    symbol = sys.argv.pop(1)
else:
    symbol = "main"
(address, size) = live_connection.get_address_from_symbol(symbol)
if size >= 0:
    print "&%s() =" % symbol, hex(address)
else:
    print "Error finding symbol \"%s\"" % symbol

# Disconnect from the MULTI Debugger
live_connection.disconnect()

