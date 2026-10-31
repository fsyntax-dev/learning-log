#include <iostream>
#include <exception>

#include <string>
#include <limits>
#include <cstddef>

// std::exception is a class
//      what() is member function return description of the exception
// the idea is to pass specific type of exception it should be

int main(){

    try{
        std::string name{};
        name.resize(std::numeric_limits<std::size_t>::max());       // to trigger std::length_error or std::bad_alloc
    }
    catch (const std::exception& exception){
        std::cerr << "Error: " << exception.what() << "\n";
    }

    return 0;
}