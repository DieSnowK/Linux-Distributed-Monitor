#pragma once

#include <unordered_map>
#include <grpcpp/support/status.h>
#include "Monitor_Info.grpc.pb.h"
#include "Monitor_Info.pb.h"

namespace monitor
{
    class GrpcManagerImple : public monitor::GrpcManager::Service
    {
    public:
        GrpcManagerImple();
        virtual ~GrpcManagerImple();

        // Send Msg
        ::grpc::Status SetMonitorInfo(::grpc::ServerContext *context,
                                      const ::monitor::MonitorInfo *request,
                                      ::google::protobuf::Empty *response);

        // Get Msg
        ::grpc::Status GetMonitorInfo(::grpc::ServerContext *context,
                                      const google::protobuf::Empty* request,
                                      ::monitor::MonitorInfo *response);

    private:
        monitor::MonitorInfo _monitorInfo;
    };
} // end of namespace Monitor