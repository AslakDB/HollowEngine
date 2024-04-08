//
// Created by askel on 3/18/2024.
//
#include <glad/glad.h>
#include <vector>
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

#include "Model.h"
#include "Vertex.h"
#ifndef ACTOR_H
#define ACTOR_H



class Actor {
private:

public:

float Downvelocity = 0.0f;



    float calculateBarycentric(bool &inside, glm::vec3 P, glm::vec3 R, glm::vec3 Q, glm::vec3 PlayerPos) {

        glm::vec3 v0 = R - P, v1 = Q - P, v2 = PlayerPos - P;
        float d00 = glm::dot(v0, v0);
        float d01 = glm::dot(v0, v1);
        float d11 = glm::dot(v1, v1);
        float d20 = glm::dot(v2, v0);
        float d21 = glm::dot(v2, v1);
        float denom = d00 * d11 - d01 * d01;
        float v = (d11 * d20 - d01 * d21) / denom;
        float w = (d00 * d21 - d01 * d20) / denom;
        float u = 1.0f - v - w;
        if (u >= 0 && v >= 0 && w >= 0) {
            inside = true;
        }
        else {
            return false;
        }
        return u * P.y + v * R.y + w * Q.y;
    }
    void move(float deltaTime);
    void rotate();




};



#endif //ACTOR_H
