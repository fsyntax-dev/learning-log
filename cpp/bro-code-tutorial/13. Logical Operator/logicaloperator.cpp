#include <iostream>

/*
Logical Operator
    + && = check if two conditions are true                 AND
    + || = check if at least one of two conditions is true  OR
    + !  = reverses the logical state of its operand        NOT

*/


int main() 
{

    int temp;

    std::cout << "Enter temprature: ";
    std::cin >> temp;

    //these 2 condition must be true
    if(temp > 5 && temp < 35){
        std::cout << "The temperature is good!";
    }
    else{
        std::cout << "The temperature is bad";
    }

    return 0;
    
}