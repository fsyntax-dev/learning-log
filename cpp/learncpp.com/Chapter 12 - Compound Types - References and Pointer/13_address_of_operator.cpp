#include <iostream>

// address-of operator (&) - return the memory address

int main(){

    int x{5};

    std::cout << x << "\n";
    std::cout << "Address: " << &x << "\n";

    return 0;
}