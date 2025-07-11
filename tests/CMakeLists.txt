cmake_minimum_required(VERSION 3.26.0)
enable_testing()
add_executable(tests src/tests.cpp)
include(FetchContent)

# Настраиваем Google Test
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0  # Последняя стабильная версия
)
FetchContent_MakeAvailable(googletest)
target_include_directories(tests PRIVATE 
    ${CMAKE_SOURCE_DIR}/libs/core/include
    ${CMAKE_SOURCE_DIR}/libs/utils/include
)
target_link_libraries(tests PRIVATE utils core GTest::gtest_main)
install(TARGETS tests RUNTIME DESTINATION ${bin_path}) 
install(TARGETS utils core
    RUNTIME DESTINATION ${bin_path}
)
include(GoogleTest)
gtest_add_tests(tests)

