// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: flexe.proto

#include "flexe.pb.h"
#include "flexe.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace flexe {

static const char* Flexe_method_names[] = {
  "/flexe.Flexe/fit",
  "/flexe.Flexe/evaluate",
  "/flexe.Flexe/update_model",
  "/flexe.Flexe/aggregate_evaluate",
  "/flexe.Flexe/aggregate_fit",
  "/flexe.Flexe/aggregate_sync_fit",
  "/flexe.Flexe/server_evaluate",
  "/flexe.Flexe/store_model",
  "/flexe.Flexe/initialize_parameters",
  "/flexe.Flexe/end",
};

std::unique_ptr< Flexe::Stub> Flexe::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Flexe::Stub> stub(new Flexe::Stub(channel, options));
  return stub;
}

Flexe::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_fit_(Flexe_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_evaluate_(Flexe_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_update_model_(Flexe_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_aggregate_evaluate_(Flexe_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_aggregate_fit_(Flexe_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_aggregate_sync_fit_(Flexe_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_server_evaluate_(Flexe_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_store_model_(Flexe_method_names[7], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_initialize_parameters_(Flexe_method_names[8], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_end_(Flexe_method_names[9], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Flexe::Stub::fit(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::flexe::ModelReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::TTRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_fit_, context, request, response);
}

void Flexe::Stub::experimental_async::fit(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::ModelReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::TTRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_fit_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::fit(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::ModelReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_fit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::PrepareAsyncfitRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::ModelReply, ::flexe::TTRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_fit_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::AsyncfitRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncfitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::flexe::EvaluateReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_evaluate_, context, request, response);
}

void Flexe::Stub::experimental_async::evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_evaluate_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_evaluate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::EvaluateReply>* Flexe::Stub::PrepareAsyncevaluateRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::EvaluateReply, ::flexe::TTRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_evaluate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::EvaluateReply>* Flexe::Stub::AsyncevaluateRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncevaluateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::update_model(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::flexe::GenericResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::TTRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_update_model_, context, request, response);
}

void Flexe::Stub::experimental_async::update_model(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::GenericResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::TTRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_update_model_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::update_model(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::GenericResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_update_model_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::GenericResponse>* Flexe::Stub::PrepareAsyncupdate_modelRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::GenericResponse, ::flexe::TTRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_update_model_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::GenericResponse>* Flexe::Stub::Asyncupdate_modelRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncupdate_modelRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::aggregate_evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::flexe::EvaluateReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_aggregate_evaluate_, context, request, response);
}

void Flexe::Stub::experimental_async::aggregate_evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_aggregate_evaluate_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::aggregate_evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_aggregate_evaluate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::EvaluateReply>* Flexe::Stub::PrepareAsyncaggregate_evaluateRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::EvaluateReply, ::flexe::TTRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_aggregate_evaluate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::EvaluateReply>* Flexe::Stub::Asyncaggregate_evaluateRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncaggregate_evaluateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::aggregate_fit(::grpc::ClientContext* context, const ::flexe::ModelRequest& request, ::flexe::ModelReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::ModelRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_aggregate_fit_, context, request, response);
}

void Flexe::Stub::experimental_async::aggregate_fit(::grpc::ClientContext* context, const ::flexe::ModelRequest* request, ::flexe::ModelReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::ModelRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_aggregate_fit_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::aggregate_fit(::grpc::ClientContext* context, const ::flexe::ModelRequest* request, ::flexe::ModelReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_aggregate_fit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::PrepareAsyncaggregate_fitRaw(::grpc::ClientContext* context, const ::flexe::ModelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::ModelReply, ::flexe::ModelRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_aggregate_fit_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::Asyncaggregate_fitRaw(::grpc::ClientContext* context, const ::flexe::ModelRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncaggregate_fitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::aggregate_sync_fit(::grpc::ClientContext* context, const ::flexe::GenericRequest& request, ::flexe::ModelReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::GenericRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_aggregate_sync_fit_, context, request, response);
}

void Flexe::Stub::experimental_async::aggregate_sync_fit(::grpc::ClientContext* context, const ::flexe::GenericRequest* request, ::flexe::ModelReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::GenericRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_aggregate_sync_fit_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::aggregate_sync_fit(::grpc::ClientContext* context, const ::flexe::GenericRequest* request, ::flexe::ModelReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_aggregate_sync_fit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::PrepareAsyncaggregate_sync_fitRaw(::grpc::ClientContext* context, const ::flexe::GenericRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::ModelReply, ::flexe::GenericRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_aggregate_sync_fit_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::Asyncaggregate_sync_fitRaw(::grpc::ClientContext* context, const ::flexe::GenericRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncaggregate_sync_fitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::server_evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::flexe::EvaluateReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_server_evaluate_, context, request, response);
}

void Flexe::Stub::experimental_async::server_evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_server_evaluate_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::server_evaluate(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_server_evaluate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::EvaluateReply>* Flexe::Stub::PrepareAsyncserver_evaluateRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::EvaluateReply, ::flexe::TTRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_server_evaluate_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::EvaluateReply>* Flexe::Stub::Asyncserver_evaluateRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncserver_evaluateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::store_model(::grpc::ClientContext* context, const ::flexe::ModelRequest& request, ::flexe::GenericResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::ModelRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_store_model_, context, request, response);
}

void Flexe::Stub::experimental_async::store_model(::grpc::ClientContext* context, const ::flexe::ModelRequest* request, ::flexe::GenericResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::ModelRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_store_model_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::store_model(::grpc::ClientContext* context, const ::flexe::ModelRequest* request, ::flexe::GenericResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_store_model_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::GenericResponse>* Flexe::Stub::PrepareAsyncstore_modelRaw(::grpc::ClientContext* context, const ::flexe::ModelRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::GenericResponse, ::flexe::ModelRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_store_model_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::GenericResponse>* Flexe::Stub::Asyncstore_modelRaw(::grpc::ClientContext* context, const ::flexe::ModelRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncstore_modelRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::initialize_parameters(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::flexe::ModelReply* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::TTRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_initialize_parameters_, context, request, response);
}

void Flexe::Stub::experimental_async::initialize_parameters(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::ModelReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::TTRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_initialize_parameters_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::initialize_parameters(::grpc::ClientContext* context, const ::flexe::TTRequest* request, ::flexe::ModelReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_initialize_parameters_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::PrepareAsyncinitialize_parametersRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::ModelReply, ::flexe::TTRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_initialize_parameters_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::ModelReply>* Flexe::Stub::Asyncinitialize_parametersRaw(::grpc::ClientContext* context, const ::flexe::TTRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncinitialize_parametersRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flexe::Stub::end(::grpc::ClientContext* context, const ::flexe::GenericRequest& request, ::flexe::GenericResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::flexe::GenericRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_end_, context, request, response);
}

void Flexe::Stub::experimental_async::end(::grpc::ClientContext* context, const ::flexe::GenericRequest* request, ::flexe::GenericResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::flexe::GenericRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_end_, context, request, response, std::move(f));
}

void Flexe::Stub::experimental_async::end(::grpc::ClientContext* context, const ::flexe::GenericRequest* request, ::flexe::GenericResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_end_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::flexe::GenericResponse>* Flexe::Stub::PrepareAsyncendRaw(::grpc::ClientContext* context, const ::flexe::GenericRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::flexe::GenericResponse, ::flexe::GenericRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_end_, context, request);
}

::grpc::ClientAsyncResponseReader< ::flexe::GenericResponse>* Flexe::Stub::AsyncendRaw(::grpc::ClientContext* context, const ::flexe::GenericRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncendRaw(context, request, cq);
  result->StartCall();
  return result;
}

Flexe::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::TTRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::TTRequest* req,
             ::flexe::ModelReply* resp) {
               return service->fit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::TTRequest* req,
             ::flexe::EvaluateReply* resp) {
               return service->evaluate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::TTRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::TTRequest* req,
             ::flexe::GenericResponse* resp) {
               return service->update_model(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::TTRequest* req,
             ::flexe::EvaluateReply* resp) {
               return service->aggregate_evaluate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::ModelRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::ModelRequest* req,
             ::flexe::ModelReply* resp) {
               return service->aggregate_fit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::GenericRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::GenericRequest* req,
             ::flexe::ModelReply* resp) {
               return service->aggregate_sync_fit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::TTRequest, ::flexe::EvaluateReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::TTRequest* req,
             ::flexe::EvaluateReply* resp) {
               return service->server_evaluate(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::ModelRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::ModelRequest* req,
             ::flexe::GenericResponse* resp) {
               return service->store_model(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::TTRequest, ::flexe::ModelReply, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::TTRequest* req,
             ::flexe::ModelReply* resp) {
               return service->initialize_parameters(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flexe_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flexe::Service, ::flexe::GenericRequest, ::flexe::GenericResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flexe::Service* service,
             ::grpc::ServerContext* ctx,
             const ::flexe::GenericRequest* req,
             ::flexe::GenericResponse* resp) {
               return service->end(ctx, req, resp);
             }, this)));
}

Flexe::Service::~Service() {
}

::grpc::Status Flexe::Service::fit(::grpc::ServerContext* context, const ::flexe::TTRequest* request, ::flexe::ModelReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::evaluate(::grpc::ServerContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::update_model(::grpc::ServerContext* context, const ::flexe::TTRequest* request, ::flexe::GenericResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::aggregate_evaluate(::grpc::ServerContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::aggregate_fit(::grpc::ServerContext* context, const ::flexe::ModelRequest* request, ::flexe::ModelReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::aggregate_sync_fit(::grpc::ServerContext* context, const ::flexe::GenericRequest* request, ::flexe::ModelReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::server_evaluate(::grpc::ServerContext* context, const ::flexe::TTRequest* request, ::flexe::EvaluateReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::store_model(::grpc::ServerContext* context, const ::flexe::ModelRequest* request, ::flexe::GenericResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::initialize_parameters(::grpc::ServerContext* context, const ::flexe::TTRequest* request, ::flexe::ModelReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flexe::Service::end(::grpc::ServerContext* context, const ::flexe::GenericRequest* request, ::flexe::GenericResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace flexe
