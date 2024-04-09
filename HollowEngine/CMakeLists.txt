cmake_minimum_required(VERSION 3.8)
project(HollowEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(Dependencies/includes)
include_directories(Dependencies/libs)
include_directories(HollowEngine/glad.c)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/core)





set(HEADER_FILES
        Core/Camera.h 
        Core/Actor.h
        Core/Shaders.h
        Core/Setup.h
        Core/render.h
        Core/Box.h
        Core/Vertex.h
        Core/Model.h
)

set(SRC_FILES
        main.cpp
        glad.c
        Core/Camera.cpp
        Core/Shaders.cpp
        Core/Box.cpp


)

add_subdirectory(Dependencies/libs/glfw-3.3.9)


add_executable(HollowEngine ${HEADER_FILES} ${SRC_FILES})
target_link_libraries(HollowEngine glfw)