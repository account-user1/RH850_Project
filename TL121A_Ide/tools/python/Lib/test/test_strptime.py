"""PyUnit testing against strptime"""

import unittest
import time
import locale
import re
import sys
from test import test_support

import _strptime

class getlang_Tests(unittest.TestCase):
    """Test _getlang"""
    def test_basic(self):
        self.failUnlessEqual(_strptime._getlang(), locale.getlocale(locale.LC_TIME))

class LocaleTime_Tests(unittest.TestCase):
    """Tests for _strptime.LocaleTime."""

    def setUp(self):
        """Create time tuple based on current time."""
        self.time_tuple = time.localtime()
        self.LT_ins = _strptime.LocaleTime()

    def compare_against_time(self, testing, directive, tuple_position,
                             error_msg):
        """Helper method that tests testing against directive based on the
        tuple_position of time_tuple.  Uses error_msg as error message.

        """
        strftime_output = time.strftime(directive, self.time_tuple)
        comparison = testing[self.time_tuple[tuple_position]]
        self.failUnless(strftime_output in testing, "%s: not found in tuple" %
                                                    error_msg)
        self.failUnless(comparison == strftime_output,
                        "%s: position within tuple incorrect; %s != %s" %
                        (error_msg, comparison, strftime_output))

    def test_weekday(self):
        # Make sure that full and abbreviated weekday names are correct in
        # both string and position with tuple
        self.compare_against_time(self.LT_ins.f_weekday, '%A', 6,
                                  "Testing of full weekday name failed")
        self.compare_against_time(self.LT_ins.a_weekday, '%a', 6,
                                  "Testing of abbreviated weekday name failed")

    def test_month(self):
        # Test full and abbreviated month names; both string and position
        # within the tuple
        self.compare_against_time(self.LT_ins.f_month, '%B', 1,
                                  "Testing against full month name failed")
        self.compare_against_time(self.LT_ins.a_month, '%b', 1,
                                  "Testing against abbreviated month name failed")

    def test_am_pm(self):
        # Make sure AM/PM representation done properly
        strftime_output = time.strftime("%p", self.time_tuple)
        self.failUnless(strftime_output in self.LT_ins.am_pm,
                        "AM/PM representation not in tuple")
        if self.time_tuple[3] < 12: position = 0
        else: position = 1
        self.failUnless(strftime_output == self.LT_ins.am_pm[position],
                        "AM/PM representation in the wrong position within the tuple")

    def test_timezone(self):
        # Make sure timezone is correct
        timezone = time.strftime("%Z", self.time_tuple)
        if timezone:
            self.failUnless(timezone in self.LT_ins.timezone,
                            "timezone %s not found in %s" %
                            (timezone, self.LT_ins.timezone))

    def test_date_time(self):
        # Check that LC_date_time, LC_date, and LC_time are correct
        # the magic date is used so as to not have issues with %c when day of
        #  the month is a single digit and has a leading space.  This is not an
        #  issue since strptime still parses it correctly.  The problem is
        #  testing these directives for correctness by comparing strftime
        #  output.
        magic_date = (1999, 3, 17, 22, 44, 55, 2, 76, 0)
        strftime_output = time.strftime("%c", magic_date)
        self.failUnless(strftime_output == time.strftime(self.LT_ins.LC_date_time,
                                                         magic_date),
                        "LC_date_time incorrect")
        strftime_output = time.strftime("%x", magic_date)
        self.failUnless(strftime_output == time.strftime(self.LT_ins.LC_date,
                                                         magic_date),
                        "LC_date incorrect")
        strftime_output = time.strftime("%X", magic_date)
        self.failUnless(strftime_output == time.strftime(self.LT_ins.LC_time,
                                                         magic_date),
                        "LC_time incorrect")
        LT = _strptime.LocaleTime(am_pm=('',''))
        self.failUnless(LT.LC_time, "LocaleTime's LC directives cannot handle "
                                    "empty strings")

    def test_lang(self):
        # Make sure lang is set to what _getlang() returns
        # Assuming locale has not changed between now and when self.LT_ins was created
        self.failUnlessEqual(self.LT_ins.lang, _strptime._getlang())

    def test_by_hand_input(self):
        # Test passed-in initialization value checks
        self.failUnless(_strptime.LocaleTime(f_weekday=range(7)),
                        "Argument size check for f_weekday failed")
        self.assertRaises(TypeError, _strptime.LocaleTime, f_weekday=range(8))
        self.assertRaises(TypeError, _strptime.LocaleTime, f_weekday=range(6))
        self.failUnless(_strptime.LocaleTime(a_weekday=range(7)),
                        "Argument size check for a_weekday failed")
        self.assertRaises(TypeError, _strptime.LocaleTime, a_weekday=range(8))
        self.assertRaises(TypeError, _strptime.LocaleTime, a_weekday=range(6))
        self.failUnless(_strptime.LocaleTime(f_month=range(12)),
                        "Argument size check for f_month failed")
        self.assertRaises(TypeError, _strptime.LocaleTime, f_month=range(11))
        self.assertRaises(TypeError, _strptime.LocaleTime, f_month=range(13))
        self.failUnless(len(_strptime.LocaleTime(f_month=range(12)).f_month) == 13,
                        "dummy value for f_month not added")
        self.failUnless(_strptime.LocaleTime(a_month=range(12)),
                        "Argument size check for a_month failed")
        self.assertRaises(TypeError, _strptime.LocaleTime, a_month=range(11))
        self.assertRaises(TypeError, _strptime.LocaleTime, a_month=range(13))
        self.failUnless(len(_strptime.LocaleTime(a_month=range(12)).a_month) == 13,
                        "dummy value for a_month not added")
        self.failUnless(_strptime.LocaleTime(am_pm=range(2)),
                        "Argument size check for am_pm failed")
        self.assertRaises(TypeError, _strptime.LocaleTime, am_pm=range(1))
        self.assertRaises(TypeError, _strptime.LocaleTime, am_pm=range(3))
        self.failUnless(_strptime.LocaleTime(timezone=range(2)),
                        "Argument size check for timezone failed")
        self.assertRaises(TypeError, _strptime.LocaleTime, timezone=range(1))
        self.assertRaises(TypeError, _strptime.LocaleTime, timezone=range(3))

    def test_unknowntimezone(self):
        # Handle timezone set to ('','') properly.
        # Fixes bug #661354
        locale_time = _strptime.LocaleTime(timezone=('',''))
        self.failUnless("%Z" not in locale_time.LC_date,
                        "when timezone == ('',''), string.replace('','%Z') is "
                         "occuring")

class TimeRETests(unittest.TestCase):
    """Tests for TimeRE."""

    def setUp(self):
        """Construct generic TimeRE object."""
        self.time_re = _strptime.TimeRE()
        self.locale_time = _strptime.LocaleTime()

    def test_getitem(self):
        # Make sure that __getitem__ works properly
        self.failUnless(self.time_re['m'],
                        "Fetching 'm' directive (built-in) failed")
        self.failUnless(self.time_re['b'],
                        "Fetching 'b' directive (built w/ __tupleToRE) failed")
        for name in self.locale_time.a_month:
            self.failUnless(self.time_re['b'].find(name) != -1,
                            "Not all abbreviated month names in regex")
        self.failUnless(self.time_re['c'],
                        "Fetching 'c' directive (built w/ format) failed")
        self.failUnless(self.time_re['c'].find('%') == -1,
                        "Conversion of 'c' directive failed; '%' found")
        self.assertRaises(KeyError, self.time_re.__getitem__, '1')

    def test_pattern(self):
        # Test TimeRE.pattern
        pattern_string = self.time_re.pattern(r"%a %A %d")
        self.failUnless(pattern_string.find(self.locale_time.a_weekday[2]) != -1,
                        "did not find abbreviated weekday in pattern string '%s'" %
                         pattern_string)
        self.failUnless(pattern_string.find(self.locale_time.f_weekday[4]) != -1,
                        "did not find full weekday in pattern string '%s'" %
                         pattern_string)
        self.failUnless(pattern_string.find(self.time_re['d']) != -1,
                        "did not find 'd' directive pattern string '%s'" %
                         pattern_string)

    def test_pattern_escaping(self):
        # Make sure any characters in the format string that might be taken as
        # regex syntax is escaped.
        pattern_string = self.time_re.pattern("\d+")
        self.failUnless(r"\\d\+" in pattern_string,
                        "%s does not have re characters escaped properly" %
                        pattern_string)

    def test_compile(self):
        # Check that compiled regex is correct
        found = self.time_re.compile(r"%A").match(self.locale_time.f_weekday[6])
        self.failUnless(found and found.group('A') == self.locale_time.f_weekday[6],
                        "re object for '%A' failed")
        compiled = self.time_re.compile(r"%a %b")
        found = compiled.match("%s %s" % (self.locale_time.a_weekday[4],
                               self.locale_time.a_month[4]))
        self.failUnless(found,
            "Match failed with '%s' regex and '%s' string" %
             (compiled.pattern, "%s %s" % (self.locale_time.a_weekday[4],
                                           self.locale_time.a_month[4])))
        self.failUnless(found.group('a') == self.locale_time.a_weekday[4] and
                         found.group('b') == self.locale_time.a_month[4],
                        "re object couldn't find the abbreviated weekday month in "
                         "'%s' using '%s'; group 'a' = '%s', group 'b' = %s'" %
                         (found.string, found.re.pattern, found.group('a'),
                          found.group('b')))
        for directive in ('a','A','b','B','c','d','H','I','j','m','M','p','S',
                          'U','w','W','x','X','y','Y','Z','%'):
            compiled = self.time_re.compile("%" + directive)
            found = compiled.match(time.strftime("%" + directive))
            self.failUnless(found, "Matching failed on '%s' using '%s' regex" %
                                    (time.strftime("%" + directive),
                                     compiled.pattern))

    def test_blankpattern(self):
        # Make sure when tuple or something has no values no regex is generated.
        # Fixes bug #661354
        test_locale = _strptime.LocaleTime(timezone=('',''))
        self.failUnless(_strptime.TimeRE(test_locale).pattern("%Z") == '',
                        "with timezone == ('',''), TimeRE().pattern('%Z') != ''")

    def test_matching_with_escapes(self):
        # Make sure a format that requires escaping of characters works
        compiled_re = self.time_re.compile("\w+ %m")
        found = compiled_re.match("\w+ 10")
        self.failUnless(found, "Escaping failed of format '\w+ 10'")

class StrptimeTests(unittest.TestCase):
    """Tests for _strptime.strptime."""

    def setUp(self):
        """Create testing time tuple."""
        self.time_tuple = time.gmtime()

    def test_TypeError(self):
        # Make sure ValueError is raised when match fails
        self.assertRaises(ValueError, _strptime.strptime, data_string="%d",
                          format="%A")

    def test_unconverteddata(self):
        # Check ValueError is raised when there is unconverted data
        self.assertRaises(ValueError, _strptime.strptime, "10 12", "%m")

    def helper(self, directive, position):
        """Helper fxn in testing."""
        strf_output = time.strftime("%" + directive, self.time_tuple)
        strp_output = _strptime.strptime(strf_output, "%" + directive)
        self.failUnless(strp_output[position] == self.time_tuple[position],
                        "testing of '%s' directive failed; '%s' -> %s != %s" %
                         (directive, strf_output, strp_output[position],
                          self.time_tuple[position]))

    def test_year(self):
        # Test that the year is handled properly
        for directive in ('y', 'Y'):
            self.helper(directive, 0)
        # Must also make sure %y values are correct for bounds set by Open Group
        for century, bounds in ((1900, ('69', '99')), (2000, ('00', '68'))):
            for bound in bounds:
                strp_output = _strptime.strptime(bound, '%y')
                expected_result = century + int(bound)
                self.failUnless(strp_output[0] == expected_result,
                                "'y' test failed; passed in '%s' "
                                "and returned '%s'" % (bound, strp_output[0]))

    def test_month(self):
        # Test for month directives
        for directive in ('B', 'b', 'm'):
            self.helper(directive, 1)

    def test_day(self):
        # Test for day directives
        self.helper('d', 2)

    def test_hour(self):
        # Test hour directives
        self.helper('H', 3)
        strf_output = time.strftime("%I %p", self.time_tuple)
        strp_output = _strptime.strptime(strf_output, "%I %p")
        self.failUnless(strp_output[3] == self.time_tuple[3],
                        "testing of '%%I %%p' directive failed; '%s' -> %s != %s" %
                         (strf_output, strp_output[3], self.time_tuple[3]))

    def test_minute(self):
        # Test minute directives
        self.helper('M', 4)

    def test_second(self):
        # Test second directives
        self.helper('S', 5)

    def test_weekday(self):
        # Test weekday directives
        for directive in ('A', 'a', 'w'):
            self.helper(directive,6)

    def test_julian(self):
        # Test julian directives
        self.helper('j', 7)

    def test_timezone(self):
        # Test timezone directives.
        # When gmtime() is used with %Z, entire result of strftime() is empty.
        # Check for equal timezone names deals with bad locale info when this
        # occurs; first found in FreeBSD 4.4.
        strp_output = _strptime.strptime("UTC", "%Z")
        self.failUnlessEqual(strp_output.tm_isdst, 0)
        strp_output = _strptime.strptime("GMT", "%Z")
        self.failUnlessEqual(strp_output.tm_isdst, 0)
        time_tuple = time.localtime()
        strf_output = time.strftime("%Z")  #UTC does not have a timezone
        strp_output = _strptime.strptime(strf_output, "%Z")
        locale_time = _strptime.LocaleTime()
        if sys.platform == 'mac':
            # Timezones don't really work on MacOS9
            return
        if time.tzname[0] != time.tzname[1] or not time.daylight:
            self.failUnless(strp_output[8] == time_tuple[8],
                            "timezone check failed; '%s' -> %s != %s" %
                             (strf_output, strp_output[8], time_tuple[8]))
        else:
            self.failUnless(strp_output[8] == -1,
                            "LocaleTime().timezone has duplicate values and "
                             "time.daylight but timezone value not set to -1")

    def test_bad_timezone(self):
        # Explicitly test possibility of bad timezone;
        # when time.tzname[0] == time.tzname[1] and time.daylight
        if sys.platform == "mac":
            return # MacOS9 has severely broken timezone support.
        try:
            original_tzname = time.tzname
            original_daylight = time.daylight
            time.tzname = ("PDT", "PDT")
            time.daylight = 1
            # Need to make sure that timezone is not calculated since that
            # calls time.tzset and overrides temporary changes to time .
            _strptime._locale_cache = _strptime.TimeRE(_strptime.LocaleTime(
                                                    timezone=("PDT", "PDT")))
            _strptime._regex_cache.clear()
            tz_value = _strptime.strptime("PDT", "%Z")[8]
            self.failUnlessEqual(tz_value, -1)
        finally:
            time.tzname = original_tzname
            time.daylight = original_daylight
            _strptime._locale_cache = _strptime.TimeRE()
            _strptime._regex_cache.clear()

    def test_date_time(self):
        # Test %c directive
        for position in range(6):
            self.helper('c', position)

    def test_date(self):
        # Test %x directive
        for position in range(0,3):
            self.helper('x', position)

    def test_time(self):
        # Test %X directive
        for position in range(3,6):
            self.helper('X', position)

    def test_percent(self):
        # Make sure % signs are handled properly
        strf_output = time.strftime("%m %% %Y", self.time_tuple)
        strp_output = _strptime.strptime(strf_output, "%m %% %Y")
        self.failUnless(strp_output[0] == self.time_tuple[0] and
                         strp_output[1] == self.time_tuple[1],
                        "handling of percent sign failed")

    def test_caseinsensitive(self):
        # Should handle names case-insensitively.
        strf_output = time.strftime("%B", self.time_tuple)
        self.failUnless(_strptime.strptime(strf_output.upper(), "%B"),
                        "strptime does not handle ALL-CAPS names properly")
        self.failUnless(_strptime.strptime(strf_output.lower(), "%B"),
                        "strptime does not handle lowercase names properly")
        self.failUnless(_strptime.strptime(strf_output.capitalize(), "%B"),
                        "strptime does not handle capword names properly")

    def test_defaults(self):
        # Default return value should be (1900, 1, 1, 0, 0, 0, 0, 1, 0)
        defaults = (1900, 1, 1, 0, 0, 0, 0, 1, -1)
        strp_output = _strptime.strptime('1', '%m')
        self.failUnless(strp_output == defaults,
                        "Default values for strptime() are incorrect;"
                        " %s != %s" % (strp_output, defaults))

    def test_escaping(self):
        # Make sure all characters that have regex significance are escaped.
        # Parentheses are in a purposeful order; will cause an error of
        # unbalanced parentheses when the regex is compiled if they are not
        # escaped.
        # Test instigated by bug #796149 .
        need_escaping = ".^$*+?{}\[]|)("
        self.failUnless(_strptime.strptime(need_escaping, need_escaping))

class Strptime12AMPMTests(unittest.TestCase):
    """Test a _strptime regression in '%I %p' at 12 noon (12 PM)"""

    def test_twelve_noon_midnight(self):
        eq = self.assertEqual
        eq(time.strptime('12 PM', '%I %p')[3], 12)
        eq(time.strptime('12 AM', '%I %p')[3], 0)
        eq(_strptime.strptime('12 PM', '%I %p')[3], 12)
        eq(_strptime.strptime('12 AM', '%I %p')[3], 0)


class JulianTests(unittest.TestCase):
    """Test a _strptime regression that all julian (1-366) are accepted"""

    def test_all_julian_days(self):
        eq = self.assertEqual
        for i in range(1, 367):
            # use 2004, since it is a leap year, we have 366 days
            eq(_strptime.strptime('%d 2004' % i, '%j %Y')[7], i)

class CalculationTests(unittest.TestCase):
    """Test that strptime() fills in missing info correctly"""

    def setUp(self):
        self.time_tuple = time.gmtime()

    def test_julian_calculation(self):
        # Make sure that when Julian is missing that it is calculated
        format_string = "%Y %m %d %H %M %S %w %Z"
        result = _strptime.strptime(time.strftime(format_string, self.time_tuple),
                                    format_string)
        self.failUnless(result.tm_yday == self.time_tuple.tm_yday,
                        "Calculation of tm_yday failed; %s != %s" %
                         (result.tm_yday, self.time_tuple.tm_yday))

    def test_gregorian_calculation(self):
        # Test that Gregorian date can be calculated from Julian day
        format_string = "%Y %H %M %S %w %j %Z"
        result = _strptime.strptime(time.strftime(format_string, self.time_tuple),
                                    format_string)
        self.failUnless(result.tm_year == self.time_tuple.tm_year and
                         result.tm_mon == self.time_tuple.tm_mon and
                         result.tm_mday == self.time_tuple.tm_mday,
                        "Calculation of Gregorian date failed;"
                         "%s-%s-%s != %s-%s-%s" %
                         (result.tm_year, result.tm_mon, result.tm_mday,
                          self.time_tuple.tm_year, self.time_tuple.tm_mon,
                          self.time_tuple.tm_mday))

    def test_day_of_week_calculation(self):
        # Test that the day of the week is calculated as needed
        format_string = "%Y %m %d %H %S %j %Z"
        result = _strptime.strptime(time.strftime(format_string, self.time_tuple),
                                    format_string)
        self.failUnless(result.tm_wday == self.time_tuple.tm_wday,
                        "Calculation of day of the week failed;"
                         "%s != %s" % (result.tm_wday, self.time_tuple.tm_wday))

class CacheTests(unittest.TestCase):
    """Test that caching works properly."""

    def test_time_re_recreation(self):
        # Make sure cache is recreated when current locale does not match what
        # cached object was created with.
        _strptime.strptime("10", "%d")
        _strptime._locale_cache.locale_time = _strptime.LocaleTime(lang="Ni")
        original_time_re = id(_strptime._locale_cache)
        _strptime.strptime("10", "%d")
        self.failIfEqual(original_time_re, id(_strptime._locale_cache))

    def test_regex_cleanup(self):
        # Make sure cached regexes are discarded when cache becomes "full".
        try:
            del _strptime._regex_cache['%d']
        except KeyError:
            pass
        bogus_key = 0
        while len(_strptime._regex_cache) <= 5:
            _strptime._regex_cache[bogus_key] = None
            bogus_key += 1
        _strptime.strptime("10", "%d")
        self.failUnlessEqual(len(_strptime._regex_cache), 1)

    def test_new_localetime(self):
        # A new LocaleTime instance should be created when a new TimeRE object
        # is created.
        _strptime._locale_cache.locale_time = _strptime.LocaleTime(lang="Ni")
        locale_time_id = id(_strptime._locale_cache.locale_time)
        locale_time_lang = _strptime._locale_cache.locale_time.lang
        _strptime.strptime("10", "%d")
        self.failIfEqual(locale_time_id,
                         id(_strptime._locale_cache.locale_time))
        self.failIfEqual(locale_time_lang,
                         _strptime._locale_cache.locale_time.lang)



def test_main():
    test_support.run_unittest(
        getlang_Tests,
        LocaleTime_Tests,
        TimeRETests,
        StrptimeTests,
        Strptime12AMPMTests,
        JulianTests,
        CalculationTests,
        CacheTests
    )


if __name__ == '__main__':
    test_main()
