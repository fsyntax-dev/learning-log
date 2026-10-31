#include <iostream>

// reference can't be reseat
// what happen if wanna assign reference is - it will assign to original bcs reference is just alias for original
int main(){
    
    int x {5};
    int y {7};

    std::cout << x << "\n";

                                // another name for x
    int& ref{x};                // reference bind to x 
    ref = y;                    // it assign value of y to ref which is x

    std::cout << ref << "\n";
    std::cout << x << "\n";


    return 0;
}