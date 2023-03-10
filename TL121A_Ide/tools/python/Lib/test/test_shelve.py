import os
import unittest
import shelve
import glob
from test import test_support

class TestCase(unittest.TestCase):

    fn = "shelftemp" + os.extsep + "db"

    def test_ascii_file_shelf(self):
        try:
            s = shelve.open(self.fn, binary=False)
            s['key1'] = (1,2,3,4)
            self.assertEqual(s['key1'], (1,2,3,4))
            s.close()
        finally:
            for f in glob.glob(self.fn+"*"):
                os.unlink(f)

    def test_binary_file_shelf(self):
        try:
            s = shelve.open(self.fn, binary=True)
            s['key1'] = (1,2,3,4)
            self.assertEqual(s['key1'], (1,2,3,4))
            s.close()
        finally:
            for f in glob.glob(self.fn+"*"):
                os.unlink(f)

    def test_proto2_file_shelf(self):
        try:
            s = shelve.open(self.fn, protocol=2)
            s['key1'] = (1,2,3,4)
            self.assertEqual(s['key1'], (1,2,3,4))
            s.close()
        finally:
            for f in glob.glob(self.fn+"*"):
                os.unlink(f)

    def test_in_memory_shelf(self):
        d1 = {}
        s = shelve.Shelf(d1, binary=False)
        s['key1'] = (1,2,3,4)
        self.assertEqual(s['key1'], (1,2,3,4))
        s.close()
        d2 = {}
        s = shelve.Shelf(d2, binary=True)
        s['key1'] = (1,2,3,4)
        self.assertEqual(s['key1'], (1,2,3,4))
        s.close()

        self.assertEqual(len(d1), 1)
        self.assertNotEqual(d1, d2)

    def test_mutable_entry(self):
        d1 = {}
        s = shelve.Shelf(d1, protocol=2, writeback=False)
        s['key1'] = [1,2,3,4]
        self.assertEqual(s['key1'], [1,2,3,4])
        s['key1'].append(5)
        self.assertEqual(s['key1'], [1,2,3,4])
        s.close()

        d2 = {}
        s = shelve.Shelf(d2, protocol=2, writeback=True)
        s['key1'] = [1,2,3,4]
        self.assertEqual(s['key1'], [1,2,3,4])
        s['key1'].append(5)
        self.assertEqual(s['key1'], [1,2,3,4,5])
        s.close()

        self.assertEqual(len(d1), 1)
        self.assertEqual(len(d2), 1)


from test_userdict import TestMappingProtocol

class TestShelveBase(TestMappingProtocol):
    fn = "shelftemp.db"
    counter = 0
    def __init__(self, *args, **kw):
        self._db = []
        TestMappingProtocol.__init__(self, *args, **kw)
    _tested_class = shelve.Shelf
    def _reference(self):
        return {"key1":"value1", "key2":2, "key3":(1,2,3)}
    def _empty_mapping(self):
        if self._in_mem:
            x= shelve.Shelf({}, **self._args)
        else:
            self.counter+=1
            x= shelve.open(self.fn+str(self.counter), **self._args)
        self._db.append(x)
        return x
    def tearDown(self):
        for db in self._db:
            db.close()
        self._db = []
        if not self._in_mem:
            for f in glob.glob(self.fn+"*"):
                os.unlink(f)

class TestAsciiFileShelve(TestShelveBase):
    _args={'binary':False}
    _in_mem = False
class TestBinaryFileShelve(TestShelveBase):
    _args={'binary':True}
    _in_mem = False
class TestProto2FileShelve(TestShelveBase):
    _args={'protocol':2}
    _in_mem = False
class TestAsciiMemShelve(TestShelveBase):
    _args={'binary':False}
    _in_mem = True
class TestBinaryMemShelve(TestShelveBase):
    _args={'binary':True}
    _in_mem = True
class TestProto2MemShelve(TestShelveBase):
    _args={'protocol':2}
    _in_mem = True

def test_main():
    test_support.run_unittest(
        TestAsciiFileShelve,
        TestBinaryFileShelve,
        TestProto2FileShelve,
        TestAsciiMemShelve,
        TestBinaryMemShelve,
        TestProto2MemShelve,
        TestCase
    )

if __name__ == "__main__":
    test_main()
