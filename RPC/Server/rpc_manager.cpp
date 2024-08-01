#include <iostream>
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
#include "rpc_manager.h"
namespace monitor
{
    GrpcManagerImple::GrpcManagerImple() {}
    GrpcManagerImple::~GrpcManagerImple() {}

    ::grpc::Status GrpcManagerImple::SetMonitorInfo(::grpc::ServerContext* context,
                                                    const ::monitor::MonitorInfo* request,
                                                    ::google::protobuf::Empty* response)
    {
        _monitorInfo.Clear();
        _monitorInfo = *request;

        // std::cout << "SetMonitorInfo Success" << std::endl;

        return ::grpc::Status::OK;
    }

    ::grpc::Status GrpcManagerImple::GetMonitorInfo(::grpc::ServerContext *context,
                                                  const google::protobuf::Empty *request,
                                                  ::monitor::MonitorInfo *response)
    {
        *response = _monitorInfo;
        return ::grpc::Status::OK;
    }

    void InitServer(uint16_t port)
    {
        // constexpr char kServerInfo[] = "0.0.0.0:18351";

        std::string kServerInfo("0.0.0.0:");
        kServerInfo += std::to_string(port);

        grpc::ServerBuilder builder;
        builder.AddListeningPort(kServerInfo, grpc::InsecureServerCredentials());

        monitor::GrpcManagerImple grpcServer;
        builder.RegisterService(&grpcServer);

        std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
        server->Wait();
    }
} // end of namespace Monitor