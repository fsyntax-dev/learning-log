#include <iostream>

// void means no type - incomplete type can't be defined
// void can't be instantiated
// void is a function that don't return value

void hello(){

    std::cout << "Hello!" << "\n";
}

int main(){

    hello();
    
    return 0;
}