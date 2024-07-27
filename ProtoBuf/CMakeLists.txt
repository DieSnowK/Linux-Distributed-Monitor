# ProtoBuf

# Automatically find and load external packages or libraries
# CONFIG Use the configuration mode
find_package(protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)
find_package(c-ares CONFIG)

# ProtoBuf/GRPC source files
set(PROTO_FILES
    Monitor_Info.proto
    Cpu_Load.proto
    Cpu_Softirq.proto
    Cpu_Stat.proto
    Mem_Info.proto
    Net_Info.proto
)

# Add Library target with Protobuf sources
add_library(monitor_proto STATIC ${PROTO_FILES})
target_link_libraries(monitor_proto PUBLIC
    protobuf::libprotobuf
    gRPC::grpc
    gRPC::grpc++
)

# TODO target_include
target_include_directories(monitor_proto PUBLIC
    ${PROTOBUF_INCLUDE_DIRS}
    ${CMAKE_CURRENT_BINARY_DIR}
)

# Compile Protobuf and GRPC files in monitor proto target to cpp
# TODO protobuf_generate
get_target_property(grpc_cpp_plugin_location gRPC::grpc_cpp_plugin LOCATION)

# Google 实现的宏，用于在CMAKE构建过程中自动生成.proto文件的源代码
protobuf_generate(TARGET monitor_proto LANGUAGE cpp)
protobuf_generate(TARGET monitor_proto LANGUAGE grpc GENERATE_EXTENSIONS .grpc.pb.h .grpc.pb.cc PLUGIN "protoc-gen-grpc=${grpc_cpp_plugin_location}")