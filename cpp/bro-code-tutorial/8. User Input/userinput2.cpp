#include <iostream>

/*
    fix the problem when input space character
*/
int main() 
{
    std::string name;


    std::cout << "What is your full name?: ";
    std::getline(std::cin, name);
    // use getline function to include space

    std::cout << "Hello " << name << "\n";

    return 0;
}