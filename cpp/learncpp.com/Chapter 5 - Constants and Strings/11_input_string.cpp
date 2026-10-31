#include <iostream>
#include <string>

std::string inputName(){
    std::string name{};
    std::cout << "Enter your first name: ";
    std::cin >> name;
    return name;
}

void printName(std::string name){
    std::cout << "Your name is: " << name << "\n";
}

int main(){

    
    printName(inputName());

    return 0;
}