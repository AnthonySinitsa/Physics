#include <iostream>
#include "window.h"
#include "vulkansetup.h"

int main() {
    // Initialize GLFW and create a window
    Window window(800, 600, "Vulkan Window");

    // Set up Vulkan
    VulkanSetup vulkanSetup(window);

    // Main loop
    while (!window.shouldClose()) {
        glfwPollEvents();
    }

    return 0;
}
