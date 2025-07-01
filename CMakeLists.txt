set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
cmake_minimum_required(VERSION 3.26.0)
project(SummerPractice CXX)
if(WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)  # Для экспорта символов из DLL
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)  # Все .exe и .dll в одну папку
endif()
add_subdirectory(libs/core)
add_subdirectory(libs/utils)
add_subdirectory(app)