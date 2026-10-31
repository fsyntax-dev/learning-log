#include <iostream>

int main(){

    // positive and negative value
    short           valueA{32767};
    signed          valueAA{-32767};

    // only positve value
    unsigned short  valueAAA{65535};

    std::cout << valueA << "\n";
    std::cout << valueAA << "\n";
    std::cout << valueAAA << "\n";

    return 0;
}