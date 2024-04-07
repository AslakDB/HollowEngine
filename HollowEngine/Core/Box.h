//
// Created by Aslak on 4/7/2024.
//

#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

#include "Vertex.h"
#ifndef BOX_H
#define BOX_H



class Box {

public:
    unsigned int VBO, VAO, EBO;
    std::vector<float> Vertices;


    glm::mat4 model = glm::mat4(1.0f);

    void CreateMeshBox();
    void DrawBox(unsigned int shaderProgram);
    Box();
};



#endif //BOX_H
