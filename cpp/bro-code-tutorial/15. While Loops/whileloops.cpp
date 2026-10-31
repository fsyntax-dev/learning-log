#include <iostream>
/*
While Loops
    + while the condition is true, infinitely execute
    
    while(condition){
        code
    }
*/

int main() 
{

    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);            
    }

    std::cout << "Hello " << name;


    return 0;
    
}