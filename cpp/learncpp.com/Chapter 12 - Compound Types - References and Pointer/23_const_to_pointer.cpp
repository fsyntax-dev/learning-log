#include <iostream>

// pointer to constant - const int* - to access memory constant variable
//                                  - can change the pointer point to

// constant to pointer - int* const - to create a constant pointer 
//                                  - can't change the pointer point to

int main(){

    int x {5};
    int* const ptr {&x};        // always point to x

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

    x = 6;                      // possible to change the value

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

    return 0;
}