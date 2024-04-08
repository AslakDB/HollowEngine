
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>


#include "Core/Setup.h"
#include "Core/render.h"
#include "Core/BasicPlane.h"


#pragma region Core
SetUp set_up;
Render render;

#pragma endregion

const unsigned int SCR_WIDTH = 1920;
const unsigned int SCR_HEIGHT = 1080;

float deltaTime = 0.0f;	// Time between current frame and last frame
float lastFrame = 0.0f;

int main() {

    GLFWwindow* window;

    set_up.setup("Window", window, SCR_WIDTH,SCR_HEIGHT);
    glfwSetCursorPosCallback(window, mouse_callback);

    unsigned int shadersProgram = shaders.GetProgram();
    glUseProgram(shadersProgram);




    render.render(window , shadersProgram, deltaTime, lastFrame);

    glfwTerminate();
    return 0;
}