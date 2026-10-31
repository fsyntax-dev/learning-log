#include <iostream>

// same as references - const with const
// pointer to constant

int main(){

    const int x {5};
    const int* ptr {&x};

    const int y {6};
    ptr = &y;               // but it can be changed

    return 0;
}