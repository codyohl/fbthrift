from __future__ import absolute_import, division, print_function, unicode_literals

import unittest

from OptionalRequiredTest.ttypes import Tricky1, Tricky2, Tricky3
from thrift.protocol.TBinaryProtocol import TBinaryProtocol
from thrift.protocol.TProtocol import TProtocolException
from thrift.transport.TTransport import TMemoryBuffer


class TestOptionalRequired(unittest.TestCase):
    def testSetDefault(self):
        w = Tricky1()
        r = Tricky1()
        w.im_default = 10
        write_to_read(w, r)
        self.assertEquals(10, r.im_default)

    def testSetOptional(self):
        w = Tricky2()
        r = Tricky2()
        w.im_optional = 10
        write_to_read(w, r)
        self.assertEquals(10, r.im_optional)

    def testSetRequired(self):
        w = Tricky3()
        r = Tricky3()
        w.im_required = 10
        write_to_read(w, r)
        self.assertEquals(10, r.im_required)

    def testSetDefaultNull(self):
        w = Tricky1()
        r = Tricky1()
        w.im_default = None
        write_to_read(w, r)
        self.assertEquals(None, r.im_default)

    def testSetOptionalNull(self):
        w = Tricky2()
        r = Tricky2()
        w.im_optional = None
        write_to_read(w, r)
        self.assertEquals(None, r.im_optional)

    def testSetRequiredNull(self):
        w = Tricky3()
        r = Tricky3()
        w.im_required = None
        with self.assertRaises(TProtocolException):
            write_to_read(w, r)

    def testSetDefaultDontSet(self):
        w = Tricky1()
        r = Tricky1()
        write_to_read(w, r)
        self.assertEquals(None, r.im_default)

    def testSetOptionalDontSet(self):
        w = Tricky2()
        r = Tricky2()
        write_to_read(w, r)
        self.assertEquals(None, r.im_optional)

    def testSetRequiredDontSet(self):
        w = Tricky3()
        r = Tricky3()
        with self.assertRaises(TProtocolException):
            write_to_read(w, r)

    def testMixDefaultAndOptional(self):
        w = Tricky1()
        r = Tricky2()

        w.im_default = 0
        r.im_optional = 10

        write_to_read(w, r)
        self.assertEquals(0, r.im_optional)
        self.assertEquals(0, w.im_default)

        write_to_read(r, w)
        self.assertEquals(0, r.im_optional)
        self.assertEquals(0, w.im_default)

    def testMixDefaultAndRequired(self):
        w = Tricky1()
        r = Tricky3()

        w.im_default = 0
        r.im_required = 10

        write_to_read(w, r)
        self.assertEquals(0, r.im_required)
        self.assertEquals(0, w.im_default)

        write_to_read(r, w)
        self.assertEquals(0, r.im_required)
        self.assertEquals(0, w.im_default)


def write_to_read(write_struct, read_struct):
    write_buffer = TMemoryBuffer()
    write_protocol = TBinaryProtocol(write_buffer)
    write_struct.write(write_protocol)

    # The implementation of TMemoryBuffer is slightly different from C++
    # the read/write buffer is not shared, thus we have to create another
    # TMemoryBuffer
    read_buffer = TMemoryBuffer(write_buffer.getvalue())
    read_protocol = TBinaryProtocol(read_buffer)
    read_struct.read(read_protocol)


if __name__ == "__main__":
    unittest.main()
