#pragma once

#include <vulkan/vulkan.h>
#include "window.h"

class VulkanSetup {
public:
    VulkanSetup(Window& window);
    ~VulkanSetup();
private:
    VkInstance instance;
    VkSurfaceKHR surface;
    VkPhysicalDevice physicalDevice;
    VkDevice device;

    void createInstance();
    void createSurface(Window& window);
    void pickPhysicalDevice();
    void createLogicalDevice();
};

