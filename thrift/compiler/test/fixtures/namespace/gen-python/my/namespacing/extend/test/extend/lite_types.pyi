#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions

import py3lite_module_root.my.namespacing.test.hsmodule.lite_types


class _fbthrift_ExtendTestService_check_args(_fbthrift_py3lite_types.Struct):
    struct1: _typing.Final[py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo] = ...

    def __init__(
        self, *,
        struct1: _typing.Optional[py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo]]]: ...

class _fbthrift_ExtendTestService_check_result(_fbthrift_py3lite_types.Struct):
    success: _typing.Final[bool]

    def __init__(
        self, *, success: _typing.Optional[bool] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bool,
        ]]]: ...


