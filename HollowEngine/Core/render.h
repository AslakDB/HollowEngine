//
// Created by askel on 4/2/2024.
//

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#ifndef RENDER_H
#define RENDER_H

struct Render {

    void render(GLFWwindow* window) {

        while (!glfwWindowShouldClose(window))
            {


            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            glfwSwapBuffers(window);
            glfwPollEvents();
            }
    }
};

#endif //RENDER_H
