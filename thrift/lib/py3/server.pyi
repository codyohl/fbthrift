#!/usr/bin/env python3

import ipaddress
import os
import pathlib
from enum import Enum
from typing import (
    Callable,
    ClassVar,
    Mapping,
    NamedTuple,
    Optional,
    TypeVar,
    Union,
    overload,
)

from thrift.py3.common import Headers, Priority

mT = TypeVar("mT", bound=Callable)
T = TypeVar("T")
IPAddress = Union[ipaddress.IPv4Address, ipaddress.IPv6Address]
Path = Union[str, bytes, os.PathLike]

class SocketAddress(NamedTuple):
    ip: Optional[IPAddress]
    port: Optional[int]
    path: Optional[pathlib.Path]

@overload
def get_context() -> RequestContext: ...
@overload
def get_context(default: T) -> Union[T, RequestContext]: ...
def pass_context(func: mT) -> mT: ...

class SSLPolicy(Enum):
    DISABLED: SSLPolicy = ...
    PERMITTED: SSLPolicy = ...
    REQUIRED: SSLPolicy = ...
    value: int

class AsyncProcessorFactory:
    pass

class ServiceInterface(AsyncProcessorFactory):
    annotations: ClassVar[Mapping[str, str]] = ...

hT = TypeVar("hT", bound=AsyncProcessorFactory)

def getServiceName(svc: hT) -> str: ...

class ThriftServer:
    def __init__(
        self,
        handler: hT,
        port: int = 0,
        ip: Optional[Union[IPAddress, str]] = None,
        path: Optional[Path] = None,
    ) -> None: ...
    async def serve(self) -> None: ...
    def get_ssl_policy(self) -> SSLPolicy: ...
    def set_ssl_policy(self, policy: SSLPolicy) -> None: ...
    def stop(self) -> None: ...
    async def get_address(self) -> SocketAddress: ...
    def get_active_requests(self) -> int: ...
    def get_max_requests(self) -> int: ...
    def set_max_requests(self, max_requests: int) -> None: ...
    def get_max_connections(self) -> int: ...
    def set_max_connections(self, max_connections: int) -> None: ...
    def get_listen_backlog(self) -> int: ...
    def set_listen_backlog(self, listen_backlog: int) -> None: ...
    def set_io_worker_threads(self, num: int) -> None: ...
    def get_io_worker_threads(self) -> int: ...
    def set_cpu_worker_threads(self, num: int) -> None: ...
    def get_cpu_worker_threads(self) -> int: ...
    def set_ssl_handshake_worker_threads(self, num: int) -> None: ...
    def get_ssl_handshake_worker_threads(self) -> int: ...
    def set_allow_plaintext_on_loopback(self, enabled: bool) -> None: ...
    def is_plaintext_allowed_on_loopback(self) -> bool: ...
    def set_idle_timeout(self, seconds: float) -> None: ...
    def get_idle_timeout(self) -> float: ...

class ReadHeaders(Headers): ...
class WriteHeaders(Headers): ...

class ConnectionContext:
    peer_address: SocketAddress
    is_tls: bool
    peer_common_name: str
    peer_certificate: bytes

class RequestContext:
    connection_context: ConnectionContext
    @property
    def priority(self) -> Priority: ...
    @property
    def read_headers(self) -> ReadHeaders: ...
    @property
    def write_headers(self) -> WriteHeaders: ...
    def set_header(self, key: str, value: str) -> None: ...
