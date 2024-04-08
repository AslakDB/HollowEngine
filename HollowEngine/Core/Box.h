//
// Created by Aslak on 4/7/2024.
//

#include <glad/glad.h>
#include <vector>
#include "Model.h"
#include <glm/glm.hpp>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

#include "Vertex.h"
#ifndef BOX_H
#define BOX_H

inline void CreateMeshBox(model& boxModel) {

    boxModel.vertices.emplace_back(glm::vec3(-0.5f, 0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f));
    boxModel.vertices.emplace_back(glm::vec3(-0.5f, -0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f));
    boxModel.vertices.emplace_back(glm::vec3(0.5f, -0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f) );
    boxModel.vertices.emplace_back(glm::vec3(0.5f, 0.5f, 0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f) );

    boxModel.vertices.emplace_back(glm::vec3(-0.5f, 0.5f, -0.5f),glm::vec3(0.f),  glm::vec3(0.5f, 0.f, 0.6f));
    boxModel.vertices.emplace_back(glm::vec3(-0.5f, -0.5f, -0.5f),glm::vec3(0.f),  glm::vec3(0.5f, 0.f, 0.6f));
    boxModel.vertices.emplace_back(glm::vec3(0.5f, -0.5f, -0.5f), glm::vec3(0.f), glm::vec3(0.5f, 0.f, 0.6f));
    boxModel.vertices.emplace_back(glm::vec3(0.5f, 0.5f, -0.5f),glm::vec3(0.f) ,  glm::vec3(0.5f, 0.f, 0.6f));


    boxModel.indices.emplace_back(0,1,2);
    boxModel.indices.emplace_back(2,3,0);
    boxModel.indices.emplace_back(0,4,5);
    boxModel.indices.emplace_back(5,1,0);
    boxModel.indices.emplace_back(3,2,6);
    boxModel.indices.emplace_back(6,7,3);
    boxModel.indices.emplace_back(1,5,6);
    boxModel.indices.emplace_back(6,2,1);
    boxModel.indices.emplace_back(0,3,7);
    boxModel.indices.emplace_back(7,4,0);
    boxModel.indices.emplace_back(4,7,6);
    boxModel.indices.emplace_back(6,5,4);


    for (Triangle& index: boxModel.indices) {
        glm::vec3 normal = glm::cross(boxModel.vertices[index.B].XYZ - boxModel.vertices[index.A].XYZ, boxModel.vertices[index.C].XYZ - boxModel.vertices[index.A].XYZ);

        boxModel.vertices[index.A].Normals += glm::normalize(normal);
        boxModel.vertices[index.B].Normals += glm::normalize(normal);
        boxModel.vertices[index.C].Normals += glm::normalize(normal);
    }

}



float f(float x, float y) {
    return glm::cos(x) + glm::cos(y);

}
void CreateMeshPlane(model& planeModel, float xlenght, float zlenght) {
    float totalxlength, totalzlength;

    for (float x = 0; x < xlenght; x +=0.1) {
        for (float y = 0; y < zlenght; y +=0.1) {
            float z = f(x,y);
            planeModel.vertices.emplace_back(glm::vec3(x,z,y),glm::vec3(0), glm::vec3(1.0f, 0.0f, 0.6f));
            if (x == 0)
                totalzlength ++;
        }
        totalxlength++;
    }

    int index = 1;
    for (int i = 0; i < totalxlength - 1; ++i) {
        for (int j = 0; j < totalzlength - 1; ++j) {
            planeModel.indices.emplace_back(i*totalzlength +j,j+index*totalzlength,j+index *totalzlength + 1);
            planeModel.indices.emplace_back(j+index* totalzlength +1,i*totalzlength+j +1,i*totalzlength + j);

        }
        index++;
    }

    for (Triangle& index: planeModel.indices) {
        glm::vec3 normal = glm::cross( planeModel.vertices[index.C].XYZ - planeModel.vertices[index.A].XYZ,planeModel.vertices[index.B].XYZ - planeModel.vertices[index.A].XYZ);

        planeModel.vertices[index.A].Normals += glm::normalize(normal);
        planeModel.vertices[index.B].Normals += glm::normalize(normal);
        planeModel.vertices[index.C].Normals += glm::normalize(normal);

    }
}

float HeightCheck(glm::vec3 objectPos) {
    int PlanePosX;
}

#endif //BOX_H
