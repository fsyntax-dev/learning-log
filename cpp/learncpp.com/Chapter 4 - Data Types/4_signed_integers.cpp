#include <iostream>

// signed integers - integer with sign + -
// short is 16 bits (2 byte) = 2^16 = 65,536
// unsigned is between 0 to 65,536
// signed is between -32,768 to +32,768
// integral types 

int main(){

    //by default it already signed
    short       valueA{};
    int         valueB{};
    long        valueC{};
    long long   valueD{};

    //optional declaration
    signed short        valueAA{};
    signed int          valueBB{};
    signed long         valueCC{};
    signed long long    valueDD{};

    //to unsigned
    unsigned short       valueA{};
    unsigned int         valueB{};
    unsigned long        valueC{};
    unsigned long long   valueD{};

    return 0;
}