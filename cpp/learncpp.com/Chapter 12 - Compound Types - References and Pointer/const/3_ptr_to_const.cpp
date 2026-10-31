#include <iostream>

int main(){

    int x {10};
    const int* ptr {&x};    // pointer to constant - can't change rvalue
                            //                     - can change where it points to
    


    return 0;
}