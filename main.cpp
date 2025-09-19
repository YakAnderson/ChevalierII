#include <iostream>

#include "vulkan/vulkan.hpp"
#include "glm/glm.hpp"

#include "src/ChevalierInstance.h"


int main() {

#pragma region Initial C++ Test Code
    // auto lang = "C++";
    // std::cout << "Hello and welcome to " << lang << "!\n";
    //
    // for (int i = 1; i <= 5; i++) {
    //    std::cout << "i = " << i << std::endl;
    // }
    //
    //
    // glm::vec4 m = glm::vec4(1, 2, 3, 4);
    //
    // std::cout << m[2] << std::endl;
#pragma endregion

#pragma region Chevalier

    Chevalier::ChevalierInstance chevalierEngineInstance{};

    std::cout << "Instance: " << chevalierEngineInstance.vulkanInstance << std::endl;

#pragma endregion

    return 0;
}