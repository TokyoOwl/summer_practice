set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(core SHARED src/core.cpp include/core.h)
target_include_directories(core PUBLIC include)