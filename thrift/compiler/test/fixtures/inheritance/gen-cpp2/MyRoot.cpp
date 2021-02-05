/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRoot.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRoot.tcc"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyRootSvIf::getProcessor() {
  return std::make_unique<MyRootAsyncProcessor>(this);
}


void MyRootSvIf::do_root() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("do_root");
}

folly::SemiFuture<folly::Unit> MyRootSvIf::semifuture_do_root() {
  return apache::thrift::detail::si::semifuture([&] {
    return do_root();
  });
}

folly::Future<folly::Unit> MyRootSvIf::future_do_root() {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_do_root(), std::move(ka));
}

void MyRootSvIf::async_tm_do_root(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_do_root();
  });
}

void MyRootSvNull::do_root() {
  return;
}



const char* MyRootAsyncProcessor::getServiceName() {
  return "MyRoot";
}

void MyRootAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyRootSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void MyRootAsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyRootAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyRootAsyncProcessor::ProcessMap& MyRootAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyRootAsyncProcessor::ProcessMap MyRootAsyncProcessor::binaryProcessMap_ {
  {"do_root", &MyRootAsyncProcessor::setUpAndProcess_do_root<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyRootAsyncProcessor::ProcessMap& MyRootAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyRootAsyncProcessor::ProcessMap MyRootAsyncProcessor::compactProcessMap_ {
  {"do_root", &MyRootAsyncProcessor::setUpAndProcess_do_root<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2
