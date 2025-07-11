add_executable(MainApp src/main.cpp)
enable_testing()
target_link_libraries(MainApp PRIVATE utils core)
target_include_directories(MainApp PRIVATE 
    ${CMAKE_SOURCE_DIR}/libs/core/include
    ${CMAKE_SOURCE_DIR}/libs/utils/include
)
install(TARGETS MainApp RUNTIME DESTINATION ${bin_path}) 