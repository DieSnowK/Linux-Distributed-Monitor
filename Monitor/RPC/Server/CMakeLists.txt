# RPC_Serve

# Modfified Later
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../ProtoBuf/build)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SRC)
# TODO set(EXECUTABLE_OUTPUT_PATH )

add_executable(server ${SRC})
target_link_libraries(server PUBLIC monitor_proto)