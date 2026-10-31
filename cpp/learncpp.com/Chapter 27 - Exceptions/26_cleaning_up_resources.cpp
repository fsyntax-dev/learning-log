#include <iostream>
#include <memory>
#include <cctype>
#include <exception>

// smart pointer - when var of smart pointer out of scope it destruct/deallocates


void processSpecies(std::unique_ptr<std::string>& name){
    for(char input : *name){
        if(std::isdigit(input)){
            throw std::runtime_error{"An Alien"};
        }
    }
    std::cout << "A Human" << "\n";
};


int main(){
    
    try{
        std::unique_ptr<std::string> Capital {new std::string {"Capital"}};
        processSpecies(Capital);  
    }
    catch(const std::exception& exception){
        std::cerr << "Breach: " << exception.what() << "\n";
    }

    return 0;
}