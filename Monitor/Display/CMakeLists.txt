# DisPlay

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

file(GLOB_RECURSE SRC ${CMAKE_CURRENT_SOURCE_DIR}/*cpp)
# TODO set(EXECUTABLE_OUTPUT_PATH )

add_executable(display ${SRC})
set_target_properties(display PROPERTIES AUTOMOC TRUE)

target_include_directories(display PUBLIC
    ${PROJECT_SOURCE_DIR}/RPC
)

target_link_libraries(display PUBLIC
    client
    monitor_proto
    Qt5::Widgets
    Qt5::Core
)