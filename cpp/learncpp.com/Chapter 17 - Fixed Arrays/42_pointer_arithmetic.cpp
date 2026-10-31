#include <iostream>

// pointer arithmetic - applying arithmetic operator to a pointer to produce new memory address

// int* + 1 = ptr + 4 bytes

int main(){

    int x {5};

    const int* ptr {&x};

    std::cout << ptr << "\t" << ptr + 1 << "\t" << ptr + 2 << "\n";

    for(int i = 0; i < 5; ++i){
        std::cout << ptr + i << "\n";
    }

    return 0;
}