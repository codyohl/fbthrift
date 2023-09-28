// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package patch // [[[ program thrift source path ]]]

import (
    standard "thrift/lib/thrift/standard"
    id "thrift/lib/thrift/id"
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

var _ = standard.GoUnusedProtection__
var _ = id.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

var structNames = []string{
    "patch.GeneratePatch",
    "patch.AssignOnlyPatch",
    "patch.BoolPatch",
    "patch.BytePatch",
    "patch.I16Patch",
    "patch.I32Patch",
    "patch.I64Patch",
    "patch.FloatPatch",
    "patch.DoublePatch",
    "patch.StringPatch",
    "patch.BinaryPatch",
}

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("patch.GeneratePatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.AssignOnlyPatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.BoolPatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(9).
    SetName("invert").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.BytePatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BYTE_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("add").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BYTE_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.I16Patch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I16_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("add").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I16_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.I32Patch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("add").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.I64Patch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("add").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.FloatPatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_FLOAT_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("add").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_FLOAT_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.DoublePatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("add").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.StringPatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("prepend").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(9).
    SetName("append").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
    ),
    ),
        },
    ),
    metadata.NewThriftStruct().
    SetName("patch.BinaryPatch").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("assign").
    SetIsOptional(true).
    SetType(
        metadata.NewThriftType().
    SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("standard.ByteBuffer").
            SetUnderlyingType(
              metadata.NewThriftType().
                  SetTPrimitive(
                      metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE.Ptr(),
                  )            ),
    ),
    ),
            metadata.NewThriftField().
    SetId(2).
    SetName("clear").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
    ),
    ),
            metadata.NewThriftField().
    SetId(8).
    SetName("prepend").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("standard.ByteBuffer").
            SetUnderlyingType(
              metadata.NewThriftType().
                  SetTPrimitive(
                      metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE.Ptr(),
                  )            ),
    ),
    ),
            metadata.NewThriftField().
    SetId(9).
    SetName("append").
    SetIsOptional(false).
    SetType(
        metadata.NewThriftType().
    SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("standard.ByteBuffer").
            SetUnderlyingType(
              metadata.NewThriftType().
                  SetTPrimitive(
                      metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE.Ptr(),
                  )            ),
    ),
    ),
        },
    ),
}

var exceptionNames = []string{
}

var exceptionMetadatas = []*metadata.ThriftException{
}

var enumNames = []string{
    "patch.PatchOp",
}

var enumMetadatas = []*metadata.ThriftEnum{
    metadata.NewThriftEnum().
    SetName("patch.PatchOp").
    SetElements(
        map[int32]string{
            0: "Unspecified",
            1: "Assign",
            2: "Clear",
            3: "PatchPrior",
            4: "EnsureUnion",
            5: "EnsureStruct",
            6: "PatchAfter",
            7: "Remove",
            8: "Add",
            9: "Put",
        },
    ),
}

var serviceNames = []string{
}

var serviceMetadatas = []*metadata.ThriftService{
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    includedEnumsMetadatas := []map[string]*metadata.ThriftEnum{
        GetEnumsMetadata(),
        standard.GetEnumsMetadata(),
        id.GetEnumsMetadata(),
    }
    includedStructsMetadatas := []map[string]*metadata.ThriftStruct{
        GetStructsMetadata(),
        standard.GetStructsMetadata(),
        id.GetStructsMetadata(),
    }
    includedExceptionsMetadatas := []map[string]*metadata.ThriftException{
        GetExceptionsMetadata(),
        standard.GetExceptionsMetadata(),
        id.GetExceptionsMetadata(),
    }
    includedServicesMetadatas := []map[string]*metadata.ThriftService{
        GetServicesMetadata(),
        standard.GetServicesMetadata(),
        id.GetServicesMetadata(),
    }

	allEnums := make(map[string]*metadata.ThriftEnum)
	allStructs := make(map[string]*metadata.ThriftStruct)
	allExceptions := make(map[string]*metadata.ThriftException)
    allServices := make(map[string]*metadata.ThriftService)

    for _, includedEnumsMetadata := range includedEnumsMetadatas {
        for enumName, thriftEnum := range includedEnumsMetadata {
            allEnums[enumName] = thriftEnum
        }
    }
    for _, includedStructsMetadata := range includedStructsMetadatas {
        for structName, thriftStruct := range includedStructsMetadata {
            allStructs[structName] = thriftStruct
        }
    }
    for _, includedExceptionsMetadata := range includedExceptionsMetadatas {
        for exceptionName, thriftException := range includedExceptionsMetadata {
            allExceptions[exceptionName] = thriftException
        }
    }
    for _, includedServicesMetadata := range includedServicesMetadatas {
        for serviceName, thriftService := range includedServicesMetadata {
            allServices[serviceName] = thriftService
        }
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnums).
        SetStructs(allStructs).
        SetExceptions(allExceptions).
        SetServices(allServices)
}

// GetStructsMetadata returns Thrift metadata for enums in the current package.
func GetEnumsMetadata() map[string]*metadata.ThriftEnum {
    result := make(map[string]*metadata.ThriftEnum)
    for i, enumName := range enumNames {
        result[enumName] = enumMetadatas[i]
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for structs in the current package.
func GetStructsMetadata() map[string]*metadata.ThriftStruct {
    result := make(map[string]*metadata.ThriftStruct)
    for i, structName := range structNames {
        result[structName] = structMetadatas[i]
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for exceptions in the current package.
func GetExceptionsMetadata() map[string]*metadata.ThriftException {
    result := make(map[string]*metadata.ThriftException)
    for i, exceptionName := range exceptionNames {
        result[exceptionName] = exceptionMetadatas[i]
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for services in the current package.
func GetServicesMetadata() map[string]*metadata.ThriftService {
    result := make(map[string]*metadata.ThriftService)
    for i, serviceName := range serviceNames {
        result[serviceName] = serviceMetadatas[i]
    }
    return result
}
