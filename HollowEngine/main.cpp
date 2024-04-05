
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


#include "Core/Setup.h"
#include "Core/render.h"
#include "Core/Shaders.h"
#include "Core/BasicPlane.h"


#pragma region Core
SetUp set_up;
Render render;
Shaders shaders;



#pragma endregion


const unsigned int SCR_WIDTH = 1920;
const unsigned int SCR_HEIGHT = 1080;



std::string vertexShaderSourceString = shaders.readFile("../Shaders/Shader.vs");
std::string fragmentShaderSourceString = shaders.readFile("../Shaders/Shader.fs");

const char *vertexShaderSource = vertexShaderSourceString.c_str();
const char *fragmentShaderSource = fragmentShaderSourceString.c_str();

float deltaTime = 0.0f;	// Time between current frame and last frame
float lastFrame = 0.0f;

int main() {


    GLFWwindow* window;

    set_up.setup("Window", window, SCR_WIDTH,SCR_HEIGHT);

    shaders.CreateFragmentShader(fragmentShaderSource);
    shaders.CreateVertexShader(vertexShaderSource);
    shaders.LinkProgram();
    unsigned int shadersProgram = shaders.GetProgram();
    glUseProgram(shadersProgram);

    Plane.CreateMeshPlane();

    render.render(window , shadersProgram, deltaTime, lastFrame);

    glfwTerminate();
    return 0;
}