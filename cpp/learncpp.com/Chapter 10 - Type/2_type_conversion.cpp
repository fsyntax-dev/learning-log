#include <iostream>


// conversion doesn't change the data - it use it as input then convert it as result

// object is stored as sequence of bits (binary)
// 0 1 is bits
// sequence of bits is binary 0000 0100 0010 0100

// int 3 and float 3.0 has different bits value
// 0000 0000 0000 0000 0000 0000 0000 0011 = int 3
// 0100 0000 0100 0000 0000 0000 0000 0000 = float 3.0

int main(){

    float valueA{3};    // implicit conversion happen here

    std::cout << valueA << "\n";

    return 0;
}