cmake_minimum_required(VERSION 3.26.0)
enable_testing()
add_executable(tests src/tests.cpp)
add_subdirectory(
    ${CMAKE_SOURCE_DIR}/extern/googletest
    ${CMAKE_BINARY_DIR}/googletest-build
)
target_include_directories(tests PUBLIC include)
target_include_directories(tests PRIVATE 
    ${CMAKE_SOURCE_DIR}/libs/core/include
    ${CMAKE_SOURCE_DIR}/libs/utils/include
    ${CMAKE_SOURCE_DIR}/extern/googletest/googletest/include
)
target_link_libraries(tests PRIVATE utils core gtest gtest_main)
add_custom_command(TARGET tests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:core>
        $<TARGET_FILE:utils>
        $<TARGET_FILE_DIR:tests>
)   
#add_test(NAME tests COMMAND tests)
include(GoogleTest)
gtest_discover_tests(tests
                     WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/bin                   
)
