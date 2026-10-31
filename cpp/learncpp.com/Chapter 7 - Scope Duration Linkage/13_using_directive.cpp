#include <iostream>
using namespace std;

// using directive   - for all object in namespace

int main(){

    int x{};
    cout << "Enter an integer: ";   // didn't use std::cout
    std::cin >> x;                  // didn't use std::cin

    cout << "x is: " << x << "\n";  // didn't use std::cout

    return 0;
}