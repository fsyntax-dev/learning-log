#include <iostream>

// move constructor - constructor that steals resurces from other object instead of copying it
//                  - takes over the data

int main(){

    std::string valueA {"Hello World"};

    std::string valueB {valueA};                // copy content from ValueA
    std::cout << "Value :" << valueA << "\n";

    std::string valueC = std::move(valueA);     // takes over content from ValueA
    std::cout << "Value :" << valueA << "\n";



    return 0;
}