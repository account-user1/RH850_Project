#!/bin/env python

import sys, re

usage="""usage: %s [options] [products]

Displays a summary of license usage, by product and date, from the specified
license server log file.  Output is in CSV format, suitable for importing
into a spreadsheet application.

options:
    --help: this message
    -m: group output by month rather than day
    -d: debug mode
    -f file: read logfile from file

products: only include the listed products in the output;
          leave blank to include all products (default)

example: %s -m -f lic_lm.log
         Displays a summary of license usage from the GHS License Manager log 
         file lic_lm.log, with usage totaled by month and product
""" % (sys.argv[0], sys.argv[0])

# For empty objects
class dummy: pass

# A class to keep track of the usage counts for a specific product/date
# It gives us a convenient way to reset, increment, and decrement the counts
class use_count:

    def __init__(self, installed):
        self._installed = installed  # # of licenses installed for this feature
        self._max_id=0               # Max id granted by the server
        self._granted=0              # Total # of licenses granted
        self._released=0             # Total # of licenses released
        self._hwm=0                  # Most concurrent checkouts
        self._outstanding=0          # # of licenses currently checked out
        self._denied=0               # # of denied requests
        self._user_list = []         # List of current users

    def register_grant(self, id, user):
        # A license was granted, update counts
        if id > self._max_id: self._max_id = id
        self._granted = self._granted + 1
        self._outstanding = self._outstanding + 1
        if self._outstanding > self._hwm:
            # Update the high water mark
            self._hwm = self._outstanding
        if '@' in user:
            # Trim off IP address if applicable
            user = user[0:user.index('@')]
        if user not in self._user_list:
            # Add user to the list
            self._user_list.append(user)
            
    def register_deny(self):
        # A license was denied, update counts
        self._denied = self._denied+1

    def register_release(self, user):
        # A license was released, update counts
        # Only count the release if there are grants outstanding.  If we
        # see a release when there are no outstanding grants, it probably
        # is a rejected request.  This happens because we don't have a
        # distinctive "release" message in the log: we use the message
        # for a client disconnecting from the server.
        if self._outstanding > 0:
            self._released = self._released + 1
            self._outstanding = self._outstanding - 1
        # Don't handle user list changes, since user licenses
        # are not actually returned

    def reset(self):
        # The server was reset, so update our counts
        self._released = self._released + self._outstanding
        self._outstanding = 0

    def csv_header(self):
        "Get a header row for the CSV representation of the counts"
        # What the fields mean:
        # Date: date of the licensing activity
        # Installed: the number of licenses currently installed
        # Max Concurrent Floating: the maximum number of floating licenses
        #       in use at any given time, for the specified  product,
        #       during the "Date" period
        # Max Users: the maximum number of distinct users of this product
        #       at any given time, during the "Date" period
        # Unused: installed-max_floating; basically, the minimum number of
        #       floating licenses available for the specified product,
        #       during the "Date" period
        # Max Id: the largest client id issued during the "Date" period.
        #       Normally, it will be the same as the max_users column.
        # Total Grants: the total number of licenses granted for the
        #       specified product, during the "Date" period
        # Total Releases: the total number of licenses returned to the
        #       server for the specified product, during the "Date" period
        # Denied: the total number of denials (count and percent)
        return '"Date","Installed","Max Concurrent Floating",'+\
               '"Max Users","Unused","Max Id","Total Grants",'+\
               '"Total Releases","Denied"'

    def csv(self, d):
        "Get a CSV representation of the counts.  See self.csv_header()"

        # If we're run on an incomplete log file (specifically, one that
        # doesn't include a startup banner), we may know that licenses were
        # granted and released but not how many are installed.  In that case,
        # print out what we can.
        if not self._installed:
            return '"%s","Unknown",%d,%d,"Unknown",%d,%d,%d,"%d"' % (d,
                                    self._hwm,
                                    len(self._user_list),
                                    self._max_id,
                                    self._granted,
                                    self._released,
                                    self._denied)

        # Special case for denied+granted==0, to avoid divide by zero
        if self._denied + self._granted == 0:
            return '"%s",%d,%d,%d,%d,%d,%d,%d,"%d"' % (d,
                                    self._installed, self._hwm,
                                    len(self._user_list),
                                    self._installed - self._hwm,
                                    self._max_id,
                                    self._granted,
                                    self._released,
                                    self._denied)

        return '"%s",%d,%d,%d,%d,%d,%d,%d,"%d (%0.1f%% of reqs)"' % (d,
                                    self._installed, self._hwm,
                                    len(self._user_list),
                                    self._installed - self._hwm,
                                    self._max_id,
                                    self._granted,
                                    self._released,
                                    self._denied,
                                    self._denied*100.0/(self._denied+self._granted))

    _str_ = csv

# A function to format a timestamp into something sortable in the output
def time_period(period, m):
    year = int(m['year'])
    month = m['month']
    if month == 'Jan': month = 1
    elif month == 'Feb': month = 2
    elif month == 'Mar': month = 3
    elif month == 'Apr': month = 4
    elif month == 'May': month = 5
    elif month == 'Jun': month = 6
    elif month == 'Jul': month = 7
    elif month == 'Aug': month = 8
    elif month == 'Sep': month = 9
    elif month == 'Oct': month = 10
    elif month == 'Nov': month = 11
    elif month == 'Dec': month = 12
    if year < 80: year = year + 2000
    elif year < 1900: year = year + 1900
    if period == 'month':
        return '%d-%02d' % (year,month)
    else:
        return '%d-%02d-%02d' % (year,month,int(m['day']))

# A class encapsulating a license server log file.
# Basically, you just instantiate an object (passing appropriate params)
# then can use the as_csv() method to get a csv representation.
# To get alternate representations (perhaps XML?), just add a method
# similar to as_csv() which outputs the desired format.
class LicensingLog:

    def installed_feature_count(self, m):
        "Get the number of installed licenses for the regex match m."
        try:
            return self.installed_features[m['product']][0]
        except KeyError:
            if not self.warning_issued:
                sys.stderr.write("WARNING: This doesn't look like a complete log file.\nWARNING: Counts may not be accurate.\n")
                self.warning_issued = True

    def add_feature_installed_info(self, m, products, debug_mode):
	if debug_mode == 'verbose':
	    s = '[%s: %s licenses]' % (m['product'],m['nlic'])
	    if products and m['product'] not in products:
		s = s+' SKIPPED'
	    print s
	if self.is_expired(m):
	    return False;
	if not products or m['product'] in products:
	    if m['nlic'] == 'U' or m['nlic'] == 'u':
		m['nlic'] = sys.maxint
	    if self.installed_features.has_key(m['product']):
		nlic = self.installed_features[m['product']][0]
		self.installed_features[m['product']] = (nlic+int(m['nlic']), m['feature'])
	    else:
		self.installed_features[m['product']] = (int(m['nlic']), m['feature'])
	    if debug_mode == True:
		print '[%s: %s licenses]' % (m['product'],m['nlic'])
	return True;

    def __init__(self, fp, period, products, debug_mode):
        # Try not to flood the user with "incomplete file" warnings
        self.warning_issued = False

        # Clear out our current counts
        self.installed_features = {}
        self._data = {}
        self._debug_mode = debug_mode
 
        # Loop through all the lines on fp
        l = fp.readline()
        while l:
            # trim the newline
            l = re.sub('\s*$', '', l)
            if debug_mode == 'verbose': print 'INPUT: "%s"' % l

            if self._start_of_execution.search(l):
                # The server will list the installed licenses soon, so clear
                # our current list of installed licenses
                self.installed_features = {}
                # Update our count of active licenses
                for k in self._data.keys():
                    for d in self._data[k].keys():
                        self._data[k][d].reset()
                if debug_mode == 'verbose': print '[COUNTS CLEARED]'
            elif self._feature_line.search(l):
                # Register this license so we know it is installed
                self.add_feature_installed_info(self._feature_line.search(l).groupdict(), products, debug_mode);
            elif self._feature_line_new.search(l):
                # Register this license so we know it is installed
                self.add_feature_installed_info(self._feature_line_new.search(l).groupdict(),  products, debug_mode);
            elif self._unknown and self._unknown.search(l):
                if debug_mode: print '[UNINTERESTING]'
            elif self._grant.search(l):
                # Register this license grant
                m = self._grant.search(l).groupdict()
                ts = time_period(period, m)
                if debug_mode == 'verbose':
                    s = '[GRANT %s]' % m['product']
                    if products and m['product'] not in products:
                        s = s+' SKIPPED'
                    print s
                if not products or m['product'] in products:
                    if debug_mode == True: print l
                    if not self._data.has_key(m['product']):
                        self._data[m['product']] = {}
                    if not self._data[m['product']].has_key(ts):
                        installed = self.installed_feature_count(m)
                        self._data[m['product']][ts] = use_count(installed)
                    self._data[m['product']][ts].register_grant(int(m['id']), m['user'])
                    if debug_mode == True: print '[GRANT %s]' % m['product']
    
            elif self._release.search(l):
                # Register this license release
                m = self._release.search(l).groupdict()
                ts = time_period(period, m)
                if (not products and m['product']!='unknown')or m['product'] in products:
                    if debug_mode == True: print l
                    if not self._data.has_key(m['product']):
                        self._data[m['product']] = {}
                    if not self._data[m['product']].has_key(ts):
                        installed = self.installed_feature_count(m)
                        self._data[m['product']][ts] = use_count(installed)
                    self._data[m['product']][ts].register_release(m['user'])
        
                    if debug_mode: print '[RELEASE %s]' % m['product']
            elif self._deny and self._deny.search(l):
                # Register this license denial
                m = self._deny.search(l).groupdict()
                ts = time_period(period, m)
                if not products or m['product'] in products:
                    if debug_mode == True: print l
                    if not self._data.has_key(m['product']):
                        self._data[m['product']] = {}
                    if not self._data[m['product']].has_key(ts):
                        installed = self.installed_feature_count(m)
                        self._data[m['product']][ts] = use_count(installed)
                    self._data[m['product']][ts].register_deny()
        
                    if debug_mode: print '[DENY %s]' % m['product']
            elif debug_mode == 'verbose':
                print '[UNHANDLED]'
            l = fp.readline()

    def as_csv(self):
        'Render the log as CSV data'
        csv = []
        kl = self._data.keys()
        kl.sort()
        for k in kl:
            csv.append('"License usage for %s"' % k)
            csv.append(self._data[k][self._data[k].keys()[0]].csv_header())
            dl = self._data[k].keys()
            dl.sort()
            for d in dl:
                csv.append(self._data[k][d].csv(d))
            csv.append('""')
        return '\n'.join(csv)

class GHSlmLogBase(LicensingLog):
    # When the server is first started, it prints a line like this
    # which tells us to clear our counts
    _start_of_execution = re.compile('^.*: Starting execution')

    # When restarted, the server emits a line for each licensed feature,
    # telling us how many licenses are installed
    _feature_line = re.compile('^\s+Feature\s+(?P<feature>\d+)\s+\((?P<product>.*)\):\s+(?P<nlic>\d+)\s+licenses?')
    _feature_line_new_fmt = '^<<date>>:\s+Feature\s+(?P<feature>\d+)\s+\((?P<product>.*)\):\s+(?P<nlic>\d+)\s+licenses?'

    # When the server grants a license to a client, it prints this line
    # to the log file
    _grant_re_fmt = '^<<date>>:\s+granted\s+(?P<product>\w+)\s+\((?P<id>\d+)\s+of\s+\d+\)\s+to\s+(?P<user>.+)$'

    # When a client releases a license back to the server, the server prints
    # this line to the log file (this line is actually printed whenever a
    # client disconnects from the server, but we'll try to compensate for
    # that by keeping track of denials)
    _release_re_fmt = '^<<date>>:\s+exit\s+(?P<product>\w+)\s+(?P<user>.+)$'
    
    # When a request is denied, the server prints this line to the log file
    _deny_re_fmt = '^<<date>>:\s+.*license\sdenied:\sno\s(?P<product>\w+)\slicenses\savailable$'
    
    # When an unknown user exits, it prints this line to the log file
    _unknown_re_fmt = '^<<date>>:\s+exit\sunknown\suser\ssat\s'

    def _make_re(self,fmt):
        s = fmt
        s = s.replace('<<date>>', self._date_re_fmt)
        return re.compile(s)

    def __init__(self, fp, period, products, debug_mode):
        self._feature_line_new  = self._make_re(self._feature_line_new_fmt)
        self._grant   = self._make_re(self._grant_re_fmt)
        self._release = self._make_re(self._release_re_fmt)
        self._deny    = self._make_re(self._deny_re_fmt)
        self._unknown = self._make_re(self._unknown_re_fmt)
        LicensingLog.__init__(self, fp, period, products, debug_mode)

    # The GHSlm server doesn't support per-feature expirations on floating
    # licenses
    def is_expired(self, m):
        return False

class GHSlmLog_LongDate(GHSlmLogBase):
    _date_re_fmt = '\w+\s+(?P<month>\w+)\s+(?P<day>\d+)\s+(?P<time>[0-9:]+)\s+(?P<year>\d+)'

class GHSlmLog_ShortDate(GHSlmLogBase):
    _date_re_fmt = '(?P<day>\d+)(?P<month>[a-zA-Z]+)(?P<year>\d+)\s(?P<time>[0-9:]+)'

class GHSlmLog(GHSlmLogBase):
    def __init__(self, fp, period, products, debug_mode):
        d = fp.read(4096)
        fp.seek(0)
        for c in (GHSlmLog_LongDate, GHSlmLog_ShortDate):
            if re.search('^'+c._date_re_fmt, d, re.M):
                self._date_re_fmt = c._date_re_fmt
                GHSlmLogBase.__init__(self, fp, period, products, debug_mode)
                break

# Our main routine: process command line arguments, the log file, then output
def main():
    # State variables
    debug_mode = False
    period = 'day'
    products = []

    # Process arguments
    grab_filename=False
    f = None
    for arg in sys.argv[1:]:
        if grab_filename:
            f = open(arg)
            grab_filename = False
        elif arg == '-m':
            period = 'month'
        elif arg == '-d':
            debug_mode = True
        elif arg == '-dv':
            debug_mode = 'verbose'
        elif arg == '--help' or arg == '-h':
            print usage
            sys.exit(0)
        elif arg == '-f':
            grab_filename = True
        else:
            products.append(arg)

    if debug_mode:
        print 'debug mode'
        print 'products = %s' % products

    if f is None:
        print 'No logfile specified.  Try --help'
        sys.exit(1)

    # Process the log file
    in_use = GHSlmLog(f, period, products, debug_mode)

    # Print the results in CSV format
    print in_use.as_csv()

# Don't execute the above code if we access this file as an include
if __name__=="__main__":
    main()
