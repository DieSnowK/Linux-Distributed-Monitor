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

    
}