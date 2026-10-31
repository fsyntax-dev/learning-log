#include <iostream>

// pass by address - passing memory address to a function
//                 - gives direct access to original variable by its memory address

// * dereference operator at parameters
// & address-of operator at argument

int add(int *x, int *y){                        // dereference operator at parameters
    return *x + *y;
}

int main(){

    int x {5}, y {6};
    int *ptr_X {&x}, *ptr_Y{&y};                
                                                // same things
    std::cout << add(ptr_X, ptr_Y) << "\n";     // stored memory address

    std::cout << add(&x, &y) << "\n";           // address of operator of variable

    return 0;
}