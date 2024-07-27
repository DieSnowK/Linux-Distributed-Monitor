#include <iostream>
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

        // TODO Think Why?
        std::cout << "Success" << request->soft_irq_size() << std::endl;
        
        return ::grpc::Status::OK;
    }

    ::grpc::Status GrpcManagerImple::GetMonitorInfo(::grpc::ServerContext *context,
                                                  const google::protobuf::Empty *request,
                                                  ::monitor::MonitorInfo *response)
    {
        *response = _monitorInfo;
        return ::grpc::Status::OK;
    }
} // end of namespace Monitor