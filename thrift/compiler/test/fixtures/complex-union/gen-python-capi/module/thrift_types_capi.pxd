
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


cdef api int can_extract__module__ComplexUnion(object) except -1

cdef api __cIOBuf* extract__module__ComplexUnion(object) except NULL

cdef api object construct__module__ComplexUnion(__unique_ptr[__cIOBuf])

cdef api object init__module__ComplexUnion(object data)

cdef api int can_extract__module__ListUnion(object) except -1

cdef api __cIOBuf* extract__module__ListUnion(object) except NULL

cdef api object construct__module__ListUnion(__unique_ptr[__cIOBuf])

cdef api object init__module__ListUnion(object data)

cdef api int can_extract__module__DataUnion(object) except -1

cdef api __cIOBuf* extract__module__DataUnion(object) except NULL

cdef api object construct__module__DataUnion(__unique_ptr[__cIOBuf])

cdef api object init__module__DataUnion(object data)

cdef api int can_extract__module__Val(object) except -1

cdef api __cIOBuf* extract__module__Val(object) except NULL

cdef api object construct__module__Val(__unique_ptr[__cIOBuf])

cdef api object init__module__Val(object data)

cdef api int can_extract__module__ValUnion(object) except -1

cdef api __cIOBuf* extract__module__ValUnion(object) except NULL

cdef api object construct__module__ValUnion(__unique_ptr[__cIOBuf])

cdef api object init__module__ValUnion(object data)

cdef api int can_extract__module__VirtualComplexUnion(object) except -1

cdef api __cIOBuf* extract__module__VirtualComplexUnion(object) except NULL

cdef api object construct__module__VirtualComplexUnion(__unique_ptr[__cIOBuf])

cdef api object init__module__VirtualComplexUnion(object data)

cdef api int can_extract__module__NonCopyableStruct(object) except -1

cdef api __cIOBuf* extract__module__NonCopyableStruct(object) except NULL

cdef api object construct__module__NonCopyableStruct(__unique_ptr[__cIOBuf])

cdef api object init__module__NonCopyableStruct(object data)

cdef api int can_extract__module__NonCopyableUnion(object) except -1

cdef api __cIOBuf* extract__module__NonCopyableUnion(object) except NULL

cdef api object construct__module__NonCopyableUnion(__unique_ptr[__cIOBuf])

cdef api object init__module__NonCopyableUnion(object data)

