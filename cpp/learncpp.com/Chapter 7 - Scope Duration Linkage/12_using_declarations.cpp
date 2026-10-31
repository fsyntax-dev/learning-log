#include <iostream>
using std::cout;    // using declaration

// using declaration - for specific object of namepsace
// using directive   - for all object in namespace

int main(){

    cout << "1" << "\n";
    cout << "2" << "\n";
    cout << "3" << "\n";
    cout << "4" << "\n";
    cout << "5" << "\n";


    int x{};
    cout << "Enter integer: ";  // didn't repeat std::
    std::cin >> x;              // use std::cin cause we using for for std::cout

    cout << "x is: " << x; 

    return 0;
}