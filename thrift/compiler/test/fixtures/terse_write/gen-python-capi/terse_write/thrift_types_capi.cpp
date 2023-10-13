
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

#include <thrift/compiler/test/fixtures/terse_write/src/gen-python-capi/terse_write/thrift_types_api.h>
#include <thrift/compiler/test/fixtures/terse_write/src/gen-python-capi/terse_write/thrift_types_capi.h>


namespace apache {
namespace thrift {
namespace python {
namespace capi {
namespace {
bool ensure_module_imported() {
  static ::folly::python::import_cache_nocapture import((
      ::import_facebook__thrift__test__terse_write__thrift_types_capi));
  return import();
}
} // namespace

ExtractorResult<::facebook::thrift::test::terse_write::MyStruct>
Extractor<::facebook::thrift::test::terse_write::MyStruct>::operator()(PyObject* obj) {
  int tCheckResult = typeCheck(obj);
  if (tCheckResult != 1) {
      if (tCheckResult == 0) {
        PyErr_SetString(PyExc_TypeError, "Not a MyStruct");
      }
      return extractorError<::facebook::thrift::test::terse_write::MyStruct>(
          "Marshal error: MyStruct");
  }
  return ::facebook::thrift::test::terse_write::MyStruct{};
}

ExtractorResult<::facebook::thrift::test::terse_write::MyStruct>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::MyStruct>>::operator()(PyObject* fbThriftData) {
  ::facebook::thrift::test::terse_write::MyStruct cpp;
  (void)fbThriftData;
  return cpp;
}


int Extractor<::facebook::thrift::test::terse_write::MyStruct>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__MyStruct(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: MyStruct");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::MyStruct>::operator()(
    const ::facebook::thrift::test::terse_write::MyStruct& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::MyStruct>> ctor;
  StrongRef fbthrift_data(ctor(val));
  if (!fbthrift_data) {
    return nullptr;
  }
  return init__facebook__thrift__test__terse_write__MyStruct(*fbthrift_data);
}

PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::MyStruct>>::operator()(
    FOLLY_MAYBE_UNUSED const ::facebook::thrift::test::terse_write::MyStruct& val) {
  StrongRef fbthrift_data(createStructTuple(0));
  return std::move(fbthrift_data).release();
}


ExtractorResult<::facebook::thrift::test::terse_write::MyUnion>
Extractor<::facebook::thrift::test::terse_write::MyUnion>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::MyUnion>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__MyUnion(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::MyUnion>(
        "Thrift serialize error: MyUnion");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::MyUnion>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::MyUnion>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::MyUnion>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::MyUnion>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__MyUnion(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::MyUnion>(
          "Init from fbthrift error: MyUnion");
  }
  return Extractor<::facebook::thrift::test::terse_write::MyUnion>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::MyUnion>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__MyUnion(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: MyUnion");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::MyUnion>::operator()(
    const ::facebook::thrift::test::terse_write::MyUnion& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__MyUnion(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::MyUnion>>::operator()(
    const ::facebook::thrift::test::terse_write::MyUnion& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::MyUnion>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>
Extractor<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__MyStructWithCustomDefault(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>(
        "Thrift serialize error: MyStructWithCustomDefault");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::MyStructWithCustomDefault>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__MyStructWithCustomDefault(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>(
          "Init from fbthrift error: MyStructWithCustomDefault");
  }
  return Extractor<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__MyStructWithCustomDefault(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: MyStructWithCustomDefault");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>::operator()(
    const ::facebook::thrift::test::terse_write::MyStructWithCustomDefault& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__MyStructWithCustomDefault(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::MyStructWithCustomDefault>>::operator()(
    const ::facebook::thrift::test::terse_write::MyStructWithCustomDefault& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::MyStructWithCustomDefault>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::StructLevelTerseStruct>
Extractor<::facebook::thrift::test::terse_write::StructLevelTerseStruct>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::StructLevelTerseStruct>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__StructLevelTerseStruct(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::StructLevelTerseStruct>(
        "Thrift serialize error: StructLevelTerseStruct");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::StructLevelTerseStruct>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::StructLevelTerseStruct>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::StructLevelTerseStruct>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::StructLevelTerseStruct>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__StructLevelTerseStruct(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::StructLevelTerseStruct>(
          "Init from fbthrift error: StructLevelTerseStruct");
  }
  return Extractor<::facebook::thrift::test::terse_write::StructLevelTerseStruct>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::StructLevelTerseStruct>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__StructLevelTerseStruct(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: StructLevelTerseStruct");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::StructLevelTerseStruct>::operator()(
    const ::facebook::thrift::test::terse_write::StructLevelTerseStruct& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__StructLevelTerseStruct(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::StructLevelTerseStruct>>::operator()(
    const ::facebook::thrift::test::terse_write::StructLevelTerseStruct& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::StructLevelTerseStruct>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>
Extractor<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__FieldLevelTerseStruct(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>(
        "Thrift serialize error: FieldLevelTerseStruct");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::FieldLevelTerseStruct>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__FieldLevelTerseStruct(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>(
          "Init from fbthrift error: FieldLevelTerseStruct");
  }
  return Extractor<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__FieldLevelTerseStruct(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: FieldLevelTerseStruct");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>::operator()(
    const ::facebook::thrift::test::terse_write::FieldLevelTerseStruct& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__FieldLevelTerseStruct(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::FieldLevelTerseStruct>>::operator()(
    const ::facebook::thrift::test::terse_write::FieldLevelTerseStruct& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::FieldLevelTerseStruct>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>
Extractor<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__TerseStructWithCustomDefault(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>(
        "Thrift serialize error: TerseStructWithCustomDefault");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__TerseStructWithCustomDefault(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>(
          "Init from fbthrift error: TerseStructWithCustomDefault");
  }
  return Extractor<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__TerseStructWithCustomDefault(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: TerseStructWithCustomDefault");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>::operator()(
    const ::facebook::thrift::test::terse_write::TerseStructWithCustomDefault& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__TerseStructWithCustomDefault(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>>::operator()(
    const ::facebook::thrift::test::terse_write::TerseStructWithCustomDefault& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::TerseStructWithCustomDefault>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::AdaptedFields>
Extractor<::facebook::thrift::test::terse_write::AdaptedFields>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::AdaptedFields>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__AdaptedFields(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::AdaptedFields>(
        "Thrift serialize error: AdaptedFields");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::AdaptedFields>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::AdaptedFields>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::AdaptedFields>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::AdaptedFields>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__AdaptedFields(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::AdaptedFields>(
          "Init from fbthrift error: AdaptedFields");
  }
  return Extractor<::facebook::thrift::test::terse_write::AdaptedFields>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::AdaptedFields>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__AdaptedFields(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: AdaptedFields");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::AdaptedFields>::operator()(
    const ::facebook::thrift::test::terse_write::AdaptedFields& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__AdaptedFields(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::AdaptedFields>>::operator()(
    const ::facebook::thrift::test::terse_write::AdaptedFields& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::AdaptedFields>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::WrappedFields>
Extractor<::facebook::thrift::test::terse_write::WrappedFields>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::WrappedFields>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__WrappedFields(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::WrappedFields>(
        "Thrift serialize error: WrappedFields");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::WrappedFields>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::WrappedFields>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::WrappedFields>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::WrappedFields>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__WrappedFields(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::WrappedFields>(
          "Init from fbthrift error: WrappedFields");
  }
  return Extractor<::facebook::thrift::test::terse_write::WrappedFields>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::WrappedFields>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__WrappedFields(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: WrappedFields");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::WrappedFields>::operator()(
    const ::facebook::thrift::test::terse_write::WrappedFields& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__WrappedFields(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::WrappedFields>>::operator()(
    const ::facebook::thrift::test::terse_write::WrappedFields& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::WrappedFields>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::TerseException>
Extractor<::facebook::thrift::test::terse_write::TerseException>::operator()(PyObject* obj) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::TerseException>(
      "Module facebook.thrift.test.terse_write import error");
  }
  std::unique_ptr<folly::IOBuf> val(
      extract__facebook__thrift__test__terse_write__TerseException(obj));
  if (!val) {
    CHECK(PyErr_Occurred());
    return extractorError<::facebook::thrift::test::terse_write::TerseException>(
        "Thrift serialize error: TerseException");
  }
  return detail::deserialize_iobuf<::facebook::thrift::test::terse_write::TerseException>(std::move(val));
}


ExtractorResult<::facebook::thrift::test::terse_write::TerseException>
Extractor<::apache::thrift::python::capi::ComposedStruct<
    ::facebook::thrift::test::terse_write::TerseException>>::operator()(PyObject* fbthrift_data) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return extractorError<::facebook::thrift::test::terse_write::TerseException>(
      "Module facebook.thrift.test.terse_write import error");
  }
  auto obj = StrongRef(init__facebook__thrift__test__terse_write__TerseException(fbthrift_data));
  if (!obj) {
      return extractorError<::facebook::thrift::test::terse_write::TerseException>(
          "Init from fbthrift error: TerseException");
  }
  return Extractor<::facebook::thrift::test::terse_write::TerseException>{}(*obj);
}

int Extractor<::facebook::thrift::test::terse_write::TerseException>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__TerseException(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: TerseException");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::TerseException>::operator()(
    const ::facebook::thrift::test::terse_write::TerseException& val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__TerseException(
      detail::serialize_to_iobuf(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}


PyObject* Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::facebook::thrift::test::terse_write::TerseException>>::operator()(
    const ::facebook::thrift::test::terse_write::TerseException& val) {
  auto obj = StrongRef(Constructor<::facebook::thrift::test::terse_write::TerseException>{}(val));
  if (!obj) {
    return nullptr;
  }
  return getExceptionThriftData(*obj);
}

ExtractorResult<::facebook::thrift::test::terse_write::MyEnum>
Extractor<::facebook::thrift::test::terse_write::MyEnum>::operator()(PyObject* obj) {
  long val = PyLong_AsLong(obj);
  if (val == -1 && PyErr_Occurred()) {
    return extractorError<::facebook::thrift::test::terse_write::MyEnum>(
        "Error getting python int value: MyEnum");
  }
  return static_cast<::facebook::thrift::test::terse_write::MyEnum>(val);
}

int Extractor<::facebook::thrift::test::terse_write::MyEnum>::typeCheck(PyObject* obj) {
  if (!ensure_module_imported()) {
    ::folly::python::handlePythonError(
      "Module facebook.thrift.test.terse_write import error");
  }
  int result =
      can_extract__facebook__thrift__test__terse_write__MyEnum(obj);
  if (result < 0) {
    ::folly::python::handlePythonError(
      "Unexpected type check error: MyEnum");
  }
  return result;
}


PyObject* Constructor<::facebook::thrift::test::terse_write::MyEnum>::operator()(
    ::facebook::thrift::test::terse_write::MyEnum val) {
  if (!ensure_module_imported()) {
    DCHECK(PyErr_Occurred() != nullptr);
    return nullptr;
  }
  auto ptr = construct__facebook__thrift__test__terse_write__MyEnum(
      static_cast<int64_t>(val));
  if (!ptr) {
    CHECK(PyErr_Occurred());
  }
  return ptr;
}

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache
