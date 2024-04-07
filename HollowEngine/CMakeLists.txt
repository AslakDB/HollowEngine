cmake_minimum_required(VERSION 3.8)
project(HollowEngine)

set(CMAKE_CXX_STANDARD 17)

include_directories(Dependencies/includes)
include_directories(Dependencies/libs)
include_directories(HollowEngine/glad.c)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/core)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Shaders)




set(HEADER_FILES
        Core/Camera.h 
        Core/Actor.h
        Scene/Window.h
        Core/Shaders.h
        Core/Setup.h
        Core/render.h
        Core/BasicPlane.h
        Core/DrawObjects.h
        Core/Box.h
        Core/Vertex.h
)

set(SRC_FILES
        main.cpp
        glad.c
        Core/Camera.cpp
        Core/Actor.cpp
        Scene/Window.cpp
        Core/Shaders.cpp
        Core/BasicPlane.cpp
        Core/Box.cpp


)

add_subdirectory(Dependencies/libs/glfw-3.3.9)


add_executable(HollowEngine ${HEADER_FILES} ${SRC_FILES})
target_link_libraries(HollowEngine glfw)