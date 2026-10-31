#include <iostream>

// C++ implicitly convert a function into function pointer - use of &address operator is optional
// but not work with void pointer, some compiler can (not void to void but void to other type)

int num(int x) { return x * 2;}
void print(std::string name) { std::cout << name << "\n"; }

int main(){

    int (*funcPtrOne)(int) {num};

    void (*funcPtrTwo)(std::string) {print};

    void* voidPtr {num};


    return 0;
}