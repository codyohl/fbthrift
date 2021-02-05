/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/service1.h"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/service1.tcc"
#include "thrift/compiler/test/fixtures/visitation/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace test_cpp2 { namespace cpp_reflection {
std::unique_ptr<apache::thrift::AsyncProcessor> service1SvIf::getProcessor() {
  return std::make_unique<service1AsyncProcessor>(this);
}


void service1SvIf::method1() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method1");
}

folly::SemiFuture<folly::Unit> service1SvIf::semifuture_method1() {
  return apache::thrift::detail::si::semifuture([&] {
    return method1();
  });
}

folly::Future<folly::Unit> service1SvIf::future_method1() {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_method1(), std::move(ka));
}

void service1SvIf::async_tm_method1(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_method1();
  });
}

void service1SvIf::method2(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method2");
}

folly::SemiFuture<folly::Unit> service1SvIf::semifuture_method2(int32_t p_x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_y, double p_z) {
  return apache::thrift::detail::si::semifuture([&] {
    return method2(p_x, std::move(p_y), p_z);
  });
}

folly::Future<folly::Unit> service1SvIf::future_method2(int32_t p_x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_y, double p_z) {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_method2(p_x, std::move(p_y), p_z), std::move(ka));
}

void service1SvIf::async_tm_method2(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t p_x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_y, double p_z) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_method2(p_x, std::move(p_y), p_z);
  });
}

int32_t service1SvIf::method3() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method3");
}

folly::SemiFuture<int32_t> service1SvIf::semifuture_method3() {
  return apache::thrift::detail::si::semifuture([&] {
    return method3();
  });
}

folly::Future<int32_t> service1SvIf::future_method3() {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_method3(), std::move(ka));
}

void service1SvIf::async_tm_method3(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_method3();
  });
}

int32_t service1SvIf::method4(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method4");
}

folly::SemiFuture<int32_t> service1SvIf::semifuture_method4(int32_t p_i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_j, double p_k) {
  return apache::thrift::detail::si::semifuture([&] {
    return method4(p_i, std::move(p_j), p_k);
  });
}

folly::Future<int32_t> service1SvIf::future_method4(int32_t p_i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_j, double p_k) {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_method4(p_i, std::move(p_j), p_k), std::move(ka));
}

void service1SvIf::async_tm_method4(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t p_i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_j, double p_k) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_method4(p_i, std::move(p_j), p_k);
  });
}

void service1SvIf::method5( ::test_cpp2::cpp_reflection::struct2& /*_return*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method5");
}

folly::SemiFuture<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service1SvIf::semifuture_method5() {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::test_cpp2::cpp_reflection::struct2& _return) { method5(_return); });
}

folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service1SvIf::future_method5() {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_method5(), std::move(ka));
}

void service1SvIf::async_tm_method5(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_method5();
  });
}

void service1SvIf::method6( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method6");
}

folly::SemiFuture<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service1SvIf::semifuture_method6(int32_t p_l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_m, double p_n) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::test_cpp2::cpp_reflection::struct2& _return) { method6(_return, p_l, std::move(p_m), p_n); });
}

folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> service1SvIf::future_method6(int32_t p_l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_m, double p_n) {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_method6(p_l, std::move(p_m), p_n), std::move(ka));
}

void service1SvIf::async_tm_method6(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t p_l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> p_m, double p_n) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_method6(p_l, std::move(p_m), p_n);
  });
}

void service1SvNull::method1() {
  return;
}

void service1SvNull::method2(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) {
  return;
}

int32_t service1SvNull::method3() {
  return 0;
}

int32_t service1SvNull::method4(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) {
  return 0;
}

void service1SvNull::method5( ::test_cpp2::cpp_reflection::struct2& /*_return*/) {}

void service1SvNull::method6( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) {}



const char* service1AsyncProcessor::getServiceName() {
  return "service1";
}

void service1AsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<service1SvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void service1AsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> service1AsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const service1AsyncProcessor::ProcessMap& service1AsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const service1AsyncProcessor::ProcessMap service1AsyncProcessor::binaryProcessMap_ {
  {"method1", &service1AsyncProcessor::setUpAndProcess_method1<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method2", &service1AsyncProcessor::setUpAndProcess_method2<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method3", &service1AsyncProcessor::setUpAndProcess_method3<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method4", &service1AsyncProcessor::setUpAndProcess_method4<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method5", &service1AsyncProcessor::setUpAndProcess_method5<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"method6", &service1AsyncProcessor::setUpAndProcess_method6<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const service1AsyncProcessor::ProcessMap& service1AsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const service1AsyncProcessor::ProcessMap service1AsyncProcessor::compactProcessMap_ {
  {"method1", &service1AsyncProcessor::setUpAndProcess_method1<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method2", &service1AsyncProcessor::setUpAndProcess_method2<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method3", &service1AsyncProcessor::setUpAndProcess_method3<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method4", &service1AsyncProcessor::setUpAndProcess_method4<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method5", &service1AsyncProcessor::setUpAndProcess_method5<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"method6", &service1AsyncProcessor::setUpAndProcess_method6<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}} // test_cpp2::cpp_reflection
