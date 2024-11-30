cmake_minimum_required(VERSION 3.8)
include(./config/glfw.cmake)

set("project_name" "glfw_example")
project ("${project_name}" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable ("${project_name}" "main.cpp")

SetupGLFW("${project_name}")