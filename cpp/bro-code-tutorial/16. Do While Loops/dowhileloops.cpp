#include <iostream>
/*
Do While Loop  
    + Do some block of code first, then repeat again if condition is true 

    do{
        code of condition;
    }while(apply condition in while loops);
*/

int main() 
{
    int numbers;
    
    do{
        std::cout << "Enter a number: ";
        std::cin >> numbers;

    }while(numbers > 5);


    std::cout << "The numbers is " << numbers << "\n";

    return 0;
    
}