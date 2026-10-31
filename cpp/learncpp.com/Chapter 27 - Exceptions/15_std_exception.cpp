#include <iostream>
#include <exception>

#include <cstddef>
#include <limits>
#include <string>

int main(){

    try{
        std::string name{};
        name.resize(std::numeric_limits<std::size_t>::max());
    }

    // handle specific exception first
    catch(const std::length_error& exception){
        std::cerr << "Not Enough Memory" << "\n";
    }

    // handle everything else
    catch(const std::exception& exception){
        std::cerr << "Error: " << exception.what() << "\n";
    }
    


    return 0;
}