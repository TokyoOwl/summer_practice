set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(utils SHARED src/utils.cpp include/utils.h)
target_include_directories(utils PUBLIC include)
target_link_libraries(utils INTERFACE core)

