//
// Created by Jackp on 9/18/2025.
//

#ifndef CHEVALIERINSTANCE_H
#define CHEVALIERINSTANCE_H

#include "vulkan/vulkan.hpp"
#include <stdexcept>


namespace Chevalier {

struct VulkanInstance {

    static void CreateInstance(VkInstance* pInstance) {

        //Application Info
        VkApplicationInfo appInfo = {
        .sType = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pApplicationName = "Chevalier",
        .applicationVersion = VK_MAKE_VERSION(1,0,1),
        .pEngineName = "Chevalier",
        .engineVersion = VK_MAKE_VERSION(1,0,1),
        .apiVersion = VK_API_VERSION_1_0
        };

        //Creation Info
        VkInstanceCreateInfo createInfo{
        .sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pApplicationInfo = &appInfo,
        };


        if (vkCreateInstance(&createInfo, nullptr, pInstance) != VK_SUCCESS) {
            throw std::runtime_error("failed to create instance!");
        }

    }};

class ChevalierInstance {

public:

    ChevalierInstance();

    VkInstance vulkanInstance;

};

} // Chevalier

#endif //CHEVALIERINSTANCE_H
