
include_directories(../../external/tracy)

add_compile_definitions(TRACY_ENABLE)

add_executable(hello_world hello_world.cpp ../../external/tracy/TracyClient.cpp)

target_link_libraries(hello_world pthread dl)

