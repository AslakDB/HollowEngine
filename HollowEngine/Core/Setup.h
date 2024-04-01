﻿//
// Created by Aslak on 4/1/2024.
//
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#ifndef MAIN_CPP_SETUP_H
#define MAIN_CPP_SETUP_H

struct SetUp
{
    GLFWwindow* window;
    unsigned shaderProgram;
    int value1;

    void setup() {
        // glfw: initialize and configure
        // ------------------------------
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

        window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Oppgave1", NULL, NULL);
        if (window == NULL)
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate();
            value1 = -1;
            return;
        }
        glfwMakeContextCurrent(window);
        glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

        // glad: load all OpenGL function pointers
        // ---------------------------------------
        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            std::cout << "Failed to initialize GLAD" << std::endl;
            value1 = -1;
            return;
        }

        shader.CreateVertexShader(vertexShaderSource);
        shader.CreateFragmentShader(fragmentShaderSource);
        shader.LinkProgram();
        shaderProgram = shader.GetProgram();

        glEnable(GL_DEPTH_TEST);
        glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);
        glfwSetCursorPosCallback(window, mouse_callback);

        return;
    }
};

#endif //MAIN_CPP_SETUP_H
