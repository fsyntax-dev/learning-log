#include <iostream>

// dereference operator (*) - return from memory address to lvalue

int main(){

    int x {5};

    std::cout << x << "\n";
    std::cout << &x <<"\n";
    std::cout << *(&x) <<"\n";

    return 0;
}