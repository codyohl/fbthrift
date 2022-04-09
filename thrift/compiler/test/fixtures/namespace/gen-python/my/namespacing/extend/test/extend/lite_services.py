#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import py3lite_module_root.apache.thrift.metadata.lite_types as _fbthrift_metadata
from thrift.python.serializer import serialize_iobuf, deserialize, Protocol
from thrift.python.server import ServiceInterface, oneway, PythonUserException

import py3lite_module_root.my.namespacing.extend.test.extend.lite_types
import py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata
import py3lite_module_root.my.namespacing.test.hsmodule.lite_services
import py3lite_module_root.my.namespacing.test.hsmodule.lite_types

class ExtendTestServiceInterface(
    py3lite_module_root.my.namespacing.test.hsmodule.lite_services.HsTestServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"ExtendTestService"

    # pyre-ignore[3]: it can return anything
    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., _typing.Any]]:
        functionTable = {
            b"check": self._fbthrift__handler_check,
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "extend.ExtendTestService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata.gen_metadata_service_ExtendTestService()



    async def check(
            self,
            struct1: py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo
        ) -> bool:
        raise NotImplementedError("async def check is not implemented")

    async def _fbthrift__handler_check(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(py3lite_module_root.my.namespacing.extend.test.extend.lite_types._fbthrift_ExtendTestService_check_args, args, protocol)
        value = await self.check(args_struct.struct1,)
        return_struct = py3lite_module_root.my.namespacing.extend.test.extend.lite_types._fbthrift_ExtendTestService_check_result(success=value)

        return serialize_iobuf(return_struct, protocol)

