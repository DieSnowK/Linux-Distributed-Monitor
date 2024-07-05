cmake_minimum_required(VERSION 3.10.2)
project(Monitor)

file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*cpp)

# TODO set(EXECUTABLE_OUTPUT_PATH )

add_executable(monitor ${SRC})

target_include_directories(monitor PUBLIC
    ${PROJECT_SOURCE_DIR}/Monitor/include
    ${PROJECT_SOURCE_DIR}/RPC
)

target_link_libraries(monitor PUBLIC
    monitor_proto
    client
    boost_system
    boost_chrono    
)