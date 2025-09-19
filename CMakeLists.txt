cmake_minimum_required(VERSION 3.31)
project(ChevalierII)

set(CMAKE_CXX_STANDARD 17)

add_executable(ChevalierII main.cpp
        src/ChevalierInstance.cpp
        src/ChevalierInstance.h)

list(APPEND CMAKE_PREFIX_PATH "C:/VulkanSDK/1.4.309.0/Lib/")
find_library(vulkan-1 NAMES vulkan-1 REQUIRED)
target_link_libraries(ChevalierII ${vulkan-1})



target_include_directories(ChevalierII PUBLIC "C:/VulkanSDK/1.4.309.0/Include")