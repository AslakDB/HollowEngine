//
// Created by Aslak on 4/5/2024.
//
#pragma once
#include "iostream"
#include <glad/glad.h>
#include <vector>
#include "Vertex.h"
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include "Model.h"
#ifndef BASICPLANE_H
#define BASICPLANE_H



class BasicPlane{


    float test;
    float xlenght =20,zlenght= 20;
    ;
    float totalxlength= 0, totalzlength= 0;
public:
    model model_;
    bool shouldRender = true;
    unsigned int VBO, VAO, EBO;
    int width = 4;
    int length = 6;
    int height = 1;
    std::vector<Vertex> planeVertices;
    std::vector<Triangle> indices;
    BasicPlane();

    float f(float x, float y);
    void CalculatePlane();

    glm::mat4 model = glm::mat4(1.0f);

    void CreateMeshPlane();
    void DrawPlane(unsigned int shaderProgram);
};



#endif //BASICPLANE_H
