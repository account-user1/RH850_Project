import unittest
from test import test_support

import posixpath, os

class PosixPathTest(unittest.TestCase):

    def assertIs(self, a, b):
        self.assert_(a is b)

    def test_normcase(self):
        # Check that normcase() is idempotent
        p = "FoO/./BaR"
        p = posixpath.normcase(p)
        self.assertEqual(p, posixpath.normcase(p))

        self.assertRaises(TypeError, posixpath.normcase)

    def test_join(self):
        self.assertEqual(posixpath.join("/foo", "bar", "/bar", "baz"), "/bar/baz")
        self.assertEqual(posixpath.join("/foo", "bar", "baz"), "/foo/bar/baz")
        self.assertEqual(posixpath.join("/foo/", "bar/", "baz/"), "/foo/bar/baz/")

        self.assertRaises(TypeError, posixpath.join)

    def test_splitdrive(self):
        self.assertEqual(posixpath.splitdrive("/foo/bar"), ("", "/foo/bar"))

        self.assertRaises(TypeError, posixpath.splitdrive)

    def test_split(self):
        self.assertEqual(posixpath.split("/foo/bar"), ("/foo", "bar"))
        self.assertEqual(posixpath.split("/"), ("/", ""))
        self.assertEqual(posixpath.split("foo"), ("", "foo"))
        self.assertEqual(posixpath.split("////foo"), ("////", "foo"))
        self.assertEqual(posixpath.split("//foo//bar"), ("//foo", "bar"))

        self.assertRaises(TypeError, posixpath.split)

    def test_splitext(self):
        self.assertEqual(posixpath.splitext("foo.ext"), ("foo", ".ext"))
        self.assertEqual(posixpath.splitext("/foo/foo.ext"), ("/foo/foo", ".ext"))
        self.assertEqual(posixpath.splitext(".ext"), ("", ".ext"))
        self.assertEqual(posixpath.splitext("/foo.ext/foo"), ("/foo.ext/foo", ""))
        self.assertEqual(posixpath.splitext("foo.ext/"), ("foo.ext/", ""))
        self.assertEqual(posixpath.splitext(""), ("", ""))
        self.assertEqual(posixpath.splitext("foo.bar.ext"), ("foo.bar", ".ext"))

        self.assertRaises(TypeError, posixpath.splitext)

    def test_isabs(self):
        self.assertIs(posixpath.isabs(""), False)
        self.assertIs(posixpath.isabs("/"), True)
        self.assertIs(posixpath.isabs("/foo"), True)
        self.assertIs(posixpath.isabs("/foo/bar"), True)
        self.assertIs(posixpath.isabs("foo/bar"), False)

        self.assertRaises(TypeError, posixpath.isabs)

    def test_splitdrive(self):
        self.assertEqual(posixpath.splitdrive("/foo/bar"), ("", "/foo/bar"))

        self.assertRaises(TypeError, posixpath.splitdrive)

    def test_basename(self):
        self.assertEqual(posixpath.basename("/foo/bar"), "bar")
        self.assertEqual(posixpath.basename("/"), "")
        self.assertEqual(posixpath.basename("foo"), "foo")
        self.assertEqual(posixpath.basename("////foo"), "foo")
        self.assertEqual(posixpath.basename("//foo//bar"), "bar")

        self.assertRaises(TypeError, posixpath.basename)

    def test_dirname(self):
        self.assertEqual(posixpath.dirname("/foo/bar"), "/foo")
        self.assertEqual(posixpath.dirname("/"), "/")
        self.assertEqual(posixpath.dirname("foo"), "")
        self.assertEqual(posixpath.dirname("////foo"), "////")
        self.assertEqual(posixpath.dirname("//foo//bar"), "//foo")

        self.assertRaises(TypeError, posixpath.dirname)

    def test_commonprefix(self):
        self.assertEqual(
            posixpath.commonprefix([]),
            ""
        )
        self.assertEqual(
            posixpath.commonprefix(["/home/swenson/spam", "/home/swen/spam"]),
            "/home/swen"
        )
        self.assertEqual(
            posixpath.commonprefix(["/home/swen/spam", "/home/swen/eggs"]),
            "/home/swen/"
        )
        self.assertEqual(
            posixpath.commonprefix(["/home/swen/spam", "/home/swen/spam"]),
            "/home/swen/spam"
        )

    def test_getsize(self):
        f = open(test_support.TESTFN, "wb")
        try:
            f.write("foo")
            f.close()
            self.assertEqual(posixpath.getsize(test_support.TESTFN), 3)
        finally:
            if not f.closed:
                f.close()
            os.remove(test_support.TESTFN)

    def test_time(self):
        f = open(test_support.TESTFN, "wb")
        try:
            f.write("foo")
            f.close()
            f = open(test_support.TESTFN, "ab")
            f.write("bar")
            f.close()
            f = open(test_support.TESTFN, "rb")
            d = f.read()
            f.close()
            self.assertEqual(d, "foobar")

            self.assert_(
                posixpath.getctime(test_support.TESTFN) <=
                posixpath.getmtime(test_support.TESTFN)
            )
        finally:
            if not f.closed:
                f.close()
            os.remove(test_support.TESTFN)

    def test_islink(self):
        self.assertIs(posixpath.islink(test_support.TESTFN + "1"), False)
        f = open(test_support.TESTFN + "1", "wb")
        try:
            f.write("foo")
            f.close()
            self.assertIs(posixpath.islink(test_support.TESTFN + "1"), False)
            if hasattr(os, "symlink"):
                os.symlink(test_support.TESTFN + "1", test_support.TESTFN + "2")
                self.assertIs(posixpath.islink(test_support.TESTFN + "2"), True)
                os.remove(test_support.TESTFN + "1")
                self.assertIs(posixpath.islink(test_support.TESTFN + "2"), True)
                self.assertIs(posixpath.exists(test_support.TESTFN + "2"), False)
        finally:
            if not f.close():
                f.close()
            try:
                os.remove(test_support.TESTFN + "1")
            except os.error:
                pass
            try:
                os.remove(test_support.TESTFN + "2")
            except os.error:
                pass

        self.assertRaises(TypeError, posixpath.islink)

    def test_exists(self):
        self.assertIs(posixpath.exists(test_support.TESTFN), False)
        f = open(test_support.TESTFN, "wb")
        try:
            f.write("foo")
            f.close()
            self.assertIs(posixpath.exists(test_support.TESTFN), True)
        finally:
            if not f.close():
                f.close()
            try:
                os.remove(test_support.TESTFN)
            except os.error:
                pass

        self.assertRaises(TypeError, posixpath.exists)

    def test_isdir(self):
        self.assertIs(posixpath.isdir(test_support.TESTFN), False)
        f = open(test_support.TESTFN, "wb")
        try:
            f.write("foo")
            f.close()
            self.assertIs(posixpath.isdir(test_support.TESTFN), False)
            os.remove(test_support.TESTFN)
            os.mkdir(test_support.TESTFN)
            self.assertIs(posixpath.isdir(test_support.TESTFN), True)
            os.rmdir(test_support.TESTFN)
        finally:
            if not f.close():
                f.close()
            try:
                os.remove(test_support.TESTFN)
            except os.error:
                pass
            try:
                os.rmdir(test_support.TESTFN)
            except os.error:
                pass

        self.assertRaises(TypeError, posixpath.isdir)

    def test_isfile(self):
        self.assertIs(posixpath.isfile(test_support.TESTFN), False)
        f = open(test_support.TESTFN, "wb")
        try:
            f.write("foo")
            f.close()
            self.assertIs(posixpath.isfile(test_support.TESTFN), True)
            os.remove(test_support.TESTFN)
            os.mkdir(test_support.TESTFN)
            self.assertIs(posixpath.isfile(test_support.TESTFN), False)
            os.rmdir(test_support.TESTFN)
        finally:
            if not f.close():
                f.close()
            try:
                os.remove(test_support.TESTFN)
            except os.error:
                pass
            try:
                os.rmdir(test_support.TESTFN)
            except os.error:
                pass

        self.assertRaises(TypeError, posixpath.isdir)

        def test_samefile(self):
            f = open(test_support.TESTFN + "1", "wb")
            try:
                f.write("foo")
                f.close()
                self.assertIs(
                    posixpath.samefile(
                        test_support.TESTFN + "1",
                        test_support.TESTFN + "1"
                    ),
                    True
                )
                # If we don't have links, assume that os.stat doesn't return resonable
                # inode information and thus, that samefile() doesn't work
                if hasattr(os, "symlink"):
                    os.symlink(
                        test_support.TESTFN + "1",
                        test_support.TESTFN + "2"
                    )
                    self.assertIs(
                        posixpath.samefile(
                            test_support.TESTFN + "1",
                            test_support.TESTFN + "2"
                        ),
                        True
                    )
                    os.remove(test_support.TESTFN + "2")
                    f = open(test_support.TESTFN + "2", "wb")
                    f.write("bar")
                    f.close()
                    self.assertIs(
                        posixpath.samefile(
                            test_support.TESTFN + "1",
                            test_support.TESTFN + "2"
                        ),
                        False
                    )
            finally:
                if not f.close():
                    f.close()
                try:
                    os.remove(test_support.TESTFN + "1")
                except os.error:
                    pass
                try:
                    os.remove(test_support.TESTFN + "2")
                except os.error:
                    pass

            self.assertRaises(TypeError, posixpath.samefile)

    def test_samestat(self):
        f = open(test_support.TESTFN + "1", "wb")
        try:
            f.write("foo")
            f.close()
            self.assertIs(
                posixpath.samestat(
                    os.stat(test_support.TESTFN + "1"),
                    os.stat(test_support.TESTFN + "1")
                ),
                True
            )
            # If we don't have links, assume that os.stat() doesn't return resonable
            # inode information and thus, that samefile() doesn't work
            if hasattr(os, "symlink"):
                if hasattr(os, "symlink"):
                    os.symlink(test_support.TESTFN + "1", test_support.TESTFN + "2")
                    self.assertIs(
                        posixpath.samestat(
                            os.stat(test_support.TESTFN + "1"),
                            os.stat(test_support.TESTFN + "2")
                        ),
                        True
                    )
                    os.remove(test_support.TESTFN + "2")
                f = open(test_support.TESTFN + "2", "wb")
                f.write("bar")
                f.close()
                self.assertIs(
                    posixpath.samestat(
                        os.stat(test_support.TESTFN + "1"),
                        os.stat(test_support.TESTFN + "2")
                    ),
                    False
                )
        finally:
            if not f.close():
                f.close()
            try:
                os.remove(test_support.TESTFN + "1")
            except os.error:
                pass
            try:
                os.remove(test_support.TESTFN + "2")
            except os.error:
                pass

        self.assertRaises(TypeError, posixpath.samestat)

    def test_ismount(self):
        if os.name in ('mac',):
            return
        self.assertIs(posixpath.ismount("/"), True)

        self.assertRaises(TypeError, posixpath.ismount)

    def test_expanduser(self):
        self.assertEqual(posixpath.expanduser("foo"), "foo")
        try:
            import pwd
        except ImportError:
            pass
        else:
            self.assert_(isinstance(posixpath.expanduser("~/"), basestring))
            # if home directory == root directory, this test makes no sense
            if posixpath.expanduser("~") != '/':
                self.assertEqual(
                    posixpath.expanduser("~") + "/",
                    posixpath.expanduser("~/")
                )
            self.assert_(isinstance(posixpath.expanduser("~root/"), basestring))
            self.assert_(isinstance(posixpath.expanduser("~foo/"), basestring))

        self.assertRaises(TypeError, posixpath.expanduser)

    def test_expandvars(self):
        oldenv = os.environ.copy()
        try:
            os.environ.clear()
            os.environ["foo"] = "bar"
            os.environ["{foo"] = "baz1"
            os.environ["{foo}"] = "baz2"
            self.assertEqual(posixpath.expandvars("foo"), "foo")
            self.assertEqual(posixpath.expandvars("$foo bar"), "bar bar")
            self.assertEqual(posixpath.expandvars("${foo}bar"), "barbar")
            self.assertEqual(posixpath.expandvars("$[foo]bar"), "$[foo]bar")
            self.assertEqual(posixpath.expandvars("$bar bar"), "$bar bar")
            self.assertEqual(posixpath.expandvars("$?bar"), "$?bar")
            self.assertEqual(posixpath.expandvars("${foo}bar"), "barbar")
            self.assertEqual(posixpath.expandvars("$foo}bar"), "bar}bar")
            self.assertEqual(posixpath.expandvars("${foo"), "${foo")
            self.assertEqual(posixpath.expandvars("${{foo}}"), "baz1}")
        finally:
            os.environ.clear()
            os.environ.update(oldenv)

        self.assertRaises(TypeError, posixpath.expandvars)

    def test_normpath(self):
        self.assertEqual(posixpath.normpath(""), ".")
        self.assertEqual(posixpath.normpath("/"), "/")
        self.assertEqual(posixpath.normpath("//"), "//")
        self.assertEqual(posixpath.normpath("///"), "/")
        self.assertEqual(posixpath.normpath("///foo/.//bar//"), "/foo/bar")
        self.assertEqual(posixpath.normpath("///foo/.//bar//.//..//.//baz"), "/foo/baz")
        self.assertEqual(posixpath.normpath("///..//./foo/.//bar"), "/foo/bar")

        self.assertRaises(TypeError, posixpath.normpath)

    def test_abspath(self):
        self.assert_("foo" in posixpath.abspath("foo"))

        self.assertRaises(TypeError, posixpath.abspath)

    def test_realpath(self):
        self.assert_("foo" in posixpath.realpath("foo"))

        self.assertRaises(TypeError, posixpath.realpath)

def test_main():
    test_support.run_unittest(PosixPathTest)

if __name__=="__main__":
    test_main()
