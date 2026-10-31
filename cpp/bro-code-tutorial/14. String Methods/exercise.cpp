#include <iostream>


int main() 
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline (std::cin, name);

    std::cout << name.insert(0, "Mr ");

    return 0;
    
}