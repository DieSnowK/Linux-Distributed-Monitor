cmake_minimum_required(VERSION 3.10.2)
project(Linux_Distributed_Monitor)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/build)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Output/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Output/lib)

add_subdirectory(RPC)
add_subdirectory(Monitor)
add_subdirectory(ProtoBuf)
add_subdirectory(Display)