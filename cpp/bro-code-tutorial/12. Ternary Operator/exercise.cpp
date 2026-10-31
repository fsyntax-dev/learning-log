#include <iostream>


int main() 
{

    int age;

    std::cout << "Enter your age: " << "\n";
    std::cin >> age;

    age >= 18 ? std::cout << "Eligible to Vote" : std::cout << "Not Eligible to Vote";

    return 0;
    
}