#include <iostream>

//1 byte = 8 bits

// float is 4 bytes 
//          4 bytes = 4 x 8 = 32 bits

//          Signed
//          2^Number of Bit
//          2^32 = 4294967296

//          Unsigned
//          4294967296/2 = 2147483648

int main(){

    float valueA{};

    std::cout << sizeof(valueA) << "\n";

    signed valueA{};

    

    return 0;
}