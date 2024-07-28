# RPC_Serve

include_directories(${PROJECT_SOURCE_DIR}/build/ProtoBuf)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_library(server ${SRC})
target_link_libraries(server PUBLIC monitor_proto)