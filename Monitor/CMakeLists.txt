# Monitor

file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*cpp)

set(CMAKE_BUILD_TYPE Debug)
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}" -g)

add_executable(monitor ${SRC})

target_include_directories(monitor PUBLIC
    ${PROJECT_SOURCE_DIR}/Monitor/include/
    ${PROJECT_SOURCE_DIR}/RPC/Client
)

target_link_libraries(monitor PUBLIC
    monitor_proto
    client
    boost_system
    boost_chrono    
)