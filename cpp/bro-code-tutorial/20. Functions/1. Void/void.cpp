#include <iostream>
/*
Void means no type / no return type

*/

int returnOne(){
    return 1;
}

void PrintHelloWorld(){
    std::cout << "Hello Fucking World" << std::endl;
    return; // ends here
    std::cout << "You not gonna see this line" << std::endl;
}

int main() 
{
    PrintHelloWorld();

    return 0;
    
}