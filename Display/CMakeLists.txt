# DisPlay

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

# Note that Qt needs to be compiled together with the header file
file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*cpp ${CMAKE_CURRENT_SOURCE_DIR}/*h)

add_executable(display ${SRC})
set_target_properties(display PROPERTIES AUTOMOC TRUE)

target_include_directories(display PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/RPC
)

target_link_libraries(display PUBLIC
    client
    monitor_proto
    Qt5::Widgets
    Qt5::Core
)