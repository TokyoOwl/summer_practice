file(GLOB utils_src
    "src/*.cpp"
    "include/*.h"
    )
add_library(utils SHARED ${utils_src})
target_include_directories(utils PUBLIC include)
target_link_libraries(utils INTERFACE core)

