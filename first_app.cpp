#include "first_app.hpp"
#include "ve_window.hpp"
#include <GLFW/glfw3.h>


namespace ve {
    void FirstApp::run(){
    while(!veWindow.shouldClose()){
        glfwPollEvents();
    }
    }
}