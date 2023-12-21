#pragma once


#include <string>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace ve {
    class VeWindow{

    public:
        VeWindow(int w, int h, std::string name);
        ~VeWindow();

        VeWindow(const VeWindow&) = delete;
        VeWindow &operator=(const VeWindow&) = delete;


        bool shouldClose() {return glfwWindowShouldClose(window);}

    private:
        void initWindow();

        const int width;
        const int height;
        std::string windowName;

        GLFWwindow *window;

    };
}