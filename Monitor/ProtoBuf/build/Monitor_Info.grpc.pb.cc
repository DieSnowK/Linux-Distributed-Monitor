// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Monitor_Info.proto

#include "Monitor_Info.pb.h"
#include "Monitor_Info.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace monitor {

static const char* GrpcManager_method_names[] = {
  "/monitor.GrpcManager/SetMonitorInfo",
  "/monitor.GrpcManager/GetMonitorInfo",
};

std::unique_ptr< GrpcManager::Stub> GrpcManager::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< GrpcManager::Stub> stub(new GrpcManager::Stub(channel, options));
  return stub;
}

GrpcManager::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SetMonitorInfo_(GrpcManager_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetMonitorInfo_(GrpcManager_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status GrpcManager::Stub::SetMonitorInfo(::grpc::ClientContext* context, const ::monitor::MonitorInfo& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::monitor::MonitorInfo, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetMonitorInfo_, context, request, response);
}

void GrpcManager::Stub::async::SetMonitorInfo(::grpc::ClientContext* context, const ::monitor::MonitorInfo* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::monitor::MonitorInfo, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetMonitorInfo_, context, request, response, std::move(f));
}

void GrpcManager::Stub::async::SetMonitorInfo(::grpc::ClientContext* context, const ::monitor::MonitorInfo* request, ::google::protobuf::Empty* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetMonitorInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* GrpcManager::Stub::PrepareAsyncSetMonitorInfoRaw(::grpc::ClientContext* context, const ::monitor::MonitorInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::monitor::MonitorInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetMonitorInfo_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* GrpcManager::Stub::AsyncSetMonitorInfoRaw(::grpc::ClientContext* context, const ::monitor::MonitorInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetMonitorInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status GrpcManager::Stub::GetMonitorInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::monitor::MonitorInfo* response) {
  return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::monitor::MonitorInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetMonitorInfo_, context, request, response);
}

void GrpcManager::Stub::async::GetMonitorInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::monitor::MonitorInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::monitor::MonitorInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMonitorInfo_, context, request, response, std::move(f));
}

void GrpcManager::Stub::async::GetMonitorInfo(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::monitor::MonitorInfo* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMonitorInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::monitor::MonitorInfo>* GrpcManager::Stub::PrepareAsyncGetMonitorInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::monitor::MonitorInfo, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetMonitorInfo_, context, request);
}

::grpc::ClientAsyncResponseReader< ::monitor::MonitorInfo>* GrpcManager::Stub::AsyncGetMonitorInfoRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetMonitorInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

GrpcManager::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GrpcManager_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GrpcManager::Service, ::monitor::MonitorInfo, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GrpcManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::monitor::MonitorInfo* req,
             ::google::protobuf::Empty* resp) {
               return service->SetMonitorInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      GrpcManager_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< GrpcManager::Service, ::google::protobuf::Empty, ::monitor::MonitorInfo, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](GrpcManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::google::protobuf::Empty* req,
             ::monitor::MonitorInfo* resp) {
               return service->GetMonitorInfo(ctx, req, resp);
             }, this)));
}

GrpcManager::Service::~Service() {
}

::grpc::Status GrpcManager::Service::SetMonitorInfo(::grpc::ServerContext* context, const ::monitor::MonitorInfo* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status GrpcManager::Service::GetMonitorInfo(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::monitor::MonitorInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace monitor

