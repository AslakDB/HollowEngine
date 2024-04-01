cmake_minimum_required(VERSION 3.28)
project(HollowEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(Dependencies/includes)
include_directories(Dependencies/libs)
include_directories(glad.c)


add_subdirectory(Dependencies/libs/glfw-3.3.9)

set(HEADER_FILES
        Core/Camera.h 
        Core/Actor.h
        Scene/Window.h
        Core/Shaders.h
)

set(SRC_FILES
        main.cpp
        glad.c
        Core/Camera.cpp
        Core/Actor.cpp
        Scene/Window.cpp
        Core/Shaders.cpp
) 
add_executable(HollowEngine ${HEADER_FILES} ${SRC_FILES})
