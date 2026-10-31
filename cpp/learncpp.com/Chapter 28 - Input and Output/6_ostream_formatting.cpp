#include <iostream>

int main(){

    std::cout.unsetf(std::ios::dec);

    // turn to turn on hex output
    std::cout.setf(std::ios::hex);

    std::cout << 27 << "\n";

    return 0;
}