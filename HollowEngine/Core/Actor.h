//
// Created by askel on 3/18/2024.
//
#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

#include "Vertex.h"
#ifndef ACTOR_H
#define ACTOR_H



class Actor {
private:

public:


    void move();
    unsigned int VBO, VAO, EBO;
    std::vector<float> Vertices;
    glm::mat4 model = glm::mat4(1.0f);


};



#endif //ACTOR_H
