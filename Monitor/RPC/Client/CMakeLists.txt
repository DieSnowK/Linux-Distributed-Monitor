# RPC_Client

# Modfified Later
include_directories(${PROJECT_SOURCE_DIR}/build/ProtoBuf)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)

add_library(client ${SRC})
target_link_libraries(client PUBLIC monitor_proto)