#include <iostream>

// Void is a function that does NOT return any value

// No value return
void printHello(){
    std::cout << "Hello World" << std::endl;
}

// Value (variable a and b) return
int printSum(int a, int b){
    return a + b;
}

int main() 
{

    printHello();

    int result = printSum(5, 6);
    std::cout << result << std::endl;

    return 0;
    
}