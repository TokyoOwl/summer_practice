file(GLOB core_src
    "src/*.cpp"
    "include/*.h"
    )
add_library(core SHARED ${core_src})
target_include_directories(core PUBLIC include)