#include <iostream>
/*
If Statement
    + Execute if a condition is true
    
    if(condition){
        execution
    }
    else{
        execution
    }
*/

int main() 
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome!";
    }

    else if(age < 0){
        std::cout << "Invalid!";
    }

    else{
        std::cout << "You are not allowed!";
    }

    return 0;
    
}