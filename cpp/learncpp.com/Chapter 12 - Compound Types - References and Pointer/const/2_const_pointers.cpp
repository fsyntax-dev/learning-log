#include <iostream>

int main(){

    int x {10};
    int* const ptr {&x};    // const pointer - can't change it points to

    *ptr = 20;              // can change rvalue of original variable

    std::cout << *ptr << "\n";

    return 0;
}