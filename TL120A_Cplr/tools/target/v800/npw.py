import ide;
from utils import *;

def add_suppress_fnone_macro(defs):
    wbuild = getWBuildConnection(defs)
    wbuild.DeleteMacro(int(defs["TOP_GPJ_COOKIE"]),
                          "SUPPRESS_FNONE")
    wbuild.AddMacro(int(defs["TOP_GPJ_COOKIE"]),
                          "SUPPRESS_FNONE", "true", None)


