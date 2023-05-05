// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package included // [[[ program thrift source path ]]]

import (
    "fmt"

    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)


// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type SomeMap = map[int32]string

func NewSomeMap() SomeMap {
  return make(map[int32]string)
}

func WriteSomeMap(item SomeMap, p thrift.Protocol) error {
  if err := p.WriteMapBegin(thrift.I32, thrift.STRING, len(item)); err != nil {
    return thrift.PrependError("error writing map begin: ", err)
}
for k, v := range item {
    {
        item := k
        if err := p.WriteI32(item); err != nil {
    return err
}
    }

    {
        item := v
        if err := p.WriteString(item); err != nil {
    return err
}
    }
}
if err := p.WriteMapEnd(); err != nil {
    return thrift.PrependError("error writing map end: ", err)
}
  return nil
}

func ReadSomeMap(p thrift.Protocol) (SomeMap, error) {
  var decodeResult SomeMap
  decodeErr := func() error {
    _ /* keyType */, _ /* valueType */, size, err := p.ReadMapBegin()
if err != nil {
    return thrift.PrependError("error reading map begin: ", err)
}

mapResult := make(map[int32]string, size)
for i := 0; i < size; i++ {
    var key int32
    {
        result, err := p.ReadI32()
if err != nil {
    return err
}
        key = result
    }

    var value string
    {
        result, err := p.ReadString()
if err != nil {
    return err
}
        value = result
    }

    mapResult[key] = value
}

if err := p.ReadMapEnd(); err != nil {
    return thrift.PrependError("error reading map end: ", err)
}
result := mapResult
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}

type SomeListOfTypeMap = []SomeMap

func NewSomeListOfTypeMap() SomeListOfTypeMap {
  return make([]SomeMap)
}

func WriteSomeListOfTypeMap(item SomeListOfTypeMap, p thrift.Protocol) error {
  if err := p.WriteListBegin(thrift.MAP, len(item)); err != nil {
    return thrift.PrependError("error writing list begin: ", err)
}
for _, v := range item {
    {
        item := v
        err := WriteSomeMap(item, p)
if err != nil {
    return err
}
    }
}
if err := p.WriteListEnd(); err != nil {
    return thrift.PrependError("error writing list end: ", err)
}
  return nil
}

func ReadSomeListOfTypeMap(p thrift.Protocol) (SomeListOfTypeMap, error) {
  var decodeResult SomeListOfTypeMap
  decodeErr := func() error {
    _ /* elemType */, size, err := p.ReadListBegin()
if err != nil {
    return thrift.PrependError("error reading list begin: ", err)
}

listResult := make([]SomeMap, 0, size)
for i := 0; i < size; i++ {
    var elem SomeMap
    {
        result, err := ReadSomeMap(p)
if err != nil {
    return err
}
        elem = result
    }
    listResult = append(listResult, elem)
}

if err := p.ReadListEnd(); err != nil {
    return thrift.PrependError("error reading list end: ", err)
}
result := listResult
    decodeResult = result
    return nil
  }()
  return decodeResult, decodeErr
}
