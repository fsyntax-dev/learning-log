#include <iostream>

int main(){

    int x {5};              // when x is initialized it create memory
                            // memory address: 140 (example)

    std::cout << x << "\n"; // the program will go to 140 to access this variable

    int& y{x};              // refer to memory address 140
    std::cout << y << "\n"; // same thing program will go to 140 to access the variable



    return 0;
}