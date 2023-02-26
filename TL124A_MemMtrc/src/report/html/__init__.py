"""=====================================================================================================================
#      File: report/html/__init__.py
#   Project: EA4 project memory metrics parsing tool
#   Created: 2017-05-16
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-05-16  1     Jared     Initial file creation
# -------------------------------------------------------------------------------------------------------------------"""

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
# Python Standard Libraries
import os

# 3rd Party Libraries
from mako.template import Template     # https://pypi.python.org/pypi/Mako/?
from mako.lookup import TemplateLookup # https://pypi.python.org/pypi/Mako/?

from report.format import sizeof, percent



# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def get_css():
    """Return a blob of text representing all of the CSS files that are required for an HTML format report."""
    return get_assets('css/bootstrap.min.css')

# ----------------------------------------------------------------------------------------------------------------------
def get_js():
    """Return a blob of text representing all of the JS resources that are required for an HTML format report."""
    return get_assets(
        'js/jquery.min.js',
        'js/jquery-ui.min.js',
        'js/bootstrap.min.js',
        'js/chart.js',
        'js/jquery.ui.treemap.js'
    )

# ----------------------------------------------------------------------------------------------------------------------
def get_assets(*files):
    """Generic function used to take a list of files and load them from disc.  The contents of all of the files will be
    concatenated together into one large string before being returned.  The resultant string is suitable for being
    inserted directly into a <style> or <script> tag in HTML."""
    text = ''
    base = os.path.dirname(__file__)
    for filename in files:
        path = os.path.join(base, filename)
        with open(path) as handle:
            text += handle.read()
    return text

# ----------------------------------------------------------------------------------------------------------------------
def render(filename, **kwargs):
    """Render the specified file using the passed arguments.  This performs the Mako template lookup and subsequent
    rendering returning the rendered HTML output."""
    base = os.path.dirname(__file__)
    directory = os.path.join(base, 'templates')
    lookup = TemplateLookup(directories=[directory])
    template = lookup.get_template(filename)
    kwargs['lookup'] = lookup
    return template.render(**kwargs)


# ======================================================================================================================
# Generate Function
# ----------------------------------------------------------------------------------------------------------------------
def generate(processor, filename):
    """Generate an HTML format report and save the output to the specified filename."""
    kwargs = {
        'css': get_css(),
        'js': get_js(),
        'processor': processor,
        'sizeof': sizeof,
        'percent': percent
    }
    html = render('main.html.tpl', **kwargs)
    with open(filename, 'w+') as handle:
        handle.write(html)


# End of File
