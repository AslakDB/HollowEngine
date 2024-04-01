//
// Created by askel on 3/18/2024.
//

#ifndef SHADERS_H
#define SHADERS_H
#include <glad/glad.h> // include glad to get all the required OpenGL headers

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


class Shaders {
    Shaders(const std::string& vertexPath, const std::string& fragmentPath);
    unsigned int ID;

    
};



#endif //SHADERS_H
