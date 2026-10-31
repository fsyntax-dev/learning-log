#include <iostream>

// unlike reference - auto doesn't drop pointer

int main(){

    int x {10};
    int* pX {&x};
                        // deduce as pointer int*
    auto* pXY{pX};      // optional * since we passed the pointer
    auto pXYZ{pX};      // compiler already knows since we passed the pointer

    auto pABC{&x};      // passed address of x
                        // compiler alwas deduce as pointer since we passed address

    std::cout << pXY << "\n";
    std::cout << pXYZ << "\n";
    std::cout << pABC << "\n";

    return 0;
}