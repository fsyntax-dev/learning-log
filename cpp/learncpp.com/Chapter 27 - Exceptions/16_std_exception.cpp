#include <iostream>
#include <exception>    // std::exception
#include <stdexcept>    // std::runtime_error

int main(){

    try{
        throw std::runtime_error("Anything");
    }
    catch (const std::exception& exception){
        std::cerr << "Standard Exception: " << exception.what() << "\n";
    }

    return 0;
}