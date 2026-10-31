#include <iostream>

//std::getline - function that reads an entire line of text

std::string inputName(){
    std::string name{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);
    return name;
}

void printName(std::string name){
    std::cout << "Your full name is: " << name << "\n";
}

int main(){

    printName(inputName());

    return 0;
}