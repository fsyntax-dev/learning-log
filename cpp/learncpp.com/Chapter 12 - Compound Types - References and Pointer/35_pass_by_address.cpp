#include <iostream>

// pass by address - can change the actual value access via dereferencing

int changeValue(int* ptr){                      // take address
    return *ptr = ++*ptr;                       // dereference and change
}

int main(){

    int x {5};                                  // initialize x
    int* ptr {&x};                              // hold address of x

    std::cout << changeValue(ptr) << "\n";      // call function with address x

    return 0;
}