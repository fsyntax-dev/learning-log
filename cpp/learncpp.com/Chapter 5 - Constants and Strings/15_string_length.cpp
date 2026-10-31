#include <iostream>
#include <string>

int main(){

    std::string name{};

    std::cout << "Enter our full name: ";
    std::getline(std::cin, name);

    std::cout << "Full name: " << name << "\n";
    std::cout << "Name length: " << name.length() << " chars" << "\n";

    return 0;
}