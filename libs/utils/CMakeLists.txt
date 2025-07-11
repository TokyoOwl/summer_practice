file(GLOB utils_src
    "src/*.cpp"
    "include/*.h"
    )
add_library(utils SHARED ${utils_src})
if(WIN32)
    target_compile_definitions(core PRIVATE UTILS_EXPORTS)
endif()

target_include_directories(utils PUBLIC include)
install(TARGETS utils
        RUNTIME DESTINATION ${bin_path}
        LIBRARY DESTINATION ${bin_path}
        ARCHIVE DESTINATION ${lib_path}
        INCLUDES DESTINATION ${path_include}
)
install(FILES include/utils.h DESTINATION ${path_include})
target_link_libraries(utils PUBLIC core)