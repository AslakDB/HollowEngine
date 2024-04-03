//
// Created by askel on 3/18/2024.
//

#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/quaternion.hpp>



class Camera{
public:
    glm::vec3 cameraPos   = glm::vec3(0.0f, 0.0f,  3.0f);
    glm::vec3 cameraFront = glm::vec3(0.0f, 0.0f, -1.0f);
    glm::vec3 cameraUp    = glm::vec3(0.0f, 1.0f,  0.0f);

    glm::vec3 direction;

    float yaw = -90.0f;
    float pitch = 0.f;
    float roll = 0.f;
    void tick();
};



#endif //CAMERA_H
