#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


import facebook.thrift.annotation.hack.thrift_types


class MyStruct(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIntField",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyStringField",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyDataField",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(MyDataItem),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "myEnum",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "oneway",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "readonly",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            7,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "idempotent",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "floatSet",  # name
            lambda: _fbthrift_python_types.SetTypeInfo(_fbthrift_python_types.typeinfo_float),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            9,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "no_hack_codegen_field",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/MyStruct"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyStruct()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MyStruct, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyStruct, self)


class MyDataItem(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyDataItem"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/MyDataItem"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyDataItem()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MyDataItem, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyDataItem, self)


class MyUnion(metaclass=_fbthrift_python_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "myEnum",  # name
            lambda: _fbthrift_python_types.EnumTypeInfo(MyEnum),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "myStruct",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(MyStruct),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "myDataItem",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(MyDataItem),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "floatSet",  # name
            lambda: _fbthrift_python_types.SetTypeInfo(_fbthrift_python_types.typeinfo_float),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyUnion"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/MyUnion"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_MyUnion()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MyUnion, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyUnion, self)


class ReservedKeyword(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "reserved_field",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.ReservedKeyword"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/ReservedKeyword"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_ReservedKeyword()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.ReservedKeyword, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.ReservedKeyword, self)


class UnionToBeRenamed(metaclass=_fbthrift_python_types.UnionMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "reserved_field",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.UnionToBeRenamed"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/UnionToBeRenamed"

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_UnionToBeRenamed()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.UnionToBeRenamed, self)

    def _to_py_deprecated(self):
        import importlib
        py_deprecated_types = importlib.import_module("module.ttypes")
        import thrift.util.converter
        return thrift.util.converter.to_py_struct(py_deprecated_types.UnionToBeRenamed, self)

# This unfortunately has to be down here to prevent circular imports
import test.fixtures.basic.module.thrift_metadata

class MyEnum(_fbthrift_python_types.Enum, int):
    MyValue1 = 0
    MyValue2 = 1
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyEnum"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/MyEnum"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_enum_MyEnum()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        return py3_types.MyEnum(self.value)

    def _to_py_deprecated(self):
        return self.value
class HackEnum(_fbthrift_python_types.Enum, int):
    Value1 = 0
    Value2 = 1
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.HackEnum"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/basic/HackEnum"

    @staticmethod
    def __get_metadata__():
        return test.fixtures.basic.module.thrift_metadata.gen_metadata_enum_HackEnum()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.basic.module.types")
        return py3_types.HackEnum(self.value)

    def _to_py_deprecated(self):
        return self.value

_fbthrift_all_enums = [
    MyEnum,
    HackEnum,
]

def _fbthrift_metadata__struct_MyStruct():
    return test.fixtures.basic.module.thrift_metadata.gen_metadata_struct_MyStruct()
def _fbthrift_metadata__struct_MyDataItem():
    return test.fixtures.basic.module.thrift_metadata.gen_metadata_struct_MyDataItem()
def _fbthrift_metadata__struct_MyUnion():
    return test.fixtures.basic.module.thrift_metadata.gen_metadata_struct_MyUnion()
def _fbthrift_metadata__struct_ReservedKeyword():
    return test.fixtures.basic.module.thrift_metadata.gen_metadata_struct_ReservedKeyword()
def _fbthrift_metadata__struct_UnionToBeRenamed():
    return test.fixtures.basic.module.thrift_metadata.gen_metadata_struct_UnionToBeRenamed()

_fbthrift_all_structs = [
    MyStruct,
    MyDataItem,
    MyUnion,
    ReservedKeyword,
    UnionToBeRenamed,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)



class _fbthrift_FooService_simple_rpc_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_FooService_simple_rpc_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )




class _fbthrift_FB303Service_simple_rpc_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "int_parameter",  # name
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_FB303Service_simple_rpc_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            lambda: _fbthrift_python_types.StructTypeInfo(ReservedKeyword),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )




class _fbthrift_MyService_ping_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_ping_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_getRandomData_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_getRandomData_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_sink_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "sink",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_sink_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_putDataById_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "id",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "data",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_putDataById_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_hasDataById_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "id",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_hasDataById_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_bool,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_getDataById_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "id",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_getDataById_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_deleteDataById_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "id",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_deleteDataById_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_lobDataById_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "id",  # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
        (
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "data",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_invalid_return_for_hack_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_invalid_return_for_hack_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            lambda: _fbthrift_python_types.SetTypeInfo(_fbthrift_python_types.typeinfo_float),  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_MyService_rpc_skipped_codegen_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_MyService_rpc_skipped_codegen_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
    )




class _fbthrift_DbMixedStackArguments_getDataByKey0_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "key",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_DbMixedStackArguments_getDataByKey0_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_DbMixedStackArguments_getDataByKey1_args(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "key",  # name
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )


class _fbthrift_DbMixedStackArguments_getDataByKey1_result(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        (
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            _fbthrift_python_types.typeinfo_binary,  # typeinfo
            None,  # default value
            None,  # adapter info
        ),
    )



_fbthrift_python_types.fill_specs(
    _fbthrift_FooService_simple_rpc_args,
    _fbthrift_FooService_simple_rpc_result,
    
    _fbthrift_FB303Service_simple_rpc_args,
    _fbthrift_FB303Service_simple_rpc_result,
    
    _fbthrift_MyService_ping_args,
    _fbthrift_MyService_ping_result,
    _fbthrift_MyService_getRandomData_args,
    _fbthrift_MyService_getRandomData_result,
    _fbthrift_MyService_sink_args,
    _fbthrift_MyService_sink_result,
    _fbthrift_MyService_putDataById_args,
    _fbthrift_MyService_putDataById_result,
    _fbthrift_MyService_hasDataById_args,
    _fbthrift_MyService_hasDataById_result,
    _fbthrift_MyService_getDataById_args,
    _fbthrift_MyService_getDataById_result,
    _fbthrift_MyService_deleteDataById_args,
    _fbthrift_MyService_deleteDataById_result,
    _fbthrift_MyService_lobDataById_args,
    _fbthrift_MyService_invalid_return_for_hack_args,
    _fbthrift_MyService_invalid_return_for_hack_result,
    _fbthrift_MyService_rpc_skipped_codegen_args,
    _fbthrift_MyService_rpc_skipped_codegen_result,
    
    _fbthrift_DbMixedStackArguments_getDataByKey0_args,
    _fbthrift_DbMixedStackArguments_getDataByKey0_result,
    _fbthrift_DbMixedStackArguments_getDataByKey1_args,
    _fbthrift_DbMixedStackArguments_getDataByKey1_result,
    
)
