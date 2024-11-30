
macro(SetupGLFW app_name)
    add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/libs/glfw-3.4/")
    
    find_package(OpenGL REQUIRED)
    target_link_libraries(${app_name} glfw OpenGL::GL)
endmacro(SetupGLFW)