#pragma once

#include <grpc/grpc.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/grpcpp.h>
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class RpcClient
    {
    public:
        RpcClient(const std::string &target = "localhost:18351");
        // RpcClient(uint16_t port = 18351);
        
        ~RpcClient();

        void SetMonitorInfo(const monitor::MonitorInfo &monitorInfo);
        void GetMonitorInfo(monitor::MonitorInfo *monitorInfo);

    private:
        std::unique_ptr<monitor::GrpcManager::Stub> _pStub;
    };
}