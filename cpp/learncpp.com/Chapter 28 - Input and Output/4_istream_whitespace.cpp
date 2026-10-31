#include <iostream>
#include <string>

// std::string ignore string after whitespace - use std::getline(std::cin, input)

int main(){

    std::cout << "Input some sentences: ";
    std::string sent{};
    std::getline(std::cin, sent);
    std::cout << sent << "\n";

    return 0;
}