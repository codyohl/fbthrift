/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::a::different::ns::AnEnum>::size;
folly::Range<::a::different::ns::AnEnum const*> const TEnumTraits<::a::different::ns::AnEnum>::values = folly::range(TEnumDataStorage<::a::different::ns::AnEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::a::different::ns::AnEnum>::names = folly::range(TEnumDataStorage<::a::different::ns::AnEnum>::names);

bool TEnumTraits<::a::different::ns::AnEnum>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::a::different::ns::AnEnum>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace a { namespace different { namespace ns {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _AnEnum_EnumMapFactory::ValuesToNamesMapType _AnEnum_VALUES_TO_NAMES = _AnEnum_EnumMapFactory::makeValuesToNamesMap();
FOLLY_POP_WARNING
#endif
}}} // a::different::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::a::different::ns::AStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::a::different::ns::AStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace a { namespace different { namespace ns {

const folly::StringPiece AStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<AStruct>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece AStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<AStruct>::name;
}


AStruct::AStruct(apache::thrift::FragileConstructor, ::std::int32_t FieldA__arg) :
    __fbthrift_field_FieldA(std::move(FieldA__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void AStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_FieldA = ::std::int32_t();
  __isset = {};
}

void AStruct::__fbthrift_clear_terse_fields() {
}

bool AStruct::__fbthrift_is_empty() const {
  return false;
}

bool AStruct::operator==(FOLLY_MAYBE_UNUSED const AStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.FieldA_ref() == rhs.FieldA_ref())) {
    return false;
  }
  return true;
}

bool AStruct::operator<(FOLLY_MAYBE_UNUSED const AStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.FieldA_ref() == rhs.FieldA_ref())) {
    return lhs.FieldA_ref() < rhs.FieldA_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED AStruct& a, FOLLY_MAYBE_UNUSED AStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_FieldA, b.__fbthrift_field_FieldA);
  swap(a.__isset, b.__isset);
}

template void AStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t AStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t AStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t AStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void AStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t AStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t AStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t AStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void AStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t AStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t AStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t AStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;


}}} // a::different::ns

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::a::different::ns::AStructB>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::a::different::ns::AStructB>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace a { namespace different { namespace ns {

const folly::StringPiece AStructB::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<AStructB>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece AStructB::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<AStructB>::name;
}

AStructB::AStructB(const AStructB&) = default;
AStructB& AStructB::operator=(const AStructB&) = default;
AStructB::AStructB(FOLLY_MAYBE_UNUSED AStructB&& other) noexcept :
    __fbthrift_field_FieldA(std::move(other.__fbthrift_field_FieldA)) {
}

AStructB& AStructB::operator=(FOLLY_MAYBE_UNUSED AStructB&& other) noexcept {
    this->__fbthrift_field_FieldA = std::move(other.__fbthrift_field_FieldA);
    return *this;
}


AStructB::AStructB(apache::thrift::FragileConstructor, ::std::shared_ptr<const ::a::different::ns::AStruct> FieldA__arg) :
    __fbthrift_field_FieldA(std::move(FieldA__arg)) {
}


void AStructB::__fbthrift_clear() {
  // clear all fields
  if (this->__fbthrift_field_FieldA) this->__fbthrift_field_FieldA = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<const ::a::different::ns::AStruct>>();
}

void AStructB::__fbthrift_clear_terse_fields() {
}

bool AStructB::__fbthrift_is_empty() const {
  return false;
}

bool AStructB::operator==(FOLLY_MAYBE_UNUSED const AStructB& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if ((!::apache::thrift::detail::pointer_equal(lhs.FieldA_ref(), rhs.FieldA_ref()))) {
    return false;
  }
  return true;
}

bool AStructB::operator<(FOLLY_MAYBE_UNUSED const AStructB& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if ((!::apache::thrift::detail::pointer_equal(lhs.FieldA_ref(), rhs.FieldA_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.FieldA_ref(), rhs.FieldA_ref());
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED AStructB& a, FOLLY_MAYBE_UNUSED AStructB& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_FieldA, b.__fbthrift_field_FieldA);
}

template void AStructB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t AStructB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t AStructB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t AStructB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void AStructB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t AStructB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t AStructB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t AStructB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void AStructB::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t AStructB::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t AStructB::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t AStructB::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        AStructB,
        ::apache::thrift::type_class::structure,
        ::a::different::ns::AStruct>,
    "inconsistent use of json option");

}}} // a::different::ns

namespace a { namespace different { namespace ns { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // a::different::ns
