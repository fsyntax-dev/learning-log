#include <iostream>

// references - access by address
// pointer    - store address

// pointer - a data type that hold memory address as value
// int*

int main(){

    int x{5};                       // intialized variable x
    int* ptr_x {&x};                // hold memory address of x

    std::cout << ptr_x << "\n";
    std::cout << *ptr_x << "\n";    // dereference operator 

    return 0;
}