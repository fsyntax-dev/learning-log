#include <iostream>

// to bind reference with constant variable must constant with constant
// match constant variable with constant reference

int main(){

    // this is not okay 
    const int a {5};
    int& b {x};


    // this is okay constant reference
    const int x {5};
    const int& y {x};

    return 0;
}