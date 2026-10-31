#include <iostream>

int main(){

    int x {10};                     
    const int* const ptr {&x};      // constant pointer to constant
                                    // can't change rvalue and where it points to

    return 0;
}