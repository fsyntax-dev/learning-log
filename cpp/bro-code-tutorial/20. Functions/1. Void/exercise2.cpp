#include <iostream>

void greet(std::string name, int age){
    std::cout << "Hello, " << name << "\n";
    std::cout << "Your age is " << age << "\n";
    std::cout << "You were born " << 2025 - age << "\n";
}

int main() 
{
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    greet(name, age);

    return 0;
    
}