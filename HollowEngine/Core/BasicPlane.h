//
// Created by Aslak on 4/5/2024.
//
#pragma once
#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

#ifndef BASICPLANE_H
#define BASICPLANE_H



class BasicPlane {
public:
    bool shouldRender = true;
    unsigned int VBO, VAO, EBO;
    int width = 4;
    int length = 6;
    int height = 1;
    std::vector<float> planeVertices;
    BasicPlane();

    glm::mat4 model = glm::mat4(1.0f);

    void CreateMeshPlane();
    void DrawPlane(unsigned int shaderProgram);
};



#endif //BASICPLANE_H
