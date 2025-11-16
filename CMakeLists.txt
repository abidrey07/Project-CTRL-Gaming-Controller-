cmake_minimum_required(VERSION 4.0)
project(ProjectCTRL)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#include directory
include_directories(include)
#source files
set(src/main.cpp
        src/button.cpp
        src/controller.cpp
        src/joystick.cpp
)
add_executable(ProjectCTRL src/main.cpp
)
