
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport int64_t
from libcpp.memory cimport unique_ptr as __unique_ptr

from folly.iobuf cimport cIOBuf as __cIOBuf


cdef api int can_extract__includes__Included(object) except -1

cdef api __cIOBuf* extract__includes__Included(object) except NULL

cdef api object construct__includes__Included(__unique_ptr[__cIOBuf])

cdef api object init__includes__Included(object data)

