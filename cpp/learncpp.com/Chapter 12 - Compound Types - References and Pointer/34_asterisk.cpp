#include <iostream>

// asterisk has two role
//      1. Pointer
//      2. Dereference

int main(){

    int x {5};

    int* ptr{&x};               // pointer declaration - to hold address of variable
    
    std::cout << ptr << "\n";

    std::cout << *ptr << "\n";  // dereference - to convert address to lvalue

    return 0;
}