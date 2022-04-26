// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	thrift0 "thrift/annotation/thrift"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = thrift0.GoUnusedProtection__
type MyService interface {
  // Parameters:
  //  - U
  Query(u *MyUnion) (_r *MyStruct, err error)
}

type MyServiceClientInterface interface {
  thrift.ClientInterface
  // Parameters:
  //  - U
  Query(u *MyUnion) (_r *MyStruct, err error)
}

type MyServiceClient struct {
  MyServiceClientInterface
  CC thrift.ClientConn
}

func(client *MyServiceClient) Open() error {
  return client.CC.Open()
}

func(client *MyServiceClient) Close() error {
  return client.CC.Close()
}

func(client *MyServiceClient) IsOpen() bool {
  return client.CC.IsOpen()
}

func NewMyServiceClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *MyServiceClient {
  return &MyServiceClient{ CC: thrift.NewClientConn(t, f) }
}

func NewMyServiceClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServiceClient {
  return &MyServiceClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

func NewMyServiceClientProtocol(prot thrift.Protocol) *MyServiceClient {
  return NewMyServiceClient(prot.Transport(), prot, prot)
}

// Parameters:
//  - U
func (p *MyServiceClient) Query(u *MyUnion) (_r *MyStruct, err error) {
  args := MyServiceQueryArgs{
    U : u,
  }
  err = p.CC.SendMsg("query", &args, thrift.CALL)
  if err != nil { return }
  return p.recvQuery()
}


func (p *MyServiceClient) recvQuery() (value *MyStruct, err error) {
  var __result MyServiceQueryResult
  err = p.CC.RecvMsg("query", &__result)
  if err != nil { return }

  return __result.GetSuccess(), nil
}


type MyServiceThreadsafeClient struct {
  MyServiceClientInterface
  CC thrift.ClientConn
  Mu sync.Mutex
}

func(client *MyServiceThreadsafeClient) Open() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Open()
}

func(client *MyServiceThreadsafeClient) Close() error {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.Close()
}

func(client *MyServiceThreadsafeClient) IsOpen() bool {
  client.Mu.Lock()
  defer client.Mu.Unlock()
  return client.CC.IsOpen()
}

func NewMyServiceThreadsafeClientFactory(t thrift.Transport, f thrift.ProtocolFactory) *MyServiceThreadsafeClient {
  return &MyServiceThreadsafeClient{ CC: thrift.NewClientConn(t, f) }
}

func NewMyServiceThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *MyServiceThreadsafeClient {
  return &MyServiceThreadsafeClient{ CC: thrift.NewClientConnWithProtocols(t, iprot, oprot) }
}

func NewMyServiceThreadsafeClientProtocol(prot thrift.Protocol) *MyServiceThreadsafeClient {
  return NewMyServiceThreadsafeClient(prot.Transport(), prot, prot)
}

// Parameters:
//  - U
func (p *MyServiceThreadsafeClient) Query(u *MyUnion) (_r *MyStruct, err error) {
  p.Mu.Lock()
  defer p.Mu.Unlock()
  args := MyServiceQueryArgs{
    U : u,
  }
  err = p.CC.SendMsg("query", &args, thrift.CALL)
  if err != nil { return }
  return p.recvQuery()
}


func (p *MyServiceThreadsafeClient) recvQuery() (value *MyStruct, err error) {
  var __result MyServiceQueryResult
  err = p.CC.RecvMsg("query", &__result)
  if err != nil { return }

  return __result.GetSuccess(), nil
}


type MyServiceChannelClient struct {
  RequestChannel thrift.RequestChannel
}

func (c *MyServiceChannelClient) Close() error {
  return c.RequestChannel.Close()
}

func (c *MyServiceChannelClient) IsOpen() bool {
  return c.RequestChannel.IsOpen()
}

func (c *MyServiceChannelClient) Open() error {
  return c.RequestChannel.Open()
}

func NewMyServiceChannelClient(channel thrift.RequestChannel) *MyServiceChannelClient {
  return &MyServiceChannelClient{RequestChannel: channel}
}

// Parameters:
//  - U
func (p *MyServiceChannelClient) Query(ctx context.Context, u *MyUnion) (_r *MyStruct, err error) {
  args := MyServiceQueryArgs{
    U : u,
  }
  var __result MyServiceQueryResult
  err = p.RequestChannel.Call(ctx, "query", &args, &__result)
  if err != nil { return }

  return __result.GetSuccess(), nil
}


type MyServiceProcessor struct {
  processorMap map[string]thrift.ProcessorFunction
  functionServiceMap map[string]string
  handler MyService
}

func (p *MyServiceProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunction) {
  p.processorMap[key] = processor
}

func (p *MyServiceProcessor) AddToFunctionServiceMap(key, service string) {
  p.functionServiceMap[key] = service
}

func (p *MyServiceProcessor) GetProcessorFunction(key string) (processor thrift.ProcessorFunction, err error) {
  if processor, ok := p.processorMap[key]; ok {
    return processor, nil
  }
  return nil, nil // generic error message will be sent
}

func (p *MyServiceProcessor) ProcessorMap() map[string]thrift.ProcessorFunction {
  return p.processorMap
}

func (p *MyServiceProcessor) FunctionServiceMap() map[string]string {
  return p.functionServiceMap
}

func NewMyServiceProcessor(handler MyService) *MyServiceProcessor {
  self1 := &MyServiceProcessor{handler:handler, processorMap:make(map[string]thrift.ProcessorFunction), functionServiceMap:make(map[string]string)}
  self1.processorMap["query"] = &myServiceProcessorQuery{handler:handler}
  self1.functionServiceMap["query"] = "MyService"
  return self1
}

type myServiceProcessorQuery struct {
  handler MyService
}

func (p *MyServiceQueryResult) Exception() thrift.WritableException {
  if p == nil { return nil }
  return nil
}

func (p *myServiceProcessorQuery) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
  args := MyServiceQueryArgs{}
  if err := args.Read(iprot); err != nil {
    return nil, err
  }
  iprot.ReadMessageEnd()
  return &args, nil
}

func (p *myServiceProcessorQuery) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
  var err2 error
  messageType := thrift.REPLY
  switch result.(type) {
  case thrift.ApplicationException:
    messageType = thrift.EXCEPTION
  }
  if err2 = oprot.WriteMessageBegin("query", messageType, seqId); err2 != nil {
    err = err2
  }
  if err2 = result.Write(oprot); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
    err = err2
  }
  if err2 = oprot.Flush(); err == nil && err2 != nil {
    err = err2
  }
  return err
}

func (p *myServiceProcessorQuery) Run(argStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
  args := argStruct.(*MyServiceQueryArgs)
  var __result MyServiceQueryResult
  if retval, err := p.handler.Query(args.U); err != nil {
    switch err.(type) {
    default:
      x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing query: " + err.Error(), err)
      return x, x
    }
  } else {
    __result.Success = retval
  }
  return &__result, nil
}


// HELPER FUNCTIONS AND STRUCTURES

// Attributes:
//  - U
type MyServiceQueryArgs struct {
  thrift.IRequest
  U *MyUnion `thrift:"u,1" db:"u" json:"u"`
}

func NewMyServiceQueryArgs() *MyServiceQueryArgs {
  return &MyServiceQueryArgs{}
}

var MyServiceQueryArgs_U_DEFAULT *MyUnion
func (p *MyServiceQueryArgs) GetU() *MyUnion {
  if !p.IsSetU() {
    return MyServiceQueryArgs_U_DEFAULT
  }
return p.U
}
func (p *MyServiceQueryArgs) IsSetU() bool {
  return p != nil && p.U != nil
}

type MyServiceQueryArgsBuilder struct {
  obj *MyServiceQueryArgs
}

func NewMyServiceQueryArgsBuilder() *MyServiceQueryArgsBuilder{
  return &MyServiceQueryArgsBuilder{
    obj: NewMyServiceQueryArgs(),
  }
}

func (p MyServiceQueryArgsBuilder) Emit() *MyServiceQueryArgs{
  return &MyServiceQueryArgs{
    U: p.obj.U,
  }
}

func (m *MyServiceQueryArgsBuilder) U(u *MyUnion) *MyServiceQueryArgsBuilder {
  m.obj.U = u
  return m
}

func (m *MyServiceQueryArgs) SetU(u *MyUnion) *MyServiceQueryArgs {
  m.U = u
  return m
}

func (p *MyServiceQueryArgs) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyServiceQueryArgs)  ReadField1(iprot thrift.Protocol) error {
  p.U = NewMyUnion()
  if err := p.U.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.U), err)
  }
  return nil
}

func (p *MyServiceQueryArgs) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("query_args"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyServiceQueryArgs) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("u", thrift.STRUCT, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:u: ", p), err) }
  if err := p.U.Write(oprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.U), err)
  }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:u: ", p), err) }
  return err
}

func (p *MyServiceQueryArgs) String() string {
  if p == nil {
    return "<nil>"
  }

  var uVal string
  if p.U == nil {
    uVal = "<nil>"
  } else {
    uVal = fmt.Sprintf("%v", p.U)
  }
  return fmt.Sprintf("MyServiceQueryArgs({U:%s})", uVal)
}

// Attributes:
//  - Success
type MyServiceQueryResult struct {
  thrift.IResponse
  Success *MyStruct `thrift:"success,0,optional" db:"success" json:"success,omitempty"`
}

func NewMyServiceQueryResult() *MyServiceQueryResult {
  return &MyServiceQueryResult{}
}

var MyServiceQueryResult_Success_DEFAULT *MyStruct
func (p *MyServiceQueryResult) GetSuccess() *MyStruct {
  if !p.IsSetSuccess() {
    return MyServiceQueryResult_Success_DEFAULT
  }
return p.Success
}
func (p *MyServiceQueryResult) IsSetSuccess() bool {
  return p != nil && p.Success != nil
}

type MyServiceQueryResultBuilder struct {
  obj *MyServiceQueryResult
}

func NewMyServiceQueryResultBuilder() *MyServiceQueryResultBuilder{
  return &MyServiceQueryResultBuilder{
    obj: NewMyServiceQueryResult(),
  }
}

func (p MyServiceQueryResultBuilder) Emit() *MyServiceQueryResult{
  return &MyServiceQueryResult{
    Success: p.obj.Success,
  }
}

func (m *MyServiceQueryResultBuilder) Success(success *MyStruct) *MyServiceQueryResultBuilder {
  m.obj.Success = success
  return m
}

func (m *MyServiceQueryResult) SetSuccess(success *MyStruct) *MyServiceQueryResult {
  m.Success = success
  return m
}

func (p *MyServiceQueryResult) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 0:
      if err := p.ReadField0(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *MyServiceQueryResult)  ReadField0(iprot thrift.Protocol) error {
  p.Success = NewMyStruct()
  if err := p.Success.Read(iprot); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T error reading struct: ", p.Success), err)
  }
  return nil
}

func (p *MyServiceQueryResult) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("query_result"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField0(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *MyServiceQueryResult) writeField0(oprot thrift.Protocol) (err error) {
  if p.IsSetSuccess() {
    if err := oprot.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 0:success: ", p), err) }
    if err := p.Success.Write(oprot); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T error writing struct: ", p.Success), err)
    }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 0:success: ", p), err) }
  }
  return err
}

func (p *MyServiceQueryResult) String() string {
  if p == nil {
    return "<nil>"
  }

  var successVal string
  if p.Success == nil {
    successVal = "<nil>"
  } else {
    successVal = fmt.Sprintf("%v", p.Success)
  }
  return fmt.Sprintf("MyServiceQueryResult({Success:%s})", successVal)
}


