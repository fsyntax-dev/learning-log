#include <iostream>

// two ways to change formating 
//      flag
//      manipulator

int main(){

    // turn on the flag - show positive+ sign 
    std::cout.setf(std::ios::showpos);
    std::cout << 30 << "\n";

    // turn off the flag
    std::cout.unsetf(std::ios::showpos);
    std::cout << 30 << "\n";

    return 0;
}