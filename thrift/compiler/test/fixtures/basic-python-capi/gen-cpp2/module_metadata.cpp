/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-python-capi/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/basic-python-capi/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::test::fixtures::basic-python-capi::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("module.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "module.MyEnum";
  using EnumTraits = TEnumTraits<::test::fixtures::basic-python-capi::MyEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::basic-python-capi::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name() = "module.MyStruct";
  module_MyStruct.is_union() = false;
  static const auto* const
  module_MyStruct_fields = new std::array<EncodedThriftField, 8>{{
    {1, "MyIntField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "MyStringField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "MyDataField", false, std::make_unique<Typedef>("module.MyDataItem", std::make_unique<Struct<::test::fixtures::basic-python-capi::MyDataItem>>("module.MyDataItem"), std::vector<ThriftConstStruct>{}), std::vector<ThriftConstStruct>{}},
    {4, "myEnum", false, std::make_unique<Enum<::test::fixtures::basic-python-capi::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {5, "oneway", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{}},
    {6, "floatList", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE)), std::vector<ThriftConstStruct>{}},
    {7, "strMap", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
    {8, "floatSet", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::basic-python-capi::MyDataItem>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyDataItem", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyDataItem = res.first->second;
  module_MyDataItem.name() = "module.MyDataItem";
  module_MyDataItem.is_union() = false;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::basic-python-capi::TransitiveDoubler>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.TransitiveDoubler", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_TransitiveDoubler = res.first->second;
  module_TransitiveDoubler.name() = "module.TransitiveDoubler";
  module_TransitiveDoubler.is_union() = false;
  module_TransitiveDoubler.structured_annotations()->push_back(*cvStruct("cpp.Adapter", {{"name", cvString("::thrift::test::lib::StructDoubler")}}).cv_struct_ref());
  module_TransitiveDoubler.structured_annotations()->push_back(*cvStruct("scope.Transitive", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::basic-python-capi::detail::DoubledPair>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.DoubledPair", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_DoubledPair = res.first->second;
  module_DoubledPair.name() = "module.DoubledPair";
  module_DoubledPair.is_union() = false;
  static const auto* const
  module_DoubledPair_fields = new std::array<EncodedThriftField, 2>{{
    {1, "s", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "x", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_DoubledPair_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_DoubledPair.fields()->push_back(std::move(field));
  }
  module_DoubledPair.structured_annotations()->push_back(*cvStruct("module.TransitiveDoubler", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::basic-python-capi::StringPair>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StringPair", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StringPair = res.first->second;
  module_StringPair.name() = "module.StringPair";
  module_StringPair.is_union() = false;
  static const auto* const
  module_StringPair_fields = new std::array<EncodedThriftField, 2>{{
    {1, "normal", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "doubled", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{*cvStruct("cpp.Adapter", {{"name", cvString("::thrift::test::lib::StringDoubler")}}).cv_struct_ref(), }},
  }};
  for (const auto& f : *module_StringPair_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StringPair.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::basic-python-capi::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyUnion = res.first->second;
  module_MyUnion.name() = "module.MyUnion";
  module_MyUnion.is_union() = true;
  static const auto* const
  module_MyUnion_fields = new std::array<EncodedThriftField, 6>{{
    {1, "myEnum", false, std::make_unique<Enum<::test::fixtures::basic-python-capi::MyEnum>>("module.MyEnum"), std::vector<ThriftConstStruct>{}},
    {2, "myStruct", false, std::make_unique<Struct<::test::fixtures::basic-python-capi::MyStruct>>("module.MyStruct"), std::vector<ThriftConstStruct>{}},
    {3, "myDataItem", false, std::make_unique<Struct<::test::fixtures::basic-python-capi::MyDataItem>>("module.MyDataItem"), std::vector<ThriftConstStruct>{}},
    {4, "doubleSet", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE)), std::vector<ThriftConstStruct>{}},
    {5, "doubleList", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE)), std::vector<ThriftConstStruct>{}},
    {6, "strMap", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *module_MyUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_MyUnion.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache