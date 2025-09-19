//
// Created by Jackp on 9/18/2025.
//

#include "ChevalierInstance.h"

namespace Chevalier {

    ChevalierInstance::ChevalierInstance() {

        VulkanInstance::CreateInstance(&vulkanInstance);

    }
} // Chevalier