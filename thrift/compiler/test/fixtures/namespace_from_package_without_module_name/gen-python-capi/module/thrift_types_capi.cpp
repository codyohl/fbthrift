
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT
 *  @generated
 *
 */

#include <folly/python/import.h>
#include <thrift/lib/python/capi/iobuf.h>
#include <thrift/lib/python/types.h>

#include <thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/gen-python-capi/module/thrift_types_api.h>
#include <thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/gen-python-capi/module/thrift_types_capi.h>


namespace apache {
namespace thrift {
namespace python {
namespace capi {
namespace {
bool ensure_module_imported() {
  static ::folly::python::import_cache_nocapture import((
      ::import_test__namespace_from_package_without_module_name__module__thrift_types_capi));
  return import();
}
} // namespace

ExtractorResult<::test::namespace_from_package_without_module_name::Foo>
Extractor<::test::namespace_from_package_without_module_name::Foo>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::test::namespace_from_package_without_module_name::Foo>(
      "Module test.namespace_from_package_without_module_name.module import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__test__namespace_from_package_without_module_name__module__Foo(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::test::namespace_from_package_without_module_name::Foo>(
        "Thrift serialize error: Foo");
  }
  return detail::deserialize_iobuf<::test::namespace_from_package_without_module_name::Foo>(std::move(val));
}


ExtractorResult<::test::namespace_from_package_without_module_name::Foo>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::test::namespace_from_package_without_module_name::Foo>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::test::namespace_from_package_without_module_name::Foo>(
      "Module test.namespace_from_package_without_module_name.module import error");
  }
  auto obj = StrongRef(init__test__namespace_from_package_without_module_name__module__Foo(fbthrift_data));
  if (!obj) {
      return extractorError<::test::namespace_from_package_without_module_name::Foo>(
          "Init from fbthrift error: Foo");
  }
  return Extractor<::test::namespace_from_package_without_module_name::Foo>{}(*obj);
}

int Extractor<::test::namespace_from_package_without_module_name::Foo>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module test.namespace_from_package_without_module_name.module import error");
  }
  int result =
      can_extract__test__namespace_from_package_without_module_name__module__Foo(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: Foo");
  }
  return result;
}


PyObject* Constructor<::test::namespace_from_package_without_module_name::Foo>::operator()(
    const ::test::namespace_from_package_without_module_name::Foo& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__test__namespace_from_package_without_module_name__module__Foo(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::test::namespace_from_package_without_module_name::Foo>>::operator()(
    const ::test::namespace_from_package_without_module_name::Foo& val) {
  auto obj = StrongRef(Constructor<::test::namespace_from_package_without_module_name::Foo>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache
