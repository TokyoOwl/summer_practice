cmake_minimum_required(VERSION 3.26.0)
project(SummerPractice CXX)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # Все .exe и .dll в одну папку
add_subdirectory(libs/core)
add_subdirectory(libs/utils)
add_subdirectory(app)
enable_testing()
add_subdirectory(tests)