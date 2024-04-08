//
// Created by askel on 4/2/2024.
//

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Camera.h"
#include "BasicPlane.h"
#include "Box.h"
#include "Model.h"

#ifndef RENDER_H
#define RENDER_H
Camera camera;


bool firstMouse = true;

float lastX = 960, lastY = 540;

void mouse_callback(GLFWwindow* window, double xpos, double ypos);

void ProsessInput(GLFWwindow *window, float deltaTime);
struct Render {


    std::vector<model*> models;
    //BasicPlane Plane;
    model Box;
    model Box2;
    model ThePlane;

    void render(GLFWwindow* window, unsigned int shaderProgram, float deltaTime, float lastFrame) {

        models.emplace_back(&Box);
        models.emplace_back(&Box2);
        models.emplace_back(&ThePlane);

        glm::mat4 trans = glm::mat4(1.0f);
        glm::mat4 projection;

        CreateMeshBox(Box);
        Box.Bind();


        CreateMeshPlane(ThePlane, 20, 20);
        ThePlane.Bind();

        CreateMeshBox(Box2);
        Box2.Bind();

        ThePlane.modelMatrix = glm::translate(ThePlane.modelMatrix, glm::vec3(0.0f, -1.0f, 0.0f));
        Box.modelMatrix = glm::translate(glm::mat4(1.f), glm::vec3(0.f,10.0f,0.f));
        Box2.modelMatrix = glm::translate(ThePlane.modelMatrix, glm::vec3(8.f,0.0f,0.f));
        while (!glfwWindowShouldClose(window))
            {
            float currentFrame = glfwGetTime();
            deltaTime = currentFrame - lastFrame;
            lastFrame = currentFrame;
            ProsessInput(window, deltaTime);

            projection = glm::perspective(glm::radians(45.0f), 800.0f / 600.0f, 0.1f, 100.0f);

            camera.tick(shaderProgram);


            glClearColor(0.5f, 0.99f, 0.5f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            int viewLoc = glGetUniformLocation(shaderProgram, "viewPos");
            glUniform3fv(viewLoc, 1, glm::value_ptr(camera.cameraPos));

            int LightLoc = glGetUniformLocation(shaderProgram, "lightPos");
            glUniform3fv(LightLoc, 1, glm::value_ptr(glm::vec3(5,20,0)));

            for (model* element: models) {
                element->DrawMesh(shaderProgram);
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


void ProsessInput(GLFWwindow *window, float deltaTime) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    float cameraSpeed = 2.5f * deltaTime ;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.cameraPos += cameraSpeed * camera.cameraFront;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.cameraPos -= cameraSpeed * camera.cameraFront;
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.cameraPos -= glm::normalize(glm::cross(camera.cameraFront, camera.cameraUp)) * cameraSpeed;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.cameraPos += glm::normalize(glm::cross(camera.cameraFront, camera.cameraUp)) * cameraSpeed;
    if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
        camera.cameraPos += cameraSpeed * camera.cameraUp; // Move camera up
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
        camera.cameraPos -= cameraSpeed * camera.cameraUp;

}
#endif //RENDER_H
