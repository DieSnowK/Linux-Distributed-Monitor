#include "rpc_client.h"

namespace monitor
{
    // display
    RpcClient::RpcClient(const std::string& target) 
    {
        auto channel = ::grpc::CreateChannel(target, ::grpc::InsecureChannelCredentials());
        _pStub = monitor::GrpcManager::NewStub(channel);
    }

    // monitor
    // RpcClient::RpcClient(uint16_t port) 
    // {
    //     std::string target("localhost:");
    //     target += std::to_string(port);

    //     auto channel = ::grpc::CreateChannel(target, ::grpc::InsecureChannelCredentials());
    //     _pStub = monitor::GrpcManager::NewStub(channel);
    // }

    RpcClient::~RpcClient() {}

    void RpcClient::SetMonitorInfo(const monitor::MonitorInfo& monitorInfo)
    {
        ::grpc::ClientContext context;
        ::google::protobuf::Empty response;
        ::grpc::Status status = _pStub->SetMonitorInfo(&context, monitorInfo, &response);

        if(!status.ok())
        {
            std::cout << status.error_details() << std::endl;
            std::cout << "[SetMonitorInfo] Failed to connect!!!" << std::endl;
        }
    }

    void RpcClient::GetMonitorInfo(monitor::MonitorInfo* monitorInfo)
    {
        ::grpc::ClientContext context;
        ::google::protobuf::Empty request;
        ::grpc::Status status = _pStub->GetMonitorInfo(&context, request, monitorInfo);

        if (!status.ok())
        {
            std::cout << status.error_details() << std::endl;
            std::cout << "[GetMonitorInfo] Failed to connect!!!" << std::endl;
        }
    }
} // end of namespace monitor