#include <iostream>

// pass by value        - create copy
// pass by reference    - bound to the original variable
// pass by pointer      - object address
// pointer  *           - object that hold address
// address of &         - convert lvalue to address
// dereference *        - convert address to lvalue

int addPointer(int* x, int* y){             // parameter takes address *
    return *x + *y;                         // dereference the value
}

int main(){

    int x{5}, y {10};

    std::cout << addPointer(&x, &y) << "\n";

    return 0;
}