"""cmake_minimum_required(VERSION 3.26.0)
add_executable(tests src/test.cpp)
target_link_libraries(tests PRIVATE utils core)
target_include_directories(tests PRIVATE 
    ${CMAKE_SOURCE_DIR}/libs/core/include
    ${CMAKE_SOURCE_DIR}/libs/utils/include
)
add_custom_command(TARGET tests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:core>
        $<TARGET_FILE:utils>
        $<TARGET_FILE_DIR:tests>
)"""
enable_testing()