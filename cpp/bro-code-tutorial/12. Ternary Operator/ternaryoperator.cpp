/*
Ternary Operator ?
    + Replacement to an if/else statement
    + Shorter syntax
    + Condition ? Expression1 : Expression2;
*/

#include <iostream>


int main() 
{

    int grade;

    std::cout << "Enter your grade: " << "\n";
    std::cin >> grade;

    grade >= 60 ? std::cout << "Passed" : std::cout << "Failed";  

    return 0;
    
}