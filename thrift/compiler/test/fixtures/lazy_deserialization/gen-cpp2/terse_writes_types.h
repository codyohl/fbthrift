/**
 * Autogenerated by Thrift for src/terse_writes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct field1;
struct field2;
struct field3;
struct field4;
struct field1;
struct field2;
struct field3;
struct field4;
struct field1;
struct field2;
struct field3;
struct field4;
struct field1;
struct field2;
struct field3;
struct field4;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace apache { namespace thrift { namespace test {
class TerseFoo;
class TerseLazyFoo;
class TerseOptionalFoo;
class TerseOptionalLazyFoo;
}}} // apache::thrift::test
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace apache { namespace thrift { namespace test {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
}}} // apache::thrift::test
namespace apache { namespace thrift { namespace test {
class TerseFoo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = TerseFoo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  TerseFoo() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  TerseFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg);

  TerseFoo(TerseFoo&&) noexcept;

  TerseFoo(const TerseFoo& src);


  TerseFoo& operator=(TerseFoo&&) noexcept;
  TerseFoo& operator=(const TerseFoo& src);
  void __clear();
 private:
  ::std::vector<double> field1;
 private:
  ::std::vector<::std::int32_t> field2;
 private:
  ::std::vector<double> field3;
 private:
  ::std::vector<::std::int32_t> field4;
private:
  apache::thrift::detail::isset_bitset<4> __isset;

 public:

  bool operator==(const TerseFoo&) const;
  bool operator<(const TerseFoo&) const;

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field1_ref() const& {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field1_ref() const&& {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field1_ref() & {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field1_ref() && {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field2_ref() const& {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field2_ref() const&& {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field2_ref() & {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field2_ref() && {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field3_ref() const& {
    return {this->field3, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field3_ref() const&& {
    return {std::move(this->field3), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field3_ref() & {
    return {this->field3, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field3_ref() && {
    return {std::move(this->field3), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field4_ref() const& {
    return {this->field4, __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field4_ref() const&& {
    return {std::move(this->field4), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field4_ref() & {
    return {this->field4, __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field4_ref() && {
    return {std::move(this->field4), __isset.__fbthrift_at(folly::index_constant<3>())};
  }
  const ::std::vector<double>& get_field1() const&;
  ::std::vector<double> get_field1() &&;

  template <typename T_TerseFoo_field1_struct_setter = ::std::vector<double>>
  [[deprecated("Use `FOO.field1_ref() = BAR;` instead of `FOO.set_field1(BAR);`")]]
  ::std::vector<double>& set_field1(T_TerseFoo_field1_struct_setter&& field1_) {
    field1 = std::forward<T_TerseFoo_field1_struct_setter>(field1_);
    __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return field1;
  }
  const ::std::vector<::std::int32_t>& get_field2() const&;
  ::std::vector<::std::int32_t> get_field2() &&;

  template <typename T_TerseFoo_field2_struct_setter = ::std::vector<::std::int32_t>>
  [[deprecated("Use `FOO.field2_ref() = BAR;` instead of `FOO.set_field2(BAR);`")]]
  ::std::vector<::std::int32_t>& set_field2(T_TerseFoo_field2_struct_setter&& field2_) {
    field2 = std::forward<T_TerseFoo_field2_struct_setter>(field2_);
    __isset.__fbthrift_set(folly::index_constant<1>(), true);
    return field2;
  }
  const ::std::vector<double>& get_field3() const&;
  ::std::vector<double> get_field3() &&;

  template <typename T_TerseFoo_field3_struct_setter = ::std::vector<double>>
  [[deprecated("Use `FOO.field3_ref() = BAR;` instead of `FOO.set_field3(BAR);`")]]
  ::std::vector<double>& set_field3(T_TerseFoo_field3_struct_setter&& field3_) {
    field3 = std::forward<T_TerseFoo_field3_struct_setter>(field3_);
    __isset.__fbthrift_set(folly::index_constant<2>(), true);
    return field3;
  }
  const ::std::vector<::std::int32_t>& get_field4() const&;
  ::std::vector<::std::int32_t> get_field4() &&;

  template <typename T_TerseFoo_field4_struct_setter = ::std::vector<::std::int32_t>>
  [[deprecated("Use `FOO.field4_ref() = BAR;` instead of `FOO.set_field4(BAR);`")]]
  ::std::vector<::std::int32_t>& set_field4(T_TerseFoo_field4_struct_setter&& field4_) {
    field4 = std::forward<T_TerseFoo_field4_struct_setter>(field4_);
    __isset.__fbthrift_set(folly::index_constant<3>(), true);
    return field4;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<TerseFoo>;
  friend void swap(TerseFoo& a, TerseFoo& b);
};

template <class Protocol_>
uint32_t TerseFoo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
namespace apache { namespace thrift { namespace test {
class TerseLazyFoo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = TerseLazyFoo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  TerseLazyFoo() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  TerseLazyFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg);

  TerseLazyFoo(TerseLazyFoo&&) noexcept;
  TerseLazyFoo(const TerseLazyFoo& src);


  TerseLazyFoo& operator=(TerseLazyFoo&&) noexcept;
  TerseLazyFoo& operator=(const TerseLazyFoo& src);
  void __clear();
 private:
  ::std::vector<double> field1;
 private:
  ::std::vector<::std::int32_t> field2;
 private:
  mutable ::std::vector<double> field3;
 private:
  mutable ::std::vector<::std::int32_t> field4;
private:
  apache::thrift::detail::isset_bitset<4> __isset;

 public:

  bool operator==(const TerseLazyFoo&) const;
  bool operator<(const TerseLazyFoo&) const;

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field1_ref() const& {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field1_ref() const&& {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field1_ref() & {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field1_ref() && {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field2_ref() const& {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field2_ref() const&& {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field2_ref() & {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field2_ref() && {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field3_ref() const& {
    return {this->__fbthrift_read_field_field3(), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field3_ref() const&& {
    return {std::move(this->__fbthrift_read_field_field3()), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field3_ref() & {
    return {this->__fbthrift_read_field_field3(), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field3_ref() && {
    return {std::move(this->__fbthrift_read_field_field3()), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field4_ref() const& {
    return {this->__fbthrift_read_field_field4(), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field4_ref() const&& {
    return {std::move(this->__fbthrift_read_field_field4()), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field4_ref() & {
    return {this->__fbthrift_read_field_field4(), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field4_ref() && {
    return {std::move(this->__fbthrift_read_field_field4()), __isset.__fbthrift_at(folly::index_constant<3>())};
  }
  const ::std::vector<double>& get_field1() const&;
  ::std::vector<double> get_field1() &&;

  template <typename T_TerseLazyFoo_field1_struct_setter = ::std::vector<double>>
  [[deprecated("Use `FOO.field1_ref() = BAR;` instead of `FOO.set_field1(BAR);`")]]
  ::std::vector<double>& set_field1(T_TerseLazyFoo_field1_struct_setter&& field1_) {
    field1 = std::forward<T_TerseLazyFoo_field1_struct_setter>(field1_);
    __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return field1;
  }
  const ::std::vector<::std::int32_t>& get_field2() const&;
  ::std::vector<::std::int32_t> get_field2() &&;

  template <typename T_TerseLazyFoo_field2_struct_setter = ::std::vector<::std::int32_t>>
  [[deprecated("Use `FOO.field2_ref() = BAR;` instead of `FOO.set_field2(BAR);`")]]
  ::std::vector<::std::int32_t>& set_field2(T_TerseLazyFoo_field2_struct_setter&& field2_) {
    field2 = std::forward<T_TerseLazyFoo_field2_struct_setter>(field2_);
    __isset.__fbthrift_set(folly::index_constant<1>(), true);
    return field2;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
 private:
  ::apache::thrift::ProtocolType __fbthrift_protocol_{};

  mutable struct __fbthrift_SerializedData {
    folly::IOBuf field3;
    folly::IOBuf field4;
  } __fbthrift_serializedData_;

  mutable struct __fbthrift_IsDeserialized {
    std::atomic<uint8_t> field3{::apache::thrift::detail::LazyDeserializationState::UNTAINTED | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED};
    std::atomic<uint8_t> field4{::apache::thrift::detail::LazyDeserializationState::UNTAINTED | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED};
  } __fbthrift_isDeserialized_;

  mutable std::mutex __fbthrift_deserializationMutex_;

  const ::std::vector<double>& __fbthrift_read_field_field3() const;
  ::std::vector<double>& __fbthrift_read_field_field3();
  void __fbthrift_read_field_field3_slow() const;
  template<class ProtocolReader> void __fbthrift_read_field_field3_impl() const;
  const ::std::vector<::std::int32_t>& __fbthrift_read_field_field4() const;
  ::std::vector<::std::int32_t>& __fbthrift_read_field_field4();
  void __fbthrift_read_field_field4_slow() const;
  template<class ProtocolReader> void __fbthrift_read_field_field4_impl() const;

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<TerseLazyFoo>;
  friend void swap(TerseLazyFoo& a, TerseLazyFoo& b);
};

template <class Protocol_>
uint32_t TerseLazyFoo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
namespace apache { namespace thrift { namespace test {
class TerseOptionalFoo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = TerseOptionalFoo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  TerseOptionalFoo() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  TerseOptionalFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg);

  TerseOptionalFoo(TerseOptionalFoo&&) noexcept;

  TerseOptionalFoo(const TerseOptionalFoo& src);


  TerseOptionalFoo& operator=(TerseOptionalFoo&&) noexcept;
  TerseOptionalFoo& operator=(const TerseOptionalFoo& src);
  void __clear();
 private:
  ::std::vector<double> field1;
 private:
  ::std::vector<::std::int32_t> field2;
 private:
  ::std::vector<double> field3;
 private:
  ::std::vector<::std::int32_t> field4;
private:
  apache::thrift::detail::isset_bitset<4> __isset;

 public:

  bool operator==(const TerseOptionalFoo&) const;
  bool operator<(const TerseOptionalFoo&) const;

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field1_ref() const& {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field1_ref() const&& {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field1_ref() & {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field1_ref() && {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field2_ref() const& {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field2_ref() const&& {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field2_ref() & {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field2_ref() && {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field3_ref() const& {
    return {this->field3, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field3_ref() const&& {
    return {std::move(this->field3), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field3_ref() & {
    return {this->field3, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field3_ref() && {
    return {std::move(this->field3), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field4_ref() const& {
    return {this->field4, __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field4_ref() const&& {
    return {std::move(this->field4), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field4_ref() & {
    return {this->field4, __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field4_ref() && {
    return {std::move(this->field4), __isset.__fbthrift_at(folly::index_constant<3>())};
  }
  const ::std::vector<double>* get_field1() const&;
  ::std::vector<double>* get_field1() &;
  ::std::vector<double>* get_field1() && = delete;

  template <typename T_TerseOptionalFoo_field1_struct_setter = ::std::vector<double>>
  [[deprecated("Use `FOO.field1_ref() = BAR;` instead of `FOO.set_field1(BAR);`")]]
  ::std::vector<double>& set_field1(T_TerseOptionalFoo_field1_struct_setter&& field1_) {
    field1 = std::forward<T_TerseOptionalFoo_field1_struct_setter>(field1_);
    __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return field1;
  }
  const ::std::vector<::std::int32_t>* get_field2() const&;
  ::std::vector<::std::int32_t>* get_field2() &;
  ::std::vector<::std::int32_t>* get_field2() && = delete;

  template <typename T_TerseOptionalFoo_field2_struct_setter = ::std::vector<::std::int32_t>>
  [[deprecated("Use `FOO.field2_ref() = BAR;` instead of `FOO.set_field2(BAR);`")]]
  ::std::vector<::std::int32_t>& set_field2(T_TerseOptionalFoo_field2_struct_setter&& field2_) {
    field2 = std::forward<T_TerseOptionalFoo_field2_struct_setter>(field2_);
    __isset.__fbthrift_set(folly::index_constant<1>(), true);
    return field2;
  }
  const ::std::vector<double>* get_field3() const&;
  ::std::vector<double>* get_field3() &;
  ::std::vector<double>* get_field3() && = delete;

  template <typename T_TerseOptionalFoo_field3_struct_setter = ::std::vector<double>>
  [[deprecated("Use `FOO.field3_ref() = BAR;` instead of `FOO.set_field3(BAR);`")]]
  ::std::vector<double>& set_field3(T_TerseOptionalFoo_field3_struct_setter&& field3_) {
    field3 = std::forward<T_TerseOptionalFoo_field3_struct_setter>(field3_);
    __isset.__fbthrift_set(folly::index_constant<2>(), true);
    return field3;
  }
  const ::std::vector<::std::int32_t>* get_field4() const&;
  ::std::vector<::std::int32_t>* get_field4() &;
  ::std::vector<::std::int32_t>* get_field4() && = delete;

  template <typename T_TerseOptionalFoo_field4_struct_setter = ::std::vector<::std::int32_t>>
  [[deprecated("Use `FOO.field4_ref() = BAR;` instead of `FOO.set_field4(BAR);`")]]
  ::std::vector<::std::int32_t>& set_field4(T_TerseOptionalFoo_field4_struct_setter&& field4_) {
    field4 = std::forward<T_TerseOptionalFoo_field4_struct_setter>(field4_);
    __isset.__fbthrift_set(folly::index_constant<3>(), true);
    return field4;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<TerseOptionalFoo>;
  friend void swap(TerseOptionalFoo& a, TerseOptionalFoo& b);
};

template <class Protocol_>
uint32_t TerseOptionalFoo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
namespace apache { namespace thrift { namespace test {
class TerseOptionalLazyFoo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = TerseOptionalLazyFoo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  TerseOptionalLazyFoo() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  TerseOptionalLazyFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg);

  TerseOptionalLazyFoo(TerseOptionalLazyFoo&&) noexcept;
  TerseOptionalLazyFoo(const TerseOptionalLazyFoo& src);


  TerseOptionalLazyFoo& operator=(TerseOptionalLazyFoo&&) noexcept;
  TerseOptionalLazyFoo& operator=(const TerseOptionalLazyFoo& src);
  void __clear();
 private:
  ::std::vector<double> field1;
 private:
  ::std::vector<::std::int32_t> field2;
 private:
  mutable ::std::vector<double> field3;
 private:
  mutable ::std::vector<::std::int32_t> field4;
private:
  apache::thrift::detail::isset_bitset<4> __isset;

 public:

  bool operator==(const TerseOptionalLazyFoo&) const;
  bool operator<(const TerseOptionalLazyFoo&) const;

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field1_ref() const& {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field1_ref() const&& {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field1_ref() & {
    return {this->field1, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field1_ref() && {
    return {std::move(this->field1), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field2_ref() const& {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field2_ref() const&& {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field2_ref() & {
    return {this->field2, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field2_ref() && {
    return {std::move(this->field2), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field3_ref() const& {
    return {this->__fbthrift_read_field_field3(), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field3_ref() const&& {
    return {std::move(this->__fbthrift_read_field_field3()), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field3_ref() & {
    return {this->__fbthrift_read_field_field3(), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<double>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field3_ref() && {
    return {std::move(this->__fbthrift_read_field_field3()), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field4_ref() const& {
    return {this->__fbthrift_read_field_field4(), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field4_ref() const&& {
    return {std::move(this->__fbthrift_read_field_field4()), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field4_ref() & {
    return {this->__fbthrift_read_field_field4(), __isset.__fbthrift_at(folly::index_constant<3>())};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field4_ref() && {
    return {std::move(this->__fbthrift_read_field_field4()), __isset.__fbthrift_at(folly::index_constant<3>())};
  }
  const ::std::vector<double>* get_field1() const&;
  ::std::vector<double>* get_field1() &;
  ::std::vector<double>* get_field1() && = delete;

  template <typename T_TerseOptionalLazyFoo_field1_struct_setter = ::std::vector<double>>
  [[deprecated("Use `FOO.field1_ref() = BAR;` instead of `FOO.set_field1(BAR);`")]]
  ::std::vector<double>& set_field1(T_TerseOptionalLazyFoo_field1_struct_setter&& field1_) {
    field1 = std::forward<T_TerseOptionalLazyFoo_field1_struct_setter>(field1_);
    __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return field1;
  }
  const ::std::vector<::std::int32_t>* get_field2() const&;
  ::std::vector<::std::int32_t>* get_field2() &;
  ::std::vector<::std::int32_t>* get_field2() && = delete;

  template <typename T_TerseOptionalLazyFoo_field2_struct_setter = ::std::vector<::std::int32_t>>
  [[deprecated("Use `FOO.field2_ref() = BAR;` instead of `FOO.set_field2(BAR);`")]]
  ::std::vector<::std::int32_t>& set_field2(T_TerseOptionalLazyFoo_field2_struct_setter&& field2_) {
    field2 = std::forward<T_TerseOptionalLazyFoo_field2_struct_setter>(field2_);
    __isset.__fbthrift_set(folly::index_constant<1>(), true);
    return field2;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
 private:
  ::apache::thrift::ProtocolType __fbthrift_protocol_{};

  mutable struct __fbthrift_SerializedData {
    folly::IOBuf field3;
    folly::IOBuf field4;
  } __fbthrift_serializedData_;

  mutable struct __fbthrift_IsDeserialized {
    std::atomic<uint8_t> field3{::apache::thrift::detail::LazyDeserializationState::UNTAINTED | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED};
    std::atomic<uint8_t> field4{::apache::thrift::detail::LazyDeserializationState::UNTAINTED | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED};
  } __fbthrift_isDeserialized_;

  mutable std::mutex __fbthrift_deserializationMutex_;

  const ::std::vector<double>& __fbthrift_read_field_field3() const;
  ::std::vector<double>& __fbthrift_read_field_field3();
  void __fbthrift_read_field_field3_slow() const;
  template<class ProtocolReader> void __fbthrift_read_field_field3_impl() const;
  const ::std::vector<::std::int32_t>& __fbthrift_read_field_field4() const;
  ::std::vector<::std::int32_t>& __fbthrift_read_field_field4();
  void __fbthrift_read_field_field4_slow() const;
  template<class ProtocolReader> void __fbthrift_read_field_field4_impl() const;

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<TerseOptionalLazyFoo>;
  friend void swap(TerseOptionalLazyFoo& a, TerseOptionalLazyFoo& b);
};

template <class Protocol_>
uint32_t TerseOptionalLazyFoo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
THRIFT_IGNORE_ISSET_USE_WARNING_END
