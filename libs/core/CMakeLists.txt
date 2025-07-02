file(GLOB core_src
    "src/*.cpp"
    "include/*.h"
    )
add_library(core SHARED ${core_src})
if(WIN32)
    target_compile_definitions(core PRIVATE CORE_EXPORTS)
endif()
target_include_directories(core PUBLIC include)