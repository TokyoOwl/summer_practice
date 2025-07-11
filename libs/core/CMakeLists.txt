file(GLOB core_src
    "src/*.cpp"
    "include/*.h"
    )
add_library(core SHARED ${core_src})
if(WIN32)
    target_compile_definitions(core PRIVATE CORE_EXPORTS)
endif()
target_include_directories(core PUBLIC include)
install(TARGETS core
        RUNTIME DESTINATION ${bin_path}
        LIBRARY DESTINATION ${bin_path}
        ARCHIVE DESTINATION ${lib_path}
        INCLUDES DESTINATION ${path_include}
)
install(FILES include/core.h DESTINATION ${path_include})