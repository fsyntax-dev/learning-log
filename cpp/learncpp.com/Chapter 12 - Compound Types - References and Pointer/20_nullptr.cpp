#include <iostream>

// nullptr - keywords that represent a null pointer

int main(){

    int *ptr {nullptr};

    std::cout << ptr << "\n";

    int x {5};
    ptr = &x;

    std::cout << ptr << "\n";

    return 0;
}