#include <iostream>
#include <grpc/grpc.h>
#include <grpcpp/server_builder.h>
#include "rpc_manager.h"

// 这里后续可以考虑优化成命令行参数传参
constexpr char kServerInfo[] = "0.0.0.0:18351";

void InitServer()
{
    grpc::ServerBuilder builder;
    builder.AddListeningPort(kServerInfo, grpc::InsecureServerCredentials());

    monitor::GrpcManagerImple grpcServer;
    builder.RegisterService(&grpcServer);

    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    server->Wait();
}

int main()
{
    InitServer();
    return 0;
}