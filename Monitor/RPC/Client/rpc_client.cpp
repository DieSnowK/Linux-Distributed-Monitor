#include "rpc_client.h"

namespace monitor
{
    RpcClient::RpcClient() 
    {
        // Constructer can modified later
        auto channel = ::grpc::CreateChannel("localhost:18351", ::grpc::InsecureChannelCredentials());
        _pStub = monitor::GrpcManager::NewStub(channel);
    }

    RpcClient::~RpcClient() {}

    void RpcClient::SetMonitorInfo(const monitor::MonitorInfo& monitorInfo)
    {
        ::grpc::ClientContext context;
        ::google::protobuf::Empty response;
        ::grpc::Status status = _pStub->SetMonitorInfo(&context, monitorInfo, &response);

        if(!status.ok())
        {
            std::cout << status.error_details() << std::endl;
            std::cout << "Failed to connect!!!" << std::endl;
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
            std::cout << "Failed to connect!!!" << std::endl;
        }
    }
} // end of namespace monitor