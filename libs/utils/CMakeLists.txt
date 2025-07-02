file(GLOB utils_src
    "src/*.cpp"
    "include/*.h"
    )
add_library(utils SHARED ${utils_src})
if(WIN32)
    target_compile_definitions(core PRIVATE UTILS_EXPORTS)
endif()

target_include_directories(utils PUBLIC include)

target_link_libraries(utils PUBLIC core)