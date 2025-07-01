set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_executable(MainApp src/main.cpp)
target_link_libraries(MainApp PRIVATE utils core)
target_include_directories(MainApp PRIVATE 
    ${CMAKE_SOURCE_DIR}/libs/core/include
    ${CMAKE_SOURCE_DIR}/libs/utils/include
)
# На Windows копируем DLL рядом с .exe
if(WIN32)
    add_custom_command(TARGET MainApp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:core>
            $<TARGET_FILE:utils>
            $<TARGET_FILE_DIR:MainApp>
    )
endif()
