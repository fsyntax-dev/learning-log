#include <iostream>
/*
    << insertion operator
    >> extraction operator

    cout <<
    cin >>
*/

int main() 
{
    // input
    std::string name;
    int age;

    // input 
    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "What is our age?: ";
    std::cin >> age;

    // arithmetic operation
    int year = 2025 - age;

    std::cout << "Hello " << name << "\n";
    std::cout << "Your age is " << age << "\n";
    std::cout << "You were born in " << year << "\n";

    return 0;
    
}