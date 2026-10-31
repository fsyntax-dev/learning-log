#include <iostream>

// integer overflow - exceeds the range of 2^n 

int main(){

    short valueA{40000};        //overflow

    std::cout << valueA << "\n";

    return 0;
}