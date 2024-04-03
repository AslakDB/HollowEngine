
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Core/Setup.h"
#include "Core/render.h"

SetUp set_up;
Render render;

const unsigned int SCR_WIDTH = 1920;
const unsigned int SCR_HEIGHT = 1080;

int main() {

    GLFWwindow* window;

    set_up.setup("Window", window, SCR_WIDTH,SCR_HEIGHT);


    render.render(window);

    glfwTerminate();
    return 0;
}
