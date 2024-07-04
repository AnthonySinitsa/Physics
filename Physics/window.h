#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

class Window {
public:
    Window(int width, int height, const std::string& title);
    ~Window();
    bool shouldClose() const;
    GLFWwindow* getGLFWwindow() const;
private:
    GLFWwindow* window;
};

