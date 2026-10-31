#include <iostream>

// void* pointer - point to every type
// useful in memory allocation - because it return raw address with no type

int main(){

    int x {5};
    double y {5.5};

    int*    xPtr {&x};
    double* yPtr {&y};

    return 0;
}