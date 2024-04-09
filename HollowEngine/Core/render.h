//
// Created by askel on 4/2/2024.
//

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Camera.h"
#include "BasicPlane.h"
#include "Box.h"
#include "Model.h"
#include "Actor.h"

#ifndef RENDER_H
#define RENDER_H
Camera camera;
Actor actor;

bool firstMouse = true;

float lastX = 960, lastY = 540;

void mouse_callback(GLFWwindow* window, double xpos, double ypos);

void ProsessInput(GLFWwindow *window, float deltaTime, model& Player);


struct Render {
bool inside ;

    model NpcGraph;

    std::vector<model*> models;
    //BasicPlane Plane;
    model Box;
    model Box2;
    model ThePlane;
    model PlayerBox;



    void render(GLFWwindow* window, unsigned int shaderProgram, float deltaTime, float lastFrame) {

     // mouse_callback( window, PlayerBox.PlayerPos.x, PlayerBox.PlayerPos.x);


        models.emplace_back(&Box);
        models.emplace_back(&Box2);
        models.emplace_back(&ThePlane);
        models.emplace_back(&PlayerBox);
        models.emplace_back(&NpcGraph);

        glm::mat4 trans = glm::mat4(1.0f);
        glm::mat4 projection;

        CreateMeshBox(Box);



        CreateMeshPlane(ThePlane, 20, 20);


        CreateMeshBox(Box2);

        CreateMeshBox(PlayerBox);

        createNPCPoints(NpcGraph, ThePlane);
        NpcGraph.isLine = true;


        NpcGraph.modelMatrix = glm::translate(glm::mat4(1.f),glm::vec3(0.f,0.0f,0.f) );
        ThePlane.modelMatrix = glm::translate(glm::mat4(1.f), glm::vec3(0.0f, 0.0f, 0.0f));
        Box.modelMatrix = glm::translate(glm::mat4(1.f), glm::vec3(0.f,10.0f,0.f));
        Box2.modelMatrix = glm::translate(glm::mat4(1.f), glm::vec3(8.f,0.0f,0.f));
        PlayerBox.modelMatrix = glm::translate(glm::mat4(1.f), glm::vec3(5.f, 2.5f, 5.f));
        PlayerBox.modelMatrix = glm::scale(PlayerBox.modelMatrix, glm::vec3(0.5f, 1.f, 0.5f));


        while (!glfwWindowShouldClose(window))
            {

            float currentFrame = glfwGetTime();
            deltaTime = currentFrame - lastFrame;
            lastFrame = currentFrame;
            ProsessInput(window, deltaTime, PlayerBox);

            projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);

            camera.tick(shaderProgram, PlayerBox.PlayerPos);



            for (auto element: ThePlane.indices) {
                calculateBarycentric(ThePlane.vertices[element.A], ThePlane.vertices[element.B]
                    ,ThePlane.vertices[element.C], PlayerBox.PlayerPos );
            }
            PlayerBox.modelMatrix = glm::translate(glm::mat4(1.f), PlayerBox.PlayerPos);
            glClearColor(0.5f, 0.99f, 0.5f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            int viewLoc = glGetUniformLocation(shaderProgram, "viewPos");
            glUniform3fv(viewLoc, 1, glm::value_ptr(camera.cameraPos));

            int LightLoc = glGetUniformLocation(shaderProgram, "lightPos");
            glUniform3fv(LightLoc, 1, glm::value_ptr(glm::vec3(5,20,0)));

            glLineWidth(3);


            for (model* element: models) {
                element->DrawMesh(shaderProgram);
                std::cout<<"gello"<<std::endl;
            }
            glfwSwapBuffers(window);
            glfwPollEvents();
            }
    }
};

void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    if (firstMouse)
    {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }

    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos;
    lastX = xpos;
    lastY = ypos;

    float sensitivity = 0.1f;
    xoffset *= sensitivity;
    yoffset *= sensitivity;

    camera.yaw   += xoffset;
    camera.pitch += yoffset;

    if(camera.pitch > 89.0f)
        camera.pitch = 89.0f;
    if(camera.pitch < -89.0f)
        camera.pitch = -89.0f;

    glm::vec3 direction;
    direction.x = cos(glm::radians(camera.yaw)) * cos(glm::radians(camera.pitch));
    direction.y = sin(glm::radians(camera.pitch));
    direction.z = sin(glm::radians(camera.yaw)) * cos(glm::radians(camera.pitch));
    camera.cameraFront = glm::normalize(direction);
}


void ProsessInput(GLFWwindow *window, float deltaTime, model& Player) {

    glm::vec3 cameraFrontXZ = glm::normalize(glm::vec3(camera.cameraFront.x, 0.0f, camera.cameraFront.z));

    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    float cameraSpeed = 2.5f * deltaTime ;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        camera.cameraPos += cameraSpeed * cameraFrontXZ;
        Player.PlayerPos +=  cameraSpeed * cameraFrontXZ;}
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
       { camera.cameraPos -= cameraSpeed * cameraFrontXZ;
        Player.PlayerPos -=  cameraSpeed * cameraFrontXZ;}
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS){
        camera.cameraPos -= glm::normalize(glm::cross(camera.cameraFront, camera.cameraUp)) * cameraSpeed;
    Player.PlayerPos -=  glm::normalize(glm::cross(camera.cameraFront, camera.cameraUp)) * cameraSpeed;}
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS){
        camera.cameraPos += glm::normalize(glm::cross(camera.cameraFront, camera.cameraUp)) * cameraSpeed;
    Player.PlayerPos +=  glm::normalize(glm::cross(camera.cameraFront, camera.cameraUp)) * cameraSpeed;}
    if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
        camera.cameraPos += cameraSpeed * camera.cameraUp; // Move camera up
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
        camera.cameraPos -= cameraSpeed * camera.cameraUp;

    if(glfwGetKey(window, GLFW_KEY_I) == GLFW_PRESS)
        Player.PlayerPos +=  glm::vec3(1.f* deltaTime,0,0);
    if(glfwGetKey(window, GLFW_KEY_J) == GLFW_PRESS)
        Player.PlayerPos +=  glm::vec3(0,0,-1.f* deltaTime);
    if(glfwGetKey(window, GLFW_KEY_K) == GLFW_PRESS)

    if(glfwGetKey(window, GLFW_KEY_L) == GLFW_PRESS)
        Player.PlayerPos +=  glm::vec3(0,0,1.f* deltaTime);

}
#endif //RENDER_H
