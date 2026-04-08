#include "../include/glad/glad.h"
#include <GLFW/glfw3.h>
#include <cstddef>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);

int main() {

    if (!glfwInit()) {
        std::cout << "GLFW Initialization: FAILED\n";
        return -1;
    }

    // OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);


    /* Code for Windowed Fullscreen Mode. Work on it later! */
    // GLFWmonitor* monitor = glfwGetPrimaryMonitor();
    // const GLFWvidmode* mode = glfwGetVideoMode(monitor);

    // glfwWindowHint(GLFW_RED_BITS, mode->redBits);
    // glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
    // glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
    // glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
    
    // GLFWwindow* window = glfwCreateWindow(mode->width, mode->height, "My Title", monitor, NULL);

    GLFWwindow* window = glfwCreateWindow(800, 800, "Sector75", NULL, NULL);

    if (!window) {
        std::cout << "GLFW Window Creation: FAILED\n";
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "GLAD Initialization: FAILED\n";
        return -1;
    }
    
    glViewport(0, 0, 800, 800);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();    
    }

    glfwTerminate();
    return 0;
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}