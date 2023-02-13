/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.tcc"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/service_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::MyService>::getProcessor() {
  return std::make_unique<::cpp2::MyServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::MyService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::MyService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::MyServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}


std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::MyService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::MyServiceServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::MyService>::__fbthrift_serviceInfoHolder;


void apache::thrift::ServiceHandler<::cpp2::MyService>::query(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("query");
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::sync_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  return query(std::move(p_s), std::move(p_i));
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_query.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sync_query(std::move(p_s), std::move(p_i));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_query.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_query(std::move(p_s), std::move(p_i)), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyService>::co_query(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_query.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/>(std::move(p_s), std::move(p_i)));
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyService>::co_query(apache::thrift::RequestParams /* params */, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_query.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_query(std::move(p_s), std::move(p_i));
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_query(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_query.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_query.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_query(params, std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_query.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_query(std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_query(std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_query(params, std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_query(std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sync_query(std::move(p_s), std::move(p_i));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_s, p_i) = std::move(ex).restoreArgs<std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::has_arg_docs(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("has_arg_docs");
}

void apache::thrift::ServiceHandler<::cpp2::MyService>::sync_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  return has_arg_docs(std::move(p_s), std::move(p_i));
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::semifuture_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_has_arg_docs.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sync_has_arg_docs(std::move(p_s), std::move(p_i));
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::MyService>::future_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_has_arg_docs.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_has_arg_docs(std::move(p_s), std::move(p_i)), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyService>::co_has_arg_docs(std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_has_arg_docs.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/>(std::move(p_s), std::move(p_i)));
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::MyService>::co_has_arg_docs(apache::thrift::RequestParams /* params */, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_has_arg_docs.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_has_arg_docs(std::move(p_s), std::move(p_i));
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::MyService>::async_tm_has_arg_docs(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, std::unique_ptr<::cpp2::MyStruct> p_s, std::unique_ptr<::cpp2::Included> p_i) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_has_arg_docs.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_has_arg_docs.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_has_arg_docs(params, std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_has_arg_docs.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        FOLLY_FALLTHROUGH;
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_has_arg_docs(std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_has_arg_docs(std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_has_arg_docs(params, std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_has_arg_docs(std::move(p_s), std::move(p_i));
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sync_has_arg_docs(std::move(p_s), std::move(p_i));
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_s, p_i) = std::move(ex).restoreArgs<std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace cpp2 {

void MyServiceSvNull::query(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) {
  return;
}

void MyServiceSvNull::has_arg_docs(std::unique_ptr<::cpp2::MyStruct> /*s*/, std::unique_ptr<::cpp2::Included> /*i*/) {
  return;
}


const char* MyServiceAsyncProcessor::getServiceName() {
  return "MyService";
}

void MyServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::MyService>>::gen(response);
}

void MyServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void MyServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const MyServiceAsyncProcessor::ProcessMap& MyServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const MyServiceAsyncProcessor::ProcessMap MyServiceAsyncProcessor::kOwnProcessMap_ {
  {"query",
    {&MyServiceAsyncProcessor::setUpAndProcess_query<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_query<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_query<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_query<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"has_arg_docs",
    {&MyServiceAsyncProcessor::setUpAndProcess_has_arg_docs<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::setUpAndProcess_has_arg_docs<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_has_arg_docs<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &MyServiceAsyncProcessor::executeRequest_has_arg_docs<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& MyServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap MyServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"query",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.query",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  {"has_arg_docs",
    {false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "MyService.has_arg_docs",
     std::nullopt,
     apache::thrift::concurrency::NORMAL}},
  };

  return requestInfoMap;
}
} // cpp2
