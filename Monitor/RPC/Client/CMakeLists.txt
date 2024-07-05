cmake_minimum_required(VERSION 3.10.2)
project(RPC_Client)

# Modfified Later
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../ProtoBuf/build)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_library(client ${SRC})
target_link_libraries(client PUBLIC monitor_proto)