#include <iostream>

// c-style array - inherited from C
//               - built in C++ no need to include extra header
// type[array_length] {};
// array length is std::size_t
// array length can be value signed or unsigned

int main(){

    // initialize array with length 5
    int arrayOne[5];

    // subcript array assign index 1 with int 7
    arrayOne[1] = 7;

    std::cout << arrayOne[0] << "\n";
    std::cout << arrayOne[1] << "\n";

    
    return 0;
}