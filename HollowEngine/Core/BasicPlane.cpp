//
// Created by Aslak on 4/5/2024.
//

#include "BasicPlane.h"
#include <glm/gtc/type_ptr.hpp>

BasicPlane::BasicPlane() {
}

void BasicPlane::CreateMeshPlane() {

    std::vector<float> planeVertices = {
        // positions          // RGB
        0.5f,  0.5f,  0.0f,  1.0f, 0.0f, 0.f,// top right
       0.5f, -0.5f,  0.0f,  1.0f, 0.0f,0.f,// bottom right
       -0.5f, -0.5f,  0.0f,  1.0f, 0.0f,0.f,// bottom left
       -0.5f,  0.5f,  0.0f,  1.0f, 0.0f, 0.f
    };
    unsigned int indices[] = {
        0, 1, 3, // first triangle
        1, 2, 3  // second triangle
    };

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    glGenBuffers(1, &EBO);

    glBindVertexArray(VAO);

    //glBindBuffer(GL_ARRAY_BUFFER, VBO);
    //
glBufferData(GL_ARRAY_BUFFER, planeVertices.size() * sizeof(float), planeVertices.data(), GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(float)* planeVertices.size(), planeVertices.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);


    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    // texture coord attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
}

void BasicPlane::DrawPlane(unsigned int shaderProgram) {

    int modelLoc = glGetUniformLocation(shaderProgram, "model");
    glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
    glBindVertexArray(VAO);
    //glDrawArrays(GL_TRIANGLES, 0, (width - 1) * (length - 1) * 6);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    glBindVertexArray(0);
}
