cmake_minimum_required(VERSION 3.10.2)
project(Linux_Distributed_Monitor)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(RPC)
add_subdirectory(Monitor)
add_subdirectory(ProtoBuf)
add_subdirectory(Display)