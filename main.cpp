#include "first_app.hpp"
#include <exception>

// std
#include <cstdlib>
#include <iostream>
// #include <stdexcept>


int main(int argc, char const *argv[])
{
    ve::FirstApp app{};

    try{
        app.run();
    } catch (const std::exception &e){
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}