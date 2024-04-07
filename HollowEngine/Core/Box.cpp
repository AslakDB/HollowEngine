//
// Created by Aslak on 4/7/2024.
//

#include "Box.h"

#include <glm/gtc/type_ptr.hpp>



Box::Box() {
}

void Box::CreateMeshBox() {

std::vector<Vertex> Vertices;
 Vertices.emplace_back(glm::vec3(-0.5f, 0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f));
 Vertices.emplace_back(glm::vec3(-0.5f, -0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f));
 Vertices.emplace_back(glm::vec3(0.5f, -0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f) );
 Vertices.emplace_back(glm::vec3(0.5f, 0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f) );

 Vertices.emplace_back(glm::vec3(-0.5f, 0.5f, -0.5f),glm::vec3(0.f),  glm::vec3(0.5f, 0.f, 0.6f));
 Vertices.emplace_back(glm::vec3(-0.5f, -0.5f, -0.5f),glm::vec3(0.f),  glm::vec3(0.5f, 0.f, 0.6f));
 Vertices.emplace_back(glm::vec3(0.5f, -0.5f, -0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f));
 Vertices.emplace_back(glm::vec3(0.5f, 0.5f, -0.5f),glm::vec3(0.f) ,  glm::vec3(0.5f, 0.f, 0.6f));

std::vector<Triangle> indices;
indices.emplace_back(0,1,2);
indices.emplace_back(2,3,0);
indices.emplace_back(0,4,5);
indices.emplace_back(5,1,0);
indices.emplace_back(3,2,6);
indices.emplace_back(6,7,3);
indices.emplace_back(1,5,6);
indices.emplace_back(6,2,1);
indices.emplace_back(0,3,7);
indices.emplace_back(7,4,0);
indices.emplace_back(4,7,6);
indices.emplace_back(6,5,4);


for (Triangle& index: indices) {
glm::vec3 normal = glm::cross(Vertices[index.B].XYZ - Vertices[index.A].XYZ, Vertices[index.C].XYZ - Vertices[index.A].XYZ);

 Vertices[index.A].Normals += glm::normalize(normal);
 Vertices[index.B].Normals += glm::normalize(normal);
 Vertices[index.C].Normals += glm::normalize(normal);
}





 glGenVertexArrays(1, &VAO);
 glGenBuffers(1, &VBO);
 glGenBuffers(1, &EBO);

 glBindVertexArray(VAO);


 glBindBuffer(GL_ARRAY_BUFFER, VBO);
 glBufferData(GL_ARRAY_BUFFER, Vertices.size() * sizeof(Vertex), Vertices.data(), GL_STATIC_DRAW);

 glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
 glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(Triangle)* indices.size(),  indices.data(), GL_STATIC_DRAW);


 glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE,   sizeof(Vertex), (void*)0);
 glEnableVertexAttribArray(0);

 glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,  sizeof(Vertex), (void*)(3 * sizeof(float)));
 glEnableVertexAttribArray(1);

 glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE,  sizeof(Vertex), (void*)(6 * sizeof(float)));
 glEnableVertexAttribArray(2);

 glBindBuffer(GL_ARRAY_BUFFER, 0);     glBindVertexArray(0);
};

void Box::DrawBox(unsigned int shaderProgram) {

 int modelLoc = glGetUniformLocation(shaderProgram, "model");
 glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
 glBindVertexArray(VAO);
 glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
 glBindVertexArray(0);
}

