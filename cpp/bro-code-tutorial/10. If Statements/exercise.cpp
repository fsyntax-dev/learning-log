#include <iostream>


int main() 
{
    
    int age;

    std::cout << "What is your age: ";
    std::cin >> age;

    if(age >= 18){

        std::cout << "You are eligible to vote" << "\n";
    }
    else{
        std::cout << "You are not eligible to vote" << "\n";
    }

    return 0;
    
}